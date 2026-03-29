#pragma once
#include <kogama-tools/Core/DITools.h>
#include "kogama-tools/UI/MainUI.h"
#include "kogama-tools/Core/DITools.h"
#include "kogama-tools/services/Common/ConfigService.h"
#include "kogama-tools/services/Common/TextCommandService.h"
namespace KoGaMaTools::Services::ModelModule
{
	class CustomModelScale: 
		public Core::IInitializable,
		public Services::IConfigurable,
		public Services::ICommandResolve
	{
		inline static std::shared_ptr<CustomModelScale> Instance;
		float Scale = 1.0f;
		bool Enabled = false;
	public:
		void Init(Core::DIContainer& di) override;

		void LoadConfig(const nlohmann::json& value);
		void OnChangedConfig(const nlohmann::json& value) override;
		void OnSavingConfig(nlohmann::json& value) override;

		bool Resolve(TextCommandService::CommandData& command) override;
		std::string_view GetCommandHelp() override;
		void Render();
	private:
		static void Hook_OnAddNewPrototype(void* that, void* name, float scale);
	};
}