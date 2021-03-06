# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Serialization support compiler, a tool to support deserialization of live generic types
#
# Executing on the module `game_logic` will create the module `game_logic_serial`
# in the local directory. Mixing the generated module to the main module with
# `nitg game_logic.nit -m game_logic_serial` will create a program supporting
# deserialization of all generic types visible from the main module.
#
# Because the generation is limited to the visible types, a module author might want
# generate and include its own serialization support module.
module nitserial

import frontend
import rapid_type_analysis
import model_utils
import template

# A Nit module
#
# TODO add more features and move to lib
class NitModule
	super Template

	var header: nullable Writable = null

	# The module's name
	var name: Writable

	# Imports from this module
	var imports = new Array[Writable]

	# Main content of this module
	var content = new Array[Writable]

	redef fun rendering
	do
		var header = header
		if header != null then add header

		var name = name
		add "module {name}\n\n"

		for i in imports do add "import {i}\n"
		add "\n"

		for l in content do add "{l}\n"
	end
end

redef class ToolContext
	# Where do we put a single result?
	var opt_output: OptionString = new OptionString("Output file (can also be 'stdout')", "-o", "--output")

	# Where do we put the result?
	var opt_dir: OptionString = new OptionString("Output directory", "--dir")

	redef init
	do
		option_context.add_option(opt_output, opt_dir)
		super
	end
end

redef class MModule
	# Get the type of the class `Serializable`
	var serializable_type: MClassType is lazy do
		return self.get_primitive_class("Serializable").mclass_type
	end
end

redef class MType
	# Is this type fully visible from `mmodule`?
	fun is_visible_from(mmodule: MModule): Bool is abstract
end

redef class MClassType
	redef fun is_visible_from(mmodule) do
		return mmodule.is_visible(mclass.intro_mmodule, public_visibility)
	end
end

redef class MNullableType
	redef fun is_visible_from(mmodule) do return mtype.is_visible_from(mmodule)
end

redef class MGenericType
	redef fun is_visible_from(mmodule)
	do
		for arg_mtype in arguments do if not arg_mtype.is_visible_from(mmodule) then return false
		return super
	end
end

var toolcontext = new ToolContext
toolcontext.tooldescription = """
Usage: nitserial [OPTION] program.nit [other_program.nit [...]]
Generates a serialization support module"""

toolcontext.process_options(args)
var arguments = toolcontext.option_context.rest

# Check options
if toolcontext.opt_output.value != null and toolcontext.opt_dir.value != null then
	print "Error: cannot use both --dir and --output"
	exit 1
end
if arguments.length > 1 and toolcontext.opt_output.value != null then
	print "Error: --output needs a single source file. Do you prefer --dir?"
	exit 1
end

var model = new Model
var modelbuilder = new ModelBuilder(model, toolcontext)

var mmodules = modelbuilder.parse_full(arguments)
modelbuilder.run_phases

# Create a distinct support module per targetted modules
for mmodule in mmodules do
	var rta = modelbuilder.do_rapid_type_analysis(mmodule)

	# Name of the support module
	var module_name

	# Path to the support module
	var module_path = toolcontext.opt_output.value
	if module_path == null then
		module_name = "{mmodule.name}_serial"
		module_path = "{module_name}.nit"

		var dir = toolcontext.opt_dir.value
		if dir != null then module_path = dir.join_path(module_path)
	else if module_path == "stdout" then
		module_name = "{mmodule.name}_serial"
		module_path = null
	else if module_path.has_suffix(".nit") then
		module_name = module_path.basename(".nit")
	else
		module_name = module_path.basename("")
		module_path += ".nit"
	end

	var nit_module = new NitModule(module_name)
	nit_module.header = """
# This file is generated by nitserial
# Do not modify, but you can redef
"""

	nit_module.imports.add mmodule.name
	nit_module.imports.add "serialization"

	nit_module.content.add """
redef class Deserializer
	redef fun deserialize_class(name)
	do"""

	var serializable_type = mmodule.serializable_type
	for mtype in rta.live_types do
		# We are only interested in instanciated generics, subtypes of Serializable
		# and which are visibles.
		if mtype isa MGenericType and
		   mtype.is_subtype(mmodule, null, serializable_type) and
		   mtype.is_visible_from(mmodule) then

			nit_module.content.add """
		if name == \"{{{mtype}}}\" then return new {{{mtype}}}.from_deserializer(self)"""
		end
	end

	nit_module.content.add """
		return super
	end
end"""

	# Compile support module
	if module_path != null then
		# To file
		nit_module.write_to_file module_path
	else
		# To stdout
		nit_module.write_to stdout
	end
end
