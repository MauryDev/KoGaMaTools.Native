#pragma once
#include <cinttypes>
#include <unordered_map>
#include <functional>
#include <string>
#include <mutex>

namespace KoGaMaTools::Services {
	struct MainComponent {
		using CallbackType = std::function<void(void*)>;
		static inline MainComponent* Instance = nullptr;
		std::mutex mtx;
		static void Install();
		void AddCallback(const std::string& name, CallbackType callback);
		void ExecuteCallback(CallbackType callback);

		void RemoveCallback(std::string name);
		static void Update(void* instance);
		std::unordered_map<std::string, CallbackType> Callbacks;
		std::vector<CallbackType> TempCallbacks;

	};


}