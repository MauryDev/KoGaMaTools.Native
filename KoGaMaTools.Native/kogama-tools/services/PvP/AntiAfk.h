#pragma once
#include <cinttypes>
#include <string_view>
#include "../../Core/DITools.h"
#include "../../UI/MainUI.h"
#include "../Common/TextCommandService.h"

namespace KoGaMaTools::Services {
	struct AntiAfk: UI::MainUI::IComponent, Core::IInitializable, Services::ICommandResolve {
		static inline std::shared_ptr<AntiAfk> Instance;
		bool Enabled = false;
		void Render() override;

		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;
		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;
	};


}