# KoGaMaTools DLL Initialization Architecture

The following diagram describes the DLL lifecycle, from process injection to the final configuration of the UI and services.

```mermaid
graph TD
    %% Entrada da DLL
    Start((Injeção da DLL)) --> DllMain[DllMain: DLL_PROCESS_ATTACH]
    DllMain --> Thread[CreateThread: MainThread]

    subgraph "Fase de Inicialização e Espera"
        Thread --> PathHelper[PathHelper: Define caminhos e região]
        PathHelper --> WaitGame{Loop: GameAssembly.dll & <br/>UnityPlayer.dll carregados?}
        WaitGame -- Não --> WaitGame
        WaitGame -- Sim --> LoadDeps[Carregar Dependências Extras: <br/>MinHook e Metadados .dat]
    end

    subgraph "Core e Hooks"
        LoadDeps --> Kiero[KieroUI: Init Hook do Renderizador]
        Kiero --> MetaInstall[KoGaMaAPI: Instalar Metadados Il2Cpp]
        MetaInstall --> MHInit[MH_Initialize: Iniciar MinHook]
    end

    subgraph "Injeção de Dependência (DI Container)"
        MHInit --> DI_Registry[Registrar Módulos no DI Container <br/>via InstallMultiple]
        
        DI_Registry --> S1[MainComponent]
        DI_Registry --> S2[LoggerService]
        DI_Registry --> S3[MainUI]
        DI_Registry --> S4[Serviços de Mods: NoLimit, AntiAfk, etc.]
        
        S4 --> InitAll[app.InitAll: Inicializa todos os Singletons]
    end

    subgraph "Configuração da UI"
        InitAll --> GetUI[Recuperar instância da MainUI]
        GetUI --> SetupUI1[SetupUI Grupo 0: Ferramentas de Edição]
        SetupUI1 --> SetupUI2[SetupUI Grupo 1: Jogabilidade/Vantagens]
        SetupUI2 --> SetupUI3[SetupUI Grupo 2: Configurações]
        SetupUI3 --> Finalize[ConfigService: SetupConfigurables]
    end

    Finalize --> End((Pronto para Uso))

    %% Estilização
    style Start stroke:#333,stroke-width:2px
    style DI_Registry stroke:#333,stroke-width:2px
    style WaitGame stroke:#d4a017,stroke-width:2px
    style S4 stroke:#16a085

```

## Technical Component Breakdown:

- Entry Point (DllMain): Spawns a dedicated thread (MainThread) to avoid blocking the host process's main execution flow during the loading phase.

- Game Synchronization: The thread performs a polling loop to ensure vital Unity engine modules (GameAssembly.dll and UnityPlayer.dll) are fully mapped into memory before attempting any function hooking.

- Metadata Abstraction: Uses external .dat files to dynamically resolve Il2Cpp function addresses. This layer of abstraction allows the mod to remain compatible across different game versions without recompiling the core logic.

- DI Container (Dependency Injection): The architecture relies on a centralized DIContainer singleton. Using InstallMultiple, it manages the lifecycle and dependencies of all services, ensuring that components like LoggerService or ConfigService are available globally.

- Modular UI Setup: The SetupUI template function allows for a decoupled design. Services are injected into specific UI categories (tabs or groups) based on their responsibility, making the interface easily extensible.