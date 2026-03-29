#include "BuildUITab.h"
#include <kogama-tools/services/services.h>

void KoGaMaTools::UI::BuildUITab::Setup(KoGaMaTools::UI::MainUI& ui)
{
	ui.AddComponentType("Build");
	auto i = ui.components.size() - 1;

	namespace S = KoGaMaTools::Services;

	ui.AddComponents<S::SinglePaintFace,
		S::NoLimit,
		S::BlueModeTool,
		S::DestructiblesUnlock,
		S::CustomGrid,
		S::EditModeSpeed,
		S::RotationStep,
		S::UnlimitedConfig,
		S::ModelModule::ModelService>(i);
}
