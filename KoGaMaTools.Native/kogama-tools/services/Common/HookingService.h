#pragma once
#include <memory>
#include <kogama-tools/Core/DITools.h>
#include <kogama-tools/services/IO/IKoGaMaEnvironment.h>

namespace KoGaMaTools::Services {
	
	struct HookingService : Core::IInitializable
	{
		struct HookInfo
		{
			void* methodPtr;
			void* detour;
			void** original;
		};
		inline static std::shared_ptr<HookingService> Instance;
		HookingService(const IKoGaMaEnvironment& env);
		void Init(Core::DIContainer& di) override;

		bool CreateHook(void* methodPtr, void* detour, void** original);
		bool CreateHook(const HookInfo& hookInfo);

		bool EnableHook(void* methodPtr);

		bool CreateAndEnableHook(void* methodPtr, void* detour, void** original);
		bool CreateAndEnableHook(const HookInfo& hookInfo);

	};
}