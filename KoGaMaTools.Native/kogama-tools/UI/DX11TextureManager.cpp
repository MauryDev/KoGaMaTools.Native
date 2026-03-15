#include "DX11TextureManager.h"
#include <format>
#include <kogama-tools/services/KieroUI.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

KoGaMaTools::UI::DX11TextureManager::DX11TextureManager(HMODULE _module):  _module(_module)
{
	this->m_pd3dDevice = nullptr;
}

KoGaMaTools::UI::DX11TextureManager::~DX11TextureManager()
{
	Clear();
}

BOOL CALLBACK KoGaMaTools::UI::DX11TextureManager::EnumResourcesCallback(HMODULE hModule, LPCSTR lpszType, LPSTR lpszName, LONG_PTR lParam)
{
    auto* manager = reinterpret_cast<DX11TextureManager*>(lParam);

    std::string resourceName;
    if (IS_INTRESOURCE(lpszName)) {
        resourceName = "ID_" + std::to_string(reinterpret_cast<uintptr_t>(lpszName));
    }
    else {
        resourceName = lpszName;
    }

    // Localizar o recurso no binário
    HRSRC hRes = FindResourceA(hModule, lpszName, lpszType);
    if (!hRes) return TRUE;

    DWORD resSize = SizeofResource(hModule, hRes);
    HGLOBAL hResData = LoadResource(hModule, hRes);
    if (!hResData) return TRUE;

    void* pResBuffer = LockResource(hResData);

    // Converter para span e carregar usando a função que já criamos
    std::span<const std::byte> data(static_cast<const std::byte*>(pResBuffer), resSize);
    manager->LoadTextureMemory(resourceName, data);

    return TRUE; // Continuar enumerando o próximo
}

void KoGaMaTools::UI::DX11TextureManager::Init(Core::DIContainer& di)
{
    this->Clear();
    Services::KieroUI::SetOnInited([this]() {
        auto device = Services::KieroUI::GetDevice();
		this->m_pd3dDevice = device;
        EnumResourceNamesA(_module, "PNG", EnumResourcesCallback, reinterpret_cast<LONG_PTR>(this));

    });
}

ImTextureID KoGaMaTools::UI::DX11TextureManager::GetTexture(const std::string_view& name) const
{
    auto it = m_textures.find(std::string(name));
    return (it != m_textures.end()) ? (ImTextureID)it->second : 0;
}

ImTextureID KoGaMaTools::UI::DX11TextureManager::GetTexture(int ResourceId) const
{
    char buffer[30];
    auto result = std::format_to(buffer, "ID_{}", ResourceId);
    *result = '\0';
    return this->GetTexture(buffer);
}

bool KoGaMaTools::UI::DX11TextureManager::LoadTexture(const std::string_view& name, const std::string_view& filePath)
{
    int width, height, channels;
    unsigned char* data = stbi_load(filePath.data(), &width, &height, &channels, 4);
    if (!data) return false;

    bool success = CreateDXResource(name, data, width, height);
    stbi_image_free(data);
    return success;
}

bool KoGaMaTools::UI::DX11TextureManager::LoadTextureMemory(const std::string_view& name, std::span<const std::byte> data)
{
    int width, height, channels;
    unsigned char* decodedData = stbi_load_from_memory(
        reinterpret_cast<const stbi_uc*>(data.data()), (int)data.size(),
        &width, &height, &channels, 4
    );

    if (!decodedData) return false;

    bool success = CreateDXResource(name, decodedData, width, height);
    stbi_image_free(decodedData);
    return success;
}

void KoGaMaTools::UI::DX11TextureManager::UnloadTexture(const std::string_view& name)
{
    auto it = m_textures.find(std::string(name));
    if (it != m_textures.end()) {
        it->second->Release();
        m_textures.erase(it);
    }
}

void KoGaMaTools::UI::DX11TextureManager::Clear()
{
    for (auto& [name, srv] : m_textures) {
        if (srv) srv->Release();
    }
    m_textures.clear();
}

bool KoGaMaTools::UI::DX11TextureManager::HasTexture(const std::string_view& name) const
{
    return m_textures.find(std::string(name)) != m_textures.end();
}

bool KoGaMaTools::UI::DX11TextureManager::CreateDXResource(const std::string_view& name, unsigned char* data, int w, int h)
{
    ID3D11ShaderResourceView* srv = nullptr;

    // 1. Criar a Texture2D
    D3D11_TEXTURE2D_DESC desc = {};
    desc.Width = w;
    desc.Height = h;
    desc.MipLevels = 1;
    desc.ArraySize = 1;
    desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    desc.SampleDesc.Count = 1;
    desc.Usage = D3D11_USAGE_DEFAULT;
    desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;

    ID3D11Texture2D* pTexture = nullptr;
    D3D11_SUBRESOURCE_DATA subResource = {};
    subResource.pSysMem = data;
    subResource.SysMemPitch = w * 4;

    if (FAILED(m_pd3dDevice->CreateTexture2D(&desc, &subResource, &pTexture)))
        return false;

    // 2. Criar a View (SRV) que o ImGui usa
    D3D11_SHADER_RESOURCE_VIEW_DESC srvDesc = {};
    srvDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    srvDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
    srvDesc.Texture2D.MipLevels = 1;

    if (FAILED(m_pd3dDevice->CreateShaderResourceView(pTexture, &srvDesc, &srv))) {
        pTexture->Release();
        return false;
    }

    pTexture->Release(); // A SRV mantém uma referência interna
    m_textures[std::string(name)] = srv;
    return true;
}

