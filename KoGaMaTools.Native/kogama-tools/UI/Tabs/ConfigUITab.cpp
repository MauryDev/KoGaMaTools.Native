#include "ConfigUITab.h"
#include <kogama-tools/services/services.h>

void KoGaMaTools::UI::ConfigUITab::Setup(KoGaMaTools::UI::MainUI& ui)
{
	ui.AddComponentType("Config");
	auto i = static_cast<int>(ui.components.size() - 1);

	namespace S = KoGaMaTools::Services;

	ui.AddComponents<S::ConfigService>(i);
}
