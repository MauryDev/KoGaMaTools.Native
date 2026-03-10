#pragma once
#include "../services/LoggerService.h"
#include "../services/Common/HookingService.h"
#include <memory>
#include <string>
#include <array>
#include <format>
namespace KoGaMaTools::Helpers {
	struct HookHelper
	{
		struct HookDesc
		{
			void** methodPtr;
			void* detour;
			void** original;
		};
		

		static void ValidateMethodPtrs(
			std::shared_ptr<Services::LoggerService>& logger,
			const char* module,
			HookDesc* descs,
			size_t size);
		

		static void ToListHookInfo(
			HookDesc* desc,
			Services::HookingService::HookInfo* out,
			size_t N);
		
		static void ApplyHooks(
			std::shared_ptr<Services::LoggerService>& logger,
			const std::string& serviceName,
			std::shared_ptr<Services::HookingService>& hookingService,
			Services::HookingService::HookInfo* hooks,
			size_t N);

		template<size_t N>
		static void ToListHookInfo(
			HookDesc(&desc)[N],
			Services::HookingService::HookInfo(&out)[N])
		{
			ToListHookInfo(desc, out, N);
		}
		template<size_t N>
		static void ApplyHooks(
			std::shared_ptr<Services::LoggerService>& logger,
			const std::string& serviceName,
			std::shared_ptr<Services::HookingService>& hookingService,
			Services::HookingService::HookInfo(&hooks)[N])
		{
			ApplyHooks(logger, serviceName, hookingService, hooks, N);
		}

		template<size_t N>
		static void ValidateMethodPtrs(
			std::shared_ptr<Services::LoggerService>& logger,
			const char* module,
			HookDesc(&descs)[N])
		{
			ValidateMethodPtrs(logger, module, descs, N);
		}


		template<size_t N>
		static void InstallHooks(
			std::shared_ptr<Services::LoggerService>& logger,
			const char* module,
			std::shared_ptr<Services::HookingService>& hookingService,
			HookDesc(&descs)[N])
		{
			Services::HookingService::HookInfo hooks[N];

			ValidateMethodPtrs(logger, module, descs);
			ToListHookInfo(descs, hooks);
			ApplyHooks(logger, module, hookingService, hooks);
		}

	};
}