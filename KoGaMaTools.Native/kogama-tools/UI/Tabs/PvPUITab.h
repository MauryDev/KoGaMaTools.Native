#pragma once
#include <kogama-tools/UI/IUIGroupService.h>
namespace KoGaMaTools::UI {
	class PvPUITab : public IUIGroupService {
	public:
		void Setup(KoGaMaTools::UI::MainUI& ui);
	};
}