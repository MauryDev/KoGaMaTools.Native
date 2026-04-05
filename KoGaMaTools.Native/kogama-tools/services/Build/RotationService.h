#pragma once
#include <array>
#include <memory>
#include <string_view>
#include "../../UI/MainUI.h"
#include "../../Core/DITools.h"
#include "../Common/ConfigService.h"
#include "../Common/TextCommandService.h"

namespace KoGaMaTools::Services {
	struct RotationService : UI::MainUI::IComponent, Core::IInitializable, Services::IConfigurable, Services::ICommandResolve {
		inline static std::shared_ptr<RotationService> Instance;
		bool EnabledStep = false;
		float Step = 15.0f;
		bool ForceFlagsRotation = false;

		static void RotateStep_Detour(void* instance, int rotationMode, float rotationSpeed);
		void Render() override;
		void Init(Core::DIContainer& di) override;

		void LoadConfig(const nlohmann::json& value);
		void OnChangedConfig(const nlohmann::json& value) override;
		void OnSavingConfig(nlohmann::json& value) override;
		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;


		static void SetupHookButtonRotation(void* instance, bool canRotate, bool memberRequired);
	};
}