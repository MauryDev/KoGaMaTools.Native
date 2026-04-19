#include "ModelPreviewTest.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include "ModelUtils.h"
#include <imgui.h>
#include <kogama-tools/services/KieroUI.h>

#include <wrl/client.h>

template<typename T>
using ComPtr = Microsoft::WRL::ComPtr<T>;

struct Vector3 { float x, y, z; };

void KoGaMaTools::Services::ModelModule::ModelPreviewTest::Init(Core::DIContainer& di)
{
    Instance = di.Get<ModelPreviewTest>();
    mainComponent = di.Get<MainComponent>();
    mainComponent->AddCallback("ModelPreviewTest_Render", [this](void*) {


        namespace K = KoGaMaAPI::KoGaMa;
        using GameObject = K::UE_GameObject;
        typedef void* (__fastcall* tGetNativePtr)(void*);
        auto test = (tGetNativePtr)Tools::Il2Cpp::il2cpp_resolve_icall("UnityEngine.Texture::GetNativeTexturePtr_Injected");

        static void* renderObject = nullptr, * gameObject;
        if (enabled) {

            if (gameObject != nullptr)
            {
                if (renderObjectTexture == nullptr)
                {

                    void* nativeTexture = (void*)K::UE_Object::f_m_CachedPtr.Get<intptr_t>(renderObject);



                    auto pResource = (ID3D11Texture2D*)test(nativeTexture);
                    if (pResource != nullptr)
                    {
                        

                        
                        auto device = Services::KieroUI::GetDevice();
                        
                        ComPtr<ID3D11DeviceContext> context;
                        device->GetImmediateContext(context.GetAddressOf());
                        
                        D3D11_TEXTURE2D_DESC desc;
                        pResource->GetDesc(&desc);

                        // 🔥 criar textura de cópia (sem MSAA, com SRV)
                        D3D11_TEXTURE2D_DESC copyDesc = desc;
                        copyDesc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
                        copyDesc.Usage = D3D11_USAGE_DEFAULT;
                        copyDesc.CPUAccessFlags = 0;
                        copyDesc.MiscFlags = 0;

                        ComPtr<ID3D11Texture2D> copyTex;
                        device->CreateTexture2D(&copyDesc, NULL, copyTex.GetAddressOf());

                        context->CopyResource(copyTex.Get(), pResource);

                        // 🔥 criar SRV da textura copiada
                        ID3D11ShaderResourceView* pSRV = nullptr;

                        D3D11_SHADER_RESOURCE_VIEW_DESC srvDesc = {};
                        srvDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM_SRGB; // ❗ não force RGBA
                        srvDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
                        srvDesc.Texture2D.MipLevels = 1;

                        device->CreateShaderResourceView(copyTex.Get(), &srvDesc, &pSRV);

                        renderObjectTexture = pSRV;

                      

                    }
                }
                return;

            }


            auto model = ModelUtils::GetCurrentModel();
            Vector3  cameraPreviewerOffset{ 1.2f, 0.1f, 0.3f };
            auto nameGO = Tools::Il2Cpp::Il2CppString::New("ModelPreviewTest_Previewer");


            auto modelGO = K::MVWorldObjectClient::m_get_GameObject(model);
            auto layersFlags = K::MVWorldObjectClient::m_get_PreviewLayerMask(model)
                .Unbox<int>();


            auto method = K::UE_GameObject::m2_GetComponentsInChildren;
            auto mvcomponent = Tools::Il2Cpp::Il2CppClass("Assembly-CSharp", "", "MVComponent");
            auto allComponents = Tools::Il2Cpp::Utils::TypeReflection::MakeMethodGeneric(method, { mvcomponent })
                .Invoke(modelGO)
                .As<Tools::Il2Cpp::Il2CppArray>();

            for (int i = 0; i < allComponents.get_Length(); i++) {
                auto comp = allComponents.GetItem<Tools::Il2Cpp::Il2CppObject>(i);
                comp.SetValue("findWorldObjectParent", false);
            }

            auto gameObjectClone = K::UE_Object::m2_Instantiate(modelGO);

            K::UE_Object::m_DontDestroyOnLoad(gameObjectClone);

            for (int i = 0; i < allComponents.get_Length(); i++) {
                auto comp = allComponents.GetItem<Tools::Il2Cpp::Il2CppObject>(i);
                comp.SetValue("findWorldObjectParent", true);
            }

            gameObject = Tools::Il2Cpp::Il2CppObject::New(K::UE_GameObject::klass);

            GameObject::m0__ctor(gameObject, nameGO);
            auto gameObject_transform = K::UE_GameObject::m_get_transform(gameObject);
            K::UE_Object::m_DontDestroyOnLoad(gameObject);


            auto name = Tools::Il2Cpp::Il2CppString::New("ModelPreviewTest_Previewer2");

            objectPreview = K::ObjectPreviewer::m0_Create(252, 1, layersFlags, gameObject_transform, name, gameObjectClone);

            renderObject = K::ObjectPreviewer::m_get_PreviewTexture(objectPreview).ptr;


        }
        else {
            if (gameObject != nullptr)
            {
                K::UE_Object::m1_Destroy(gameObject);
                K::ObjectPreviewer::m_Destroy(objectPreview);

                gameObject = nullptr;
                renderObject = nullptr;
                renderObjectTexture = nullptr;
            }
        }
        });
}

void KoGaMaTools::Services::ModelModule::ModelPreviewTest::Render()
{

    if (ImGui::Button("Open Model Preview Test Popup"))
    {
        enabled = true;

        ImGui::OpenPopup("ModelPreviewTest");
    }


    ImGui::SetNextWindowSize(ImVec2(300, 150), ImGuiCond_Appearing);

    if (ImGui::BeginPopup("ModelPreviewTest", NULL))
    {
        ImGui::Text("Testando o preview de modelos");
        
        
        ImGui::Image((ImTextureID)this->renderObjectTexture, ImVec2(256, 256));
        if (ImGui::Button("Resetar"))
        {
            this->renderObjectTexture->Release();
            this->renderObjectTexture = nullptr;
        }

        if (ImGui::Button("Fechar"))
        {

            enabled = false;
            ImGui::CloseCurrentPopup();

        }

        ImGui::EndPopup();
    }
}
