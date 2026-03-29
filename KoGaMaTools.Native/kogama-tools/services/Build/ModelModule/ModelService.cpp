#include "ModelService.h"
#include <imgui.h>
#include "ModelUtils.h"
#include <kogama-tools/Resources/resource.h>

void KoGaMaTools::Services::ModelModule::ModelService::Init(Core::DIContainer& di)
{
	Instance = di.Get<ModelService>();
	copyService = di.Get<CopyModelService>();
	pasteService = di.Get<PasteModelService>();
	mainComponent = di.Get<MainComponent>();
    customModelScale = di.Get<CustomModelScale>();

	textureManager = di.Get<UI::ITextureManager>();
}

void KoGaMaTools::Services::ModelModule::ModelService::Render()
{
    ImGui::BeginGroup();


    ImGui::TextDisabled("Model Tools");
    ImGui::Spacing();

    customModelScale->Render();

    ImGui::Spacing();

    if (ImGui::ImageButton("##CopyBtn", textureManager->GetTexture(IDB_PNG6), ImVec2(32, 32))) {
        UI_CopyModel();
    }
    if (ImGui::IsItemHovered()) ImGui::SetTooltip("Copy Model");

    ImGui::SameLine();

    if (ImGui::ImageButton("##PasteBtn", textureManager->GetTexture(IDB_PNG7), ImVec2(32, 32))) {
        UI_PasteModel();
    }
    if (ImGui::IsItemHovered()) ImGui::SetTooltip("Paste Model");

    ImGui::Spacing();

    ImGui::AlignTextToFramePadding();
    ImGui::Image(textureManager->GetTexture(IDB_PNG8), ImVec2(24, 24));
    ImGui::SameLine();
    ImGui::Text("Options:");

    ImGui::Indent(10.0f);

    ImGui::Checkbox("##ReplaceOld", &pasteService->ReplaceOld);
    ImGui::SameLine();
    ImGui::Text("Clean workspace on paste");
    if (ImGui::IsItemHovered()) {
        ImGui::SetTooltip("Removes existing cubes before placing the new model to avoid overlapping.");
    }

    ImGui::Unindent(10.0f);

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
