#include "ConfigService.h"
#include <fstream>
#include <imgui.h>
using json = nlohmann::json;


namespace KoGaMaTools::Services {
	


	bool ConfigService::LoadConfig(const std::string& filePath)
	{
		auto& folderWork = environment->GetFolderWork();

		configPath = (folderWork / filePath).string();
		std::ifstream file(configPath);
		
		if (!file.is_open()) {
			// Criar arquivo padrão se não existir
			config = json::object();
			if (!firstLoad)
			{
				std::for_each(configurables.begin(), configurables.end(), [this](const std::shared_ptr<IConfigurable>& configurable) {
					configurable->OnChangedConfig(config);
					});
			}
			return SaveConfig();
		}

		try {
			file >> config;
			if (!firstLoad)
			{
				std::for_each(configurables.begin(), configurables.end(), [this](const std::shared_ptr<IConfigurable>& configurable) {
					configurable->OnChangedConfig(config);
					});
			}
			return ValidateConfig();
		}
		catch (const std::exception& e) {
			// Log erro de parse JSON
			return false;
		}
	}

	bool ConfigService::SaveConfig()
	{
		try {
			std::ofstream file(configPath);

			if (!firstLoad)
			{
				std::for_each(configurables.begin(), configurables.end(), [this](const std::shared_ptr<IConfigurable>& configurable) {
					configurable->OnSavingConfig(config);
					});
			}

			file << config.dump(4); // Indentar com 4 espaços
			file.close();

			return true;
		}
		catch (const std::exception&) {
			return false;
		}
	}

	json& ConfigService::GetConfig()
	{
		return config;
	}

	void ConfigService::SetConfigValue(const std::string& key, const json& value)
	{
		config[key] = value;
	}

	json ConfigService::GetConfigValue(const std::string& key, const json& defaultValue)
	{
		if (config.contains(key)) {
			return config[key];
		}
		return defaultValue;
	}

	void ConfigService::SetupConfigurables()
	{
		auto& di = Core::DIContainer::GetInstance();
		configurables = di.GetAllByInterface<IConfigurable>();
	}

	bool ConfigService::ValidateConfig()
	{
		return true;
	}

	void ConfigService::Render()
	{
		RenderSaveButton();
	}

	void ConfigService::RenderSaveButton()
	{
		if (ImGui::Button("Save Config##ConfigService")) {
			SaveConfig();
		}
		if (ImGui::IsItemHovered()) {
			ImGui::SetTooltip("Save the current configuration to file.");
		}
		if (ImGui::Button("Reload Config##ConfigService")) {
			LoadConfig();
		}
		if (ImGui::IsItemHovered()) {
			ImGui::SetTooltip("Reload the configuration from file, discarding unsaved changes.");
		}
	}
	void ConfigService::Init(Core::DIContainer& di)
	{
		if (!Instance) {
			Instance = di.Get<ConfigService>();
			environment = di.Get<IKoGaMaEnvironment>();
			LoadConfig();
			firstLoad = false;
		}
	}
	bool ConfigService::Resolve(TextCommandService::CommandData& command)
	{
		if (command.name == L"saveconfig") {
			if (SaveConfig()) {
				TextCommandService::NotifyUser("Configuration saved successfully.");
			}
			else {
				TextCommandService::NotifyUser("Failed to save configuration.");
			}
			return true;
		}
		else if (command.name == L"reloadconfig") {
			if (LoadConfig()) {
				TextCommandService::NotifyUser("Configuration reloaded successfully.");
			}
			else {
				TextCommandService::NotifyUser("Failed to reload configuration.");
			}
			return true;
		}
		return false;
	}
	std::string_view ConfigService::GetCommandHelp()
	{
		return "/saveconfig: Save the current configuration to file.\n"
			   "/reloadconfig: Reload the configuration from file, discarding unsaved changes.";
	}
}
