#include "ModelService.h"
#include <imgui.h>
#include "ModelUtils.h"
#include <kogama-tools/Resources/resource.h>
#include <portable-file-dialogs.h>
#include <thread>
void KoGaMaTools::Services::ModelModule::ModelService::Init(Core::DIContainer& di)
{
	Instance = di.Get<ModelService>();
	copyService = di.Get<CopyModelService>();
	pasteService = di.Get<PasteModelService>();
	mainComponent = di.Get<MainComponent>();
    customModelScale = di.Get<CustomModelScale>();

	textureManager = di.Get<UI::ITextureManager>();
	fileService = di.Get<IFileService>();
}

void KoGaMaTools::Services::ModelModule::ModelService::Render()
{
    ImGui::BeginGroup();


    ImGui::TextDisabled("Model Tools");
    ImGui::Spacing();

    customModelScale->Render();

    ImGui::Spacing();
    ImGui::Spacing();

    if (ImGui::ImageButton("##CopyBtn", textureManager->GetTexture(IDB_PNG6), ImVec2(32, 32))) {
        Execute_CopyModel();
    }
    if (ImGui::IsItemHovered()) ImGui::SetTooltip("Copy Model");

    ImGui::SameLine();


    if (ImGui::ImageButton("##PasteBtn", textureManager->GetTexture(IDB_PNG7), ImVec2(32, 32))) {
        Execute_PasteModel();
    }
    if (ImGui::IsItemHovered()) ImGui::SetTooltip("Paste Model");

	ImGui::TextDisabled("File Operations");
    ImGui::BeginDisabled(isBusy);

    if (ImGui::ImageButton("##ExportFiletBtn", textureManager->GetTexture(IDB_PNG16), ImVec2(32, 32))) {
		isBusy = true;
        std::thread([this]() {this->Execute_SaveModel(); }).detach();

    }
    if (ImGui::IsItemHovered()) ImGui::SetTooltip("Export Model");

    ImGui::SameLine();

    if (ImGui::ImageButton("##ImportFileBtn", textureManager->GetTexture(IDB_PNG17), ImVec2(32, 32))) {
        isBusy = true;
        std::thread([this]() {this->Execute_LoadModel(); }).detach();
    }
    if (ImGui::IsItemHovered()) ImGui::SetTooltip("Load Model");

    if (isBusy) {
        ImGui::Text("Processing...");
    }

	ImGui::EndDisabled();

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

void KoGaMaTools::Services::ModelModule::ModelService::Execute_CopyModel()
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

void KoGaMaTools::Services::ModelModule::ModelService::Execute_PasteModel()
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

void KoGaMaTools::Services::ModelModule::ModelService::Execute_SaveModel()
{
    auto filePath = pfd::save_file("Save model config").result();
    if (filePath.empty())
        return;

    this->mainComponent->ExecuteCallback([filePath](void*)
        {
            try
            {
                const auto& cubes = Instance->copyService->copiedCubes;

                if (cubes.empty())
                    return;

                auto msgpack = nlohmann::json::to_msgpack(cubes);

                std::span<const char> buffer(
                    reinterpret_cast<const char*>(msgpack.data()),
                    msgpack.size()
                );

                if (!Instance->fileService->WriteBinary(filePath, buffer))
                {
                    // TODO: log erro
                }
            }
            catch (const std::exception& e)
            {
                // TODO: log erro (e.what())
            }
            Instance->isBusy = false;

        });
}
void KoGaMaTools::Services::ModelModule::ModelService::Execute_LoadModel()
{
    auto selectedItems = pfd::open_file("Select a file").result();
    if (selectedItems.empty())
        return;

    auto filePath = selectedItems[0];

    this->mainComponent->ExecuteCallback([filePath](void*)
        {
            try
            {
                auto data = Instance->fileService->ReadBinary(filePath);

                if (!data || data->empty())
                {
                    // TODO: log erro
                    return;
                }

                auto jsonData = nlohmann::json::from_msgpack(*data);

                Instance->copyService->copiedCubes =
                    jsonData.get<std::vector<CubeInfo>>();
            }
            catch (const std::exception& e)
            {
                // TODO: log erro (arquivo inválido / corrompido)
            }
            Instance->isBusy = false;
        });
}
