#include "ResolutionService.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <imgui.h>

void KoGaMaTools::Services::ResolutionService::Render()
{
	static const char* windowTypes[] =
	{
		"ExclusiveFullScreen",
		"FullScreenWindow",
		"MaximizedWindow",
		"Windowed"
	};
	ImGui::InputInt("Width", &width);
	ImGui::InputInt("Height", &height);

	ImGui::Combo("Window Type", &windowType, windowTypes, IM_ARRAYSIZE(windowTypes));

	if (ImGui::Button("Apply Resolution"))
	{
		this->SetResolution(width, height,windowType);
	}
}

void KoGaMaTools::Services::ResolutionService::Init(Core::DIContainer& di)
{
	this->Instance = di.Get<ResolutionService>();
	mainComponent = di.Get<MainComponent>();
}

bool KoGaMaTools::Services::ResolutionService::Resolve(TextCommandService::CommandData& command)
{

    if (command.name != L"resolution")
        return false;

    if (command.args.size() != 3)
    {
        TextCommandService::NotifyUser(
            "Usage: resolution <width> <height> <windowType>");
        return true;
    }

    int width = 0;
    int height = 0;
    int windowType = 0;

    try
    {
        width = std::stoi(std::wstring(command.args[0]));
        height = std::stoi(std::wstring(command.args[1]));
        windowType = std::stoi(std::wstring(command.args[2]));
    }
    catch (...)
    {
        TextCommandService::NotifyUser(
            "Invalid arguments. Width, height and windowType must be numbers.");
        return true;
    }

    if (width <= 0 || height <= 0)
    {
        TextCommandService::NotifyUser(
            "Invalid resolution. Width and height must be greater than 0.");
        return true;
    }

    if (windowType < 0 || windowType > 3)
    {
        TextCommandService::NotifyUser(
            "Invalid windowType. Valid values: 0=ExclusiveFullScreen, 1=FullScreenWindow, 2=MaximizedWindow, 3=Windowed.");
        return true;
    }

    SetResolution(width, height, windowType);

    TextCommandService::NotifyUser("Resolution updated.");
    return true;
}

std::string_view KoGaMaTools::Services::ResolutionService::GetCommandHelp()
{
    return
        "resolution <width> <height> <windowType>\n"
        "Change game resolution.\n"
        "Window types:\n"
        "0 = ExclusiveFullScreen\n"
        "1 = FullScreenWindow\n"
        "2 = MaximizedWindow\n"
        "3 = Windowed\n"
        "Example: resolution 1920 1080 3";
}

void KoGaMaTools::Services::ResolutionService::SetResolution(int width, int height, int windowType)
{
	/*
		ExclusiveFullScreen,
		FullScreenWindow,
		MaximizedWindow,
		Windowed
	*/
    mainComponent->ExecuteCallback([width, height, windowType](void*) {
        namespace K = KoGaMaAPI::KoGaMa;
        SetResolutionImpl(width, height, windowType);
	});
	
}

void KoGaMaTools::Services::ResolutionService::SetResolutionImpl(int width, int height, int windowType)
{
    namespace K = KoGaMaAPI::KoGaMa;
    int refresh[2] = { 0,1 };
    K::UE_Screen::m0_SetResolution(width, height, windowType, refresh);
}
