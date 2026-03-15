#include "CustomGrid.h"
#include "metadata/KoGaMaAPI.KoGaMa.h"
#include "../LoggerService.h"
#include "../Common/ConfigService.h"
#include "../../Helpers/HookHelper.h"
#include <imgui.h>
#include <kogama-tools/Resources/resource.h>


namespace {
    void(*Execute_Old)(void* instance, void* methodInfo);
    KoGaMaTools::Types::Vector3(*GetClosestGridPoint_Old)(KoGaMaTools::Types::Vector3 worldPosition, KoGaMaTools::Types::Quaternion rotation, float gridSize, KoGaMaTools::Types::Vector3 scale, void* methodInfo);

}
void KoGaMaTools::Services::CustomGrid::Execute(void* instance, void* methodInfo)
{
    if (Instance->Enabled)
    {
        KoGaMaAPI::KoGaMa::ESTranslate::f_gridSize.Set(instance, Instance->GridSize);
    }
    Execute_Old(instance, methodInfo);
}

KoGaMaTools::Types::Vector3 KoGaMaTools::Services::CustomGrid::GetClosestGridPoint(KoGaMaTools::Types::Vector3 worldPosition, KoGaMaTools::Types::Quaternion rotation, float gridSize, KoGaMaTools::Types::Vector3 scale, void* methodInfo)
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
    auto hookingService = diContainer.Get<HookingService>();
    textureManager = diContainer.Get<UI::ITextureManager>();

    LoadConfig(configService->GetConfig());

    const char* module = "CustomGrid";
    Helpers::HookHelper::HookDesc descs[] =
    {
        {(void**)KoGaMaAPI::KoGaMa::ESTranslate::m_Execute.ptr, Execute, (void**)&Execute_Old},
        {(void**)KoGaMaAPI::KoGaMa::SharedCubeFunctions::m_GetClosestGridPoint.ptr, GetClosestGridPoint, (void**)&GetClosestGridPoint_Old},
    };
    Helpers::HookHelper::InstallHooks(logger, module, hookingService, descs);
}

void KoGaMaTools::Services::CustomGrid::Render()
{
    
    ImGui::Image(textureManager->GetTexture(IDB_PNG9), ImVec2(24, 24));
    ImGui::SameLine();
    ImGui::SeparatorText("Grid Configuration");

    ImGui::Checkbox("Enable", &Enabled);

    ImGui::BeginDisabled(!Enabled);
    {
        ImGui::Indent(10.0f);
        ImGui::Spacing();

        
        ImGui::Image(textureManager->GetTexture(IDB_PNG10), ImVec2(24, 24));
        ImGui::SameLine();
        ImGui::PushItemWidth(200);
        if (ImGui::SliderFloat("Grid Size##customgrid", &GridSize, 0.001f, 5.0f, "%.3f units"))
        {
            gridPreset = 3;
        }

        if (ImGui::IsItemHovered())
            ImGui::SetTooltip("Adjusts the snapping increment. Smaller = more precision.");

        const char* presets[] = { "Small (0.025)", "Medium (0.5)", "Default (1.0)", "Custom" };

        ImGui::Image(textureManager->GetTexture(IDB_PNG11), ImVec2(24, 24)); 
        ImGui::SameLine();

        if (ImGui::Combo("Presets", &gridPreset, presets, IM_ARRAYSIZE(presets)))
        {
            if (gridPreset == 0) GridSize = 0.025f;
            else if (gridPreset == 1) GridSize = 0.5f;
            else if (gridPreset == 2) GridSize = 1.0f;
        }

        if (ImGui::IsItemHovered())
            ImGui::SetTooltip("Choose a predefined grid size for faster snapping.");

        ImGui::PopItemWidth();
        ImGui::Unindent(10.0f);
    }
    ImGui::EndDisabled();
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
bool KoGaMaTools::Services::CustomGrid::Resolve(TextCommandService::CommandData& command)
{
    if (command.name != L"grid") return false;

    if (command.args.empty()) {
        this->Enabled = !this->Enabled;
    }
    else {
        std::wstring_view arg = command.args[0];

        if (arg == L"on") {
            this->Enabled = true;
        }
        else if (arg == L"off") {
            this->Enabled = false;
        }
        else {
            // Tenta converter o argumento para float (Tamanho do Grid)
            try {
                // Convertemos wstring_view para string comum para usar stof
                std::wstring argStr(arg);
                float value = std::stof(argStr);
                
                this->GridSize = value;
                this->Enabled = true; // Ativa automaticamente ao mudar o valor

                TextCommandService::NotifyUser("Grid Size set to: " + std::to_string(value));
                return true;
            }
            catch (...) {
                TextCommandService::NotifyUser("Usage: /grid <on/off/value>");
                return true;
            }
        }
    }

    // Feedback visual do estado
    TextCommandService::NotifyUser(this->Enabled ? "Custom Grid: ON" : "Custom Grid: OFF");
    return true;
}

std::string_view KoGaMaTools::Services::CustomGrid::GetCommandHelp()
{
	return "/grid: Toggle or set custom grid size for snapping.\n"
		   "Usage: /grid [on/off/value] - Set numeric value to change grid size";
}
