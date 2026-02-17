#include "AntiAfk.h"
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "../Common/MainComponent.h"
#include <imgui.h>

void KoGaMaTools::Services::AntiAfk::Install()
{

}

void KoGaMaTools::Services::AntiAfk::Render()
{
	if (ImGui::Checkbox("Enable Anti-AFK", &Enable))
	{
		MainComponent::Instance->ExecuteCallback([](void*) {
			KoGaMaAPI::KoGaMa::AwayMonitor::m_set_IdleKickEnabled(!Enable);

			});
	}

}
