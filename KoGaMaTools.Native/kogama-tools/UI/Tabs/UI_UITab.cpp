#include "UI_UITab.h"
#include <kogama-tools/services/services.h>

void KoGaMaTools::UI::UI_UITab::Setup(KoGaMaTools::UI::MainUI& ui)
{
	ui.AddComponentType("UI");
	auto i = ui.components.size() - 1;

	namespace S = KoGaMaTools::Services;

	ui.AddComponents<S::ThemeService,
		S::FogService,
		S::LogicRenderService,
		S::MessageReceiveService>(i);
}
