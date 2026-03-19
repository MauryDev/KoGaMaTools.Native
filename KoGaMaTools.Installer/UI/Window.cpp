#include "Window.h"
#include "..\Resource.h"
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>
#pragma comment(lib, "d3d10.lib")
KoGaMa_Model::UI::Window::Window()
{
    g_SwapChainOccluded = false;
    g_mainRenderTargetView = nullptr;
    g_pSwapChain = nullptr;
    g_pd3dDevice = nullptr;
    g_DeviceLost = false;
    g_ResizeWidth = 0, g_ResizeHeight = 0;
    OnRender = nullptr;
    mainScale = 1.0f; // Default scale
    wc = {};
    hwnd = nullptr;
    SizeChanged = false;
}

void KoGaMa_Model::UI::Window::CreateRenderTarget()
{
    ID3D10Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, nullptr, &g_mainRenderTargetView);
    pBackBuffer->Release();
}

void KoGaMa_Model::UI::Window::CleanupRenderTarget()
{
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = nullptr; }

}

bool KoGaMa_Model::UI::Window::LoadTextureFromMemory(const void* data, size_t data_size, ImageTextureInfo* txtInfo)
{
    // Load from disk into a raw RGBA buffer
    int image_width = 0;
    int image_height = 0;
    unsigned char* image_data = stbi_load_from_memory((const unsigned char*)data, (int)data_size, &image_width, &image_height, NULL, 4);
    if (image_data == NULL)
        return false;

    // Create texture
    D3D10_TEXTURE2D_DESC desc;
    ZeroMemory(&desc, sizeof(desc));
    desc.Width = image_width;
    desc.Height = image_height;
    desc.MipLevels = 1;
    desc.ArraySize = 1;
    desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    desc.SampleDesc.Count = 1;
    desc.Usage = D3D10_USAGE_DEFAULT;
    desc.BindFlags = D3D10_BIND_SHADER_RESOURCE;
    desc.CPUAccessFlags = 0;

    ID3D10Texture2D* pTexture = NULL;
    D3D10_SUBRESOURCE_DATA subResource;
    subResource.pSysMem = image_data;
    subResource.SysMemPitch = desc.Width * 4;
    subResource.SysMemSlicePitch = 0;
    g_pd3dDevice->CreateTexture2D(&desc, &subResource, &pTexture);

    // Create texture view
    D3D10_SHADER_RESOURCE_VIEW_DESC srvDesc;
    ZeroMemory(&srvDesc, sizeof(srvDesc));
    srvDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    srvDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
    srvDesc.Texture2D.MipLevels = desc.MipLevels;
    srvDesc.Texture2D.MostDetailedMip = 0;
    ImageTextureInfo ret{};
    ID3D10ShaderResourceView* ptrShader{};
    g_pd3dDevice->CreateShaderResourceView(pTexture, &srvDesc, &ptrShader);
    pTexture->Release();
    ret.out_srv = (ImTextureID)ptrShader;
    ret.out_width = image_width;
    ret.out_height = image_height;
    stbi_image_free(image_data);
    *txtInfo = ret;
    return true;
}


bool KoGaMa_Model::UI::Window::CreateDeviceD3D(HWND hWnd)
{
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    UINT createDeviceFlags = 0;
    //createDeviceFlags |= D3D10_CREATE_DEVICE_DEBUG;
    HRESULT res = D3D10CreateDeviceAndSwapChain(nullptr, D3D10_DRIVER_TYPE_HARDWARE, nullptr, createDeviceFlags, D3D10_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice);
    if (res == DXGI_ERROR_UNSUPPORTED) // Try high-performance WARP software driver if hardware is not available.
        res = D3D10CreateDeviceAndSwapChain(nullptr, D3D10_DRIVER_TYPE_WARP, nullptr, createDeviceFlags, D3D10_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice);
    if (res != S_OK)
        return false;

    CreateRenderTarget();
    return true;
}

void KoGaMa_Model::UI::Window::CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = nullptr; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = nullptr; }
}

void KoGaMa_Model::UI::Window::ResetDevice()
{

}
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

LRESULT __stdcall KoGaMa_Model::UI::Window::WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    Window* pData = reinterpret_cast<Window*>(GetWindowLongPtr(hWnd, GWLP_USERDATA));

    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

    switch (msg)
    {
    case WM_CREATE: {
        // WM_CREATE is called *before* the window is fully created,
        // but after memory for it is allocated.
        // This is the ideal place to allocate and attach your custom data.

        CREATESTRUCT* pCreate = reinterpret_cast<CREATESTRUCT*>(lParam);
        // Get the data passed during CreateWindowEx
        Window* new_data = reinterpret_cast<Window*>(pCreate->lpCreateParams);

        // Store the pointer to our custom data in the window's user data
        SetWindowLongPtr(hWnd, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(new_data));

        // Now, pData will be valid for subsequent messages (after WM_CREATE)
        pData = new_data;

        break;
    }
    case WM_NCHITTEST:
    {
        ImVec2 Shit = ImGui::GetMousePos();
        auto pos = ImGui::GetMainViewport()->WorkSize;
        if (Shit.y < 25 && Shit.x < pos.x - 25)
        {
            LRESULT hit = DefWindowProc(hWnd, msg, wParam, lParam);
            if (hit == HTCLIENT) hit = HTCAPTION;
            return hit;
        }
        else break;
    }
    case WM_SIZE:
        if (wParam == SIZE_MINIMIZED)
            return 0;
        if (pData == nullptr)
            return 0; // Ensure pData is valid before accessing it

        pData->g_ResizeWidth = (UINT)LOWORD(lParam); // Queue resize
        pData->g_ResizeHeight = (UINT)HIWORD(lParam);
        
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        ::PostQuitMessage(0);
        return 0;
    }
    return ::DefWindowProcW(hWnd, msg, wParam, lParam);
}

void KoGaMa_Model::UI::Window::SetupWindow()
{
    this->CreateUI();

    this->SetupUI();



    // Our state
    ImVec4 clear_color = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);

    // Main loop
    bool done = false;
    while (!done)
    {
        // Poll and handle messages (inputs, window resize, etc.)
        // See the WndProc() function below for our to dispatch events to the Win32 backend.
        if (BeforeRender(done)) continue;

        this->_OnRender();
        // Rendering
        this->EndRender(clear_color);
    }

    // Cleanup
    this->Cleanup();

}

void KoGaMa_Model::UI::Window::Cleanup()
{
    ImGui_ImplDX10_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    CleanupDeviceD3D();
    ::DestroyWindow(hwnd);
    ::UnregisterClassW(wc.lpszClassName, wc.hInstance);

}

bool KoGaMa_Model::UI::Window::CreateUI()
{
    ImGui_ImplWin32_EnableDpiAwareness();
    mainScale = ImGui_ImplWin32_GetDpiScaleForMonitor(::MonitorFromPoint(POINT{ 0, 0 }, MONITOR_DEFAULTTOPRIMARY));
    auto hIstance = GetModuleHandle(nullptr);
    //auto icon =LoadIcon(hIstance, MAKEINTRESOURCE(IDI_INJECTOR));

    wc = { sizeof(wc), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(nullptr), nullptr, nullptr, nullptr, nullptr, L"ModelAPI_Inject", nullptr };
    //wc.hIcon = icon;
    ::RegisterClassExW(&wc);
    hwnd = ::CreateWindowW(wc.lpszClassName, L"Model API - Inject", WS_POPUP, 100, 100, (int)(700 * mainScale), (int)(400 * mainScale), nullptr, nullptr, wc.hInstance, this);
    //::SetLayeredWindowAttributes(hwnd, RGB(0, 0, 0), 0, ULW_COLORKEY); // Set the window to be transparent
    // Initialize Direct3D
    if (!CreateDeviceD3D(hwnd))
    {
        CleanupDeviceD3D();
        ::UnregisterClassW(wc.lpszClassName, wc.hInstance);
        return false;
    }

    // Show the window
    ::ShowWindow(hwnd, SW_SHOWDEFAULT);
    ::UpdateWindow(hwnd);
    return true;
}

void KoGaMa_Model::UI::Window::SetupPlatform()
{
    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX10_Init(g_pd3dDevice);
}

void KoGaMa_Model::UI::Window::SetupUI()
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls

    // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsLight();
    ImGuiStyle& style = ImGui::GetStyle();
    style.ScaleAllSizes(mainScale);        // Bake a fixed style scale. (until we have a solution for dynamic style scaling, changing this requires resetting Style + calling this again)

}

bool KoGaMa_Model::UI::Window::BeforeRender(bool& done)
{
    MSG msg;
    while (::PeekMessage(&msg, nullptr, 0U, 0U, PM_REMOVE))
    {
        ::TranslateMessage(&msg);
        ::DispatchMessage(&msg);
        if (msg.message == WM_QUIT)
        {
            done = true;
            return false;

        }
    }


    // Handle lost D3D9 device
    if (g_SwapChainOccluded && g_pSwapChain->Present(0, DXGI_PRESENT_TEST) == DXGI_STATUS_OCCLUDED)
    {
        ::Sleep(10);
        return false;
    }
    g_SwapChainOccluded = false;

    // Handle window resize (we don't resize directly in the WM_SIZE handler)
    if (g_ResizeWidth != 0 && g_ResizeHeight != 0)
    {
        CleanupRenderTarget();
        g_pSwapChain->ResizeBuffers(0, g_ResizeWidth, g_ResizeHeight, DXGI_FORMAT_UNKNOWN, 0);
        g_ResizeWidth = g_ResizeHeight = 0;
        CreateRenderTarget();
    }
    // Start the Dear ImGui frame
    ImGui_ImplDX10_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();
    return true;
}

void KoGaMa_Model::UI::Window::_OnRender()
{
    if (OnRender != nullptr)
        OnRender(this);
}

void KoGaMa_Model::UI::Window::EndRender(ImVec4 clear_color)
{
    ImGui::Render();
    const float clear_color_with_alpha[4] = { clear_color.x * clear_color.w, clear_color.y * clear_color.w, clear_color.z * clear_color.w, clear_color.w };
    g_pd3dDevice->OMSetRenderTargets(1, &g_mainRenderTargetView, nullptr);
    g_pd3dDevice->ClearRenderTargetView(g_mainRenderTargetView, clear_color_with_alpha);
    ImGui_ImplDX10_RenderDrawData(ImGui::GetDrawData());

    // Present
    HRESULT hr = g_pSwapChain->Present(1, 0);   // Present with vsync
    //HRESULT hr = g_pSwapChain->Present(0, 0); // Present without vsync
    g_SwapChainOccluded = (hr == DXGI_STATUS_OCCLUDED);
}
