#pragma once
#include <array>
#include <memory>
#include <string_view>
#include "../../UI/MainUI.h"
#include "../../Core/DITools.h"
#include "../Common/ConfigService.h"
#include "../Common/TextCommandService.h"

namespace KoGaMaTools::Services {
	struct UnlimitedConfig : UI::MainUI::IComponent, Core::IInitializable, Services::IConfigurable, Services::ICommandResolve {
		inline static std::shared_ptr<UnlimitedConfig> Instance;
		bool Enabled = false, ClampValues = true;
		float MinValue = 0.0f, MaxValue = 1.0f;

		void Render() override;

		static void Initialize1(void* instance, void* key, float value, float minValue, float maxValue);
		static void Initialize2(void* instance, void* key, int value, int minValue, int maxValue);
		static void ProcessLimits(void* instance, auto& value, auto& minValue, auto& maxValue);

		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;

		void LoadConfig(const nlohmann::json& value);
		void OnChangedConfig(const nlohmann::json& value) override;
		void OnSavingConfig(nlohmann::json& value) override;
		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;
	};
}