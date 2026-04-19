#include "ModelUtils.h"
#include <metadata/KoGaMaAPI.KoGaMa.h>
#include <Tools.Il2Cpp.ICalls.h>


namespace KoGaMaTools::Services::ModelModule::ModelUtils {
	void ForEachChunk(Tools::Il2Cpp::Il2CppObject model, void* ud, FnWithUserData<Tools::Il2Cpp::Il2CppObject>&& fn)
	{
		using namespace KoGaMaAPI::KoGaMa;
		using namespace Tools::Il2Cpp::ICalls;

		auto prototypeModel = MVCubeModelBase::f_prototypeCubeModel.Get<Tools::Il2Cpp::Il2CppObject>(model);
		auto chunks = RuntimePrototypeCubeModel::f_chunks.Get<Tools::Il2Cpp::Il2CppObject>(prototypeModel);
		auto values = IDictionary::m_get_Values(chunks);
		auto it = IEnumerable::m_GetEnumerator(values);

		while (IEnumerator::m_MoveNext(it).Unbox<bool>())
		{
			fn(ud,IEnumerator::m_get_Current(it));
		}
	}
	void ForEachCellKey(Tools::Il2Cpp::Il2CppObject chunk,void* ud, FnWithUserData<Tools::Il2Cpp::Il2CppObject>&& fn)
	{
		using namespace KoGaMaAPI::KoGaMa;
		using namespace Tools::Il2Cpp::ICalls;

		auto cells = CubeModelChunk::f_cells.Get<Tools::Il2Cpp::Il2CppObject>(chunk);
		auto keys = IDictionary::m_get_Keys(cells);
		auto it = IEnumerable::m_GetEnumerator(keys);

		while (IEnumerator::m_MoveNext(it).Unbox<bool>())
		{
			fn(ud,IEnumerator::m_get_Current(it));
		}
	}
	void ForEachCubeEntry(Tools::Il2Cpp::Il2CppObject model, void* ud, FnWithUserData<Tools::Il2Cpp::Il2CppObject, Tools::Il2Cpp::Il2CppObject>&& fn)
	{
		using namespace KoGaMaAPI::KoGaMa;
		using namespace Tools::Il2Cpp::ICalls;

		auto fnChunk = [](void* ud, Tools::Il2Cpp::Il2CppObject chunk)
			{
				auto* pack = static_cast<void**>(ud);
				auto fn = reinterpret_cast<FnWithUserData<Tools::Il2Cpp::Il2CppObject, Tools::Il2Cpp::Il2CppObject>>(pack[0]);
				auto user = pack[1];

				auto cells = CubeModelChunk::f_cells.Get<Tools::Il2Cpp::Il2CppObject>(chunk);
				auto it = IEnumerable::m_GetEnumerator(cells);

				while (IEnumerator::m_MoveNext(it).Unbox<bool>())
				{
					auto entry = IEnumerator::m_get_Current(it);

					using KVP = KeyValuePair_2::ginst<IntVector, Cell>;

					auto pos = KVP::m_get_Key(entry);
					auto cell = KVP::m_get_Value(entry);
					auto cube = Cell::f_cube.Get<Tools::Il2Cpp::Il2CppObject>(cell);

					fn(user, pos, cube);
				}
			};

		void* pack[2] = { (void*)fn, ud };

		ForEachChunk(model, pack, fnChunk);
	}
	std::set<KoGaMaTools::Types::IntVector> GetCubesPositions(Tools::Il2Cpp::Il2CppObject wo)
	{
		
		using namespace KoGaMaAPI::KoGaMa;
		using namespace Tools::Il2Cpp::ICalls;
		using Il2CppObj = Tools::Il2Cpp::Il2CppObject;

		std::set<KoGaMaTools::Types::IntVector> cubesPos;

		
		static auto fnCellKey = [](void* ud, Tools::Il2Cpp::Il2CppObject cellKey) {
			
			auto cubesPos = static_cast<std::set<KoGaMaTools::Types::IntVector>*>(ud);
			auto pos = cellKey.Unbox<Types::IntVector>();
			cubesPos->insert(pos);
		};
		static auto fnChunk = [](void* ud, Tools::Il2Cpp::Il2CppObject chunk) {
			ForEachCellKey(chunk, ud, fnCellKey);
		};

		ForEachChunk(wo, &cubesPos, fnChunk);
		
		return cubesPos;
	}

	KoGaMaTools::Services::MainComponent::TaskCoroutine PasteCubeCoro(Tools::Il2Cpp::Il2CppObject wo, bool replaceOld, std::shared_ptr<std::vector<KoGaMaTools::Services::ModelModule::CubeInfo>> cubes)
	{
		auto task= PasteCubeCoro(wo, replaceOld, *cubes);
		while(task.next()) co_yield{};
		
	}

	KoGaMaTools::Services::MainComponent::TaskCoroutine PasteCubeCoro(Tools::Il2Cpp::Il2CppObject model, bool replaceOld, const std::vector<KoGaMaTools::Services::ModelModule::CubeInfo>& cubes)
	{
		namespace K = KoGaMaAPI::KoGaMa;

		auto positions = ModelUtils::GetCubesPositions(model);
		co_yield{};
		for (const auto& cubeinfo : cubes)
		{
			auto existingCube = GetCube(model, cubeinfo.Position);
			auto cubeNew = CreateCubeObject(cubeinfo);

			auto pos = cubeinfo.Position;
			if (existingCube.isNull())
			{

				AddCube(model, pos, cubeNew);
			}
			else {
				positions.erase(pos);
				ReplaceCube(model, pos, cubeNew);
			}
			ApplyDelta(model);
			co_yield{};

		}
		for (auto& position : positions)
		{
			if (replaceOld)
			{
				RemoveCube(model, position);
				ApplyDelta(model);
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
		using Il2CppObj = Tools::Il2Cpp::Il2CppObject;

		std::vector<CubeInfo> cubeInfos;

		ForEachCubeEntry(wo, &cubeInfos,
			[](void* ud, Il2CppObj pos, Il2CppObj cube)
			{
				auto* vec = static_cast<std::vector<CubeInfo>*>(ud);

				CubeInfo info = GetCubeInfo(cube);
				info.Position = pos.Unbox<Types::IntVector>();

				vec->push_back(info);
			});

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

	bool UserContainsMaterial(uint8_t materialId)
	{
		namespace K = KoGaMaAPI::KoGaMa;
		auto instance = K::MVMaterialRepository::f_instance.Get<Tools::Il2Cpp::Il2CppObject>();
		return K::MVMaterialRepository::m1_IsMaterialUnlocked(instance, materialId)
			.Unbox<bool>();
		
	}

	Tools::Il2Cpp::Il2CppObject CreateCubeObject(const KoGaMaTools::Services::ModelModule::CubeInfo& cubeInfo)
	{
		namespace K = KoGaMaAPI::KoGaMa;
		

		auto cubeNew = Tools::Il2Cpp::Il2CppObject::New(K::Cube::klass);
		auto faceMaterialsArray = Tools::Il2Cpp::Il2CppArray::New(Tools::Il2Cpp::ICalls::Byte::klass, FACE_COUNT);
		auto cornersArray = Tools::Il2Cpp::Il2CppArray::New(Tools::Il2Cpp::ICalls::Byte::klass, CORNER_COUNT);
		auto* faceMaterialsItems = faceMaterialsArray.GetItems<uint8_t>();

	
		std::ranges::copy(cubeInfo.Corners, cornersArray.GetItems<uint8_t>());
		std::ranges::copy(cubeInfo.FaceMaterials, faceMaterialsItems);

		for (auto& material : std::span(faceMaterialsItems, FACE_COUNT))
		{
			if (!UserContainsMaterial(material))
			{
				material = DEFAULT_MATERIAL;
			}
		}
		K::Cube::m0__ctor(cubeNew, cornersArray, faceMaterialsArray);
		return cubeNew;
	}

	KoGaMaTools::Services::ModelModule::CubeInfo GetCubeInfo(Tools::Il2Cpp::Il2CppObject cube)
	{
		namespace K = KoGaMaAPI::KoGaMa;
		KoGaMaTools::Services::ModelModule::CubeInfo ret{};
		auto materials = K::CubeBase::m_get_FaceMaterials(cube)
			.As<Tools::Il2Cpp::Il2CppArray>()
			.GetItems<uint8_t>();

		auto corners = K::CubeBase::m_get_ByteCorners(cube)
			.As<Tools::Il2Cpp::Il2CppArray>()
			.GetItems<uint8_t>();



		std::ranges::copy(std::span(materials, FACE_COUNT), ret.FaceMaterials.begin());
		std::ranges::copy(std::span(corners, CORNER_COUNT), ret.Corners.begin());


		return ret;
	}

	void AddCube(Tools::Il2Cpp::Il2CppObject model, KoGaMaTools::Types::IntVector pos, Tools::Il2Cpp::Il2CppObject cube)
	{
		KoGaMaAPI::KoGaMa::MVCubeModelBase::m_AddCube(model, pos, cube);
	}

	void ReplaceCube(Tools::Il2Cpp::Il2CppObject model, KoGaMaTools::Types::IntVector pos, Tools::Il2Cpp::Il2CppObject cube)
	{
		KoGaMaAPI::KoGaMa::MVCubeModelBase::m_CornersChangedDone(model, pos, cube);
	}

	void RemoveCube(Tools::Il2Cpp::Il2CppObject model, KoGaMaTools::Types::IntVector pos)
	{
		KoGaMaAPI::KoGaMa::MVCubeModelBase::m_RemoveCube(model, pos);
	}

	void ApplyDelta(Tools::Il2Cpp::Il2CppObject model)
	{
		KoGaMaAPI::KoGaMa::MVCubeModelBase::m_HandleDelta(model);
	}

	Tools::Il2Cpp::Il2CppObject GetCube(Tools::Il2Cpp::Il2CppObject model, KoGaMaTools::Types::IntVector pos)
	{
		return KoGaMaAPI::KoGaMa::MVCubeModelBase::m_GetCube(model,pos);
	}

}


