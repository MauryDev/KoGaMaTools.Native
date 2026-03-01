#pragma once
#include <cinttypes>
#include <string_view>
#include "../../Core/DITools.h"
#include "../../UI/MainUI.h"
#include "../Common/ConfigService.h"
#include "../Common/TextCommandService.h"

namespace KoGaMaTools::Services {
	struct FastRespawn : UI::MainUI::IComponent, 
		Core::IInitializable,
		Services::IConfigurable,
		Services::ICommandResolve
	{
		inline static std::shared_ptr<FastRespawn> Instance;
		bool Enabled = false;
		void Render() override;
		static bool OnExecute(void* instance);

		static void OnUpdate(void* instance);


		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;

		void LoadConfig(const nlohmann::json& value);
		void OnChangedConfig(const nlohmann::json& value) override;
		void OnSavingConfig(nlohmann::json& value) override;
		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;
	};
}