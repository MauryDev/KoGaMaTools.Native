#pragma once
#include <array>
#include <memory>
#include "../../UI/MainUI.h"
#include "../../Core/DITools.h"
#include "../Common/ConfigService.h"

namespace KoGaMaTools::Services {
	struct RotationStep : UI::MainUI::IComponent, Core::IInitializable, Services::IConfigurable {
		inline static std::shared_ptr<RotationStep> Instance;
		bool Enabled = false;
		float Step = 15.0f;

		static void RotateStep_Detour(void* instance, int rotationMode, float rotationSpeed);
		void Render() override;

		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;

		void LoadConfig(const nlohmann::json& value);
		void OnChangedConfig(const nlohmann::json& value) override;
		void OnSavingConfig(nlohmann::json& value) override;
	};
}