#include "CopyModel.h"
#include <imgui.h>
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <Tools.Il2Cpp.ICalls.h>
#include "CubeInfo.h"
#include "ModelUtils.h"

void KoGaMaTools::Services::ModelModule::CopyModelService::Init(Core::DIContainer& di)
{
	Instance = di.Get<CopyModelService>();

}

void KoGaMaTools::Services::ModelModule::CopyModelService::Execute(Tools::Il2Cpp::Il2CppObject wo)
{
	CopyModel(wo);


}

bool KoGaMaTools::Services::ModelModule::CopyModelService::ShouldShow(Tools::Il2Cpp::Il2CppObject wo)
{
    return ModelUtils::ContainsModel(wo) && ModelUtils::IsOwner(ModelUtils::GetModel(wo));
}


std::string_view KoGaMaTools::Services::ModelModule::CopyModelService::GetName()
{
	return "Copy Model";
}

bool KoGaMaTools::Services::ModelModule::CopyModelService::Resolve(TextCommandService::CommandData& command)
{
    if (command.name != L"copy-model") return false;

	auto modelCurrent = ModelUtils::GetCurrentModel();
	if (!modelCurrent.isNull() && ModelUtils::IsOwner(modelCurrent))
	{
		CopyModel(modelCurrent);
		TextCommandService::NotifyUser("Model data copied from current model.");

	}
	else {
		TextCommandService::NotifyUser("No model selected to copy.");
	}
    return true;
}

void KoGaMaTools::Services::ModelModule::CopyModelService::CopyModel(Tools::Il2Cpp::Il2CppObject wo)
{
	copiedCubes = ModelUtils::GetCubesInfo(ModelUtils::GetModel(wo));
}

std::string_view KoGaMaTools::Services::ModelModule::CopyModelService::GetCommandHelp()
{
	return "/copy-model: Copies the model data of the selected object.";
}
