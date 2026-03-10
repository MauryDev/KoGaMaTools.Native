#include "HookHelper.h"
#include <format>

void KoGaMaTools::Helpers::HookHelper::ValidateMethodPtrs(std::shared_ptr<Services::LoggerService>& logger, const char* module, HookDesc* descs, size_t size)
{

	for (size_t i = 0; i < size; ++i)
	{
		auto p = descs[i].methodPtr;

		logger->Assert(
			p != nullptr,
			std::format("[{}] - Null method #{}", module, i)
		);

		logger->Assert(
			*p != nullptr,
			std::format("[{}] - Null target #{}", module, i)
		);
	}
}

void KoGaMaTools::Helpers::HookHelper::ToListHookInfo(HookDesc* desc, Services::HookingService::HookInfo* out, size_t N)
{
	for (size_t i = 0; i < N; ++i)
	{
		out[i] =
		{
			*desc[i].methodPtr,
			desc[i].detour,
			desc[i].original
		};
	}
}

void KoGaMaTools::Helpers::HookHelper::ApplyHooks(std::shared_ptr<Services::LoggerService>& logger, const std::string& serviceName, std::shared_ptr<Services::HookingService>& hookingService, Services::HookingService::HookInfo* hooks, size_t N)
{
	for (size_t i = 0; i < N; ++i)
	{
		logger->Assert(
			hookingService->CreateAndEnableHook(hooks[i]),
			std::format("[{}] - Hooking #{}", serviceName, i)
		);
	}
}
