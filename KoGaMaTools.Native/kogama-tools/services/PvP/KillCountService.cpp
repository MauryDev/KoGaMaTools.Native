#include "KillCountService.h"
#include <kogama-tools/Helpers/HookHelper.h>
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <kogama-tools/Resources/resource.h>


namespace {
	bool(*originalTryGetPrioritizedWinCondition)(int* condition) = nullptr;
}
bool KoGaMaTools::Services::KillCountService::Detour_TryGetPrioritizedWinCondition(int* condition)
{
	namespace K = KoGaMaAPI::KoGaMa;
	if (Instance->showKillCount)
	{
		
		*condition = K::GameStatCounterType::f_Kill.Get<int>(); // WinningConditionType.KillCount
		return true;
	}
	return originalTryGetPrioritizedWinCondition(condition);
}
void KoGaMaTools::Services::KillCountService::Init(Core::DIContainer& di)
{
	namespace K = KoGaMaAPI::KoGaMa;
	Instance = di.Get<KillCountService>();
	textureManager = di.Get<UI::ITextureManager>();
	auto logger = di.Get<Services::LoggerService>();
	auto hooking = di.Get<Services::HookingService>();
	Helpers::HookHelper::HookDesc hooks[] = {
		{ (void**)K::WinningConditionControl::m_TryGetPrioritizedStat.ptr, Detour_TryGetPrioritizedWinCondition, (void**)&originalTryGetPrioritizedWinCondition },
	};
	Helpers::HookHelper::InstallHooks(
		logger,
		"KillCountService",
		hooking,
		hooks
	);
}

void KoGaMaTools::Services::KillCountService::Render()
{
	ImGui::Image(textureManager->GetTexture(IDB_PNG12), ImVec2(24, 24));
	ImGui::SameLine();
	ImGui::SeparatorText("Kill Count");

	ImGui::Checkbox("Show", &showKillCount);
}

bool KoGaMaTools::Services::KillCountService::Resolve(TextCommandService::CommandData& command)
{
	if (command.name == L"killcount")
	{
		if (command.args.size() > 0)
		{
			std::wstring_view arg = command.args[0];
			if (arg == L"show")
			{
				showKillCount = true;
				TextCommandService::NotifyUser("Kill count will now be shown in the HUD.");
				return true;
			}
			else if (arg == L"hide")
			{
				showKillCount = false;
				TextCommandService::NotifyUser("Kill count will now be hidden in the HUD.");
				return true;
			}
			else
			{
				TextCommandService::NotifyUser("Invalid argument. Use 'show' or 'hide'.");
				return true;
			}
		}
		else
		{
			TextCommandService::NotifyUser("Usage: /killcount [show|hide]");
			return true;
		}
	}
	return false;
}

std::string_view KoGaMaTools::Services::KillCountService::GetCommandHelp()
{
	return "/killcount [show|hide] - Show or hide the kill count in the HUD.";
}
