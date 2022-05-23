#include <pch.h>
#include "dep_ImVec2.h"
#include "dep_ImGuiHelper.h"

#include <string>

namespace Eclipse
{
	namespace Engine
	{
		namespace ImGuiTypes
		{
			auto ImVec2::OnDraw() -> void
			{
				if (vec2_.x && vec2_.y)
					ImGui::DrawVec2Control(name, vec2_.x, vec2_.y);
			}

			ImVec2::ImVec2(const std::string& n, const v2 v) : vec2_(v)
			{
				name = n;
			}
			ImVec2::ImVec2(const std::string& n, float* x, float* y, float* z) : ImVec2(n, { x,y }) {}
		}
	}
}