#pragma once
#include <cinttypes>
#include <memory>
#include "../../UI/MainUI.h"
#include "../../Core/DITools.h"
#include "../Common/ConfigService.h"


namespace KoGaMaTools::Services {
	struct DestructiblesUnlock : UI::MainUI::IComponent, Core::IInitializable, Services::IConfigurable {
		inline static std::shared_ptr<DestructiblesUnlock> Instance;
		bool Unlock = false;

		static bool IsAvailable(void* instance, void* methodInfo);

		void Init(Core::DIContainer& di) override;
		void Render() override;

		void LoadConfig(const nlohmann::json& value);
		void OnChangedConfig(const nlohmann::json& value) override;
		void OnSavingConfig(nlohmann::json& value) override;

	};
}