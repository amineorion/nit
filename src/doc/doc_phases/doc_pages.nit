# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Create DocPage instances for each documentated Mentity.
module doc_pages

import doc_extract

# ExtractionPhase populates the DocModel with DocPage.
class MakePagePhase
	super DocPhase

	# Instanciates documentation pages for the given DocModel.
	redef fun apply do
		doc.pages.add new OverviewPage("Overview")
		doc.pages.add new SearchPage("Index")
		for mgroup in doc.mgroups do
			doc.pages.add new MGroupPage(mgroup.nitdoc_name, mgroup)
		end
		for mmodule in doc.mmodules do
			doc.pages.add new MModulePage(mmodule.nitdoc_name, mmodule)
		end
		for mclass in doc.mclasses do
			doc.pages.add new MClassPage(mclass.nitdoc_name, mclass)
		end
		for mproperty in doc.mproperties do
			doc.pages.add new MPropertyPage(mproperty.nitdoc_name, mproperty)
		end
	end
end

# The Nitdoc overview page.
class OverviewPage
	super DocPage
end

# The Nidoc full index page.
class SearchPage
	super DocPage
end

# A DocPage documenting a MEntity.
class MEntityPage
	super DocPage

	# Type of MEntity documented by this page.
	type MENTITY: MEntity

	# MEntity documented by this page.
	var mentity: MENTITY
end

# A documentation page about a MGroup.
class MGroupPage
	super MEntityPage

	redef type MENTITY: MGroup
end

# A documentation page about a MModule.
class MModulePage
	super MEntityPage

	redef type MENTITY: MModule
end

# A documentation page about a MClass.
class MClassPage
	super MEntityPage

	redef type MENTITY: MClass
end

# A documentation page about a MProperty.
class MPropertyPage
	super MEntityPage

	redef type MENTITY: MProperty
end
