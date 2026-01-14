#include  "KieroUI.h"
#include <imgui_impl_win32.h>
#include <imgui_impl_dx11.h>
#include <kiero.h>
#include "SinglePaintFace.h"
#include "NoLimit.h"

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")



extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);


namespace KoGaMaTools::Services::KieroUI
{
	namespace {
		OnRender RenderUi;

		Present oPresent;
		HWND window = NULL;
		WNDPROC oWndProc;
		ID3D11Device* pDevice = NULL;
		ID3D11DeviceContext* pContext = NULL;
		ID3D11RenderTargetView* mainRenderTargetView;
		HRESULT(__stdcall* oResizeBuffers)(IDXGISwapChain*, UINT, UINT, UINT, DXGI_FORMAT, UINT);
		bool init = false;

	}
	void InitHook()
	{
		bool init_hook = false;

		do
		{
			if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
			{

				kiero::bind(8, (void**)&oPresent, hkPresent);
				kiero::bind(13, (void**)&oResizeBuffers, hkResizeBuffers);

				init_hook = true;
			}
		} while (!init_hook);
	}
	void InitImGui()
	{

		ImGui::CreateContext();
		ImGuiIO& io = ImGui::GetIO();
		io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
		ImGui_ImplWin32_Init(window);
		ImGui_ImplDX11_Init(pDevice, pContext);
	}

	void SetOnRender(OnRender render)
	{
		RenderUi = render;
	}

	LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

		if (ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
			return true;

		return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
	}

	HRESULT hkResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
	{
		if (mainRenderTargetView) {
			pContext->OMSetRenderTargets(0, 0, 0);
			mainRenderTargetView->Release();
		}

		HRESULT hr = oResizeBuffers(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);

		ID3D11Texture2D* pBuffer;
		pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)&pBuffer);
		// Perform error handling here!

		pDevice->CreateRenderTargetView(pBuffer, NULL, &mainRenderTargetView);
		// Perform error handling here!
		pBuffer->Release();

		pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);

		// Set up the viewport.
		D3D11_VIEWPORT vp;
		vp.Width = Width;
		vp.Height = Height;
		vp.MinDepth = 0.0f;
		vp.MaxDepth = 1.0f;
		vp.TopLeftX = 0;
		vp.TopLeftY = 0;
		pContext->RSSetViewports(1, &vp);
		return hr;
	}


	HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
	{
		if (!init)
		{
			if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
			{
				pDevice->GetImmediateContext(&pContext);
				DXGI_SWAP_CHAIN_DESC sd;
				pSwapChain->GetDesc(&sd);
				window = sd.OutputWindow;
				ID3D11Texture2D* pBackBuffer;
				pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
				pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
				pBackBuffer->Release();
				oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
				InitImGui();
				init = true;
			}

			else
				return oPresent(pSwapChain, SyncInterval, Flags);
		}

		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();

		if (KieroUI::RenderUi != nullptr)
			KieroUI::RenderUi();

		ImGui::Render();

		pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
		return oPresent(pSwapChain, SyncInterval, Flags);
	}



}



