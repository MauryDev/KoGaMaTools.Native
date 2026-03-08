#include "ModelService.h"
#include <imgui.h>
void KoGaMaTools::Services::ModelModule::ModelService::Init(Core::DIContainer& di)
{
	Instance = di.Get<ModelService>();
	copyService = di.Get<CopyModelService>();
	pasteService = di.Get<PasteModelService>();
}

void KoGaMaTools::Services::ModelModule::ModelService::Render()
{
    ImGui::BeginGroup();

    ImGui::TextDisabled("MODEL MANIPULATION");
    ImGui::Spacing();

    // Bloco de Ações Principais
    if (ImGui::Button(" Copy ", ImVec2(100, 30))) { /* Lógica */ }
    ImGui::SameLine();
    if (ImGui::Button(" Paste ", ImVec2(100, 30))) { /* Lógica */ }

    ImGui::Spacing();

    ImGui::AlignTextToFramePadding();
    ImGui::Text("Options:");
    ImGui::SameLine();

    ImGui::BeginGroup();
    ImGui::Checkbox("##ReplaceOld", &pasteService->ReplaceOld);
    ImGui::SameLine();
    ImGui::Text("Clean workspace on paste");
    ImGui::EndGroup();

    if (ImGui::IsItemHovered()) {
        ImGui::SetTooltip("Removes existing cubes before placing the new model to avoid overlapping.");
    }

    ImGui::EndGroup();
}
