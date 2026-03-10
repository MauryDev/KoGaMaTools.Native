#pragma once
#include <cinttypes>
#include <string_view>
#include "../../Core/DITools.h"
#include "../../UI/MainUI.h"
//#include "../Common/ConfigService.h"
#include "../Common/TextCommandService.h"

namespace KoGaMaTools::Services {
	struct ResolutionService : UI::MainUI::IComponent,
		Core::IInitializable,
		Services::ICommandResolve
	{
		inline static std::shared_ptr<ResolutionService> Instance;
		int height = 400, width = 300, windowType = 0;
		void Render() override;
		


		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;

		//void LoadConfig(const nlohmann::json& value);
		//void OnChangedConfig(const nlohmann::json& value) override;
		//void OnSavingConfig(nlohmann::json& value) override;
		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;

		void SetResolution(int width, int height, int windowsType);
	};
}