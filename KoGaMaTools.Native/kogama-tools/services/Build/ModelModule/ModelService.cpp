#include "ModelService.h"
#include <imgui.h>
#include "ModelUtils.h"
void KoGaMaTools::Services::ModelModule::ModelService::Init(Core::DIContainer& di)
{
	Instance = di.Get<ModelService>();
	copyService = di.Get<CopyModelService>();
	pasteService = di.Get<PasteModelService>();
	mainComponent = di.Get<MainComponent>();
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
        mainComponent->ExecuteCallback([modelCurrent, this](void*) {
            copyService->CopyModel(modelCurrent);
            TextCommandService::NotifyUser("Model data copied from current model.");
        });
        

    }
    else {
        mainComponent->ExecuteCallback([](void*) {
            TextCommandService::NotifyUser("No model selected to copy.");

        });
    }
}

void KoGaMaTools::Services::ModelModule::ModelService::UI_PasteModel()
{
    auto modelCurrent = ModelUtils::GetCurrentModel();
    if (!modelCurrent.isNull())
    {
        mainComponent->ExecuteCallback([this, modelCurrent](void*) {
            this->pasteService->PasteCube(modelCurrent);
            TextCommandService::NotifyUser("Pasting model to current model.");
        });
        
    }
    else {
        mainComponent->ExecuteCallback([](void*) {
            TextCommandService::NotifyUser("No model selected to copy.");

            });
    }
}
