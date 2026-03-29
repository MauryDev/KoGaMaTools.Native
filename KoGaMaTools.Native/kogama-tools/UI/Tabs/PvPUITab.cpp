#include "PvPUITab.h"
#include <kogama-tools/services/services.h>

void KoGaMaTools::UI::PvPUITab::Setup(KoGaMaTools::UI::MainUI& ui)
{
	ui.AddComponentType("PvP");
	auto i = ui.components.size() - 1;

	namespace S = KoGaMaTools::Services;

	ui.AddComponents<S::AntiAfk,
		S::CustomCrossHairColor,
		S::FastRespawn,
		S::CustomCrossHairTexture,
		S::ResolutionService,
		S::CameraService,
		S::KillCountService>(i);

}
