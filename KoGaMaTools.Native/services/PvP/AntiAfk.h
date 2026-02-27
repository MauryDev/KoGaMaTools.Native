#pragma once
#include <cinttypes>
#include "../../Core/DITools.h"
#include "../../UI/MainUI.h"
namespace KoGaMaTools::Services {
	struct AntiAfk: UI::MainUI::IComponent, Core::IInitializable {
		static inline std::shared_ptr<AntiAfk> Instance;
		bool Enabled = false;
		void Render() override;

		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;
	};


}