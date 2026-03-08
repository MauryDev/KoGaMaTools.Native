#include "ModelService.h"
#include <imgui.h>
#include "ModelUtils.h"
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
    if (ImGui::Button(" Copy ", ImVec2(100, 30))) {
        UI_CopyModel();
    }
    ImGui::SameLine();
    if (ImGui::Button(" Paste ", ImVec2(100, 30))) {
        UI_PasteModel();
    }

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

void KoGaMaTools::Services::ModelModule::ModelService::UI_CopyModel()
{
    auto modelCurrent = ModelUtils::GetCurrentModel();
    if (!modelCurrent.isNull() && ModelUtils::IsOwner(modelCurrent))
    {
        copyService->CopyModel(modelCurrent);
        TextCommandService::NotifyUser("Model data copied from current model.");

    }
    else {
        TextCommandService::NotifyUser("No model selected to copy.");
    }
}

void KoGaMaTools::Services::ModelModule::ModelService::UI_PasteModel()
{
    auto modelCurrent = ModelUtils::GetCurrentModel();
    if (!modelCurrent.isNull())
    {
        this->pasteService->PasteCube(modelCurrent, this->pasteService->ReplaceOld, this->copyService->copiedCubes);
        TextCommandService::NotifyUser("Pasting model to current model.");
    }
    else {
        TextCommandService::NotifyUser("No model selected to paste.");
    }
}
