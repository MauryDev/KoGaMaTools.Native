// dllmain.cpp : Defines the entry point for the DLL application.
#include <windows.h>

#include <MinHook.h>

#include <Tools.Il2Cpp.Lib.h>
#include "kogama-tools/services/services.h"
#include "kogama-tools/UI/MainUI.h"
#include <MetadataInit.h>
#include "kogama-tools/Core/DITools.h"
#include <kogama-tools/Helpers/TypeParameters.h>
#include <kogama-tools/UI/DX11TextureManager.h>
namespace {
	template <typename T>
	void AddComponent(KoGaMaTools::UI::MainUI& ui, size_t idx, const T&)
	{
		auto& app = KoGaMaTools::Core::DIContainer::GetInstance();
		ui.AddComponent(static_cast<int>(idx), app.Get<T>());
	}
	template <typename ...T>
	void AddComponent(KoGaMaTools::UI::MainUI& ui, size_t idx, const  KoGaMaTools::Helpers::TypeParameters<T...>&)
	{
		(AddComponent(ui, idx, T{}), ...);
	}
	template <typename ...T>
	void SetupUI(KoGaMaTools::UI::MainUI& ui, const std::string& name)
	{
		ui.AddComponentType(name);
		auto i = ui.components.size() - 1;
		(AddComponent(ui, i, T{}), ...);
	}
}



DWORD WINAPI MainThread(LPVOID lpReserved)
{
	auto moduleDll = (HMODULE)lpReserved;
	KoGaMaTools::Services::PathHelper::Install(moduleDll);
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

	app.NewServiceAs<KoGaMaTools::UI::ITextureManager, KoGaMaTools::UI::DX11TextureManager>(moduleDll);

	KoGaMaTools::Core::InstallMultiple<S::MainComponent,
		S::LoggerService,
		KoGaMaTools::UI::MainUI,
		S::ConfigService,
		S::TextCommandService,
		S::ContextMenuService,
		S::HookingService,
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
		S::CustomCrossHairTexture,
		S::CameraService,
		S::GameInfoService,
		S::ResolutionService
	>();
	KoGaMaTools::Services::ModelModule::Init(app);


	app.InitAll();

	auto ui = app.Get<KoGaMaTools::UI::MainUI>();
	
	SetupUI<S::SinglePaintFace,
		S::NoLimit,
		S::BlueModeTool,
		S::DestructiblesUnlock,
		S::CustomGrid,
		S::EditModeSpeed,
		S::RotationStep,
		S::UnlimitedConfig,
		S::ModelModule::ModelService>(*ui, "Build");


	SetupUI<S::AntiAfk,
		S::CustomCrossHairColor,
		S::FastRespawn,
		S::CustomCrossHairTexture,
		S::ResolutionService,
		S::CameraService>(*ui, "PvP");

	SetupUI<S::GameInfoService>(*ui, "Info");

	SetupUI<S::ConfigService>(*ui, "Others");


	app.Get<S::ConfigService>()->SetupConfigurables();
	app.Get<S::TextCommandService>()->SetupCommandsResolve();
	app.Get<S::ContextMenuService>()->SetupButtons();

	ui->StartUI();

	
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