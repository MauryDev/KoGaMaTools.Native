#include "MainUI.h"
#include <imgui.h>
#include "../services/services.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>

namespace KoGaMaTools::UI {
	namespace {
		template <typename ...T>
		void RenderSingletones(const char* str)
		{
			if (ImGui::BeginTabItem(str))
			{
				(T::Render(), ...);
				ImGui::EndTabItem();
			}
		}
	}
	
}


void KoGaMaTools::UI::MainUI::Init(Core::DIContainer& di)
{
	Instance = di.Get<MainUI>();
	
}
void KoGaMaTools::UI::MainUI::Render()
{
	namespace K = KoGaMaAPI::KoGaMa;
	static bool first = true, enable = true;
	if (first)
	{
		ImGui::SetNextWindowPos(ImVec2(10, 10), ImGuiCond_FirstUseEver);
		ImGui::SetNextWindowSizeConstraints(ImVec2(140.0f, 380.0f), ImVec2(FLT_MAX, FLT_MAX));
		ImGui::SetNextWindowSize(ImVec2(0.0f, 390.0f));
		first = false;
	}
	if ((ImGui::IsKeyDown(ImGuiKey::ImGuiKey_LeftCtrl) || ImGui::IsKeyDown(ImGuiKey::ImGuiKey_RightCtrl)) && ImGui::IsKeyPressed(ImGuiKey::ImGuiKey_B))
	{
		enable = !enable;
	}
	if (!enable)
		return;
	

	ImGui::Begin("KoGaMa Tools", nullptr);
	
	if (ImGui::IsWindowHovered())
	{
		K::MVInputWrapper::m_SuppressAllInput();
		K::MVInputWrapper::m_SuppressInGameInput();
		K::MVInputWrapper::m_SuppressShortcutKeys();

	}
	Instance->TabBarTools();
	
	ImGui::TextUnformatted("Ctrl + B - Toggle Enabled UI");

	ImGui::End();
}

void KoGaMaTools::UI::MainUI::TabBarTools()
{
	if (ImGui::BeginTabBar("##tabs1"))
	{
		
		auto len = components.size();
		for (auto i = 0; i < len; i++)
		{
			auto& toolType = components[i];
			if (ImGui::BeginTabItem(toolType.first.c_str()))
			{
				for (auto& component : toolType.second)
				{
					component->Render();
				}
				ImGui::EndTabItem();
			}
		}
		ImGui::EndTabBar();
	}
}



void KoGaMaTools::UI::MainUI::AddComponentType(const std::string& name)
{
	components.push_back({ name, {} });
}

void KoGaMaTools::UI::MainUI::AddComponent(int i, const PtrIComponent& value)
{
	components.at(i).second.push_back(value);

}

void KoGaMaTools::UI::MainUI::StartUI()
{
	Services::KieroUI::SetOnRender(Render);

}

