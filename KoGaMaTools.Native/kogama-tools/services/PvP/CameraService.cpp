#include "CameraService.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <imgui.h>
#include <kogama-tools/Helpers/HookHelper.h>
namespace {
	float (*Original_GetFov)(void* instance) = nullptr;
	float (*Original_GetFov2)(void* instance) = nullptr;
	void (*Original_SetCamera)(void* instance,int) = nullptr;

}
bool KoGaMaTools::Services::CameraService::Resolve(TextCommandService::CommandData& command)
{
	// FOV Command
	if (command.name == L"setfov" && command.args.size() == 1)
	{
		try {
			float value = std::stof(std::wstring(command.args[0]));
			fov = value;
			enableFov = true; // Auto-enable when using command
			TextCommandService::NotifyUser(L"FOV set to " + std::to_wstring(value));
		}
		catch (const std::exception&)
		{
			TextCommandService::NotifyUser(L"Invalid FOV value: " + std::wstring(command.args[0]));
		}
		return true;
	}
	// Render Distance Command
	else if (command.name == L"setrenderdist" && command.args.size() == 1)
	{
		try {
			float value = std::stof(std::wstring(command.args[0]));
			farClip = value;
			SetFairClipPlane(value);
			TextCommandService::NotifyUser(L"Render Distance set to " + std::to_wstring(value));
		}
		catch (const std::exception&)
		{
			TextCommandService::NotifyUser(L"Invalid Render Distance value: " + std::wstring(command.args[0]));
		}
		return true;
	}
	// Improved Third Person Command
	else if (command.name == L"thirdperson")
	{
		if (command.args.empty())
		{
			// Toggle if no args
			enableThirdPerson = !enableThirdPerson;
		}
		else
		{
			// Set specific state if arg provided (on/off, 1/0, true/false)
			auto arg = command.args[0];
			if (arg == L"on" || arg == L"1" || arg == L"true") enableThirdPerson = true;
			else if (arg == L"off" || arg == L"0" || arg == L"false") enableThirdPerson = false;
		}

		std::wstring status = enableThirdPerson ? L"ENABLED" : L"DISABLED";
		TextCommandService::NotifyUser(L"Third Person view: " + status);
		return true;
	}
	// Aspect Ratio Command
	else if (command.name == L"setaspect" && command.args.size() == 2)
	{
		try {
			float x = std::stof(std::wstring(command.args[0]));
			float y = std::stof(std::wstring(command.args[1]));

			aspect[0] = x;
			aspect[1] = y;
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
		"setfov <value>       - Set the camera's field of view.\n"
		"setrenderdist <value> - Set the camera's render distance (far clip).\n"
		"thirdperson [on/off] - Toggle or set third-person camera mode.\n"
		"setaspect <x> <y>    - Set the camera's aspect ratio (x:y).";
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
float KoGaMaTools::Services::CameraService::Hook_GetFovImpl(void* instance)
{
	if (!Instance->enableFov)
		return Original_GetFov(instance);

	return Instance->fov;
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
	ImGui::Image(textureManager->GetTexture("ID_102"), ImVec2(24, 24));
	ImGui::SameLine();
	ImGui::SeparatorText("Camera Settings");

	ImGui::PushItemWidth(220);

	ImGui::Image(textureManager->GetTexture("ID_104"), ImVec2(16, 16));
	ImGui::SameLine();
	ImGui::Checkbox("Enable Third Person", &enableThirdPerson);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("Toggles third-person camera view.");

	ImGui::Image(textureManager->GetTexture("ID_106"), ImVec2(16, 16));
	ImGui::SameLine();
	ImGui::Checkbox("Override FOV", &enableFov);
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("Enables manual Field of View (FOV) control.");

	if (!enableFov) ImGui::BeginDisabled();

	ImGui::SliderFloat("FOV", &fov, 30.0f, 150.0f, "%.1f deg");
	if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled))
		ImGui::SetTooltip("Adjusts the width of your view. Higher values show more of the world but may cause distortion.");

	if (!enableFov) ImGui::EndDisabled();


	ImGui::Image(textureManager->GetTexture("ID_107"), ImVec2(16, 16));
	ImGui::SameLine();
	if (ImGui::SliderFloat("Render Distance", &farClip, 10.0f, 10000.0f, "%.0f units"))
	{
		SetFairClipPlane(farClip);
	}
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("Maximum distance the camera can see.\nReduce this value to improve performance (FPS).");


	ImGui::Image(textureManager->GetTexture("ID_105"), ImVec2(16, 16));
	ImGui::SameLine();
	ImGui::SeparatorText("Aspect Ratio");


	if (ImGui::Combo("Preset", &aspectPreset, aspectItems, IM_ARRAYSIZE(aspectItems)))
	{
		memcpy(aspect, aspectItemsValue[aspectPreset], sizeof(float) * 2);

		SetAspect(aspect[0], aspect[1]);
	}
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("Select a standard screen format (e.g., 16:9 for Widescreen monitors).");


	if (ImGui::DragFloat2("Manual Ratio", aspect, 0.01f, 0.1f, 100.0f, "%.3f"))
	{
		SetAspect(aspect[0], aspect[1]);
	}
	if (ImGui::IsItemHovered())
		ImGui::SetTooltip("Fine-tune the screen aspect ratio (Horizontal and Vertical).");

	ImGui::PopItemWidth();
	ImGui::Separator();
}


void KoGaMaTools::Services::CameraService::OnSetCameraHook(void* instance, int cameratype)
{
	namespace K = KoGaMaAPI::KoGaMa;

	if (Instance->enableThirdPerson && cameratype == K::CameraType::f_FirstPersonCamera.Get<int>())
	{
		return;
	}

	Original_SetCamera(instance, cameratype);
}

void KoGaMaTools::Services::CameraService::Init(Core::DIContainer& di)
{
	Instance = di.Get<CameraService>();
	mainComponent = di.Get<MainComponent>();
	logger = di.Get<Services::LoggerService>();
	auto hooking = di.Get<Services::HookingService>();
	textureManager = di.Get<UI::ITextureManager>();

	Helpers::HookHelper::HookDesc desc[] = {
		{ (void**)KoGaMaAPI::KoGaMa::FirstPersonCamera::m_get_FieldOfView.ptr, CameraHookWrapper<Original_GetFov>, (void**)&Original_GetFov},
		{ (void**)KoGaMaAPI::KoGaMa::MVCameraBase::m_get_FieldOfView.ptr, CameraHookWrapper<Original_GetFov2>, (void**)&Original_GetFov2 },
		{  (void**)KoGaMaAPI::KoGaMa::AvatarCamerasDesktop::m0_SetCamera.ptr, OnSetCameraHook, (void**)&Original_SetCamera },
	};
	Helpers::HookHelper::InstallHooks(logger, "CameraService", hooking, desc);
}
