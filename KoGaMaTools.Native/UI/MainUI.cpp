#include "MainUI.h"
#include <imgui.h>
#include "..\services\KieroUI.h"
#include "..\services\NoLimit.h"
#include "..\services\SinglePaintFace.h"
#include "../metadata/KoGaMaAPI.KoGaMa.h"
void KoGaMaTools::UI::MainUI::Install()
{

	Services::KieroUI::SetOnRender(Render);
}
void KoGaMaTools::UI::MainUI::Render()
{
	namespace K = KoGaMaAPI::KoGaMa;
	ImGui::SetNextWindowSize(ImVec2(300, 200));
	ImGui::Begin("KoGaMa Build");
	if (ImGui::IsWindowHovered())
	{
		K::MVInputWrapper::m_SuppressAllInput();
		K::MVInputWrapper::m_SuppressInGameInput();
		K::MVInputWrapper::m_SuppressShortcutKeys();

	}
	ImGui::Checkbox("Single Face", &Services::SinglePaintFace::Enable);
	ImGui::Checkbox("No Limit", &Services::NoLimit::Enable);

	ImGui::End();
}
