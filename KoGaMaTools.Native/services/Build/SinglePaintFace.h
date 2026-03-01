#pragma once
#include <array>
#include <memory>
#include <string_view>
#include "../../UI/MainUI.h"
#include "../../Core/DITools.h"
#include "../Common/ConfigService.h"
#include "../Common/TextCommandService.h"

namespace KoGaMaTools::Services {
	struct SinglePaintFace : UI::MainUI::IComponent, Core::IInitializable, Services::IConfigurable, Services::ICommandResolve {
		inline static std::shared_ptr<SinglePaintFace> Instance;
		bool Enabled = false;
		static void PaintCubes_Execute(void* instance, void* e, void* methodInfo);
		void Render() override;

		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;
		void LoadConfig(const nlohmann::json& value);
		void OnChangedConfig(const nlohmann::json& value) override;
		void OnSavingConfig(nlohmann::json& value) override;
		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;
	};
	
}