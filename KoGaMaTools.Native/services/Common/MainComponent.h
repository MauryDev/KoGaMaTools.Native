#pragma once
#include <cinttypes>
#include <unordered_map>
#include <functional>
#include <string>
#include <mutex>
#include "../../Core/DITools.h"

namespace KoGaMaTools::Services {
	struct MainComponent: Core::IInitializable  {
		using CallbackType = std::function<void(void*)>;
		static inline std::shared_ptr<MainComponent> Instance = nullptr;
		std::mutex mtx;
		void Init(Core::DIContainer& di) override;
		void AddCallback(const std::string& name, CallbackType callback);
		void ExecuteCallback(CallbackType callback);

		void RemoveCallback(std::string name);
		static void Update(void* instance);
		std::unordered_map<std::string, CallbackType> Callbacks;
		std::vector<CallbackType> TempCallbacks;

	};


}