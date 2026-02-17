#include "CustomCrossHairTexture.h"
#include <imgui.h>
#include <filesystem>
#include <imgui_stdlib.h>
#include <Tools.Il2Cpp.Lib.h>
#include <Tools.Il2Cpp.ICalls.h>
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <fstream>
#include <portable-file-dialogs.h>
#include "../Common/MainComponent.h"
#include <future>

void KoGaMaTools::Services::CustomCrossHairTexture::Install()
{
}
void KoGaMaTools::Services::CustomCrossHairTexture::SetTexture(const std::string& filePath) {
	namespace K = KoGaMaAPI::KoGaMa;
	
	Il2CppObject tex = nullptr;
	if (std::filesystem::exists(filePath))
	{
		auto len = std::filesystem::file_size(filePath);
		auto fileData = Il2CppArray::New(Tools::Il2Cpp::ICalls::Byte::klass,len);
		std::ifstream arquivoBin(filePath,std::ios::binary);
		arquivoBin.read(fileData.GetItems<char>(), len);
		arquivoBin.close();

		tex = Il2CppObject::New(K::Texture2D::klass);

		K::Texture2D::m3_ctor(tex, 1, 1);;
		K::ImageConversion::m1_LoadImage(tex, fileData);

	}
	if (tex == nullptr)
		return;

	auto playUi = K::MVGameControllerBase::m_get_PlayModeUI();
	if (playUi == nullptr)
		return;

	auto crosshair = K::IPlayModeUI::m_GetCrossHair(playUi);
	auto image = K::CrossHair::f_crossHair.Get<Il2CppObject>(crosshair);

	auto sprite = K::Image::m_get_sprite(image);
	auto pivot = K::Sprite::m_get_pivot(image).Unbox<std::array<float,2>>();
	auto rect = Il2CppObject::New(K::Rect::klass).Unbox();
	auto width = K::Texture::m_get_width(tex).Unbox<int>();
	auto height = K::Texture::m_get_height(tex).Unbox<int>();
	K::Rect::m0_ctor(rect,
		0, 0,
		(float)width,
		(float)height
	);
	auto newSprite = K::Sprite::m6_Create(tex, rect, pivot);
	K::Image::m_set_sprite(image, newSprite);
	
}

void KoGaMaTools::Services::CustomCrossHairTexture::OpenFileDialog()
{
	auto selection = pfd::open_file("Select a file").result();
	if (!selection.empty())
	{
		auto filePath = selection[0];
		MainComponent::Instance->ExecuteCallback([filePath](void*) {
			SetTexture(filePath);
			});
	}
	Busy = false;
}

void KoGaMaTools::Services::CustomCrossHairTexture::Render()
{
	auto busynow = Busy;
	if (busynow) {
		ImGui::BeginDisabled();
	}
	const char* buttonLabel = Busy ? "Opening File Dialog... ##btn" : "Load CrossHair Texture";
	if (ImGui::Button(buttonLabel))
	{
		Busy = true;
		std::thread(OpenFileDialog).detach();
		
		
	}
	if (busynow) {
		ImGui::EndDisabled();
	}
}
