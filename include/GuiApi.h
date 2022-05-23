#pragma once
#include <EclipseEngine/include/API.h>

namespace Eclipse
{
	namespace Gui
	{
		class GuiApi : public Engine::API
		{
		public:
			void LoadInterface() override;
		};
	}
}