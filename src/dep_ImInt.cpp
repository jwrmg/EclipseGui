#include <pch.h>
#include "dep_ImInt.h"
#include "dep_ImGuiHelper.h"

namespace Eclipse
{
	namespace Engine
	{
		namespace ImGuiTypes
		{
			auto ImInt::OnDraw() -> void
			{
				ImGui::DrawIntControl(name, x_);
			}

			ImInt::ImInt(const std::string& n, int* x) : x_(x)
			{
				name = n;
			}
		}
	}
}