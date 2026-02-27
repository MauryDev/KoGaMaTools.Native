#pragma once
#include <cinttypes>
#include <array>
#include <memory>
#include "../../UI/MainUI.h"
#include "../../Core/DITools.h"
#include "../Common/ConfigService.h"

namespace KoGaMaTools::Services {
	struct EditModeSpeed : UI::MainUI::IComponent, Core::IInitializable, Services::IConfigurable {
		inline static std::shared_ptr<EditModeSpeed> Instance;
		bool MultiplierEnabled = false, MovementConstrained = true;
		float Multiplier = 1.0f;

		static void MoveCharacter(void* instance, std::array<float,3> moveDelta, void* methodInfo);

		void Init(Core::DIContainer& di) override;
		void Render() override;
		void LoadConfig(const nlohmann::json& value);
		void OnChangedConfig(const nlohmann::json& value) override;
		void OnSavingConfig(nlohmann::json& value) override;
	};
}