#include "AvatarService.h"
#include "AvatarUtils.h"
#include <portable-file-dialogs.h>
#include <kogama-tools/Resources/resource.h>

void KoGaMaTools::Services::AvatarModule::AvatarService::Init(Core::DIContainer& di)
{
	Instance = di.Get<AvatarService>();
	_mainComponent = di.Get<MainComponent>();
	textureManager = di.Get<UI::ITextureManager>();
	fileService = di.Get<IFileService>();
	loggerService = di.Get<LoggerService>();
}

void KoGaMaTools::Services::AvatarModule::AvatarService::Render()
{
	ImGui::BeginGroup();

	ImGui::SeparatorText("Avatar Tools");

	ImGui::Spacing();

	if (ImGui::ImageButton("##AvatarCopyBtn", textureManager->GetTexture(IDB_PNG6), ImVec2(32, 32))) {
		CopyAvatar();
	}
	if (ImGui::IsItemHovered()) ImGui::SetTooltip("Copy Avatar");

	ImGui::SameLine();


	if (ImGui::ImageButton("##AvatarPasteBtn", textureManager->GetTexture(IDB_PNG7), ImVec2(32, 32))) {
		PasteAvatar();
	}
	if (ImGui::IsItemHovered()) ImGui::SetTooltip("Paste Avatar");


	ImGui::TextDisabled("File Operations");
	ImGui::BeginDisabled(isBusy);

	if (ImGui::ImageButton("##AvatarExportFiletBtn", textureManager->GetTexture(IDB_PNG16), ImVec2(32, 32))) {
		isBusy = true;
		std::thread([this]() {this->ExportAvatar(); }).detach();

	}
	if (ImGui::IsItemHovered()) ImGui::SetTooltip("Export Model");

	ImGui::SameLine();

	if (ImGui::ImageButton("##AvatarImportFileBtn", textureManager->GetTexture(IDB_PNG17), ImVec2(32, 32))) {
		isBusy = true;
		std::thread([this]() {this->ImportAvatar(); }).detach();
	}
	if (ImGui::IsItemHovered()) ImGui::SetTooltip("Load Model");

	if (isBusy) {
		ImGui::Text("Processing...");
	}

	ImGui::EndDisabled();

	ImGui::Spacing();


	ImGui::AlignTextToFramePadding();
	ImGui::Image(textureManager->GetTexture(IDB_PNG8), ImVec2(24, 24));
	ImGui::SameLine();
	ImGui::Text("Options:");

	ImGui::Indent(10.0f);

	ImGui::Checkbox("##AvatarReplaceOld", &RemoveOldWorkpace);
	ImGui::SameLine();
	ImGui::Text("Clean workspace on paste");
	if (ImGui::IsItemHovered()) {
		ImGui::SetTooltip("Removes existing cubes before placing the new model to avoid overlapping.");
	}

	ImGui::Unindent(10.0f);


	ImGui::EndGroup();

}

void KoGaMaTools::Services::AvatarModule::AvatarService::PasteAvatar()
{
	auto current = AvatarUtils::GetCurrentAvatar();
	if (!current.isNull() && AvatarUtils::IsOwner(current))
	{
		_mainComponent->AddCoroutine(AvatarUtils::PasteAvatarCoro(current, RemoveOldWorkpace, *_avatarInfo));
	}

}

void KoGaMaTools::Services::AvatarModule::AvatarService::CopyAvatar()
{
	
	_mainComponent->ExecuteCallback([this](void*) {
		auto current = AvatarUtils::GetCurrentAvatar();
		if (!current.isNull() && AvatarUtils::IsOwner(current))
		{
			_avatarInfo = std::make_shared<AvatarInfo>(AvatarUtils::GetAvatarInfo(current));
		}

	});
	
}

void KoGaMaTools::Services::AvatarModule::AvatarService::ImportAvatar()
{
	auto selectedItems = pfd::open_file("Select a file").result();
	if (selectedItems.empty())
	{
		isBusy = false;
		return;
	}

	auto filePath = selectedItems[0];

	this->_mainComponent->ExecuteCallback([this,filePath](void*)
		{
			try
			{
				auto data = fileService->ReadBinary(filePath);

				if (!data || data->empty())
				{
					loggerService->Error("Failed to read avatar file: " + filePath);
					return;
				}

				auto jsonData = nlohmann::json::from_msgpack(*data);
				Instance->_avatarInfo = std::make_shared<AvatarInfo>(
					jsonData.get<AvatarInfo>()
				);
			}
			catch (const std::exception& e)
			{
				loggerService->Error(std::string("ImportAvatar exception: ") + e.what());
			}
			Instance->isBusy = false;
		});
}

void KoGaMaTools::Services::AvatarModule::AvatarService::ExportAvatar()
{
	auto filePath = pfd::save_file("Save model config").result();
	if (filePath.empty())
	{
		isBusy = false;
		return;
	}

	this->_mainComponent->ExecuteCallback([this, filePath](void*)
		{
			try
			{
				const auto cubes = _avatarInfo;

				

				auto msgpack = nlohmann::json::to_msgpack(*cubes);

				std::span<const char> buffer(
					reinterpret_cast<const char*>(msgpack.data()),
					msgpack.size()
				);

				if (!fileService->WriteBinary(filePath, buffer))
				{
					loggerService->Error("Failed to write avatar file: " + filePath);

				}
			}
			catch (const std::exception& e)
			{
				loggerService->Error(std::string("ExportAvatar exception: ") + e.what());
			}
			isBusy = false;

		});
}
