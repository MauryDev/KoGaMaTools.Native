#pragma once
#include <cinttypes>
#include <memory>
#include "../../UI/MainUI.h"
#include "../../Core/DITools.h"
#include "../Common/ConfigService.h"

namespace KoGaMaTools::Services {
	struct BlueModeTool : UI::MainUI::IComponent, Core::IInitializable, Services::IConfigurable {
		inline static std::shared_ptr<BlueModeTool> Instance;
		bool Enabled = true;

		static void OnExecute(void* instance, uint8_t value, void* methodInfo);
		void Init(Core::DIContainer& di) override;
		void Render() override;
		void LoadConfig(const nlohmann::json& value);

		void OnChangedConfig(const nlohmann::json& value) override;
		void OnSavingConfig(nlohmann::json& value) override;

	};
}