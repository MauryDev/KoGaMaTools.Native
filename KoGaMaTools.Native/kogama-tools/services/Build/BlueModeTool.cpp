#include "BlueModeTool.h" 
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "../LoggerService.h"
#include <imgui.h>
#include <MinHook.h>

#include "../../Helpers/HookHelper.h"

using namespace Tools::Il2Cpp;
namespace {
	void (*MainCameraManager_set_BlueModeEnabled_Old)(void* instance, uint8_t value, void* methodInfo);
}
void KoGaMaTools::Services::BlueModeTool::OnExecute(void* instance, uint8_t value, void* methodInfo)
{
	

	namespace K = KoGaMaAPI::KoGaMa;
	auto newValue = Il2CppBoolean(&value) && Instance->Enabled;
	MainCameraManager_set_BlueModeEnabled_Old(instance, newValue, methodInfo);


}

void KoGaMaTools::Services::BlueModeTool::Init(Core::DIContainer& di)
{
	auto logger = di.Get<LoggerService>();
	auto configService = di.Get<ConfigService>();
	auto hookingService = di.Get<HookingService>();

	LoadConfig(configService->GetConfig());

	const char* module = "BlueModeTool";
	Helpers::HookHelper::HookDesc descs[] =
	{
		{(void**)KoGaMaAPI::KoGaMa::MainCameraManager::m_set_BlueModeEnabled.ptr,OnExecute, (void**)&MainCameraManager_set_BlueModeEnabled_Old}
	};

	Helpers::HookHelper::InstallHooks(logger, module, hookingService, descs);

	Instance = di.Get<BlueModeTool>();

	
}

void KoGaMaTools::Services::BlueModeTool::Render()
{
	ImGui::Checkbox("Blue Mode", &Enabled);
	
}



void KoGaMaTools::Services::BlueModeTool::LoadConfig(const nlohmann::json& value)
{
	Enabled = value.value("BlueMode.Enabled", Enabled);

	
}

void KoGaMaTools::Services::BlueModeTool::OnChangedConfig(const nlohmann::json& value)
{
	LoadConfig(value);
}

void KoGaMaTools::Services::BlueModeTool::OnSavingConfig(nlohmann::json& value)
{
	value["BlueMode.Enabled"] = Enabled;
}

bool KoGaMaTools::Services::BlueModeTool::Resolve(TextCommandService::CommandData& command)
{
	if (command.name != L"bluemode") return false;

	if (!command.args.empty()) {
		std::wstring_view arg = command.args[0];
		if (arg == L"on") Enabled = true;
		else if (arg == L"off") Enabled = false;
		else {
			TextCommandService::NotifyUser("Usage: bluemode <on/off>");
			return true;
		}
	}
	else {
		Enabled = !Enabled; 
	}

	TextCommandService::NotifyUser(std::string(Enabled ? "Enabled" : "Disabled") + " Blue Mode");

	return true;
}

std::string_view KoGaMaTools::Services::BlueModeTool::GetCommandHelp()
{
	return "/bluemode <on/off>";
}
