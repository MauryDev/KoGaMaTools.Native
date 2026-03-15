#pragma once
#include <windows.h>
#include <d3d11.h>
#include <functional>

namespace KoGaMaTools::Services::KieroUI {
	typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
	typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
	typedef uintptr_t PTR;
	using OnRender = void(*)();
	using OnInitedFn = std::function<void()>;

	
	void InitHook();
	void InitImGui();
	void SetOnRender(OnRender render);

	void SetOnInited(OnInitedFn fn);

	ID3D11Device* GetDevice();
	LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HRESULT hkResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
	HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
}