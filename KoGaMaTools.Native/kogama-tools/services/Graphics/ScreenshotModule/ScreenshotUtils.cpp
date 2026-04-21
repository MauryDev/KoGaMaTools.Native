#include "ScreenshotUtils.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <kogama-tools/services/KieroUI.h>

namespace KoGaMaTools::Services::ScreenshotModule::ScreenshotUtils
{
    void* Create(int width, int height)
    {
        namespace K = KoGaMaAPI::KoGaMa;
        auto rt = Tools::Il2Cpp::Il2CppObject::New(K::UE_RenderTexture::klass);
        K::UE_RenderTexture::m10__ctor(rt, width, height, 24);

        auto mainCameraManager = K::MVGameControllerBase::m_get_MainCameraManager();

        auto mainCamera = K::MainCameraManager::m_get_MainCamera(mainCameraManager);

        auto secondaryCamera = K::MainCameraManager::m_get_SecondaryCamera(mainCameraManager);

        K::UE_Camera::m_set_targetTexture(mainCamera, rt);
        K::UE_Camera::m_set_targetTexture(secondaryCamera, rt);

        auto textureScreenshot = Tools::Il2Cpp::Il2CppObject::New(K::Texture2D::klass);
        K::Texture2D::m2__ctor(textureScreenshot,width, height, 3, false);

        K::UE_Camera::m_Render(mainCamera);
        K::UE_Camera::m_Render(secondaryCamera);

        K::UE_RenderTexture::m_set_active(rt);

        K::Texture2D::m1_ReadPixels(textureScreenshot, Rect{ 0,0,(float)width,(float)height }, 0, 0);

        K::Texture2D::m1_Apply(textureScreenshot);

        K::UE_Camera::m_set_targetTexture(mainCamera, Tools::Il2Cpp::Il2CppPointer{});
        K::UE_Camera::m_set_targetTexture(secondaryCamera, Tools::Il2Cpp::Il2CppPointer{});

        K::UE_RenderTexture::m_set_active(Tools::Il2Cpp::Il2CppPointer{});

        K::UE_Object::m1_Destroy(rt);
        return textureScreenshot;
    }

    ResolutionSize GetScreenSize()
    {
        namespace K = KoGaMaAPI::KoGaMa;

        auto width = K::UE_Screen::m_get_width()
            .Unbox<int>();
        auto height = K::UE_Screen::m_get_height()
            .Unbox<int>();
        return ResolutionSize{ .width= width, .height= height };
    }

    void* CreateShaderTexture(void* texture)
    {
        namespace K = KoGaMaAPI::KoGaMa;

        typedef void* (__fastcall* tGetNativePtr)(void*);

        auto GetNativePtr = (tGetNativePtr)Tools::Il2Cpp::il2cpp_resolve_icall("UnityEngine.Texture::GetNativeTexturePtr_Injected");

        auto targetCache = K::UE_Object::f_m_CachedPtr.Get<Tools::Il2Cpp::Il2CppObject>(texture);

        auto pResource = (ID3D11Texture2D*)GetNativePtr(targetCache.ptr);
        auto device = Services::KieroUI::GetDevice();

        ID3D11DeviceContext* context;
        device->GetImmediateContext(&context);

        D3D11_TEXTURE2D_DESC desc;
        pResource->GetDesc(&desc);

        // 🔥 criar textura de cópia (sem MSAA, com SRV)
        D3D11_TEXTURE2D_DESC copyDesc = desc;
        copyDesc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
        copyDesc.Usage = D3D11_USAGE_DEFAULT;
        copyDesc.CPUAccessFlags = 0;
        copyDesc.MiscFlags = 0;

        ID3D11Texture2D* copyTex;
        device->CreateTexture2D(&copyDesc, NULL, &copyTex);

        context->CopyResource(copyTex, pResource);

        // 🔥 criar SRV da textura copiada
        ID3D11ShaderResourceView* pSRV = nullptr;

        D3D11_SHADER_RESOURCE_VIEW_DESC srvDesc = {};
        srvDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM; // ❗ não force RGBA
        srvDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
        srvDesc.Texture2D.MipLevels = 1;

        device->CreateShaderResourceView(copyTex, &srvDesc, &pSRV);

        

        return pSRV;
    }

    void FreeShaderTexture(void* shader)
    {
        auto shaderTyped = (ID3D11ShaderResourceView*)shader;
        ID3D11Resource* resource;

        shaderTyped->GetResource(&resource);
        resource->Release();
        shaderTyped->Release();

    }

    void* SaveInArray(void* texture)
    {
        namespace K = KoGaMaAPI::KoGaMa;
        auto that = (Tools::Il2Cpp::Il2CppObject)texture;
        return K::ImageConversion::m_EncodeToPNG(that).ptr;
    }

}
