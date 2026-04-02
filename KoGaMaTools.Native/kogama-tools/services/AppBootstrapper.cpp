#include "AppBootstrapper.h"
#include "IO/KoGaMaEnvironmentWindows.h"
#include <MetadataInit.h>
#include "services.h"
#include <kogama-tools/UI/DX11TextureManager.h>
#include <kogama-tools/UI/DX11FontManager.h>
#include <kogama-tools/UI/Tabs/TabsUI.h>

namespace KoGaMaTools::Services {
    namespace {
        constexpr int SleepTime = 4000;
        template<typename... Tabs>
        void SetupTabs(Core::DIContainer& app, UI::MainUI& ui)
        {
            (app.Get<Tabs>()->Setup(ui), ...);
        }
    }
    void AppBootstrapper::WaitForGame()
    {
        while (GetModuleHandleA("GameAssembly.dll") == nullptr ||
            GetModuleHandleA("UnityPlayer.dll") == nullptr)
        {
            Sleep(SleepTime);
        }
    }
    void AppBootstrapper::SetupEnvironment(HMODULE module)
    {
        auto& app = KoGaMaTools::Core::DIContainer::GetInstance();

        app.NewServiceAs<IKoGaMaEnvironment, KoGaMaEnvironmentWindows>(module);
    }
    void AppBootstrapper::InitializeNative(Core::DIContainer& app)
    {
		auto env = app.Get<IKoGaMaEnvironment>();
        auto& folder = env->GetFolderWork();
        auto region = env->RegionToStr(env->GetRegion());



        auto meta1 = (folder / region / "Tools.Il2Cpp.ICalls.dat").string();
        auto meta2 = (folder / region / "KoGaMaAPI.KoGaMa.dat").string();

        KoGaMaAPI::Metadata::Install(meta1, meta2);


    }

    void AppBootstrapper::InitializeGraphics(Core::DIContainer& app)
    {
        auto fontManager = app.Get<KoGaMaTools::UI::IFontManager>();

        fontManager->Initialize();

        KoGaMaTools::Services::KieroUI::InitHook();
    }

    void AppBootstrapper::RegisterServices(Core::DIContainer& app, HMODULE module)
    {

        auto env = app.Get<IKoGaMaEnvironment>();

        app.NewService<HookingService>(*env.get());

        app.NewServiceAs<UI::ITextureManager, UI::DX11TextureManager>(module);
        app.NewServiceAs<UI::IFontManager, UI::DX11FontManager>(module);
        app.NewServiceAs<IFileService, WindowsFileService>();

       

    }
    void AppBootstrapper::RegisterModules(Core::DIContainer& app)
    {

        namespace S = KoGaMaTools::Services;


        KoGaMaTools::Core::InstallMultiple<S::MainComponent,
            S::LoggerService,
            KoGaMaTools::UI::MainUI,
            S::ConfigService,
            S::TextCommandService,
            S::ContextMenuService,
            KoGaMaTools::UI::BuildUITab,
            KoGaMaTools::UI::PvPUITab,
            KoGaMaTools::UI::InfoUITab,
            KoGaMaTools::UI::ConfigUITab,
            KoGaMaTools::UI::UI_UITab,
            S::SinglePaintFace,
            S::NoLimit,
            S::BlueModeTool,
            S::DestructiblesUnlock,
            S::CustomGrid,
            S::EditModeSpeed,
            S::RotationStep,
            S::UnlimitedConfig,
            S::AntiAfk,
            S::CustomCrossHairColor,
            S::FastRespawn,
            S::CustomCrossHairTexture,
            S::CameraService,
            S::GameInfoService,
            S::ResolutionService,
            S::KillCountService,
            S::ThemeService,
            S::FogService,
            S::LogicRenderService,
            S::MessageReceiveService,
            S::AvatarModule::AvatarService
        > ();
        KoGaMaTools::Services::ModelModule::Init(app);


    }
    void AppBootstrapper::SetupUI(Core::DIContainer& app)
    {
        auto ui = app.Get<UI::MainUI>();
        SetupTabs<
            UI::BuildUITab,
            UI::PvPUITab,
            UI::InfoUITab,
            UI::ConfigUITab,
            UI::UI_UITab
        >(app, *ui);
    }
    void AppBootstrapper::SetupServices(Core::DIContainer& app)
    {
        app.Get<ConfigService>()->SetupConfigurables();
        app.Get<TextCommandService>()->SetupCommandsResolve();
        app.Get<ContextMenuService>()->SetupButtons();

    }
    void AppBootstrapper::Run(HMODULE module)
    {
        auto& app = KoGaMaTools::Core::DIContainer::GetInstance();

        WaitForGame();
        SetupEnvironment(module);
        InitializeNative(app);
        RegisterServices(app, module);

        InitializeGraphics(app);
        RegisterModules(app);
        app.InitAll();

		SetupUI(app);
		SetupServices(app);

        app.Get<UI::MainUI>()->StartUI();

    }
}

