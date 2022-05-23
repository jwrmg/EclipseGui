#pragma once
#include <EclipseEngine/include/System.h>
#include "dep_ImGuiCall.h"
#include <queue>

namespace Eclipse
{
	namespace Graphics
	{
		class Renderer;
	}
	namespace Engine
	{
		namespace Gui
		{
			class ImGuiRenderer : public System
			{
			public:
				void QueueCall(const ImGuiTypes::ImGuiCall& call);
				static ImGuiRenderer* Instance;
			private:

				auto Draw() -> void override;
				auto Created() -> void override;
				auto Deleted() -> void override;

				std::queue<ImGuiTypes::ImGuiCall> renderQueue{};
			};
		}
	}
}
