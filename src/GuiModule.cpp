#include "GuiModule.h"

#include "GuiApi.h"

#include <EclipseEngine/include/ApiLoader.h>

namespace Eclipse
{
	namespace Gui
	{
		void GuiModule::Created()
		{
			// void
		}

		void GuiModule::Deleted()
		{
			// void
		}

		void GuiModule::Boot()
		{
			// user interface api for external usage.
			Engine::ApiLoader::Load<GuiApi>();
		}
	}
}