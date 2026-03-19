#include "ThemeService.h"
#include "ThemeUtils.h"
#include <kogama-tools/Resources/resource.h>
void KoGaMaTools::Services::ThemeService::Init(Core::DIContainer& di)
{
	Instance = di.Get<ThemeService>();
	mainComponent = di.Get<MainComponent>();
	textureManager = di.Get<UI::ITextureManager>();
    mainComponent->AddCallback("ThemeService_GetThemes", [this](void*) {
        LoadThemes();
    });
}

void KoGaMaTools::Services::ThemeService::Render()
{
    ImGui::Spacing();
    ImGui::Image(textureManager->GetTexture(IDB_PNG14), { 24,24 });
	ImGui::SameLine();
    ImGui::SeparatorText("Theme Manager");
    ImGui::Spacing();

    ImGui::Text("Select Theme");
    ImGui::Spacing();

    ImGui::SetNextItemWidth(-1);

    const char* comboPreviewValue = (selectedThemeIdx >= 0 && selectedThemeIdx < Themes.size())
        ? Themes[selectedThemeIdx].c_str()
        : "Select a theme";
    if (ImGui::BeginCombo("##selectTheme", comboPreviewValue))
    {
        for (int i = 0; i < Themes.size(); i++)
        {
            bool is_selected = (selectedThemeIdx == i);

            if (ImGui::Selectable(Themes[i].c_str(), is_selected))
                selectedThemeIdx = i;

            if (is_selected)
                ImGui::SetItemDefaultFocus();
        }

        ImGui::EndCombo();
    }
    

    ImGui::Spacing();
    ImGui::Separator();
    ImGui::Spacing();

    float buttonWidth = (ImGui::GetContentRegionAvail().x - 10) / 2;
    

    if (ImGui::ImageButton("##theme-service-apply", textureManager->GetTexture(IDB_PNG13), { 24,24 }))
    {
        mainComponent->ExecuteCallback([this](void*) {
            ApplyTheme();
		});
    }
    if (ImGui::IsItemHovered()) ImGui::SetTooltip("Apply Theme");
    ImGui::SameLine();
    if (ImGui::ImageButton("##theme-service-remove", textureManager->GetTexture(IDB_PNG15), { 24,24 }))
    {
        mainComponent->ExecuteCallback([this](void*) {
            RemoveTheme();
        });
    }

    if (ImGui::IsItemHovered()) ImGui::SetTooltip("Remove Theme");

}

bool KoGaMaTools::Services::ThemeService::Resolve(TextCommandService::CommandData& command)
{
    if (command.name != L"theme" && command.name != L"t")
        return false;

    if (command.args.empty()) {
        TextCommandService::NotifyUser("Uso: /theme [set/remove/list]");
        return true;
    }

    std::wstring_view subCommand = command.args[0];

    if (subCommand == L"list") {
        LoadThemes();
        TextCommandService::NotifyUser("Lista de temas atualizada no menu!");
        return true;
    }

    if (subCommand == L"set" && command.args.size() >= 2) {
        std::wstring target(command.args[1]);
        std::string targetStr(target.begin(), target.end()); // Conversão simples para busca

        for (size_t i = 0; i < Themes.size(); ++i) {
            if (Themes[i] == targetStr) {
                selectedThemeIdx = (int)i;
                ApplyTheme();

                std::string msg = "Tema aplicado: " + Themes[i];
                TextCommandService::NotifyUser(msg);
                return true;
            }
        }
        TextCommandService::NotifyUser("Erro: Tema nao encontrado.");
        return true;
    }

    if (subCommand == L"remove" || subCommand == L"clear") {
        RemoveTheme();
        TextCommandService::NotifyUser("Tema removido com sucesso.");
        return true;
    }

    return true;
}
std::string_view KoGaMaTools::Services::ThemeService::GetCommandHelp()
{
    return "Theme Manager:\n"
        "  /theme set <name> - Applies a specific theme\n"
        "  /theme remove     - Removes the current theme\n"
        "  /theme list       - Refresh theme list";
}

void KoGaMaTools::Services::ThemeService::LoadThemes()
{
    auto themes = ThemeUtils::GetAllThemes();
    if (!themes.empty())
    {
        mainComponent->RemoveCallback("ThemeService_GetThemes");
        Themes = themes;
    }
}

void KoGaMaTools::Services::ThemeService::ApplyTheme()
{
    if (ThemeCurrent != nullptr)
    {
        ThemeUtils::DestroyTheme(ThemeCurrent);
        ThemeCurrent = nullptr;
    }
    ThemeCurrent = ThemeUtils::CreateTheme(Tools::Il2Cpp::Il2CppString::New(Themes.at(selectedThemeIdx).c_str()));
}

void KoGaMaTools::Services::ThemeService::RemoveTheme()
{
    if (ThemeCurrent != nullptr)
    {
        ThemeUtils::DestroyTheme(ThemeCurrent);
        ThemeCurrent = nullptr;
    }
}
