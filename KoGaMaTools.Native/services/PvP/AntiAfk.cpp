#include "AntiAfk.h"
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "../Common/MainComponent.h"
#include <imgui.h>


void KoGaMaTools::Services::AntiAfk::Render()
{
	if (ImGui::Checkbox("Enabled Anti-AFK", &Enabled))
	{
		MainComponent::Instance->ExecuteCallback([](void*) {
			KoGaMaAPI::KoGaMa::AwayMonitor::m_set_IdleKickEnabled(!Instance->Enabled);
			});
	}
}

void KoGaMaTools::Services::AntiAfk::Init(Core::DIContainer& di)
{
	Instance = di.Get<AntiAfk>();

}
