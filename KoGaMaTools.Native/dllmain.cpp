// dllmain.cpp : Defines the entry point for the DLL application.
#include <windows.h>

#include <MinHook.h>

#include <Tools.Il2Cpp.Lib.h>
#include <Tools.Il2Cpp.ICalls.h>
#include "services/services.h"
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "UI/MainUI.h"
#include <MetadataInit.h>
#include "Core/DITools.h"

template<typename... T>
void InstallMultiple() {
	(T::Install(), ...);
}

template <typename ...T>
void SetupUI(KoGaMaTools::UI::MainUI& ui, int i)
{
	auto& app = KoGaMaTools::Core::DIContainer::GetInstance();

	ui.AddComponents(i, app.Get<T>()...);
}

DWORD WINAPI MainThread(LPVOID lpReserved)
{
	KoGaMaTools::Services::PathHelper::Install((HMODULE)lpReserved);
	do {
		Sleep(4000);

	} while (GetModuleHandleA("GameAssembly.dll") == nullptr || GetModuleHandleA("UnityPlayer.dll") == nullptr);

	auto& folderWork = KoGaMaTools::Services::PathHelper::GetFolderWork();
	auto region = KoGaMaTools::Services::PathHelper::RegionToStr(KoGaMaTools::Services::PathHelper::GetRegion());
#ifdef NDEBUG
	auto dllMinHook = (folderWork / "minhook.x64.dll").string();
#else
	auto dllMinHook = (folderWork / "minhook.x64d.dll").string();
#endif

	auto metadata1Path = (folderWork / region / "Tools.Il2Cpp.ICalls.dat").string();
	auto metadata2Path = (folderWork / region / "KoGaMaAPI.KoGaMa.dat").string();
	LoadLibraryA(dllMinHook.c_str());
	


	KoGaMaTools::Services::KieroUI::InitHook();

	KoGaMaAPI::Metadata::Install(metadata1Path, metadata2Path);

	MH_Initialize();
	auto& app = KoGaMaTools::Core::DIContainer::GetInstance();
	
	
	namespace S = KoGaMaTools::Services;

	KoGaMaTools::Core::InstallMultiple<S::MainComponent,
		S::LoggerService,
		KoGaMaTools::UI::MainUI,
		S::ConfigService,
		S::SinglePaintFace, 
		S::NoLimit,
		S::BlueModeTool,
		S::DestructiblesUnlock,
		S::CustomGrid,
		S::EditModeSpeed,
		S::RotationStep,
		S::UnlimitedConfig,
		S::AntiAfk,
		S::CustomCrossHairColor,
		S::FastRespawn,
		S::CustomCrossHairTexture>();

	app.InitAll();

	auto ui = app.Get<KoGaMaTools::UI::MainUI>();
	
	SetupUI<S::SinglePaintFace,
		S::NoLimit,
		S::BlueModeTool,
		S::DestructiblesUnlock,
		S::CustomGrid,
		S::EditModeSpeed,
		S::RotationStep,
		S::UnlimitedConfig>(*ui, 0);

	SetupUI<S::AntiAfk,
		S::CustomCrossHairColor,
		S::FastRespawn,
		S::CustomCrossHairTexture>(*ui, 1);

	SetupUI<S::ConfigService>(*ui, 2);

	app.Get<S::ConfigService>()->SetupConfigurables();


	return TRUE;
}

BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hMod);
		CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		//kiero::shutdown();
		break;
	}
	return TRUE;
}