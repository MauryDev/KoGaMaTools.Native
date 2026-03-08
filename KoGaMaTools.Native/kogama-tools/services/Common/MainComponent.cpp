#include "MainComponent.h"
#include <Tools.Il2Cpp.ICalls.h>
#include "metadata/KoGaMaAPI.KoGaMa.h"
namespace {
	void(*oldUpdate)(void* instance);
}
void KoGaMaTools::Services::MainComponent::Init(Core::DIContainer& di)
{

	Instance = di.Get<MainComponent>();
	Tools::Il2Cpp::Utils::HookFn(KoGaMaAPI::KoGaMa::MVGameControllerBase::m_Update, Update, (void**)&oldUpdate);
}

void KoGaMaTools::Services::MainComponent::AddCallback(const std::string& name, CallbackType callback)
{
	std::lock_guard<std::mutex> lock(mtx);

	Callbacks[name] = callback;
}

void KoGaMaTools::Services::MainComponent::ExecuteCallback(CallbackType callback)
{
	std::lock_guard<std::mutex> lock(mtx);
	TempCallbacks.push_back(callback);
}

void KoGaMaTools::Services::MainComponent::AddCoroutine(TaskCoroutine coroutine)
{
	std::lock_guard<std::mutex> lock(mtx);
	CallbacksCoroutine.push_back(std::move(coroutine));
}

void KoGaMaTools::Services::MainComponent::RemoveCallback(std::string name)
{
	std::lock_guard<std::mutex> lock(mtx);

	Callbacks.erase(name);
}

void KoGaMaTools::Services::MainComponent::Update(void* instance)
{
    oldUpdate(instance);

    std::unordered_map<std::string, CallbackType > callbacks_to_run;
    std::vector<std::function<void(void*)>> temp_to_run;
    std::vector<TaskCoroutine> coroutines_to_process;

    {
        std::lock_guard<std::mutex> lock(Instance->mtx);

        callbacks_to_run = Instance->Callbacks;

        std::swap(temp_to_run, Instance->TempCallbacks);
        std::swap(coroutines_to_process, Instance->CallbacksCoroutine);
    }


    for (auto& [name, callback] : callbacks_to_run)
    {
        callback(nullptr);
    }

    for (auto& tempCallback : temp_to_run)
    {
        tempCallback(nullptr);
    }

    auto it = std::remove_if(coroutines_to_process.begin(), coroutines_to_process.end(),
        [](auto& c) {
            return !c.next();
        });

    coroutines_to_process.erase(it, coroutines_to_process.end());

    {
        std::lock_guard<std::mutex> lock(Instance->mtx);

        
        Instance->CallbacksCoroutine.insert(
            Instance->CallbacksCoroutine.end(),
            std::make_move_iterator(coroutines_to_process.begin()),
            std::make_move_iterator(coroutines_to_process.end())
        );
    }
}

bool KoGaMaTools::Services::MainComponent::TaskCoroutine::next()
{
	if (handle && !handle.done()) {
		handle.resume();
		return !handle.done();
	}
	return false;
}
