// dllmain.cpp : Defines the entry point for the DLL application.
#include <windows.h>

#include <MinHook.h>

#include <Tools.Il2Cpp.Lib.h>
#include <Tools.Il2Cpp.ICalls.h>
#include "services\services.h"
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "UI\MainUI.h"

DWORD WINAPI MainThread(LPVOID lpReserved)
{
	KoGaMaTools::Services::PathHelper::Install((HMODULE)lpReserved);

	Sleep(10000);
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
	KoGaMaTools::UI::MainUI::Install();



	Tools::Il2Cpp::Init();


	auto metadata1 = Tools::Il2Cpp::Metadata::ReadMetadataFromFile(metadata1Path.c_str());

	auto metadata2 = Tools::Il2Cpp::Metadata::ReadMetadataFromFile(metadata2Path.c_str());


	auto domain = Tools::Il2Cpp::il2cpp_domain_get();
	Tools::Il2Cpp::Il2CppThread::Attach(domain);

	Tools::Il2Cpp::ICalls::Init(metadata1);

	KoGaMaAPI::KoGaMa::Init(metadata2);


	MH_Initialize();

	KoGaMaTools::Services::SinglePaintFace::Install();
	KoGaMaTools::Services::NoLimit::Install();



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