// dllmain.cpp : Defines the entry point for the DLL application.
#include <windows.h>


#include <kogama-tools/services/AppBootstrapper.h>





DWORD WINAPI MainThread(LPVOID lpReserved)
{
	auto moduleDll = (HMODULE)lpReserved;

	KoGaMaTools::Services::AppBootstrapper::Run(moduleDll);
	
	
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