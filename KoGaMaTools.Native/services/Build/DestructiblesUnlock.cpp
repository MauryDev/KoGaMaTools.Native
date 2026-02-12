#include "DestructiblesUnlock.h"
#include <MinHook.h>
#include "../../metadata/KoGaMaAPI.KoGaMa.h"
#include <imgui.h>

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
	// typeof(MVWorldObjectClient), "GetClosestGridPoint"
	// change gridSize = GridSize;
	auto methodPtr = (void**)KoGaMaAPI::KoGaMa::MVMaterial::m_get_IsAvailable.ptr;
	MH_CreateHook(*methodPtr, IsAvailable, (void**)&IsAvailable_Old);
	MH_EnableHook(*methodPtr);
}

void KoGaMaTools::Services::DestructiblesUnlock::Render()
{
	ImGui::Checkbox("Destructibles Unlock", &Unlock);

}
