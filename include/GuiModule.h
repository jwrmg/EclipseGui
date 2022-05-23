#pragma once
#include <EclipseEngine/include/EngineModule.h>

namespace Eclipse
{
	namespace Gui
	{
		class GuiModule : Engine::EngineModule
		{
		public:
			void Created() override;
			void Deleted() override;
			void Boot() override;
		};
	}
}
