#include "HookingService.h"
#include <MinHook.h>



KoGaMaTools::Services::HookingService::HookingService(const IKoGaMaEnvironment& env)
{
	auto& folder = env.GetFolderWork();

#ifdef NDEBUG
	auto minhook = (folder / "minhook.x64.dll").string();
#else
	auto minhook = (folder / "minhook.x64d.dll").string();
#endif
	LoadLibraryA(minhook.c_str());

	MH_Initialize();

}

void KoGaMaTools::Services::HookingService::Init(Core::DIContainer& di)
{
	Instance = di.Get<HookingService>();
}

bool KoGaMaTools::Services::HookingService::CreateHook(void* methodPtr, void* detour, void** original)
{
	
	return MH_CreateHook(methodPtr, detour, original) == MH_OK;
}

bool KoGaMaTools::Services::HookingService::CreateHook(const HookInfo& hookInfo)
{
	return CreateHook(hookInfo.methodPtr, hookInfo.detour, hookInfo.original);
}

bool KoGaMaTools::Services::HookingService::EnableHook(void* methodPtr)
{
	return MH_EnableHook(methodPtr) == MH_OK;
}

bool KoGaMaTools::Services::HookingService::CreateAndEnableHook(void* methodPtr, void* detour, void** original)
{
	if (!CreateHook(methodPtr, detour, original))
		return false;
	return EnableHook(methodPtr);
}

bool KoGaMaTools::Services::HookingService::CreateAndEnableHook(const HookInfo& hookInfo)
{
	return CreateAndEnableHook(hookInfo.methodPtr, hookInfo.detour, hookInfo.original);
}
