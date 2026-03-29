#pragma once
#include "MainUI.h"

namespace KoGaMaTools::UI {
	class IUIGroupService: public Core::IBaseService {
	public:
		virtual void Setup(KoGaMaTools::UI::MainUI& ui) = 0;
		virtual ~IUIGroupService() = default;
	};
}