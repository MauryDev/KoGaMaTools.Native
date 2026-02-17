#include "DestructiblesUnlock.h"
#include <MinHook.h>
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include <imgui.h>
#include "../LoggerService.h"

namespace {
	bool(*IsAvailable_Old)(void* instance, void* methodInfo);
}
bool KoGaMaTools::Services::DestructiblesUnlock::IsAvailable(void* instance, void* methodInfo)
{
	if (Unlock) return true;
	return IsAvailable_Old(instance, methodInfo);
}

void KoGaMaTools::Services::DestructiblesUnlock::Install()
{
    auto logger = LoggerService::GetMainTest();

    auto methodPtr = (void**)KoGaMaAPI::KoGaMa::MVMaterial::m_get_IsAvailable.ptr;

    logger->Assert(methodPtr != nullptr, "[DestructiblesUnlock] - Null methodPtr");
    logger->Assert(*methodPtr != nullptr, "[DestructiblesUnlock] - Null target");

    logger->Assert(
        MH_CreateHook(*methodPtr, IsAvailable, (void**)&IsAvailable_Old) == MH_OK,
        "[DestructiblesUnlock] - CreateHook"
    );

    logger->Assert(
        MH_EnableHook(*methodPtr) == MH_OK,
        "[DestructiblesUnlock] - EnableHook"
    );
}

void KoGaMaTools::Services::DestructiblesUnlock::Render()
{
	ImGui::Checkbox("Destructibles Unlock", &Unlock);

}
