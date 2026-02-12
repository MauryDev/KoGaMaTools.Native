#include "MainUI.h"
#include <imgui.h>
#include "../services/services.h"


#include "../metadata/KoGaMaAPI.KoGaMa.h"


template <typename ...T>
void RenderSingletones()
{
	(T::Render(), ...);
}
void KoGaMaTools::UI::MainUI::Install()
{

	Services::KieroUI::SetOnRender(Render);
}
void KoGaMaTools::UI::MainUI::Render()
{
	namespace K = KoGaMaAPI::KoGaMa;
	static bool first = true, enable = true;
	if (first)
	{
		ImGui::SetNextWindowSize(ImVec2(300, 200));
		first = false;
	}
	if ((ImGui::IsKeyDown(ImGuiKey::ImGuiKey_LeftCtrl) || ImGui::IsKeyDown(ImGuiKey::ImGuiKey_RightCtrl)) && ImGui::IsKeyPressed(ImGuiKey::ImGuiKey_B))
	{
		enable = !enable;
	}
	if (!enable)
		return;
	ImGui::Begin("KoGaMa Build");
	
	if (ImGui::IsWindowHovered())
	{
		K::MVInputWrapper::m_SuppressAllInput();
		K::MVInputWrapper::m_SuppressInGameInput();
		K::MVInputWrapper::m_SuppressShortcutKeys();

	}

	TabBarTools();
	ImGui::TextUnformatted("Ctrl + B - Toggle Enable UI");

	ImGui::End();
}

void KoGaMaTools::UI::MainUI::TabBarTools()
{
	if (ImGui::BeginTabBar("##tabs1"))
	{
		TabItem_Build();

		ImGui::EndTabBar();
	}
}

void KoGaMaTools::UI::MainUI::TabItem_Build()
{
	if (ImGui::BeginTabItem("Build"))
	{


		RenderSingletones<Services::SinglePaintFace,
			Services::NoLimit,
			Services::BlueModeTool,
			Services::DestructiblesUnlock,
			Services::CustomGrid,
			Services::EditModeSpeed,
			Services::RotationStep,
			Services::UnlimitedConfig>();
		

		ImGui::EndTabItem();
	}
}
