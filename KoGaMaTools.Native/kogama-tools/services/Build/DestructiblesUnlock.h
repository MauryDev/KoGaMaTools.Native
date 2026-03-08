#pragma once
#include <cinttypes>
#include <memory>
#include <string_view>
#include "../../UI/MainUI.h"
#include "../../Core/DITools.h"
#include "../Common/ConfigService.h"
#include "../Common/TextCommandService.h"


namespace KoGaMaTools::Services {
	struct DestructiblesUnlock : UI::MainUI::IComponent,
		Core::IInitializable,
		Services::IConfigurable,
		Services::ICommandResolve
	{
		inline static std::shared_ptr<DestructiblesUnlock> Instance;
		bool Unlock = false;

		static bool IsAvailable(void* instance, void* methodInfo);

		void Init(Core::DIContainer& di) override;
		void Render() override;

		void LoadConfig(const nlohmann::json& value);
		void OnChangedConfig(const nlohmann::json& value) override;
		void OnSavingConfig(nlohmann::json& value) override;
		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;

	};
}