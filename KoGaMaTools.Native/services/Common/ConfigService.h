#pragma once
#include <nlohmann/json.hpp>
#include <vector>
#include <memory>
#include <string>
#include <filesystem>
#include "../../UI/MainUI.h"
#include "../../Core/DITools.h"
#include "TextCommandService.h"
namespace KoGaMaTools::Services {
	struct IConfigurable {
		virtual void OnChangedConfig(const nlohmann::json& value) {}
		virtual void OnSavingConfig(nlohmann::json& value) {}
		virtual ~IConfigurable() = default;

	};
	struct ConfigService : UI::MainUI::IComponent, Core::IInitializable, ICommandResolve
	{
		using json = nlohmann::json;
		
		static std::shared_ptr<ConfigService> Instance;
		json config;
		std::string configPath;
		std::vector<std::shared_ptr<IConfigurable>> configurables;
		bool firstLoad = true;
		// Operações de arquivo
		bool LoadConfig(const std::string& filePath = "config-plugin.json");
		bool SaveConfig();
		
		// Acesso aos dados
		json& GetConfig();
		void SetConfigValue(const std::string& key, const json& value);
		json GetConfigValue(const std::string& key, const json& defaultValue = json());
		void SetupConfigurables();
		// Renderização UI
		void Render() override;
		~ConfigService() = default;
		ConfigService() = default;
		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;
		bool Resolve(TextCommandService::CommandData& command) override;

	private:
		
		bool ValidateConfig();
		void RenderSaveButton();

	};
}