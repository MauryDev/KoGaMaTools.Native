#include "InfoUITab.h"
#include <kogama-tools/services/services.h>

void KoGaMaTools::UI::InfoUITab::Setup(KoGaMaTools::UI::MainUI& ui)
{
	ui.AddComponentType("Info");
	auto i = static_cast<int>(ui.components.size() - 1);

	namespace S = KoGaMaTools::Services;
	ui.AddComponents<S::GameInfoService>(i);
}
