#include "GuiApi.h"

#include <EclipseEngine/include/Core.h>

namespace Eclipse
{
	namespace Gui
	{
		void GuiApi::LoadInterface()
		{
			External::Gui::GuiAPI::GuiCall_Pointer = [](std::type_index id, void* data) {};
		}
	}
}