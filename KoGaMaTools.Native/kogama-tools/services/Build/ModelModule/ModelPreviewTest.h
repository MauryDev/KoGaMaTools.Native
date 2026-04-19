#pragma once

#include <array>
#include <d3d11.h>
#include <kogama-tools/services/Common/MainComponent.h>
namespace KoGaMaTools::Services::ModelModule {

    class ModelPreviewTest: public Core::IInitializable
    {
    public:
        inline static  std::shared_ptr<ModelPreviewTest> Instance;

        void Init(Core::DIContainer& di);
        void Render();

    private:
        std::shared_ptr<MainComponent> mainComponent = nullptr;

        bool enabled = false;

        void* objectPreview = nullptr;

        // textura final (SRV do D3D11)
        ID3D11ShaderResourceView* renderObjectTexture = nullptr;


    };

    
} 