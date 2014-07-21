# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Management and utilities on annotations
module annotation

import parser
import modelbuilder
import literal

redef class AAnnotation
	# The name of the annotation
	fun name: String
	do
		return n_atid.n_id.text
	end

	# Get the single argument of `self` as a `String`.
	# Raise error and return null on any inconsistency.
	fun arg_as_string(modelbuilder: ModelBuilder): nullable String
	do
		var args = n_args
		if args.length == 1 then
			var arg = args.first.as_string
			if arg != null then return arg
		end

		modelbuilder.error(self, "Annotation error: \"{name}\" expects a single String as argument.")
		return null
	end

	# Get the single argument of `self` as an `Int`.
	# Raise error and return null on any inconsistency.
	fun arg_as_int(modelbuilder: ModelBuilder): nullable Int
	do
		var args = n_args
		if args.length == 1 then
			var arg = args.first.as_int
			if arg != null then return arg
		end

		modelbuilder.error(self, "Annotation error: \"{name}\" expects a single Int as argument.")
		return null
	end
end

redef class AAtArg
	# Get `self` as a `String`.
	# Return null if not a string.
	fun as_string: nullable String
	do
		if not self isa AExprAtArg then return null
		var nexpr = n_expr
		if not nexpr isa AStringFormExpr then return null
		return nexpr.value.as(not null)
	end

	# Get `self` as an `Int`.
	# Return null if not an integer.
	fun as_int: nullable Int
	do
		if not self isa AExprAtArg then return null
		var nexpr = n_expr
		if not nexpr isa AIntExpr then return null
		return nexpr.value.as(not null)
	end

	# Get `self` as a single identifier.
	# Return null if not a single identifier.
	fun as_id: nullable String
	do
		if not self isa AExprAtArg then return null
		var nexpr = n_expr
		if not nexpr isa ACallExpr then return null
		if not nexpr.n_expr isa AImplicitSelfExpr then return null
		if not nexpr.n_args.n_exprs.is_empty then return null
		return nexpr.n_id.text
	end
end