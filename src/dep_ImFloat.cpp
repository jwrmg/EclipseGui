#include <pch.h>
#include "dep_ImFloat.h"
#include "dep_ImGuiHelper.h"

namespace Eclipse
{
	namespace Engine
	{
		namespace ImGuiTypes
		{
			auto ImFloat::OnDraw() -> void
			{
				if (x_)
					ImGui::DrawFloatControl(name, x_);
			}

			ImFloat::ImFloat(const std::string& n, float* x) : x_(x)
			{
				name = n;
			}
		}
	}
}