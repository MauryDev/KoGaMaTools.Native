#include "ModelUtils.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <Tools.Il2Cpp.ICalls.h>


namespace KoGaMaTools::Services::ModelModule::ModelUtils {
	std::set<KoGaMaTools::Types::IntVector> GetCubesPositions(Tools::Il2Cpp::Il2CppObject wo)
	{
		using namespace KoGaMaAPI::KoGaMa;
		using namespace Tools::Il2Cpp::ICalls;
		using Il2CppObj = Tools::Il2Cpp::Il2CppObject;
		auto prototypeModel = MVCubeModelBase::f_prototypeCubeModel.Get<Il2CppObj>(wo);
		auto chunks = RuntimePrototypeCubeModel::f_chunks.Get<Il2CppObj>(prototypeModel);
		auto chunksValues = IDictionary::m_get_Values(chunks);
		auto chunkEnum = IEnumerable::m_GetEnumerator(chunksValues);

		std::set<KoGaMaTools::Types::IntVector> cubesPos;
		while (IEnumerator::m_MoveNext(chunkEnum).Unbox<bool>())
		{
			auto chunk = IEnumerator::m_get_Current(chunkEnum);
			auto cells = CubeModelChunk::f_cells.Get<Il2CppObj>(chunk);
			auto cellsKeys = IDictionary::m_get_Keys(cells);
			auto cellsEnum = IEnumerable::m_GetEnumerator(cellsKeys);

			while (IEnumerator::m_MoveNext(cellsEnum).Unbox<bool>())
			{
				auto pos = IEnumerator::m_get_Current(cellsEnum).Unbox<Types::IntVector>();


				cubesPos.insert(pos);
			}
		}
		return cubesPos;
	}

	KoGaMaTools::Services::MainComponent::TaskCoroutine PasteCubeCoro(Tools::Il2Cpp::Il2CppObject wo, bool replaceOld, const std::vector<KoGaMaTools::Services::ModelModule::CubeInfo>& cubes)
	{
		namespace K = KoGaMaAPI::KoGaMa;

		auto positions = ModelUtils::GetCubesPositions(wo);
		co_yield{};
		for (const auto& cubeinfo : cubes)
		{
			auto existingCube = K::MVCubeModelBase::m_GetCube(wo, cubeinfo.Position);
			auto cubeNew = Tools::Il2Cpp::Il2CppObject::New(K::Cube::klass);
			auto faceMaterialsArray = Tools::Il2Cpp::Il2CppArray::New(Tools::Il2Cpp::ICalls::Byte::klass, 6);
			auto cornersArray = Tools::Il2Cpp::Il2CppArray::New(Tools::Il2Cpp::ICalls::Byte::klass, 8);
			memcpy_s(cornersArray.GetItems<uint8_t>(), 8, cubeinfo.Corners.data(), 8);
			memcpy_s(faceMaterialsArray.GetItems<uint8_t>(), 6, cubeinfo.FaceMaterials.data(), 6);

			K::Cube::m0__ctor(cubeNew, cornersArray, faceMaterialsArray);
			if (existingCube.isNull())
			{

				K::MVCubeModelBase::m_AddCube(wo, cubeinfo.Position, cubeNew);
			}
			else {
				positions.erase(cubeinfo.Position);
				K::MVCubeModelBase::m_CornersChangedDone(wo, cubeinfo.Position, cubeNew);
			}
			K::MVCubeModelBase::m_HandleDelta(wo);
			co_yield{};

		}
		for (auto& position : positions)
		{
			if (replaceOld)
			{
				K::MVCubeModelBase::m_RemoveCube(wo, position);
				K::MVCubeModelBase::m_HandleDelta(wo);
				co_yield{};

			}
		}
	}

	bool ContainsModel(Tools::Il2Cpp::Il2CppObject wo)
	{
		namespace K = KoGaMaAPI::KoGaMa;

		if (wo.isNull())
			return false;

		auto classWo = wo.GetClass();

		static const auto classes = {
			K::MVCubeModelBase::klass,
			K::MVJetPack::klass,
			K::MVAdvancedGhost::klass,
			K::MVDoorBlueprint::klass,
			K::MVEditablePickupItemBaseBlueprint::klass,
			K::MVSentryGunBlueprint::klass,
			K::MVSimpleOneSeatVehicle::klass,
			K::MVVehicleEnergy::klass,
			K::CollectTheItemCollectable::klass,
			K::CollectTheItemDropOff::klass,
			K::MVMovingPlatformGroup::klass,
			K::MVRotator::klass
		};

		for (auto klass : classes)
			if (klass.isAssignableFrom(classWo))
				return true;

		return false;
	}

	Tools::Il2Cpp::Il2CppObject GetEditableModel(Tools::Il2Cpp::Il2CppObject wo, auto& field)
	{
		namespace K = KoGaMaAPI::KoGaMa;
		auto editable = field.Get<Tools::Il2Cpp::Il2CppObject>(wo);
		return K::EditableCubeModelWrapper::m_get_CubeModel(editable);
	}
	
	Tools::Il2Cpp::Il2CppObject GetModel(Tools::Il2Cpp::Il2CppObject wo)
	{
		namespace K = KoGaMaAPI::KoGaMa;
		auto klass = wo.GetClass();
		if (K::MVCubeModelBase::klass.isAssignableFrom(klass))
			return wo;

		if (K::MVMovingPlatformGroup::klass.isAssignableFrom(klass)) {
			auto platform = K::MVMovingPlatformGroup::m_get_Platform(wo);
			return K::MVMovable::m_get_CubeModel(platform);
		}

		if (K::MVRotator::klass.isAssignableFrom(klass))
			return  K::MVMovable::m_get_CubeModel(wo);

		if (K::MVSentryGunBlueprint::klass.isAssignableFrom(klass))
			return K::MVSentryGunBlueprint::m_get_EditableCubesWO(wo);


		if (auto result = TryGetEditableModels<
			K::MVJetPack,
			K::MVAdvancedGhost,
			K::MVDoorBlueprint,
			K::MVEditablePickupItemBaseBlueprint,
			K::MVSimpleOneSeatVehicle,
			K::MVVehicleEnergy,
			K::CollectTheItemCollectable,
			K::CollectTheItemDropOff
		>(wo); !result.isNull())
		{
			return result;
		}

		return {};
	}

	bool IsOwner(Tools::Il2Cpp::Il2CppObject wo)
	{
		namespace K = KoGaMaAPI::KoGaMa;
		auto prototype = K::MVCubeModelBase::m_get_PrototypeCubeModel(wo);
		auto authorId = K::RuntimePrototypeCubeModel::m_get_AuthorProfileID(prototype)
			.Unbox<int>();
		auto localPlayer = K::MVGameControllerBase::m_get_LocalPlayer();
		auto currentPlayerId = K::MVPlayer::m_get_ProfileID(localPlayer)
			.Unbox<int>();
		return authorId == -1 || authorId == currentPlayerId;
	}

	std::vector<KoGaMaTools::Services::ModelModule::CubeInfo> GetCubesInfo(Tools::Il2Cpp::Il2CppObject wo)
	{
		using namespace KoGaMaAPI::KoGaMa;
		using namespace Tools::Il2Cpp::ICalls;
		using Il2CppObj = Tools::Il2Cpp::Il2CppObject;
		auto prototypeModel = MVCubeModelBase::f_prototypeCubeModel.Get<Il2CppObj>(wo);
		auto chunks = RuntimePrototypeCubeModel::f_chunks.Get<Il2CppObj>(prototypeModel);
		auto chunksValues = IDictionary::m_get_Values(chunks);
		auto chunkEnum = IEnumerable::m_GetEnumerator(chunksValues);

		std::vector<CubeInfo> cubeInfos;
		while (IEnumerator::m_MoveNext(chunkEnum).Unbox<bool>())
		{
			auto chunk = IEnumerator::m_get_Current(chunkEnum);
			auto cells = CubeModelChunk::f_cells.Get<Il2CppObj>(chunk);
			auto cellsEnum = IEnumerable::m_GetEnumerator(cells);

			while (IEnumerator::m_MoveNext(cellsEnum).Unbox<bool>())
			{
				auto currentEntry = IEnumerator::m_get_Current(cellsEnum);

				using KVP = KeyValuePair_2::ginst<IntVector, Cell>;
				auto posObj = KVP::m_get_Key(currentEntry);
				auto cellObj = KVP::m_get_Value(currentEntry);

				CubeInfo info;
				info.Position = posObj.Unbox<Types::IntVector>();

				auto cube = Cell::f_cube.Get<Il2CppObj>(cellObj);

				auto materials = CubeBase::m_get_FaceMaterials(cube)
					.As<Tools::Il2Cpp::Il2CppArray>()
					.GetItems<uint8_t>();

				auto corners = CubeBase::m_get_ByteCorners(cube)
					.As<Tools::Il2Cpp::Il2CppArray>()
					.GetItems<uint8_t>();

				memcpy_s(info.FaceMaterials.data(), 6, materials, 6);
				memcpy_s(info.Corners.data(), 8, corners, 8);


				cubeInfos.push_back(info);
			}
		}
		return cubeInfos;
	}

	Tools::Il2Cpp::Il2CppObject GetCurrentModel()
	{
		namespace K = KoGaMaAPI::KoGaMa;

		auto editUi = K::MVGameControllerBase::m_get_EditModeUI();
		if (editUi.isNull()) return {};
		auto emsm = K::DesktopEditModeController::m_get_EditModeStateMachine(editUi);
		if (emsm.isNull()) return {};

		auto cmsm = K::EditorStateMachine::m_get_CubeModelingStateMachine(emsm);
		if (cmsm.isNull()) return {};
		return K::CubeModelingStateMachine::m_get_TargetCubeModel(cmsm);
	}

}


