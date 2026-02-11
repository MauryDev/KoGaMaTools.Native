#include "BlueModeTool.h"
#include "..\..\metadata\KoGaMaAPI.KoGaMa.h"
#include "MinHook.h"
#include "../LoggerService.h"
#include <format>


namespace {
	void (*MainCameraManager_set_BlueModeEnabled_Old)(void* instance, uint8_t value, void* methodInfo);
	KoGaMaTools::Services::LoggerService* logger;
}
void KoGaMaTools::Services::BlueModeTool::OnExecute(void* instance, uint8_t value, void* methodInfo)
{
	

	namespace K = KoGaMaAPI::KoGaMa;
	auto newValue = Il2CppBoolean(&value) && Enable;
	logger->Info(std::format("Blue Mode: {}",newValue));
	MainCameraManager_set_BlueModeEnabled_Old(instance, newValue, methodInfo);


}
void KoGaMaTools::Services::BlueModeTool::Install()
{
	if (logger == nullptr)
		logger = new LoggerService("bluetest");
	auto methodPtr = (void**)KoGaMaAPI::KoGaMa::MainCameraManager::m_set_BlueModeEnabled.ptr;
	auto result = MH_CreateHook(*methodPtr, OnExecute, (void**)&MainCameraManager_set_BlueModeEnabled_Old);
	logger->Assert(result == MH_STATUS::MH_OK, "Create Hook");
	

	auto result2 = MH_EnableHook(*methodPtr);
	logger->Assert(result2 == MH_STATUS::MH_OK, "Enable Hook");


}
