#include "FastRespawn.h"
#include <MinHook.h>
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "../LoggerService.h"
#include <imgui.h>

using namespace Tools::Il2Cpp;

namespace {
	bool(*Respawn_old)(void* instance);
	void(*Update_old)(void* instance);


}

void KoGaMaTools::Services::FastRespawn::Install()
{
	auto logger = LoggerService::GetMainTest();
	auto method1 = (void**)KoGaMaAPI::KoGaMa::PlayButton::m_HandlePlayAvailable.ptr;
	auto method2 = (void**)KoGaMaAPI::KoGaMa::DeathUIBoostMenuController::m_Update.ptr;

	logger->Assert(method1 != nullptr, "[FastRespawn] - Null methodPtr #1");
	logger->Assert(*method1 != nullptr, "[FastRespawn] - Null target #1");
	logger->Assert(method2 != nullptr, "[FastRespawn] - Null methodPtr #2");
	logger->Assert(*method2 != nullptr, "[FastRespawn] - Null target #2");

	logger->Assert(
		MH_CreateHook(*method1, OnExecute, (void**)&Respawn_old) == MH_OK,
		"[FastRespawn] - CreateHook #1"
	);
	logger->Assert(
		MH_CreateHook(*method2, OnUpdate, (void**)&Update_old) == MH_OK,
		"[FastRespawn] - CreateHook #2"
	);
	logger->Assert(
		MH_EnableHook(*method1) == MH_OK,
		"[FastRespawn] - EnableHook #1"
	);
	logger->Assert(
		MH_EnableHook(*method2) == MH_OK,
		"[FastRespawn] - EnableHook #2"
	);
}

void KoGaMaTools::Services::FastRespawn::Render()
{
	ImGui::Checkbox("Enable Fast Respawn", &Enable);

}

bool KoGaMaTools::Services::FastRespawn::OnExecute(void* instance)
{
	if (KoGaMaTools::Services::FastRespawn::Enable)
		return false;
	return Respawn_old(instance);
}

void KoGaMaTools::Services::FastRespawn::OnUpdate(void* instance)
{
	if (KoGaMaTools::Services::FastRespawn::Enable)
	{
		KoGaMaAPI::KoGaMa::DeathUIBoostMenuController::f_startTime.Set(Il2CppObject(instance), 0.0f);
	}
	Update_old(instance);
}
