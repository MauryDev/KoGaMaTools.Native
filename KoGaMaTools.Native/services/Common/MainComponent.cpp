#include "MainComponent.h"
#include <Tools.Il2Cpp.ICalls.h>
#include "metadata/KoGaMaAPI.KoGaMa.h"
namespace {
	void(*oldUpdate)(void* instance);
}
void KoGaMaTools::Services::MainComponent::Install()
{

	Instance = new MainComponent();
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

void KoGaMaTools::Services::MainComponent::RemoveCallback(std::string name)
{
	std::lock_guard<std::mutex> lock(mtx);

	Callbacks.erase(name);
}

void KoGaMaTools::Services::MainComponent::Update(void* instance)
{
	oldUpdate(instance);
	std::lock_guard<std::mutex> lock(Instance->mtx);
	for (auto& [name, callback] : Instance->Callbacks)
	{
		callback(nullptr);
	}
	for (auto& tempCallback : Instance->TempCallbacks)
	{
		tempCallback(nullptr);
	}

	Instance->TempCallbacks.clear();
}
