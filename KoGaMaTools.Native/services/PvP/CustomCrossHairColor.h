#pragma once
#include "../../Types/Vector4.h"
#include <cinttypes>
#include "../../Core/DITools.h"
#include "../../UI/MainUI.h"
#include "../Common/ConfigService.h"
#include "../Common/TextCommandService.h"

namespace KoGaMaTools::Services {
	struct CustomCrossHairColor : UI::MainUI::IComponent, Core::IInitializable, Services::IConfigurable, Services::ICommandResolve {
		inline static std::shared_ptr<CustomCrossHairColor> Instance;
		bool Enabled = false;
		Types::Vector4 Color = { 0, 1, 0, 1 };
		static void OnExecute(void* instance, void* pickupItem);
		void Render() override;

		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;
		void LoadConfig(const nlohmann::json& value);
		void OnChangedConfig(const nlohmann::json& value) override;
		void OnSavingConfig(nlohmann::json& value) override;
		bool Resolve(TextCommandService::CommandData& command) override;

	};
}