#pragma once
#include <memory>
#include "../../Core/DITools.h"

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
		
		// Inherited via IInitializable
		void Init(Core::DIContainer& di) override;

		bool CreateHook(void* methodPtr, void* detour, void** original);
		bool CreateHook(const HookInfo& hookInfo);

		bool EnableHook(void* methodPtr);

		bool CreateAndEnableHook(void* methodPtr, void* detour, void** original);
		bool CreateAndEnableHook(const HookInfo& hookInfo);

	};
}