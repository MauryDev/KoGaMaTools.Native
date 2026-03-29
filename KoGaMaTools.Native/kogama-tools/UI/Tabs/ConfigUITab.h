#pragma once
#include <kogama-tools/UI/IUIGroupService.h>
namespace KoGaMaTools::UI {
	class ConfigUITab : public IUIGroupService {
	public:
		void Setup(KoGaMaTools::UI::MainUI& ui);
	};
}