#pragma once
#include <cinttypes>
#include <string_view>
#include "../../Core/DITools.h"
#include "../../UI/MainUI.h"
#include "../Common/ConfigService.h"
#include "../Common/TextCommandService.h"

namespace KoGaMaTools::Services {
	class FreeEliteService : public Core::IInitializable,
		public UI::MainUI::IComponent, public IConfigurable, public ICommandResolve
	{

	public:
		static inline std::shared_ptr<FreeEliteService> Instance;
		bool Enabled = false;
		void Init(Core::DIContainer& di) override;
		void Render() override;
		void OnChangedConfig(const nlohmann::json& value) override;
		void OnSavingConfig(nlohmann::json& value) override;
		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;

	private:
		static bool Hook_IsSubscriber();
		void LoadConfig(const nlohmann::json& value);
	};
}