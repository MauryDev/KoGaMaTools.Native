#include "AntiAfk.h"
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "../Common/MainComponent.h"
#include <imgui.h>


void KoGaMaTools::Services::AntiAfk::Render()
{
	if (ImGui::Checkbox("Enabled Anti-AFK", &Enabled))
	{
		MainComponent::Instance->ExecuteCallback([](void*) {
			KoGaMaAPI::KoGaMa::AwayMonitor::m_set_IdleKickEnabled(!Instance->Enabled);
			});
	}
}

void KoGaMaTools::Services::AntiAfk::Init(Core::DIContainer& di)
{
	Instance = di.Get<AntiAfk>();

}

bool KoGaMaTools::Services::AntiAfk::Resolve(TextCommandService::CommandData& command)
{
	if (command.name == L"antiafk")
	{
		if (command.args.empty())
		{
			Enabled = !Enabled;
			TextCommandService::NotifyUser(L"AntiAfk: " + std::wstring(Enabled ? L"enabled" : L"disabled"));
		}
		else
		{
			std::wstring_view subcommand = command.args[0];
			if (subcommand == L"enable")
			{
				Enabled = true;
				TextCommandService::NotifyUser(L"AntiAfk enabled");
			}
			else if (subcommand == L"disable")
			{
				Enabled = false;
				TextCommandService::NotifyUser(L"AntiAfk disabled");
			}
		}
		return true;
	}
	return false;
}

std::string_view KoGaMaTools::Services::AntiAfk::GetCommandHelp()
{
	return "/antiafk: Toggle or control anti-AFK (idle kick prevention).\n"
		   "Usage: /antiafk [enable|disable] or just command to toggle";
}
