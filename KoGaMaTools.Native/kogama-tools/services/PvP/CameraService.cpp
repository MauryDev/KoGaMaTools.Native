#include "CameraService.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <imgui.h>
bool KoGaMaTools::Services::CameraService::Resolve(TextCommandService::CommandData& command)
{
	if (command.name == L"setfov" && command.args.size() == 1)
	{
		try {
			float value = std::stof(std::wstring(command.args[0]));
			SetFov(value);
			TextCommandService::NotifyUser(L"FOV set to " + std::to_wstring(value));
		}
		catch (const std::exception&)
		{
			TextCommandService::NotifyUser(L"Invalid FOV value: " + std::wstring(command.args[0]));
		}
		return true;
	}
	else if (command.name == L"setfarclip" && command.args.size() == 1)
	{
		try {
			float value = std::stof(std::wstring(command.args[0]));
			SetFairClipPlane(value);
			TextCommandService::NotifyUser(L"Far Clip Plane set to " + std::to_wstring(value));
		}
		catch (const std::exception&)
		{
			TextCommandService::NotifyUser(L"Invalid Far Clip Plane value: " + std::wstring(command.args[0]));
		}
		return true;
	}
	else if (command.name == L"setaspect" && command.args.size() == 2)
	{
		try {
			float x = std::stof(std::wstring(command.args[0]));
			float y = std::stof(std::wstring(command.args[1]));
			SetAspect(x, y);
			TextCommandService::NotifyUser(L"Aspect Ratio set to " + std::to_wstring(x) + L":" + std::to_wstring(y));
		}
		catch (const std::exception&)
		{
			TextCommandService::NotifyUser(L"Invalid Aspect Ratio values: " + std::wstring(command.args[0]) + L", " + std::wstring(command.args[1]));
		}
		return true;
	}
	return false;
}
std::string_view KoGaMaTools::Services::CameraService::GetCommandHelp()
{
	return "Camera Commands:\n"
		"setfov <value> - Set the camera's field of view.\n"
		"setfarclip <value> - Set the camera's far clip plane distance.\n"
		"setaspect <x> <y> - Set the camera's aspect ratio (x:y).";
}
void KoGaMaTools::Services::CameraService::SetFov(float value)
{
	mainComponent->ExecuteCallback([value](void*) {
		SetFovImpl(value);
		});
}
void KoGaMaTools::Services::CameraService::SetFairClipPlane(float value)
{
	mainComponent->ExecuteCallback([value](void*) {
		SetFairClipPlaneImpl(value);
		});
}
void KoGaMaTools::Services::CameraService::SetAspect(float x, float y)
{
	mainComponent->ExecuteCallback([x, y](void*) {
		SetAspectImpl(x, y);
		});
}
void KoGaMaTools::Services::CameraService::SetFovImpl(float value)
{
	namespace K = KoGaMaAPI::KoGaMa;
	auto camera = K::UE_Camera::m_get_main();
	K::UE_Camera::m_set_fieldOfView(camera, value);
}

void KoGaMaTools::Services::CameraService::SetFairClipPlaneImpl(float value)
{
	namespace K = KoGaMaAPI::KoGaMa;
	auto camera = K::UE_Camera::m_get_main();
	K::UE_Camera::m_set_farClipPlane(camera, value);
}

void KoGaMaTools::Services::CameraService::SetAspectImpl(float x, float y)
{
	auto value = x / y;
	namespace K = KoGaMaAPI::KoGaMa;
	auto camera = K::UE_Camera::m_get_main();
	K::UE_Camera::m_set_aspect(camera, value);
}

void KoGaMaTools::Services::CameraService::Render()
{
	ImGui::SeparatorText("Camera");

	ImGui::PushItemWidth(220);

	// FOV
	if (ImGui::SliderFloat("FOV", &fov, 30.0f, 150.0f, "%.1f deg"))
		SetFov(fov);

	// Far Clip
	if (ImGui::SliderFloat("Far Clip", &farClip, 10.0f, 10000.0f, "%.0f"))
		SetFairClipPlane(farClip);

	// Aspect Ratio manual
	if (ImGui::DragFloat2("Aspect Ratio", aspect, 0.01f, 0.1f, 100.0f, "%.3f"))
		SetAspect(aspect[0], aspect[1]);

	ImGui::PopItemWidth();


	if (ImGui::Combo("Aspect Preset", &aspectPreset, aspectItems, IM_ARRAYSIZE(aspectItems)))
	{
		switch (aspectPreset)
		{
		case 0:
			aspect[0] = 16.0f;
			aspect[1] = 9.0f;
			break;

		case 1:
			aspect[0] = 4.0f;
			aspect[1] = 3.0f;
			break;

		case 2:
			aspect[0] = 21.0f;
			aspect[1] = 9.0f;
			break;
		}

		SetAspect(aspect[0], aspect[1]);
	}

	ImGui::Separator();

}

void KoGaMaTools::Services::CameraService::Init(Core::DIContainer& di)
{
	Instance = di.Get<CameraService>();
	mainComponent = di.Get<MainComponent>();
}
