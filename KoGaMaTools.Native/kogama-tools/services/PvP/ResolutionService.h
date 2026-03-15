#pragma once
#include <cinttypes>
#include <string_view>
#include "../../Core/DITools.h"
#include "../../UI/MainUI.h"
//#include "../Common/ConfigService.h"
#include "../Common/TextCommandService.h"
#include "../Common/MainComponent.h"

namespace KoGaMaTools::Services {
	struct ResolutionService : UI::MainUI::IComponent,
		Core::IInitializable,
		Services::ICommandResolve
	{
		inline static std::shared_ptr<ResolutionService> Instance;
		std::shared_ptr<MainComponent> mainComponent;
		int height = 80, width = 600, windowType = 1;
		void Render() override;
		


		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;

		//void LoadConfig(const nlohmann::json& value);
		//void OnChangedConfig(const nlohmann::json& value) override;
		//void OnSavingConfig(nlohmann::json& value) override;
		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;

		void SetResolution(int width, int height, int windowType);
	private:
		static void SetResolutionImpl(int width, int height, int windowType);
	};
}