#include "CustomGrid.h"
#include "../../metadata/KoGaMaAPI.KoGaMa.h"
#include <MinHook.h>
#include "../LoggerService.h"
#include <imgui.h>
#include <format>



namespace {
    void(*Execute_Old)(void* instance, void* methodInfo);
    std::array<float, 3>(*GetClosestGridPoint_Old)(std::array<float, 3> worldPosition, std::array<float, 4> rotation, float gridSize, std::array<float, 3> scale, void* methodInfo);

}
void KoGaMaTools::Services::CustomGrid::Execute(void* instance, void* methodInfo)
{
    if (Enabled)
    {
        KoGaMaAPI::KoGaMa::ESTranslate::f_gridSize.Set(instance, GridSize);
    }
    Execute_Old(instance, methodInfo);
}

std::array<float, 3> KoGaMaTools::Services::CustomGrid::GetClosestGridPoint(std::array<float, 3> worldPosition, std::array<float, 4> rotation, float gridSize, std::array<float, 3> scale, void* methodInfo)
{
    auto logger = LoggerService::GetMainTest();

    logger->Info(std::format("Enabled: {}\nGridSize: {}", Enabled, GridSize));
    if (Enabled)
        gridSize = GridSize;

    return GetClosestGridPoint_Old(worldPosition, rotation, gridSize, scale, methodInfo);
}

void KoGaMaTools::Services::CustomGrid::Install()
{
    auto logger = LoggerService::GetMainTest();
    auto methodPtr1 = (void**)KoGaMaAPI::KoGaMa::ESTranslate::m_Execute.ptr;
    auto methodPtr2 = (void**)KoGaMaAPI::KoGaMa::SharedCubeFunctions::m_GetClosestGridPoint.ptr;

    logger->Assert(MH_CreateHook(*methodPtr1, Execute,(void**)&Execute_Old) == MH_OK,"CustomGrid - Create Hook #1");
    logger->Assert(MH_CreateHook(*methodPtr2, GetClosestGridPoint, (void**)&GetClosestGridPoint_Old) == MH_OK, "CustomGrid - Create Hook #2");

    logger->Assert(MH_EnableHook(*methodPtr1) == MH_OK, "CustomGrid - Enable Hook #1");
    logger->Assert(MH_EnableHook(*methodPtr2) == MH_OK, "CustomGrid - Enable Hook #2");

}

void KoGaMaTools::Services::CustomGrid::Render()
{
    // Main Toggle
    ImGui::Checkbox("Enable Custom Grid", &Enabled);

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
