#include "BlueModeTool.h"
#include "..\..\metadata\KoGaMaAPI.KoGaMa.h"
#include "MinHook.h"
#include "../LoggerService.h"
#include <format>
#include "DestructiblesUnlock.h"
#include <imgui.h>

namespace {
	void (*MainCameraManager_set_BlueModeEnabled_Old)(void* instance, uint8_t value, void* methodInfo);
}
void KoGaMaTools::Services::BlueModeTool::OnExecute(void* instance, uint8_t value, void* methodInfo)
{
	

	namespace K = KoGaMaAPI::KoGaMa;
	auto newValue = Il2CppBoolean(&value) && Enable;
	MainCameraManager_set_BlueModeEnabled_Old(instance, newValue, methodInfo);


}

void KoGaMaTools::Services::BlueModeTool::Install()
{
	auto logger = LoggerService::GetMainTest();

	auto methodPtr = (void**)KoGaMaAPI::KoGaMa::MainCameraManager::m_set_BlueModeEnabled.ptr;
	logger->Assert(methodPtr != nullptr, "[BlueMode] - Null target");
	logger->Assert(*methodPtr != nullptr, "[BlueMode] - Method Pointer is null");

	
	logger->Assert(
		MH_CreateHook(
			*methodPtr,
			OnExecute,
			(void**)&MainCameraManager_set_BlueModeEnabled_Old
		) == MH_OK,
		"[BlueMode] - CreateHook"
	);
	logger->Assert(
		MH_EnableHook(*methodPtr) == MH_OK,
		"[BlueMode] - EnableHook"
	);


}

void KoGaMaTools::Services::BlueModeTool::Render()
{
	ImGui::Checkbox("Blue Mode", &Enable);

}
