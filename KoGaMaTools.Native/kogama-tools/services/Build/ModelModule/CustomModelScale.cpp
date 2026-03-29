#include "CustomModelScale.h"
#include <kogama-tools/Helpers/HookHelper.h>
#include <metadata/KoGaMaAPI.KoGaMa.h>


namespace {
    void (*m_OnAddNewPrototype_Old)(void* that, void* name, float scale);
}
void KoGaMaTools::Services::ModelModule::CustomModelScale::Init(Core::DIContainer& di)
{
	namespace K = KoGaMaAPI::KoGaMa;
	Instance = di.Get<CustomModelScale>();
	auto logger = di.Get<Services::LoggerService>();
    auto hooking = di.Get<Services::HookingService>();
    auto configService = di.Get<ConfigService>();

    LoadConfig(configService->GetConfig());

    Helpers::HookHelper::HookDesc hooks[] = {
        {
            (void**)K::EditorWorldObjectCreation::m_OnAddNewPrototype.ptr,
            Hook_OnAddNewPrototype,
            (void**)&m_OnAddNewPrototype_Old
        }
    };
    Helpers::HookHelper::InstallHooks(
        logger,
        "CustomModelScale",
        hooking,
        hooks
	);
}

void KoGaMaTools::Services::ModelModule::CustomModelScale::LoadConfig(const nlohmann::json& value)
{
	Enabled = value.value("CustomModelScale.Enabled", Enabled);
	Scale = value.value("CustomModelScale.Scale", Scale);

}

void KoGaMaTools::Services::ModelModule::CustomModelScale::OnChangedConfig(const nlohmann::json& value)
{
	LoadConfig(value);

}

void KoGaMaTools::Services::ModelModule::CustomModelScale::OnSavingConfig(nlohmann::json& value)
{
	value["CustomModelScale.Enabled"] = Enabled;
	value["CustomModelScale.Scale"] = Scale;

}

bool KoGaMaTools::Services::ModelModule::CustomModelScale::Resolve(TextCommandService::CommandData& command)
{
    if (command.name != L"custommodelscale")
        return false;

    if (command.args.size() != 1)
        return false;

    const std::wstring_view arg = command.args[0];

    if (arg == L"on")
    {
        this->Enabled = true;
        return true;
    }
    else if (arg == L"off")
    {
        this->Enabled = false;
        return true;
    }

    try
    {
        std::wstring temp(arg); 
        float value = std::stof(temp);

        if (value <= 0.0f)
            return false;

        this->Scale = value;
        return true;
    }
    catch (...)
    {
        return false;
    }
}

std::string_view KoGaMaTools::Services::ModelModule::CustomModelScale::GetCommandHelp()
{
	return "custommodelscale <scale> - Set custom scale for models. Example: custommodelscale 1.5\n"
		"\n"
		"custommodelscale <on/off> - Enable or disable custom scaling";
}

void KoGaMaTools::Services::ModelModule::CustomModelScale::Render()
{
    float leftMargin = 12.0f;
    float rightMargin = 22.0f;
    float padding = 8.0f;

    float totalAvailWidth = ImGui::GetContentRegionAvail().x;
    float itemWidth = totalAvailWidth - leftMargin - rightMargin;

    ImVec2 startPos = ImGui::GetCursorScreenPos();
    ImGui::SetCursorPosX(ImGui::GetCursorPosX() + leftMargin);

    ImGui::PushItemWidth(itemWidth);
    ImGui::BeginGroup();

    ImGui::TextDisabled("Custom Scale");

    ImGui::Checkbox("Enable##CustomScale_Enable", &Enabled);
    if (ImGui::IsItemHovered())
        ImGui::SetTooltip("Enables custom scaling for newly created models.");

    ImGui::BeginDisabled(!Enabled);

    ImGui::TextUnformatted("Scale Multiplier");
    ImGui::InputFloat("##scale-multiplier", &Scale, 0.1f, 1.0f, "%.2f");

    if (ImGui::IsItemHovered())
        ImGui::SetTooltip("Applies ONLY when creating new models.\nDoes not affect existing ones.");

    ImGui::EndDisabled();

    ImGui::EndGroup();

    ImGui::PopItemWidth();

    ImVec2 min = startPos;
    ImVec2 max = ImVec2(min.x + leftMargin + itemWidth, ImGui::GetItemRectMax().y);

    min.x += (leftMargin - padding);
    min.y -= padding;
    max.x += padding;
    max.y += padding;

    ImU32 color = ImGui::GetColorU32(ImGuiCol_Border);
    ImGui::GetWindowDrawList()->AddRect(min, max, color, 4.0f);
}

void KoGaMaTools::Services::ModelModule::CustomModelScale::Hook_OnAddNewPrototype(void* that, void* name, float scale)
{
    if (Instance->Enabled)
    {
		scale = scale * Instance->Scale;
    }
	m_OnAddNewPrototype_Old(that, name, scale);

}
