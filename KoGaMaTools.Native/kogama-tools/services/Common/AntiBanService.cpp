#include "AntiBanService.h"
#include "../LoggerService.h"
#include "../../Helpers/HookHelper.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>



void KoGaMaTools::Services::AntiBanService::Init(Core::DIContainer& di)
{
	namespace K = KoGaMaAPI::KoGaMa;
	Instance = di.Get<AntiBanService>();
	auto logger = di.Get<LoggerService>();
	auto hookingService = di.Get<HookingService>();


	const char* module = "AntiBanService";
	

	void* ptrv = nullptr;

	Helpers::HookHelper::HookDesc descs[] =
	{
		{(void**)K::CheatHandling::m_Init.ptr, NoneFunc, &ptrv},
		{(void**)K::CheatHandling::m_MachineBanDetected.ptr, NoneFunc, &ptrv},
		{(void**)K::CheatHandling::m_ExecuteBan.ptr, NoneFunc, &ptrv},
	};
	Helpers::HookHelper::InstallHooks(logger, module, hookingService, descs);
}

void KoGaMaTools::Services::AntiBanService::NoneFunc()
{}
