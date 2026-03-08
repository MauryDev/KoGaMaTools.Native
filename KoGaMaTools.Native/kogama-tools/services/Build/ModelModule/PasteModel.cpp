#include "PasteModel.h"
#include <imgui.h>
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <Tools.Il2Cpp.ICalls.h>
#include "ModelUtils.h"

void KoGaMaTools::Services::ModelModule::PasteModelService::Init(Core::DIContainer& di)
{
	Instance = di.Get<PasteModelService>();
	copyService = di.Get<CopyModelService>();
	mainComponent = di.Get<MainComponent>();
}


void KoGaMaTools::Services::ModelModule::PasteModelService::Execute(Tools::Il2Cpp::Il2CppObject wo)
{
	PasteCube( wo, ReplaceOld, this->copyService->copiedCubes);
}

bool KoGaMaTools::Services::ModelModule::PasteModelService::ShouldShow(Tools::Il2Cpp::Il2CppObject wo)
{
	return ModelUtils::ContainsModel(wo);
}

bool KoGaMaTools::Services::ModelModule::PasteModelService::PasteCube(Tools::Il2Cpp::Il2CppObject wo, bool replaceOld, const std::vector<KoGaMaTools::Services::ModelModule::CubeInfo>& cubes)
{
	auto model = ModelUtils::GetModel(wo);
	Instance->mainComponent->AddCoroutine(ModelUtils::PasteCubeCoro(model, replaceOld, cubes));
	return true;
}

std::string_view KoGaMaTools::Services::ModelModule::PasteModelService::GetName()
{
	return "Paste Model";
}

bool KoGaMaTools::Services::ModelModule::PasteModelService::Resolve(TextCommandService::CommandData& command)
{
	if (command.name == L"paste-model") {
		auto modelCurrent = ModelUtils::GetCurrentModel();
		if (!modelCurrent.isNull())
		{
			Instance->mainComponent->AddCoroutine(ModelUtils::PasteCubeCoro(modelCurrent, ReplaceOld, this->copyService->copiedCubes));
			TextCommandService::NotifyUser("Pasting model to current model.");
		}
		else {
			TextCommandService::NotifyUser("No model selected to paste.");
		}
		return true;
	}
	else if (command.name == L"paste-model-option")
	{
		if (command.args.size() == 1 && command.args[0] == L"replace-old")
		{
			Instance->ReplaceOld = true;
			TextCommandService::NotifyUser("Option 'replace-old' enabled. Cubes in the way will be replaced when pasting.");
		}
		else if (command.args.size() == 1 && command.args[0] == L"keep-old")
		{
			Instance->ReplaceOld = false;
			TextCommandService::NotifyUser("Option 'replace-old' disabled. Cubes in the way will not be replaced when pasting.");
		}
		else {
			TextCommandService::NotifyUser("Invalid argument for paste-model-option. Use 'replace-old' or 'keep-old'.");
		}
	}
	

	return false;
}

std::string_view KoGaMaTools::Services::ModelModule::PasteModelService::GetCommandHelp()
{
	return "/paste-model: Pastes the copied model data to the selected object. Use /paste-model-option replace-old to replace cubes in the way, or /paste-model-option keep-old to not replace them.";
}
