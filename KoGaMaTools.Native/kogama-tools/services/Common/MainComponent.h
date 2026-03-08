#pragma once
#include <cinttypes>
#include <unordered_map>
#include <functional>
#include <string>
#include <mutex>
#include "../../Core/DITools.h"
#include <coroutine>
namespace KoGaMaTools::Services {
	struct MainComponent: Core::IInitializable  {

		struct TaskCoroutine {
			struct promise_type {
				TaskCoroutine get_return_object() {
					return { std::coroutine_handle<promise_type>::from_promise(*this) };
				}
				std::suspend_never initial_suspend() { return {}; }
				std::suspend_always final_suspend() noexcept { return {}; }
				void return_void() {} // This allows the coroutine to end without a value
				void unhandled_exception() { std::terminate(); }
				// Se quiser usar co_yield sem valor nenhum:
				std::suspend_always yield_value(std::monostate) { return {}; }
			};
			std::coroutine_handle<promise_type> handle;

			// Constructor to store the handle
			TaskCoroutine(std::coroutine_handle<promise_type> h) : handle(h) {}
			TaskCoroutine(TaskCoroutine&& other) noexcept : handle(other.handle) {
				other.handle = nullptr;
			}
			TaskCoroutine& operator=(TaskCoroutine&& other) noexcept {
				if (this != &other) {
					if (handle) handle.destroy(); // Limpa o atual antes de receber o novo
					handle = other.handle;
					other.handle = nullptr;
				}
				return *this;
			}

			TaskCoroutine(const TaskCoroutine&) = delete;
			TaskCoroutine& operator=(const TaskCoroutine&) = delete;
			// Destructor to clean up the coroutine frame
			~TaskCoroutine() { if (handle) handle.destroy(); }

			// Our "Move Next" function
			bool next();
		};


		using CallbackType = std::function<void(void*)>;
		static inline std::shared_ptr<MainComponent> Instance = nullptr;
		std::mutex mtx;
		void Init(Core::DIContainer& di) override;
		void AddCallback(const std::string& name, CallbackType callback);
		void ExecuteCallback(CallbackType callback);

		void AddCoroutine(TaskCoroutine coroutine);


		void RemoveCallback(std::string name);
		static void Update(void* instance);
		std::unordered_map<std::string, CallbackType> Callbacks;
		std::vector<CallbackType> TempCallbacks;
		std::vector<TaskCoroutine> CallbacksCoroutine;


	};


}