#include "CustomGrid.h"
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include <MinHook.h>
#include "../LoggerService.h"
#include "../Common/ConfigService.h"
#include <imgui.h>
#include <format>



namespace {
    void(*Execute_Old)(void* instance, void* methodInfo);
    std::array<float, 3>(*GetClosestGridPoint_Old)(std::array<float, 3> worldPosition, std::array<float, 4> rotation, float gridSize, std::array<float, 3> scale, void* methodInfo);

}
void KoGaMaTools::Services::CustomGrid::Execute(void* instance, void* methodInfo)
{
    if (Instance->Enabled)
    {
        KoGaMaAPI::KoGaMa::ESTranslate::f_gridSize.Set(instance, Instance->GridSize);
    }
    Execute_Old(instance, methodInfo);
}

std::array<float, 3> KoGaMaTools::Services::CustomGrid::GetClosestGridPoint(std::array<float, 3> worldPosition, std::array<float, 4> rotation, float gridSize, std::array<float, 3> scale, void* methodInfo)
{

    if (Instance->Enabled)
        gridSize = Instance->GridSize;

    return GetClosestGridPoint_Old(worldPosition, rotation, gridSize, scale, methodInfo);
}

void KoGaMaTools::Services::CustomGrid::Init(Core::DIContainer& diContainer)
{
    Instance = diContainer.Get<CustomGrid>();
    auto logger = diContainer.Get<LoggerService>();
    auto configService = diContainer.Get<ConfigService>();
    
    LoadConfig(configService->GetConfig());

    auto methodPtr1 = (void**)KoGaMaAPI::KoGaMa::ESTranslate::m_Execute.ptr;
    auto methodPtr2 = (void**)KoGaMaAPI::KoGaMa::SharedCubeFunctions::m_GetClosestGridPoint.ptr;
    logger->Assert(methodPtr1 != nullptr && *methodPtr1 != nullptr,"[CustomGrid] - Method or Method Pointer is null");
    logger->Assert(
        MH_CreateHook(*methodPtr1, Execute,(void**)&Execute_Old) == MH_OK,
        "[CustomGrid] - Create Hook #1"
    );
    logger->Assert(
        MH_CreateHook(*methodPtr2, GetClosestGridPoint, (void**)&GetClosestGridPoint_Old) == MH_OK,
        "[CustomGrid] - Create Hook #2"
    );

    logger->Assert(
        MH_EnableHook(*methodPtr1) == MH_OK,
        "[CustomGrid] - Enabled Hook #1"
    );
    logger->Assert(
        MH_EnableHook(*methodPtr2) == MH_OK,
        "[CustomGrid] - Enabled Hook #2"
    );

}

void KoGaMaTools::Services::CustomGrid::Render()
{
    // Main Toggle
    ImGui::Checkbox("Enabled Custom Grid", &Enabled);

    // Keep UI stable by disabling instead of hiding
    ImGui::BeginDisabled(!Enabled);
    {
        ImGui::Indent(10.0f);

        // Slider with unit suffix
        ImGui::SliderFloat("Grid Size##customgrid", &GridSize, 0.001f, 5.0f, "%.3f units");

        if (ImGui::IsItemHovered())
            ImGui::SetTooltip("Adjusts the snapping increment. Smaller = more precision.");

        // Common Snap Presets (Standard KoGaMa/Engine sizes)
        ImGui::Text("Presets:");
        ImGui::SameLine();
        if (ImGui::Button("Small (0.025)")) { GridSize = 0.025f; }
        ImGui::SameLine();
        if (ImGui::Button("Medium (0.5)")) { GridSize = 0.5f; }
        ImGui::SameLine();
        if (ImGui::Button("Default (1.0)")) { GridSize = 1.0f; }

        ImGui::Unindent(10.0f);
    }
    ImGui::EndDisabled();

    ImGui::Separator();
}

void KoGaMaTools::Services::CustomGrid::LoadConfig(const nlohmann::json& value)
{
    this->Enabled = value.value("CustomGrid.Enabled", Enabled);
    this->GridSize = value.value("CustomGrid.GridSize", GridSize);
}


void KoGaMaTools::Services::CustomGrid::OnChangedConfig(const nlohmann::json& value)
{
    this->LoadConfig(value);
}

void KoGaMaTools::Services::CustomGrid::OnSavingConfig(nlohmann::json& value)
{
    value["CustomGrid.Enabled"] = this->Enabled;
	value["CustomGrid.GridSize"] = this->GridSize;
}
