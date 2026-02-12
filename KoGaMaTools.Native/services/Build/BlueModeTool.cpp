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
	
	auto methodPtr = (void**)KoGaMaAPI::KoGaMa::MainCameraManager::m_set_BlueModeEnabled.ptr;
	auto result = MH_CreateHook(*methodPtr, OnExecute, (void**)&MainCameraManager_set_BlueModeEnabled_Old);
	

	auto result2 = MH_EnableHook(*methodPtr);


}

void KoGaMaTools::Services::BlueModeTool::Render()
{
	ImGui::Checkbox("Blue Mode", &Enable);

}
