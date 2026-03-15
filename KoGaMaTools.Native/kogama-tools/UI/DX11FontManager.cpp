#include "DX11FontManager.h"
#include <string>
#include <format>
#include <kogama-tools/services/KieroUI.h>
#include <imgui_impl_dx11.h>
KoGaMaTools::UI::DX11FontManager::DX11FontManager(HMODULE module)
{
	this->_module = module;
}

BOOL CALLBACK KoGaMaTools::UI::DX11FontManager::EnumResourcesCallback(HMODULE hModule, LPCSTR lpszType, LPSTR lpszName, LONG_PTR lParam)
{
    auto* manager = reinterpret_cast<DX11FontManager*>(lParam);

    std::string resourceName;
    if (IS_INTRESOURCE(lpszName)) {
        resourceName = "ID_" + std::to_string(reinterpret_cast<uintptr_t>(lpszName));
    }
    else {
        resourceName = lpszName;
    }

    HRSRC hRes = FindResourceA(hModule, lpszName, lpszType);
    if (!hRes) return TRUE;

    DWORD resSize = SizeofResource(hModule, hRes);
    HGLOBAL hResData = LoadResource(hModule, hRes);
    if (!hResData) return TRUE;

    void* pResBuffer = LockResource(hResData);

    std::span<const std::byte> data(static_cast<const std::byte*>(pResBuffer), resSize);
    

	manager->LoadFromMemory(resourceName, data, 16.0f);
    return TRUE; 
}

void KoGaMaTools::UI::DX11FontManager::Init(Core::DIContainer& di)
{

}

bool KoGaMaTools::UI::DX11FontManager::Initialize()
{
    Services::KieroUI::SetOnInited([this]() {
        EnumResourceNamesA(_module, "TTF", EnumResourcesCallback, reinterpret_cast<LONG_PTR>(this));

        ImGuiIO& io = ImGui::GetIO();
        io.Fonts->AddFontDefault();

        });

    return TRUE;
}

void KoGaMaTools::UI::DX11FontManager::Shutdown()
{
	Clear();

}

ImFont* KoGaMaTools::UI::DX11FontManager::LoadFromFile(const std::string_view& name, const char* path, float size)
{
    ImGuiIO& io = ImGui::GetIO();
    ImFont* font = io.Fonts->AddFontFromFileTTF(path, size);
    if (font) {
        m_fonts[std::string(name)] = font;
        return font;
    }
	return nullptr;
}

ImFont* KoGaMaTools::UI::DX11FontManager::LoadFromMemory(const std::string_view& name, std::span<const std::byte> data, float size)
{
	ImGuiIO& io = ImGui::GetIO();

	ImFont* font = io.Fonts->AddFontFromMemoryTTF((void*)data.data(), (int)data.size(), size);
    if (font) {
        m_fonts[std::string(name)] = font;
        return font;
	}
    return nullptr;
}

ImFont* KoGaMaTools::UI::DX11FontManager::GetFont(const char* name)
{
	auto it = m_fonts.find(std::string(name));
	return (it != m_fonts.end()) ? it->second : nullptr;
}

ImFont* KoGaMaTools::UI::DX11FontManager::GetFont(int id)
{
    char buffer[30];
    auto result = std::format_to(buffer, "ID_{}", id);
    *result = '\0';
    return this->GetFont(buffer);
}

void KoGaMaTools::UI::DX11FontManager::Clear()
{
    ImGuiIO& io = ImGui::GetIO();
    io.Fonts->ClearInputData();
    io.Fonts->ClearFonts();

	m_fonts.clear();
}
