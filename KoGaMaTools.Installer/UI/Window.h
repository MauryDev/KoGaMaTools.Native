#pragma once
#include <imgui.h>
#include <imgui_impl_dx10.h>
#include <imgui_impl_win32.h>
#include <d3d10.h>
#include <tchar.h>

namespace KoGaMa_Model::UI {
	struct ImageTextureInfo {
		ImTextureID out_srv;
		int out_width;
		int out_height;
	};
	struct Window {
		ID3D10Device*           g_pd3dDevice;
		IDXGISwapChain*         g_pSwapChain;
		bool                    g_SwapChainOccluded;
		UINT                    g_ResizeWidth,g_ResizeHeight;
		ID3D10RenderTargetView* g_mainRenderTargetView;
		bool                     g_DeviceLost;
		HWND                     hwnd;
		WNDCLASSEXW              wc;
		bool SizeChanged;
		float mainScale;
		void(*OnRender)(Window* window);
		Window();
		bool CreateDeviceD3D(HWND hWnd);
		void CleanupDeviceD3D();
		void ResetDevice();
		static LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
		void SetupWindow();
		void Cleanup();
		bool CreateUI();
		void SetupPlatform();
		void SetupUI();
		bool BeforeRender(bool& done);
		virtual void _OnRender();
		void EndRender(ImVec4 clear_color);
		void CreateRenderTarget();
		void CleanupRenderTarget();
		bool LoadTextureFromMemory(const void* data, size_t data_size, ImageTextureInfo* txtInfo);
	};
}