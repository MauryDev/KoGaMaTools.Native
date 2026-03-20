#include "MessageReceiveService.h"
#include <kogama-tools/Helpers/HookHelper.h>
#include <metadata/KoGaMaAPI.KoGaMa.h>
namespace {
	void(*OriginalOnMessageReceived)(int msgType, void* dictMessage) = nullptr;
}
void KoGaMaTools::Services::MessageReceiveService::Init(Core::DIContainer& di)
{
	namespace K = KoGaMaAPI::KoGaMa;
	Instance = di.Get<MessageReceiveService>();
	textureManager = di.Get<UI::ITextureManager>();
	auto hookService = di.Get<HookingService>();
	auto logger = di.Get<LoggerService>();

	Helpers::HookHelper::HookDesc desc[] = {
		{(void**)K::MVGameControllerBase::m0_PostGameMsg.ptr, OnMessageReceived, (void**)&OriginalOnMessageReceived}
	};

	Helpers::HookHelper::InstallHooks(logger, "MessageReceiveService", hookService, desc);
}

void KoGaMaTools::Services::MessageReceiveService::Render()
{
	ImGui::Spacing();
	ImGui::SeparatorText("Message event");

	ImGui::Checkbox("Enable Message Event", &Enabled);
}

bool KoGaMaTools::Services::MessageReceiveService::Resolve(TextCommandService::CommandData& command)
{
	if (command.name == L"messageevent") {
		if (command.args.size() > 0) {
			std::wstring_view arg = command.args[0];
			if (arg == L"enable") {
				Enabled = true;
				TextCommandService::NotifyUser("Message event enabled.");
			}
			else if (arg == L"disable") {
				Enabled = false;
				TextCommandService::NotifyUser("Message event disabled.");
			}
			else {
				TextCommandService::NotifyUser("Invalid argument. Use 'enable' or 'disable'.");
			}
		}
		else {
			TextCommandService::NotifyUser("No argument provided. Use 'enable' or 'disable'.");
		}
		return true;
	}
	return false;
}

std::string_view KoGaMaTools::Services::MessageReceiveService::GetCommandHelp()
{
	return "messageevent <enable/disable>: Enable or disable the message event rendering.";
}

void KoGaMaTools::Services::MessageReceiveService::OnMessageReceived(int msgType, void* dictMessage)
{
	if (Instance->Enabled)
	{
		return;
	}
	return OriginalOnMessageReceived(msgType, dictMessage);
}
