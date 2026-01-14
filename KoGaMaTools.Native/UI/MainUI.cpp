#include "MainUI.h"
#include <imgui.h>
#include "..\services\KieroUI.h"
#include "..\services\NoLimit.h"
#include "..\services\SinglePaintFace.h"

void KoGaMaTools::UI::MainUI::Install()
{

	Services::KieroUI::SetOnRender(Render);
}

void KoGaMaTools::UI::MainUI::Render()
{
	ImGui::Begin("KoGaMa Build");
	ImGui::Checkbox("Single Face", &Services::SinglePaintFace::Enable);
	ImGui::Checkbox("No Limit", &Services::NoLimit::Enable);

	ImGui::End();
}
