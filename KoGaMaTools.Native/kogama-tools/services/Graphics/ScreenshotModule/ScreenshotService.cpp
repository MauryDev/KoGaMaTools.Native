#include "ScreenshotService.h"
#include "ScreenshotUtils.h"
#include <numbers>
#include <portable-file-dialogs.h>
#include <Tools.Il2Cpp.Lib.h>
void KoGaMaTools::Services::ScreenshotModule::ScreenshotService::Init(Core::DIContainer& di)
{
	Instance = di.Get<ScreenshotService>();
	_mainComponent = di.Get<MainComponent>();
	fileService = di.Get<IFileService>();
	loggerService = di.Get< LoggerService>();
}

void KoGaMaTools::Services::ScreenshotModule::ScreenshotService::Render()
{
	ImGui::SeparatorText("Screenshot Tools");

	ImGui::Spacing();
	ImGui::InputInt("SuperSize##supersize-screenshot", &superSize);
    ImGui::Checkbox("Enable Hotkey (F2)", &enableHotkey);
    if (enableHotkey && ImGui::IsKeyPressed(ImGuiKey_F2))
    {
        DestroyPreview();
        CreateNewPreview();
    }
	if (ImGui::Button("Preview"))
	{
        OpenPopup();
	}
    ImGui::SetNextWindowSize(ImVec2(300, 150), ImGuiCond_Appearing);

    if (ImGui::BeginPopup("Preview-Screenshot"))
    {
        RenderPreview();

        ImGui::BeginDisabled(IsBusy.load());
        if (ImGui::Button("Save"))
        {
            this->SelectFileToSave();
        }
        ImGui::SameLine();

        if (ImGui::Button("Close"))
        {
            ClosePopup();
        }
        ImGui::EndDisabled();

        ImGui::EndPopup();
    }


}

void KoGaMaTools::Services::ScreenshotModule::ScreenshotService::SaveScreenshot(const std::string& path)
{
    _mainComponent->ExecuteCallback([path](void*) {
        auto bytes = Tools::Il2Cpp::Il2CppArray(
            Tools::Il2Cpp::il2cpp_gchandle_get_target(Instance->texture2DHandle)
        );

        std::span<const char> bytesSpan = std::span<const char>(bytes.GetItems<const char>(), static_cast<std::size_t>(bytes.get_Length()));
        Instance->fileService->WriteBinary(path, bytesSpan);
    });
}

void KoGaMaTools::Services::ScreenshotModule::ScreenshotService::SelectFileToSave()
{
    IsBusy = true;
    std::thread([this]() {
        auto selection = pfd::save_file("Select a file").result();
        if (!selection.empty())
        {
            SaveScreenshot(selection);
        }
        IsBusy = false;

    }).detach();
    
}

void KoGaMaTools::Services::ScreenshotModule::ScreenshotService::ClosePopup()
{
    DestroyPreview();
    ImGui::CloseCurrentPopup();
}

void KoGaMaTools::Services::ScreenshotModule::ScreenshotService::OpenPopup()
{
    ImGui::OpenPopup("Preview-Screenshot");
    if (texture == nullptr)
    {
        CreateNewPreview();
    }
}

void KoGaMaTools::Services::ScreenshotModule::ScreenshotService::RenderPreview()
{
    ImDrawList* draw_list = ImGui::GetWindowDrawList();

    auto tex_id = (ImTextureID)texture;

    ImVec2 pos = ImGui::GetCursorScreenPos();
    ImVec2 size = ImVec2(256, 256);

    float angle = std::numbers::pi_v<float>;

    ImVec2 center = ImVec2(pos.x + size.x * 0.5f, pos.y + size.y * 0.5f);

    ImVec2 p1 = pos;
    ImVec2 p2 = ImVec2(pos.x + size.x, pos.y);
    ImVec2 p3 = ImVec2(pos.x + size.x, pos.y + size.y);
    ImVec2 p4 = ImVec2(pos.x, pos.y + size.y);

    auto rotate = [&](ImVec2& p) {
        float s = sinf(angle);
        float c = cosf(angle);

        float x = p.x - center.x;
        float y = p.y - center.y;

        p.x = center.x + x * c - y * s;
        p.y = center.y + x * s + y * c;
        };

    rotate(p1);
    rotate(p2);
    rotate(p3);
    rotate(p4);

    draw_list->AddImageQuad(
        tex_id,
        p1, p2, p3, p4,
        ImVec2(1, 0),
        ImVec2(0, 0),
        ImVec2(0, 1),
        ImVec2(1, 1)
    );


    ImGui::Dummy(size);
}

void KoGaMaTools::Services::ScreenshotModule::ScreenshotService::CreateNewPreview()
{
    _mainComponent->ExecuteCallback([](void*) {
        auto screenSize = ScreenshotUtils::GetScreenSize();
        screenSize.height *= Instance->superSize;
        screenSize.width *= Instance->superSize;
        auto txt = ScreenshotUtils::Create(screenSize.width, screenSize.height);
        auto arr = ScreenshotUtils::SaveInArray(txt);
        Instance->texture2DHandle = Tools::Il2Cpp::il2cpp_gchandle_new(arr, true);
        auto shader = ScreenshotUtils::CreateShaderTexture(txt);

        Instance->texture = shader;
        });
}

void KoGaMaTools::Services::ScreenshotModule::ScreenshotService::DestroyPreview()
{
    if (texture != nullptr)
    {
        ScreenshotUtils::FreeShaderTexture(texture);

    }
    if (texture2DHandle != nullptr)
    {
        Tools::Il2Cpp::il2cpp_gchandle_free(texture2DHandle);
    }


    texture = nullptr;
    texture2DHandle = nullptr;
}
