#pragma once
#include <set>
#include <kogama-tools/Types/IntVector.h>
#include <Tools.Il2Cpp.Lib.h>
#include <kogama-tools/services/Common/MainComponent.h>
#include "CubeInfo.h"

namespace KoGaMaTools::Services::ModelModule::ModelUtils
{
	std::set<KoGaMaTools::Types::IntVector> GetCubesPositions(Tools::Il2Cpp::Il2CppObject model);
	KoGaMaTools::Services::MainComponent::TaskCoroutine PasteCubeCoro(Tools::Il2Cpp::Il2CppObject model, bool replaceOld, const std::vector<KoGaMaTools::Services::ModelModule::CubeInfo>& cubes);
	bool ContainsModel(Tools::Il2Cpp::Il2CppObject wo);
	Tools::Il2Cpp::Il2CppObject GetEditableModel(Tools::Il2Cpp::Il2CppObject wo, auto& field);
	template <typename T>
	bool TryGetEditableModel(Tools::Il2Cpp::Il2CppObject wo, Tools::Il2Cpp::Il2CppObject& modelResult);
	template<typename... T>
	Tools::Il2Cpp::Il2CppObject TryGetEditableModels(Tools::Il2Cpp::Il2CppObject wo);
	Tools::Il2Cpp::Il2CppObject GetModel(Tools::Il2Cpp::Il2CppObject wo);

	bool IsOwner(Tools::Il2Cpp::Il2CppObject model);
	std::vector<KoGaMaTools::Services::ModelModule::CubeInfo> GetCubesInfo(Tools::Il2Cpp::Il2CppObject model);
	Tools::Il2Cpp::Il2CppObject GetCurrentModel();

	template<typename T>
	bool TryGetEditableModel(Tools::Il2Cpp::Il2CppObject wo, Tools::Il2Cpp::Il2CppObject& modelResult)
	{
		auto klass = wo.GetClass();

		if (!T::klass.isAssignableFrom(klass))
			return false;

		modelResult = GetEditableModel(wo, T::f_editableCubeModelWrapper);
		return !modelResult.isNull();
	}

	template<typename... T>
	Tools::Il2Cpp::Il2CppObject TryGetEditableModels(Tools::Il2Cpp::Il2CppObject wo)
	{
		Tools::Il2Cpp::Il2CppObject result{};
		(TryGetEditableModel<T>(wo, result) || ...);
		return result;
	}
	bool UserContainsMaterial(uint8_t materialId);
}