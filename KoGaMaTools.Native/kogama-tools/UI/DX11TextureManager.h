#pragma once
#include "ITextureManager.h"
#include <d3d11.h>
#include <unordered_map>
#include <string>
#include <Windows.h>


namespace KoGaMaTools::UI
{
    class DX11TextureManager : public ITextureManager
    {
    public:
        DX11TextureManager(HMODULE _module);

        ~DX11TextureManager();

        void Init(Core::DIContainer& di) override;

        ImTextureID GetTexture(const std::string_view& name) const override;
        ImTextureID GetTexture(int ResourceId) const override;
        bool LoadTexture(const std::string_view& name, const std::string_view& filePath) override;

        bool LoadTextureMemory(const std::string_view& name, std::span<const std::byte> data) override;

        void UnloadTexture(const std::string_view& name) override;

        void Clear() override;

        bool HasTexture(const std::string_view& name) const override;
        static BOOL CALLBACK EnumResourcesCallback(HMODULE hModule, LPCSTR lpszType, LPSTR lpszName, LONG_PTR lParam);

    private:
        bool CreateDXResource(const std::string_view& name, unsigned char* data, int w, int h);
        ID3D11Device* m_pd3dDevice;
        HMODULE _module;
        std::unordered_map<std::string, ID3D11ShaderResourceView*> m_textures;
    };
}