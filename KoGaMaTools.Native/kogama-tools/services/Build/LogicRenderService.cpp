#include "LogicRenderService.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>
void KoGaMaTools::Services::LogicRenderService::Init(Core::DIContainer& di)
{
	Instance = di.Get<LogicRenderService>();
	mainComponent = di.Get<MainComponent>();
}

void KoGaMaTools::Services::LogicRenderService::Render()
{
	ImGui::Spacing();

	if (ImGui::CollapsingHeader("Logic Render"))
	{
		if (ImGui::Checkbox("Enable Logic Render", &Enabled))
		{
			EnableRender(Enabled);
		}
		ImGui::SameLine();
		ImGui::TextDisabled("(?)");
		if (ImGui::IsItemHovered())
			ImGui::SetTooltip("Enables or disables the logic rendering system.");

		if (Enabled)
			ImGui::Text("Status: Active");
		else
			ImGui::TextDisabled("Status: Disabled");
	}
}

bool KoGaMaTools::Services::LogicRenderService::Resolve(TextCommandService::CommandData& command)
{
	if (command.name != L"logicrender")
		return false;

	if (command.args.empty()) {
		EnableRender(!Enabled);
		std::string msg = "Logic Render " + std::string(Enabled ? "Enabled" : "Disabled");
		TextCommandService::NotifyUser(msg);
		return true;
	}
	if (command.args[0] == L"on" || command.args[0] == L"1" || command.args[0] == L"true") {
		EnableRender(true);
		TextCommandService::NotifyUser("Logic Render: ON");
	}
	else if (command.args[0] == L"off" || command.args[0] == L"0" || command.args[0] == L"false") {
		EnableRender(false);
		TextCommandService::NotifyUser("Logic Render: OFF");
	}
	else {
		TextCommandService::NotifyUser("Usage: /logicrender [on/off]");
	}
	return false;
}

std::string_view KoGaMaTools::Services::LogicRenderService::GetCommandHelp()
{
	return "Logic Render:\n"
		"Toggle rendering of logic components in the editor.\n"
		"Usage: /logicrender [on/off]";
}

void KoGaMaTools::Services::LogicRenderService::EnableRender(bool enable)
{
	namespace K = KoGaMaAPI::KoGaMa;
	mainComponent->ExecuteCallback([enable](void*) {

		auto mainCamera = K::MVGameControllerBase::m_get_MainCameraManager();
		K::MainCameraManager::m_RenderLogic(mainCamera, enable);
	});
}
