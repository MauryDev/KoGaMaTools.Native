#pragma once

#include "Tools.Il2Cpp.Lib.h"
#include "Il2CppUtils.h"
#include "Il2CppMetadata.h"
#include <array>
namespace KoGaMaAPI::KoGaMa {
void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);

struct PaintCubes {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<1> fields;
inline static auto /* PaintCursor */ &f_paintCursor = fields.get<false>(0);

    inline static ::Tools::Il2Cpp::Metadata::array_method<5> methods;
    /* System.Void Enter(CubeModelingStateMachine e) */
    inline static auto& m_Enter = methods.get<false, true>(0);
    /* System.Void Execute(CubeModelingStateMachine e) */
    inline static auto& m_Execute = methods.get<false, true>(1);
    /* System.Void Exit(CubeModelingStateMachine e) */
    inline static auto& m_Exit = methods.get<false, true>(2);
    /* System.Void HideCursor() */
    inline static auto& m_HideCursor = methods.get<false, true>(3);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(4);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct CubeModelTool {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<5> fields;
inline static auto /* EditCubeChange */ &f_cubeChange = fields.get<true>(1), /* System.Int32 */ &f_cubeCount = fields.get<true>(2), /* System.Action`2<System.Int32, EditCubeChange> */ &f_OnEditCubeChange = fields.get<true>(3);
inline static auto /* System.Boolean */ &f_waitForMouseUp = fields.get<false>(0), /* CubeModelingEvent */ &f__StateType_k__BackingField = fields.get<false>(4);

    inline static ::Tools::Il2Cpp::Metadata::array_method<14> methods;
    /* CubeModelingEvent get_StateType() */
    inline static auto& m_get_StateType = methods.get<false, false>(0);
    /* System.Void set_StateType(CubeModelingEvent value) */
    inline static auto& m_set_StateType = methods.get<false, false>(1);
    /* System.Void SendCubeEvent(System.Int32 cubeCount, EditCubeChange cubeChange) */
    inline static auto& m_SendCubeEvent = methods.get<true, false>(2);
    /* System.Boolean get_CursorVisible() */
    inline static auto& m_get_CursorVisible = methods.get<false, true>(3);
    /* System.Void set_CursorVisible(System.Boolean value) */
    inline static auto& m_set_CursorVisible = methods.get<false, true>(4);
    /* System.Void SetStateType(CubeModelingEvent stateTypeEvent) */
    inline static auto& m_SetStateType = methods.get<false, false>(5);
    /* System.Void Enter(CubeModelingStateMachine esm) */
    inline static auto& m0_Enter = methods.get<false, true>(6);
    /* System.Void Enter(FSMEntity e) */
    inline static auto& m1_Enter = methods.get<false, true>(9);
    /* System.Void Execute(CubeModelingStateMachine e) */
    inline static auto& m0_Execute = methods.get<false, true>(7);
    /* System.Void Execute(FSMEntity e) */
    inline static auto& m1_Execute = methods.get<false, true>(10);
    /* System.Void Exit(CubeModelingStateMachine esm) */
    inline static auto& m0_Exit = methods.get<false, true>(8);
    /* System.Void Exit(FSMEntity e) */
    inline static auto& m1_Exit = methods.get<false, true>(11);
    /* System.Void HideCursor() */
    inline static auto& m_HideCursor = methods.get<false, true>(12);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(13);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVInputWrapper {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<5> fields;
inline static auto /* System.Single */ &f_mouseSensitivtyModifier = fields.get<true>(0), /* MVInputWrapper+InputSuppression */ &f_isInputAllSuppressed = fields.get<true>(1), /* MVInputWrapper+InputSuppression */ &f_isShortcutKeysSuppressed = fields.get<true>(2), /* MVInputWrapper+InputSuppression */ &f_isInGameInputSuppressed = fields.get<true>(3), /* IKogamaInputMap */ &f_inputMap = fields.get<true>(4);

    inline static ::Tools::Il2Cpp::Metadata::array_method<30> methods;
    /* System.Single get_MouseSensitivityModifier() */
    inline static auto& m_get_MouseSensitivityModifier = methods.get<true, false>(0);
    /* System.Void set_MouseSensitivityModifier(System.Single value) */
    inline static auto& m_set_MouseSensitivityModifier = methods.get<true, false>(1);
    /* System.Boolean get_IsAllInputSuppressed() */
    inline static auto& m_get_IsAllInputSuppressed = methods.get<true, false>(2);
    /* System.Void SuppressAllInput() */
    inline static auto& m_SuppressAllInput = methods.get<true, false>(3);
    /* System.Boolean get_IsShortcutKeysSuppressed() */
    inline static auto& m_get_IsShortcutKeysSuppressed = methods.get<true, false>(4);
    /* System.Void SuppressShortcutKeys() */
    inline static auto& m_SuppressShortcutKeys = methods.get<true, false>(5);
    /* System.Boolean get_IsInGameInputSuppressed() */
    inline static auto& m_get_IsInGameInputSuppressed = methods.get<true, false>(6);
    /* System.Void SuppressInGameInput() */
    inline static auto& m_SuppressInGameInput = methods.get<true, false>(7);
    /* System.Void SetInputMap(IKogamaInputMap inputMap) */
    inline static auto& m_SetInputMap = methods.get<true, false>(8);
    /* System.Boolean GetBooleanControl(KogamaControls control) */
    inline static auto& m0_GetBooleanControl = methods.get<true, false>(9);
    /* System.Boolean GetBooleanControl(KogamaControls control, KeyState keyState) */
    inline static auto& m1_GetBooleanControl = methods.get<true, false>(12);
    /* System.Boolean GetBooleanControlDown(KogamaControls control) */
    inline static auto& m_GetBooleanControlDown = methods.get<true, false>(10);
    /* System.Boolean GetBooleanControlUp(KogamaControls control) */
    inline static auto& m_GetBooleanControlUp = methods.get<true, false>(11);
    /* UnityEngine.Vector3 GetPointerPosition() */
    inline static auto& m_GetPointerPosition = methods.get<true, false>(13);
    /* System.Single GetAxis(System.String axis) */
    inline static auto& m_GetAxis = methods.get<true, false>(14);
    /* System.Single GetAxisWithoutSensitivity(System.String axis) */
    inline static auto& m_GetAxisWithoutSensitivity = methods.get<true, false>(15);
    /* System.Single GetAxisRaw(System.String axis) */
    inline static auto& m_GetAxisRaw = methods.get<true, false>(16);
    /* System.Single GetAxisRawWithoutSensitivity(System.String axis) */
    inline static auto& m_GetAxisRawWithoutSensitivity = methods.get<true, false>(17);
    /* System.Void ResetInput() */
    inline static auto& m_ResetInput = methods.get<true, false>(18);
    /* System.Boolean GetBooleanControlDeviceDependent(KogamaControls kogamaControls) */
    inline static auto& m_GetBooleanControlDeviceDependent = methods.get<true, false>(19);
    /* System.Boolean DebugGetKeyDown(UnityEngine.KeyCode key) */
    inline static auto& m0_DebugGetKeyDown = methods.get<true, false>(20);
    /* System.Boolean DebugGetKeyDown(System.String st) */
    inline static auto& m1_DebugGetKeyDown = methods.get<true, false>(21);
    /* System.Boolean DebugGetKey(UnityEngine.KeyCode key) */
    inline static auto& m0_DebugGetKey = methods.get<true, false>(22);
    /* System.Boolean DebugGetKey(System.String st) */
    inline static auto& m1_DebugGetKey = methods.get<true, false>(23);
    /* System.Boolean DebugGetKeyUp(UnityEngine.KeyCode key) */
    inline static auto& m0_DebugGetKeyUp = methods.get<true, false>(24);
    /* System.Boolean DebugGetKeyUp(System.String st) */
    inline static auto& m1_DebugGetKeyUp = methods.get<true, false>(25);
    /* System.Boolean InputCharActive(UnityEngine.KeyCode key) */
    inline static auto& m_InputCharActive = methods.get<true, false>(26);
    /* System.Boolean InputCharActiveDown(UnityEngine.KeyCode key) */
    inline static auto& m_InputCharActiveDown = methods.get<true, false>(27);
    /* System.String GetStringInput() */
    inline static auto& m_GetStringInput = methods.get<true, false>(28);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(29);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct KogamaControls {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<56> fields;
inline static auto /* KogamaControls */ &f_MoveForward = fields.get<true>(1), /* KogamaControls */ &f_MoveLeft = fields.get<true>(2), /* KogamaControls */ &f_MoveRight = fields.get<true>(3), /* KogamaControls */ &f_MoveBackwards = fields.get<true>(4), /* KogamaControls */ &f_AlternateCameraControls = fields.get<true>(5), /* KogamaControls */ &f_PointerSelect = fields.get<true>(6), /* KogamaControls */ &f_PointerSelectAlt = fields.get<true>(7), /* KogamaControls */ &f_EnterObject = fields.get<true>(8), /* KogamaControls */ &f_DeleteObject = fields.get<true>(9), /* KogamaControls */ &f_LeaveObject = fields.get<true>(10), /* KogamaControls */ &f_AddToSelection = fields.get<true>(11), /* KogamaControls */ &f_MoveDrawPlaneUp = fields.get<true>(12), /* KogamaControls */ &f_MoveDrawPlaneDown = fields.get<true>(13), /* KogamaControls */ &f_EmbedChangeGame = fields.get<true>(14), /* KogamaControls */ &f_ToggleFullScreen = fields.get<true>(15), /* KogamaControls */ &f_ShowChat = fields.get<true>(16), /* KogamaControls */ &f_Respawn = fields.get<true>(17), /* KogamaControls */ &f_TogglePlayerParticles = fields.get<true>(18), /* KogamaControls */ &f_ShowPlayerWindow = fields.get<true>(19), /* KogamaControls */ &f_DropCurrentItem = fields.get<true>(20), /* KogamaControls */ &f_Use = fields.get<true>(21), /* KogamaControls */ &f_FocusOnSelectedModel = fields.get<true>(22), /* KogamaControls */ &f_TogglePlayInEditor = fields.get<true>(23), /* KogamaControls */ &f_ToggleLogicRendering = fields.get<true>(24), /* KogamaControls */ &f_ToggleGripdSnapSize = fields.get<true>(25), /* KogamaControls */ &f_ActivateEditCubeTool = fields.get<true>(26), /* KogamaControls */ &f_ActivateDeleteCubeTool = fields.get<true>(27), /* KogamaControls */ &f_ActivatePaintCubeTool = fields.get<true>(28), /* KogamaControls */ &f_ChangeMaterial = fields.get<true>(29), /* KogamaControls */ &f_OpenInventory = fields.get<true>(30), /* KogamaControls */ &f_CreateNewModel = fields.get<true>(31), /* KogamaControls */ &f_ToggleDrawPlane = fields.get<true>(32), /* KogamaControls */ &f_Fire = fields.get<true>(33), /* KogamaControls */ &f_Jump = fields.get<true>(34), /* KogamaControls */ &f_DrawAudioBox = fields.get<true>(35), /* KogamaControls */ &f_ChatSendLine = fields.get<true>(36), /* KogamaControls */ &f_ChatShiftLineUp = fields.get<true>(37), /* KogamaControls */ &f_ChatShiftLineDown = fields.get<true>(38), /* KogamaControls */ &f_ChangeFocus = fields.get<true>(39), /* KogamaControls */ &f_ChangeChangeFocusDirection = fields.get<true>(40), /* KogamaControls */ &f_Deprecated_ToggleHD = fields.get<true>(41), /* KogamaControls */ &f_PauseMenu = fields.get<true>(42), /* KogamaControls */ &f_Escape = fields.get<true>(43), /* KogamaControls */ &f_Holster = fields.get<true>(44), /* KogamaControls */ &f_EditMoveUp = fields.get<true>(45), /* KogamaControls */ &f_EditMoveDown = fields.get<true>(46), /* KogamaControls */ &f_EditMoveForward = fields.get<true>(47), /* KogamaControls */ &f_EditMoveLeft = fields.get<true>(48), /* KogamaControls */ &f_EditMoveRight = fields.get<true>(49), /* KogamaControls */ &f_EditMoveBackwards = fields.get<true>(50), /* KogamaControls */ &f_EditMoveFast = fields.get<true>(51), /* KogamaControls */ &f_NotificationAcceptFriendshipRequest = fields.get<true>(52), /* KogamaControls */ &f_ToggleCameraEffects = fields.get<true>(53), /* KogamaControls */ &f_ActivatePickColorTool = fields.get<true>(54), /* KogamaControls */ &f_Size = fields.get<true>(55);
inline static auto /* System.Int32 */ &f_value__ = fields.get<false>(0);

    inline static ::Tools::Il2Cpp::Metadata::array_method<0> methods;

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct CubeModelingStateMachine {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<8> fields;
inline static auto /* System.Boolean */ &f_useLasers = fields.get<false>(0), /* CubeModelingStateMachine+OnCurrentMaterialChangeDelegate */ &f_OnCurrentMaterialChange = fields.get<false>(1), /* CodeStage.AntiCheat.ObscuredTypes.ObscuredByte */ &f_currentMaterialId = fields.get<false>(2), /* IModelingConstraint */ &f_constraint = fields.get<false>(3), /* UnityEngine.GameObject */ &f_gameObject = fields.get<false>(4), /* UnityEngine.Camera */ &f_mainCamera = fields.get<false>(5), /* CubePickingInfo */ &f__SelectedCube_k__BackingField = fields.get<false>(6), /* MVCubeModelBase */ &f__TargetCubeModel_k__BackingField = fields.get<false>(7);

    inline static ::Tools::Il2Cpp::Metadata::array_method<27> methods;
    /* CubePickingInfo get_SelectedCube() */
    inline static auto& m_get_SelectedCube = methods.get<false, false>(0);
    /* System.Void set_SelectedCube(CubePickingInfo value) */
    inline static auto& m_set_SelectedCube = methods.get<false, false>(1);
    /* MVCubeModelBase get_TargetCubeModel() */
    inline static auto& m_get_TargetCubeModel = methods.get<false, false>(2);
    /* System.Void set_TargetCubeModel(MVCubeModelBase value) */
    inline static auto& m_set_TargetCubeModel = methods.get<false, false>(3);
    /* UnityEngine.Vector3[] get_CubeCorners() */
    inline static auto& m_get_CubeCorners = methods.get<false, false>(4);
    /* System.Byte[] get_ByteCubeCorners() */
    inline static auto& m_get_ByteCubeCorners = methods.get<false, false>(5);
    /* UnityEngine.Material get_CurrentMaterial() */
    inline static auto& m_get_CurrentMaterial = methods.get<false, false>(6);
    /* System.Byte get_CurrentMaterialId() */
    inline static auto& m_get_CurrentMaterialId = methods.get<false, false>(7);
    /* System.Void set_CurrentMaterialId(System.Byte value) */
    inline static auto& m_set_CurrentMaterialId = methods.get<false, false>(8);
    /* System.Boolean get_CursorVisible() */
    inline static auto& m_get_CursorVisible = methods.get<false, false>(9);
    /* System.Void set_CursorVisible(System.Boolean value) */
    inline static auto& m_set_CursorVisible = methods.get<false, false>(10);
    /* System.Void .ctor(UnityEngine.GameObject gameObject) */
    inline static auto& m__ctor = methods.get<false, false>(11);
    /* System.Void StartEdit(MVCubeModelBase targetCubeModel, IModelingConstraint constraint = null) */
    inline static auto& m_StartEdit = methods.get<false, false>(12);
    /* System.Void SetConstraint(IModelingConstraint constraint) */
    inline static auto& m_SetConstraint = methods.get<false, false>(13);
    /* System.Void EndEdit() */
    inline static auto& m_EndEdit = methods.get<false, false>(14);
    /* System.Void Update() */
    inline static auto& m_Update = methods.get<false, true>(15);
    /* CubeModelingStateMachine+HoverType CurrentlyHovered() */
    inline static auto& m_CurrentlyHovered = methods.get<false, false>(16);
    /* CubePickingInfo DoPicking() */
    inline static auto& m_DoPicking = methods.get<false, false>(17);
    /* System.Void RemoveCursors() */
    inline static auto& m_RemoveCursors = methods.get<false, false>(18);
    /* System.Void HandleAudio(MV.WorldObject.IntVector pos, AudioActions action) */
    inline static auto& m_HandleAudio = methods.get<false, false>(19);
    /* EditCubeChange AddCube() */
    inline static auto& m_AddCube = methods.get<false, false>(20);
    /* CanPerformCubeActionResult CanAddCubeAt(MV.WorldObject.IntVector requestedCubePos, CubePickingInfo requestedCube) */
    inline static auto& m0_CanAddCubeAt = methods.get<false, false>(21);
    /* CanPerformCubeActionResult CanAddCubeAt(MV.WorldObject.IntVector requestedCubePos) */
    inline static auto& m1_CanAddCubeAt = methods.get<false, false>(22);
    /* CanPerformCubeActionResult CanRemoveCubeAt(CubePickingInfo requestedCube) */
    inline static auto& m_CanRemoveCubeAt = methods.get<false, false>(23);
    /* System.Boolean CanEditCubeAt(MV.WorldObject.IntVector requestedCubePos) */
    inline static auto& m_CanEditCubeAt = methods.get<false, false>(24);
    /* CanPerformCubeActionResult CanReplaceCube(CubePickingInfo requestedCube, System.Byte materialId) */
    inline static auto& m_CanReplaceCube = methods.get<false, false>(25);
    /* System.Void <set_CurrentMaterialId>b__23_0(UnityEngine.EventSystems.IHandleMaterial x, UnityEngine.EventSystems.BaseEventData y) */
    inline static auto& m__set_CurrentMaterialId_b__23_0 = methods.get<false, false>(26);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVCubeModelBase {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<9> fields;
inline static auto /* System.Int32 */ &f_TransparencyShaderProperty = fields.get<true>(0);
inline static auto /* RuntimePrototypeCubeModel */ &f_prototypeCubeModel = fields.get<false>(1), /* ChunkInstances */ &f_chunkInstances = fields.get<false>(2), /* System.Func`1<IModelingConstraint> */ &f__ModelingConstraintBuilder_k__BackingField = fields.get<false>(3), /* System.Boolean */ &f_beingEdited = fields.get<false>(4), /* System.Collections.Generic.Queue`1<CubeModelChangedEventArgs> */ &f_changedEventArgsQueue = fields.get<false>(5), /* System.Action`1<CubeModelChangedEventArgs> */ &f_Changed = fields.get<false>(6), /* System.Action`1<System.Collections.Generic.HashSet`1<MV.WorldObject.IntVector>> */ &f_ChunksChanged = fields.get<false>(7), /* System.EventHandler`1<EditStateEventArgs> */ &f_BeingEditedChanged = fields.get<false>(8);

    inline static ::Tools::Il2Cpp::Metadata::array_method<49> methods;
    /* ChunkInstances get_ChunkInstances() */
    inline static auto& m_get_ChunkInstances = methods.get<false, true>(0);
    /* RuntimePrototypeCubeModel get_PrototypeCubeModel() */
    inline static auto& m_get_PrototypeCubeModel = methods.get<false, true>(1);
    /* System.Void set_PrototypeCubeModel(RuntimePrototypeCubeModel value) */
    inline static auto& m_set_PrototypeCubeModel = methods.get<false, false>(2);
    /* System.Int32 get_Pid() */
    inline static auto& m_get_Pid = methods.get<false, false>(3);
    /* System.Func`1<IModelingConstraint> get_ModelingConstraintBuilder() */
    inline static auto& m_get_ModelingConstraintBuilder = methods.get<false, false>(4);
    /* System.Void set_ModelingConstraintBuilder(System.Func`1<IModelingConstraint> value) */
    inline static auto& m_set_ModelingConstraintBuilder = methods.get<false, false>(5);
    /* System.Boolean get_BeingEdited() */
    inline static auto& m_get_BeingEdited = methods.get<false, false>(6);
    /* System.Void set_BeingEdited(System.Boolean value) */
    inline static auto& m_set_BeingEdited = methods.get<false, false>(7);
    /* System.Boolean get_ContainsCubes() */
    inline static auto& m_get_ContainsCubes = methods.get<false, false>(8);
    /* System.Int32 get_CubeCount() */
    inline static auto& m_get_CubeCount = methods.get<false, false>(9);
    /* System.Void add_BeingEditedChanged(System.EventHandler`1<EditStateEventArgs> value) */
    inline static auto& m_add_BeingEditedChanged = methods.get<false, false>(10);
    /* System.Void remove_BeingEditedChanged(System.EventHandler`1<EditStateEventArgs> value) */
    inline static auto& m_remove_BeingEditedChanged = methods.get<false, false>(11);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects, System.Collections.Generic.Dictionary`2<System.Int32, RuntimePrototypeCubeModel> prototypes) */
    inline static auto& m__ctor = methods.get<false, false>(12);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(13);
    /* System.String ToString() */
    inline static auto& m_ToString = methods.get<false, true>(14);
    /* System.Single get_PrototypeScale() */
    inline static auto& m_get_PrototypeScale = methods.get<false, false>(15);
    /* System.Void HandleDelta() */
    inline static auto& m_HandleDelta = methods.get<false, false>(16);
    /* MV.WorldObject.CubeBase GetCubeBase(MV.WorldObject.IntVector pos) */
    inline static auto& m_GetCubeBase = methods.get<false, true>(17);
    /* Cube GetCube(MV.WorldObject.IntVector pos) */
    inline static auto& m_GetCube = methods.get<false, true>(18);
    /* System.Boolean ContainsCube(MV.WorldObject.IntVector pos) */
    inline static auto& m_ContainsCube = methods.get<false, true>(19);
    /* System.Void MakeUnique() */
    inline static auto& m_MakeUnique = methods.get<false, false>(20);
    /* System.Boolean HasInstances() */
    inline static auto& m_HasInstances = methods.get<false, false>(21);
    /* System.Void RemoveCube(MV.WorldObject.IntVector pos) */
    inline static auto& m_RemoveCube = methods.get<false, true>(22);
    /* System.Void AddCube(MV.WorldObject.IntVector pos, MV.WorldObject.CubeBase cube) */
    inline static auto& m_AddCube = methods.get<false, true>(23);
    /* System.Void SetMaterial(MV.WorldObject.IntVector iVector, MV.WorldObject.Face face, System.Byte material) */
    inline static auto& m_SetMaterial = methods.get<false, false>(24);
    /* System.Void ReplaceCube(MV.WorldObject.IntVector iVector, System.Byte materialId) */
    inline static auto& m_ReplaceCube = methods.get<false, false>(25);
    /* System.Void CornersChangedDone(MV.WorldObject.IntVector iVector, Cube cube) */
    inline static auto& m_CornersChangedDone = methods.get<false, false>(26);
    /* System.Void CornersChanged(MV.WorldObject.IntVector iVector, Cube cube) */
    inline static auto& m_CornersChanged = methods.get<false, false>(27);
    /* System.Void UnIndentCubeFace(MV.WorldObject.IntVector localPos, MV.WorldObject.Face face, Cube cube) */
    inline static auto& m_UnIndentCubeFace = methods.get<false, false>(28);
    /* System.Void RemoveCubeNetworkUpdate(MV.WorldObject.IntVector pos) */
    inline static auto& m_RemoveCubeNetworkUpdate = methods.get<false, true>(29);
    /* System.Void AddCubeNetworkUpdate(MV.WorldObject.IntVector pos, MV.WorldObject.CubeBase cube) */
    inline static auto& m_AddCubeNetworkUpdate = methods.get<false, true>(30);
    /* System.Void CubePosToChunkPos(ref MV.WorldObject.IntVector pos) */
    inline static auto& m_CubePosToChunkPos = methods.get<false, true>(31);
    /* UnityEngine.MeshFilter[] get_MeshFilters() */
    inline static auto& m_get_MeshFilters = methods.get<false, false>(32);
    /* UnityEngine.Vector3 get_WorldPivot() */
    inline static auto& m_get_WorldPivot = methods.get<false, true>(33);
    /* UnityEngine.Bounds GetWorldBounds() */
    inline static auto& m_GetWorldBounds = methods.get<false, false>(34);
    /* UnityEngine.Bounds GetBounds() */
    inline static auto& m_GetBounds = methods.get<false, false>(35);
    /* UnityEngine.Bounds GetLocalBounds(BoundsContext boundsContext) */
    inline static auto& m_GetLocalBounds = methods.get<false, true>(36);
    /* UnityEngine.Vector3 GetWorldCenterPos() */
    inline static auto& m_GetWorldCenterPos = methods.get<false, false>(37);
    /* System.Void OnObjectLinkChanged(MV.WorldObject.ObjectLinkChangeType changeType, MV.WorldObject.ObjectLink objectLink) */
    inline static auto& m_OnObjectLinkChanged = methods.get<false, true>(38);
    /* System.Void ObjectLinkChanged(System.Boolean visible) */
    inline static auto& m_ObjectLinkChanged = methods.get<false, false>(39);
    /* System.Void ObjectLinkTransparency() */
    inline static auto& m_ObjectLinkTransparency = methods.get<false, false>(40);
    /* MVCubeModelBase+CurrentTransparencySettings CalculateCurrentTransparencySettings() */
    inline static auto& m_CalculateCurrentTransparencySettings = methods.get<false, false>(41);
    /* System.Void DirtyChunksRegeneratedHandler(System.Collections.Generic.HashSet`1<MV.WorldObject.IntVector> chunksChanged) */
    inline static auto& m_DirtyChunksRegeneratedHandler = methods.get<false, true>(42);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<false, true>(43);
    /* System.Void UpdatePrototypeScale(System.Single scale) */
    inline static auto& m_UpdatePrototypeScale = methods.get<false, false>(44);
    /* System.Void AddToChunkInstances(MV.WorldObject.IntVector chunkPos, ChunkInstances+ChunkInstanceVariables civ) */
    inline static auto& m_AddToChunkInstances = methods.get<false, false>(45);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(46);
    /* System.Int32 ICubeModelCollider.get_Id() */
    inline static auto& m_ICubeModelCollider_get_Id = methods.get<false, true>(47);
    /* IModelingConstraint <.ctor>b__28_0() */
    inline static auto& m___ctor_b__28_0 = methods.get<false, false>(48);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct CubePickingInfo {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<8> fields;
inline static auto /* Cube */ &f_cube = fields.get<false>(0), /* MV.WorldObject.Face */ &f_pickedFace = fields.get<false>(1), /* Edge */ &f_pickedEdge = fields.get<false>(2), /* System.Boolean */ &f_pickedEdgeIndex0 = fields.get<false>(3), /* System.Boolean */ &f_pickedEdgeIndex1 = fields.get<false>(4), /* UnityEngine.Vector3 */ &f_normal = fields.get<false>(5), /* UnityEngine.Vector3 */ &f_point = fields.get<false>(6), /* MV.WorldObject.IntVector */ &f_iLocalPos = fields.get<false>(7);

    inline static ::Tools::Il2Cpp::Metadata::array_method<2> methods;
    /* System.Void .ctor() */
    inline static auto& m0__ctor = methods.get<false, false>(0);
    /* System.Void .ctor(CubePickingInfo cubePickingInfo) */
    inline static auto& m1__ctor = methods.get<false, false>(1);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct EditCubeChange {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<9> fields;
inline static auto /* EditCubeChange */ &f_None = fields.get<true>(1), /* EditCubeChange */ &f_VertexMoved = fields.get<true>(2), /* EditCubeChange */ &f_EdgeMoved = fields.get<true>(3), /* EditCubeChange */ &f_FaceMoved = fields.get<true>(4), /* EditCubeChange */ &f_CubeUnindented = fields.get<true>(5), /* EditCubeChange */ &f_CubeAdded = fields.get<true>(6), /* EditCubeChange */ &f_CubePainted = fields.get<true>(7), /* EditCubeChange */ &f_CubeDeleted = fields.get<true>(8);
inline static auto /* System.Int32 */ &f_value__ = fields.get<false>(0);

    inline static ::Tools::Il2Cpp::Metadata::array_method<0> methods;

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct PaintCursor {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<3> fields;
inline static auto /* CellCursor */ &f_paintCursor = fields.get<false>(0), /* System.Boolean */ &f_flashing = fields.get<false>(1), /* System.Single */ &f_flashingTime = fields.get<false>(2);

    inline static ::Tools::Il2Cpp::Metadata::array_method<4> methods;
    /* System.Void .ctor(UnityEngine.Vector3[] cubeCorners) */
    inline static auto& m__ctor = methods.get<false, false>(0);
    /* System.Void UpdateCursor(CubePickingInfo selectedCube, MVCubeModelBase targetCubeModel, System.Boolean isPainting) */
    inline static auto& m_UpdateCursor = methods.get<false, false>(1);
    /* System.Void Remove() */
    inline static auto& m_Remove = methods.get<false, false>(2);
    /* System.Void UnlockMaterialToRemove() */
    inline static auto& m_UnlockMaterialToRemove = methods.get<false, false>(3);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct AudioActions {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<7> fields;
inline static auto /* AudioActions */ &f_CubeAdded = fields.get<true>(1), /* AudioActions */ &f_CubeRemoved = fields.get<true>(2), /* AudioActions */ &f_FaceMoved = fields.get<true>(3), /* AudioActions */ &f_EdgeMoved = fields.get<true>(4), /* AudioActions */ &f_VertexMoved = fields.get<true>(5), /* AudioActions */ &f_CubePainted = fields.get<true>(6);
inline static auto /* System.Int32 */ &f_value__ = fields.get<false>(0);

    inline static ::Tools::Il2Cpp::Metadata::array_method<0> methods;

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct ConstraintVisualizer {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<1> fields;
inline static auto /* IModelingConstraint */ &f_constraint = fields.get<false>(0);

    inline static ::Tools::Il2Cpp::Metadata::array_method<6> methods;
    /* System.Void Init(MVCubeModelBase targetCubeModel, IModelingConstraint constraint, System.String layer = UIItems) */
    inline static auto& m_Init = methods.get<false, false>(0);
    /* System.Void OnDestroy() */
    inline static auto& m_OnDestroy = methods.get<false, false>(1);
    /* System.Void Constraint_BoxChanged(System.Object sender, ConstraintBoxChangedEventArgs e) */
    inline static auto& m_Constraint_BoxChanged = methods.get<false, false>(2);
    /* System.Void CreateInsideOutCube() */
    inline static auto& m_CreateInsideOutCube = methods.get<false, false>(3);
    /* System.Void BuildMesh(UnityEngine.Vector3[] vertices) */
    inline static auto& m_BuildMesh = methods.get<false, false>(4);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(5);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct ModelingDynamicBoxConstraint {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<2> fields;
inline static auto /* MVCubeModelBase */ &f_cubeModel = fields.get<false>(0), /* ObscuredIntVector */ &f__Size_k__BackingField = fields.get<false>(1);

    inline static ::Tools::Il2Cpp::Metadata::array_method<9> methods;
    /* ObscuredIntVector get_Size() */
    inline static auto& m_get_Size = methods.get<false, false>(0);
    /* System.Void set_Size(ObscuredIntVector value) */
    inline static auto& m_set_Size = methods.get<false, false>(1);
    /* System.Void .ctor(MVCubeModelBase cubeModel, MV.WorldObject.IntVector constraintSize) */
    inline static auto& m__ctor = methods.get<false, false>(2);
    /* System.Void DetachFromCubeModel() */
    inline static auto& m_DetachFromCubeModel = methods.get<false, false>(3);
    /* System.Boolean CanAddCubeAt(MV.WorldObject.IntVector pos) */
    inline static auto& m_CanAddCubeAt = methods.get<false, true>(4);
    /* System.Boolean CanRemoveCubeAt(MV.WorldObject.IntVector pos) */
    inline static auto& m_CanRemoveCubeAt = methods.get<false, true>(5);
    /* System.Boolean CanEditCubeAt(MV.WorldObject.IntVector pos) */
    inline static auto& m_CanEditCubeAt = methods.get<false, true>(6);
    /* System.Void CubeModel_Changed(CubeModelChangedEventArgs e) */
    inline static auto& m_CubeModel_Changed = methods.get<false, false>(7);
    /* UnityEngine.Vector3 CalcConstraintBoxCenter(MVCubeModelBase model) */
    inline static auto& m_CalcConstraintBoxCenter = methods.get<false, false>(8);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct ModelingBoxCountConstraint {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<2> fields;
inline static auto /* MVCubeModelBase */ &f_cubeModel = fields.get<false>(0), /* System.Int32 */ &f_minCubesCount = fields.get<false>(1);

    inline static ::Tools::Il2Cpp::Metadata::array_method<5> methods;
    /* System.Void .ctor(MVCubeModelBase cubeModel, MV.WorldObject.IntVector minCorner, MV.WorldObject.IntVector maxCorner, System.Int32 minCubeCount) */
    inline static auto& m__ctor = methods.get<false, false>(0);
    /* System.Boolean CanAddCubeAt(MV.WorldObject.IntVector pos) */
    inline static auto& m_CanAddCubeAt = methods.get<false, true>(1);
    /* System.Boolean CanRemoveCubeAt(MV.WorldObject.IntVector pos) */
    inline static auto& m_CanRemoveCubeAt = methods.get<false, true>(2);
    /* System.Boolean CanEditCubeAt(MV.WorldObject.IntVector pos) */
    inline static auto& m_CanEditCubeAt = methods.get<false, true>(3);
    /* System.Void CubeModel_Changed(System.Object sender, CubeModelChangedEventArgs e) */
    inline static auto& m_CubeModel_Changed = methods.get<false, false>(4);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MainCameraManager {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<32> fields;
inline static auto /* System.Action`1<System.Boolean> */ &f_OnMuteChange = fields.get<true>(0), /* System.Action`1<System.Boolean> */ &f_OnCameraEffectsChange = fields.get<true>(1), /* System.Action */ &f_OnCameraSettingAdded = fields.get<true>(2), /* System.Action`1<System.Boolean> */ &f_OnCameraCubeAddedRemoved = fields.get<true>(3), /* System.Action`1<System.Boolean> */ &f_OnGameCameraEffectsChange = fields.get<true>(4), /* System.Single */ &f_DistanceToAvatarBase = fields.get<true>(5), /* CameraType */ &f_DefaultCameraType = fields.get<true>(6), /* System.Boolean */ &f_IsCameraForcedFirstPerson = fields.get<true>(7), /* ICameraSettings */ &f_cameraSettings = fields.get<true>(8), /* System.Single */ &f_baseVolume = fields.get<true>(9), /* System.Boolean */ &f_isMuted = fields.get<true>(10), /* System.Boolean */ &f_isTemporarilyMuted = fields.get<true>(11), /* System.Boolean */ &f_storedMuteValue = fields.get<true>(12);
inline static auto /* UnityEngine.Camera */ &f_mainCamera = fields.get<false>(13), /* UnityEngine.Transform */ &f_secondaryCamera = fields.get<false>(14), /* UnityEngine.Transform */ &f_tertiaryCamera = fields.get<false>(15), /* TransitionCamera */ &f_transitionCamera = fields.get<false>(16), /* UnityEngine.AudioSource */ &f_plingSound = fields.get<false>(17), /* GrayscaleEffect */ &f_greyScaleEffect = fields.get<false>(18), /* UnityEngine.Skybox */ &f_skybox = fields.get<false>(19), /* UnityEngine.AudioListener */ &f_audioListener = fields.get<false>(20), /* LineDrawManager */ &f_lineDrawManager = fields.get<false>(21), /* ScreenSizeOptimizer */ &f_screenSizeOptimizer = fields.get<false>(22), /* UnityEngine.Shader */ &f_transparentMultiplyColor = fields.get<false>(23), /* System.EventHandler`1<OnIgnoreInputTypesArgs> */ &f_OnIgnoreInputTypes = fields.get<false>(24), /* PostProcessingManager */ &f_postProcessingManager = fields.get<false>(25), /* MVCameraController */ &f_cameraController = fields.get<false>(26), /* ProtectedTransform */ &f_protectedTransform = fields.get<false>(27), /* System.Boolean */ &f_isLogicRendered = fields.get<false>(28), /* System.Boolean */ &f_blueModeEnabled = fields.get<false>(29), /* System.Int32 */ &f_cullingMask = fields.get<false>(30), /* MaskMode */ &f_maskMode = fields.get<false>(31);

    inline static ::Tools::Il2Cpp::Metadata::array_method<44> methods;
    /* System.Void add_OnIgnoreInputTypes(System.EventHandler`1<OnIgnoreInputTypesArgs> value) */
    inline static auto& m_add_OnIgnoreInputTypes = methods.get<false, false>(0);
    /* System.Void remove_OnIgnoreInputTypes(System.EventHandler`1<OnIgnoreInputTypesArgs> value) */
    inline static auto& m_remove_OnIgnoreInputTypes = methods.get<false, false>(1);
    /* UnityEngine.Skybox get_Skybox() */
    inline static auto& m_get_Skybox = methods.get<false, false>(2);
    /* LineDrawManager get_LineDrawManager() */
    inline static auto& m_get_LineDrawManager = methods.get<false, false>(3);
    /* System.Single get_FieldOfView() */
    inline static auto& m_get_FieldOfView = methods.get<false, false>(4);
    /* System.Void set_FieldOfView(System.Single value) */
    inline static auto& m_set_FieldOfView = methods.get<false, false>(5);
    /* UnityEngine.Camera get_MainCamera() */
    inline static auto& m_get_MainCamera = methods.get<false, false>(6);
    /* UnityEngine.Camera get_TertiaryCamera() */
    inline static auto& m_get_TertiaryCamera = methods.get<false, false>(7);
    /* UnityEngine.Camera get_SecondaryCamera() */
    inline static auto& m_get_SecondaryCamera = methods.get<false, false>(8);
    /* MVCameraBase get_CurrentCamera() */
    inline static auto& m_get_CurrentCamera = methods.get<false, false>(9);
    /* ProtectedTransform get_ProtectedTransform() */
    inline static auto& m_get_ProtectedTransform = methods.get<false, false>(10);
    /* UnityEngine.Vector3 get_FireDirection() */
    inline static auto& m_get_FireDirection = methods.get<false, false>(11);
    /* UnityEngine.Vector3 get_FireOrigin() */
    inline static auto& m_get_FireOrigin = methods.get<false, false>(12);
    /* PostProcessingManager get_PostProcessingManager() */
    inline static auto& m_get_PostProcessingManager = methods.get<false, false>(13);
    /* System.Boolean get_BlueModeEnabled() */
    inline static auto& m_get_BlueModeEnabled = methods.get<false, false>(14);
    /* System.Void set_BlueModeEnabled(System.Boolean value) */
    inline static auto& m_set_BlueModeEnabled = methods.get<false, false>(15);
    /* System.Boolean get_Mute() */
    inline static auto& m_get_Mute = methods.get<true, false>(16);
    /* System.Void set_Mute(System.Boolean value) */
    inline static auto& m_set_Mute = methods.get<true, false>(17);
    /* MaskMode get_CamMaskMode() */
    inline static auto& m_get_CamMaskMode = methods.get<false, false>(18);
    /* System.Void set_CamMaskMode(MaskMode value) */
    inline static auto& m_set_CamMaskMode = methods.get<false, false>(19);
    /* System.Boolean get_TertiaryCameraActive() */
    inline static auto& m_get_TertiaryCameraActive = methods.get<false, false>(20);
    /* System.Void set_TertiaryCameraActive(System.Boolean value) */
    inline static auto& m_set_TertiaryCameraActive = methods.get<false, false>(21);
    /* System.Boolean get_IsLogicRendered() */
    inline static auto& m_get_IsLogicRendered = methods.get<false, false>(22);
    /* System.Void set_IsLogicRendered(System.Boolean value) */
    inline static auto& m_set_IsLogicRendered = methods.get<false, false>(23);
    /* System.Void Awake() */
    inline static auto& m_Awake = methods.get<false, false>(24);
    /* System.Void Init() */
    inline static auto& m_Init = methods.get<false, false>(25);
    /* System.Void EnableScreenOptimizer() */
    inline static auto& m_EnableScreenOptimizer = methods.get<false, false>(26);
    /* System.Void PlayPlingSound() */
    inline static auto& m_PlayPlingSound = methods.get<false, false>(27);
    /* System.Void SetCameraController(MVCameraController camController) */
    inline static auto& m_SetCameraController = methods.get<false, false>(28);
    /* System.Void UpdateAudioListener() */
    inline static auto& m_UpdateAudioListener = methods.get<false, false>(29);
    /* System.Boolean IsCameraControllerSet() */
    inline static auto& m_IsCameraControllerSet = methods.get<false, false>(30);
    /* System.Void IgnoreInputTypes(IgnoreInputTypes inputTypes) */
    inline static auto& m_IgnoreInputTypes = methods.get<false, false>(31);
    /* System.Void UpdateCamera() */
    inline static auto& m_UpdateCamera = methods.get<false, false>(32);
    /* System.Void StartTransitionCam(System.Single transitionTime = 2, System.Boolean soft = False) */
    inline static auto& m_StartTransitionCam = methods.get<false, false>(33);
    /* System.Void CancelTransitionCam() */
    inline static auto& m_CancelTransitionCam = methods.get<false, false>(34);
    /* System.Void RenderLogic(System.Boolean renderLogic) */
    inline static auto& m_RenderLogic = methods.get<false, false>(35);
    /* System.Void OnDestroy() */
    inline static auto& m_OnDestroy = methods.get<false, false>(36);
    /* System.Void TemporaryMute(System.Boolean muteTemporarily) */
    inline static auto& m_TemporaryMute = methods.get<true, false>(37);
    /* System.Void RegisterCameraWithSettings(ICameraSettings camSettings) */
    inline static auto& m_RegisterCameraWithSettings = methods.get<true, false>(38);
    /* System.Void UnRegisterCameraWithSettings() */
    inline static auto& m_UnRegisterCameraWithSettings = methods.get<true, false>(39);
    /* ICameraSettings GetSettings() */
    inline static auto& m_GetSettings = methods.get<true, false>(40);
    /* System.Boolean HasSetting() */
    inline static auto& m_HasSetting = methods.get<true, false>(41);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(42);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(43);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVMaterial {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<8> fields;
inline static auto /* System.Int32 */ &f_unlockPriceGold = fields.get<false>(0), /* System.Boolean */ &f_isUnlocked = fields.get<false>(1), /* UnityEngine.Mesh */ &f__Mesh_k__BackingField = fields.get<false>(2), /* System.String */ &f__Name_k__BackingField = fields.get<false>(3), /* System.String */ &f__Description_k__BackingField = fields.get<false>(4), /* MV.WorldObject.PhysicalProperties */ &f__PhysicalProperties_k__BackingField = fields.get<false>(5), /* AvatarModifierPackageType */ &f__ModifierPackageType_k__BackingField = fields.get<false>(6), /* UnityEngine.Texture2D */ &f__ButtonTexture_k__BackingField = fields.get<false>(7);

    inline static ::Tools::Il2Cpp::Metadata::array_method<21> methods;
    /* UnityEngine.Mesh get_Mesh() */
    inline static auto& m_get_Mesh = methods.get<false, false>(0);
    /* System.Void set_Mesh(UnityEngine.Mesh value) */
    inline static auto& m_set_Mesh = methods.get<false, false>(1);
    /* System.String get_Name() */
    inline static auto& m_get_Name = methods.get<false, false>(2);
    /* System.Void set_Name(System.String value) */
    inline static auto& m_set_Name = methods.get<false, false>(3);
    /* System.String get_Description() */
    inline static auto& m_get_Description = methods.get<false, false>(4);
    /* System.Void set_Description(System.String value) */
    inline static auto& m_set_Description = methods.get<false, false>(5);
    /* MV.WorldObject.PhysicalProperties get_PhysicalProperties() */
    inline static auto& m_get_PhysicalProperties = methods.get<false, false>(6);
    /* System.Void set_PhysicalProperties(MV.WorldObject.PhysicalProperties value) */
    inline static auto& m_set_PhysicalProperties = methods.get<false, false>(7);
    /* AvatarModifierPackageType get_ModifierPackageType() */
    inline static auto& m_get_ModifierPackageType = methods.get<false, false>(8);
    /* System.Void set_ModifierPackageType(AvatarModifierPackageType value) */
    inline static auto& m_set_ModifierPackageType = methods.get<false, false>(9);
    /* UnityEngine.Texture2D get_ButtonTexture() */
    inline static auto& m_get_ButtonTexture = methods.get<false, false>(10);
    /* System.Void set_ButtonTexture(UnityEngine.Texture2D value) */
    inline static auto& m_set_ButtonTexture = methods.get<false, false>(11);
    /* System.Boolean get_IsAvailable() */
    inline static auto& m_get_IsAvailable = methods.get<false, false>(12);
    /* System.Boolean get_IsDestructible() */
    inline static auto& m_get_IsDestructible = methods.get<false, false>(13);
    /* System.Void .ctor() */
    inline static auto& m0__ctor = methods.get<false, false>(14);
    /* System.Void .ctor(MV.WorldObject.PhysicalProperties physicalProperties, MaterialSound materialSound, AvatarModifierPackageType modifierPackageType) */
    inline static auto& m1__ctor = methods.get<false, false>(15);
    /* System.Void .ctor(System.String name, System.String description, MV.WorldObject.PhysicalProperties physicalProperties, MaterialSound materialSound, AvatarModifierPackageType modifierPackageType, System.Int32 unlockPriceGold, System.Boolean isUnlocked) */
    inline static auto& m2__ctor = methods.get<false, false>(16);
    /* System.Void .ctor(System.Int32 materialId, System.String name, System.String description, MV.WorldObject.PhysicalProperties physicalProperties, MaterialSound materialSound, AvatarModifierPackageType modifierPackageType, System.Int32 unlockPriceGold, System.Boolean isUnlocked, MaterialButtonTextureGenerator materialButtonTextureGenerator = null) */
    inline static auto& m3__ctor = methods.get<false, false>(17);
    /* System.Void RegenerateButtonTexture(MaterialButtonTextureGenerator materialButtonTextureGenerator) */
    inline static auto& m_RegenerateButtonTexture = methods.get<false, false>(18);
    /* System.Void GenerateCube(System.Int32 materialID) */
    inline static auto& m_GenerateCube = methods.get<false, false>(19);
    /* System.Void AddVertices(System.Int32 direction) */
    inline static auto& m_AddVertices = methods.get<false, false>(20);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct ESTranslate {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<18> fields;
inline static auto /* System.String */ &f_TranslateModeType = fields.get<true>(0), /* System.String */ &f_MoveWithAvatar = fields.get<true>(1), /* System.Single */ &f__mouseSensitivity = fields.get<true>(8);
inline static auto /* System.Single */ &f_gridSize = fields.get<false>(2), /* System.Single */ &f_stickyModifier = fields.get<false>(3), /* System.Single */ &f_completelyStuckLimit = fields.get<false>(4), /* System.Boolean */ &f_recalcLocalDirCamToObjects = fields.get<false>(5), /* System.Collections.Generic.List`1<TranslateData> */ &f_translateDatas = fields.get<false>(6), /* System.Collections.Generic.List`1<MVWorldObjectClient> */ &f_targets = fields.get<false>(7), /* System.Single */ &f_initialDistance = fields.get<false>(9), /* UnityEngine.Vector3 */ &f_originPrevFrame = fields.get<false>(10), /* System.Boolean */ &f_playTranslateSounds = fields.get<false>(11), /* System.Single */ &f_scrollMoveDistance = fields.get<false>(12), /* TranslateMode */ &f_translateMode = fields.get<false>(13), /* System.Collections.Generic.HashSet`1<System.Int32> */ &f_woIds = fields.get<false>(14), /* System.Boolean */ &f_fixedToYPlane = fields.get<false>(15), /* System.Boolean */ &f_moveWithAvatar = fields.get<false>(16), /* System.Boolean */ &f_enteredStateWithPointerSelectReleased = fields.get<false>(17);

    inline static ::Tools::Il2Cpp::Metadata::array_method<10> methods;
    /* System.Void Enter(EditorStateMachine e) */
    inline static auto& m_Enter = methods.get<false, true>(0);
    /* System.Void Execute(EditorStateMachine e) */
    inline static auto& m_Execute = methods.get<false, true>(1);
    /* System.Boolean IsValid() */
    inline static auto& m_IsValid = methods.get<false, false>(2);
    /* System.Void UpdateLaserPosition(System.Collections.Generic.List`1<MVWorldObjectClient> wos) */
    inline static auto& m_UpdateLaserPosition = methods.get<false, false>(3);
    /* System.Void Exit(EditorStateMachine e) */
    inline static auto& m_Exit = methods.get<false, true>(4);
    /* System.Boolean GetInitialAvatarMoveObjectHitDistance(EditorStateMachine e, ref System.Single hitDistance) */
    inline static auto& m_GetInitialAvatarMoveObjectHitDistance = methods.get<false, false>(5);
    /* System.Single GetInitialAvatarMoveObjectDistance(EditorStateMachine e) */
    inline static auto& m_GetInitialAvatarMoveObjectDistance = methods.get<false, false>(6);
    /* System.Void RotateWithCamera(EditorStateMachine e, System.Int32 targetIndex) */
    inline static auto& m_RotateWithCamera = methods.get<false, false>(7);
    /* UnityEngine.Vector3 GetDeltaMouse(EditorStateMachine e) */
    inline static auto& m_GetDeltaMouse = methods.get<false, false>(8);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(9);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct SharedCubeFunctions {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<16> fields;
inline static auto /* MV.WorldObject.IntVector */ &f_constraint = fields.get<true>(0), /* System.Single */ &f_LowestCubeSize = fields.get<true>(1), /* System.Single */ &f_CubeSegmentSize = fields.get<true>(2), /* System.Single */ &f_Gridsize = fields.get<true>(3), /* System.Single */ &f_NoneGridSize = fields.get<true>(4), /* System.Single */ &f_forceEdgeDistance = fields.get<true>(5), /* System.Int32[][] */ &f_FaceIndexToVertexIndexes = fields.get<true>(6), /* System.Collections.Generic.Dictionary`2<System.Int32, System.Int32>[] */ &f_VertexIndexToFaceIndexes = fields.get<true>(7), /* MV.WorldObject.IntVector[][] */ &f_LightTestOffsets = fields.get<true>(8), /* MV.WorldObject.Face[][] */ &f_LightTestNormalTargetFaces = fields.get<true>(9), /* MV.WorldObject.Face[] */ &f_LightTestNormalSecondaryTargetFaces = fields.get<true>(10), /* System.Int32[][] */ &f_LightTestOppositeFaceCorners = fields.get<true>(11), /* System.Int32[][] */ &f_LightTestSameFaceCorners = fields.get<true>(12), /* MV.WorldObject.IntVector[] */ &f_LightTestInwardsOffset = fields.get<true>(13), /* System.Int32[] */ &f_FaceHeightAxis = fields.get<true>(14), /* System.Int32[] */ &f_FaceDirectionScalar = fields.get<true>(15);

    inline static ::Tools::Il2Cpp::Metadata::array_method<28> methods;
    /* MV.WorldObject.IntVector get_CubeConstraint() */
    inline static auto& m_get_CubeConstraint = methods.get<true, false>(0);
    /* UnityEngine.Vector3 get_CubeConstraintVector3() */
    inline static auto& m_get_CubeConstraintVector3 = methods.get<true, false>(1);
    /* System.Void AddCubeMeshCubeLines(UnityEngine.Mesh mesh, UnityEngine.Vector3[] corners, System.Single diagonalWidth) */
    inline static auto& m_AddCubeMeshCubeLines = methods.get<true, false>(2);
    /* System.Void AddCubeLine(UnityEngine.Mesh mesh, UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Single diagonalWidth) */
    inline static auto& m_AddCubeLine = methods.get<true, false>(3);
    /* System.Void AddCubeMesh(UnityEngine.Mesh mesh, UnityEngine.Vector3[] corners, System.Boolean insideOut) */
    inline static auto& m_AddCubeMesh = methods.get<true, false>(4);
    /* UnityEngine.Vector3[] GetCorners() */
    inline static auto& m0_GetCorners = methods.get<true, false>(5);
    /* UnityEngine.Vector3[] GetCorners(UnityEngine.Bounds bounds) */
    inline static auto& m1_GetCorners = methods.get<true, false>(6);
    /* UnityEngine.Vector3[] GetCorners(UnityEngine.Vector3 min, UnityEngine.Vector3 max) */
    inline static auto& m2_GetCorners = methods.get<true, false>(7);
    /* UnityEngine.Vector3[] GetVertices() */
    inline static auto& m0_GetVertices = methods.get<true, false>(8);
    /* UnityEngine.Vector3[] GetVertices(UnityEngine.Vector3[] corners) */
    inline static auto& m1_GetVertices = methods.get<true, false>(9);
    /* System.Void GetVertices(CubePickingInfo info, UnityEngine.GameObject gameObject) */
    inline static auto& m2_GetVertices = methods.get<true, false>(20);
    /* UnityEngine.Vector3 GetClosestGridPoint(UnityEngine.Vector3 worldPosition, UnityEngine.Quaternion rotation, System.Single gridSize, UnityEngine.Vector3 scale) */
    inline static auto& m_GetClosestGridPoint = methods.get<true, false>(10);
    /* MV.WorldObject.IntVector WorldToLocal(UnityEngine.GameObject gameObject, UnityEngine.Vector3 point, System.Boolean floor = False) */
    inline static auto& m_WorldToLocal = methods.get<true, false>(11);
    /* UnityEngine.Vector3 WorldPosToValidGridPos(UnityEngine.GameObject gameObject, UnityEngine.Vector3 worldPos, System.Int32 cubeSegments) */
    inline static auto& m_WorldPosToValidGridPos = methods.get<true, false>(12);
    /* UnityEngine.Vector3 LocalToWorld(UnityEngine.GameObject gameObject, MV.WorldObject.IntVector iVector) */
    inline static auto& m_LocalToWorld = methods.get<true, false>(13);
    /* System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cube> CreateFromBytePackage(MV.WorldObject.BytePacker bp) */
    inline static auto& m_CreateFromBytePackage = methods.get<true, false>(14);
    /* System.Nullable`1<UnityEngine.Bounds> GetAxisAlignedBoundsRecursively(UnityEngine.Transform transform) */
    inline static auto& m0_GetAxisAlignedBoundsRecursively = methods.get<true, false>(15);
    /* System.Nullable`1<UnityEngine.Bounds> GetAxisAlignedBoundsRecursively(System.Collections.Generic.List`1<MVWorldObjectClient> wos) */
    inline static auto& m1_GetAxisAlignedBoundsRecursively = methods.get<true, false>(21);
    /* System.Nullable`1<UnityEngine.Bounds> GetAxisAlignedBoundsRecursively(System.Collections.Generic.List`1<UnityEngine.Transform> transforms) */
    inline static auto& m2_GetAxisAlignedBoundsRecursively = methods.get<true, false>(22);
    /* UnityEngine.Vector3[] GetTriangleVertices(System.Int32 triangleIndex, UnityEngine.GameObject gameObject) */
    inline static auto& m_GetTriangleVertices = methods.get<true, false>(16);
    /* System.Single ScaleFactor(UnityEngine.GameObject gameObject) */
    inline static auto& m0_ScaleFactor = methods.get<true, false>(17);
    /* System.Single ScaleFactor(UnityEngine.GameObject gameObject, MV.WorldObject.Face face) */
    inline static auto& m1_ScaleFactor = methods.get<true, false>(18);
    /* CubeOutOfBoundState MoveEdge(MVCubeModelBase cmb, CubePickingInfo info, UnityEngine.Vector3 mousePositionDelta, ref System.Single delta, ref System.Single deltaAccum, System.Single mouseSensitivity, ref System.Boolean edgeMoved, System.Boolean edgeIndex0, System.Boolean edgeIndex1, ref EditCubeChange editCubeChange) */
    inline static auto& m_MoveEdge = methods.get<true, false>(19);
    /* UnityEngine.Vector3 GetWorldCenter(System.Collections.Generic.List`1<UnityEngine.Transform> transforms) */
    inline static auto& m0_GetWorldCenter = methods.get<true, false>(23);
    /* UnityEngine.Vector3 GetWorldCenter(UnityEngine.Transform transform) */
    inline static auto& m1_GetWorldCenter = methods.get<true, false>(24);
    /* System.Void SetLayerRecursively(UnityEngine.Transform t, System.Boolean select) */
    inline static auto& m_SetLayerRecursively = methods.get<true, false>(25);
    /* MV.WorldObject.IntVector CubePosToChunk(MV.WorldObject.IntVector cubePos, System.Int32 chunkSize) */
    inline static auto& m_CubePosToChunk = methods.get<true, false>(26);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(27);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVBuildModeAvatarLocal_EditMode {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<24> fields;
inline static auto /* System.Single */ &f_pitchSensitivity = fields.get<true>(1), /* System.Single */ &f_yawSensitivity = fields.get<true>(2), /* System.Single */ &f_basePitch = fields.get<true>(3), /* System.Single */ &f_minimumY = fields.get<true>(4), /* System.Single */ &f_maximumY = fields.get<true>(5), /* System.Single */ &f_moveSlowDownPoint = fields.get<true>(15);
inline static auto /* MVBuildModeAvatarLocal+AvatarBuildModes */ &f__avatarBuildModeRuntimeState = fields.get<false>(0), /* System.Single */ &f_maxSpeed = fields.get<false>(6), /* System.Single */ &f_speedModifier = fields.get<false>(7), /* UnityEngine.Vector3 */ &f_jetPackTargetDeltaPos = fields.get<false>(8), /* System.Single */ &f_targetSpeed = fields.get<false>(9), /* System.Single */ &f_speed = fields.get<false>(10), /* System.Single */ &f_speedSmoothingTime = fields.get<false>(11), /* System.Boolean */ &f_moveConstraintSet = fields.get<false>(12), /* UnityEngine.Vector3 */ &f_moveConstraintCenter = fields.get<false>(13), /* System.Single */ &f_moveConstraintRadius = fields.get<false>(14), /* System.Single */ &f__YMovementSpeedScale_k__BackingField = fields.get<false>(16), /* System.Single */ &f__XZMovementSpeedScale_k__BackingField = fields.get<false>(17), /* DoubleTapMovementChecker */ &f_doubleTap = fields.get<false>(18), /* UnityEngine.Camera */ &f_mainCamera = fields.get<false>(19), /* System.Single */ &f_keyVelocity = fields.get<false>(20), /* System.Single */ &f_keyAcceleration = fields.get<false>(21), /* System.Single */ &f_keyDamping = fields.get<false>(22), /* System.Single */ &f_heightAdjustSpeed = fields.get<false>(23);

    inline static ::Tools::Il2Cpp::Metadata::array_method<38> methods;
    /* System.Void .ctor(MVBuildModeAvatarLocal buildModeAvatar) */
    inline static auto& m__ctor = methods.get<false, false>(0);
    /* System.Void Activate(MVBuildModeAvatarLocal+AvatarBuildModes fromMode) */
    inline static auto& m_Activate = methods.get<false, true>(1);
    /* System.Void SetCamera(CameraType cameraType) */
    inline static auto& m_SetCamera = methods.get<false, false>(2);
    /* MVBuildModeAvatarLocal+AvatarBuildModes get_AvatarBuildModeRuntimeState() */
    inline static auto& m_get_AvatarBuildModeRuntimeState = methods.get<false, true>(3);
    /* System.Single get_YMovementSpeedScale() */
    inline static auto& m_get_YMovementSpeedScale = methods.get<false, false>(4);
    /* System.Void set_YMovementSpeedScale(System.Single value) */
    inline static auto& m_set_YMovementSpeedScale = methods.get<false, false>(5);
    /* System.Single get_XZMovementSpeedScale() */
    inline static auto& m_get_XZMovementSpeedScale = methods.get<false, false>(6);
    /* System.Void set_XZMovementSpeedScale(System.Single value) */
    inline static auto& m_set_XZMovementSpeedScale = methods.get<false, false>(7);
    /* System.Boolean get_MovementConstrained() */
    inline static auto& m_get_MovementConstrained = methods.get<false, false>(8);
    /* System.Void set_MovementConstrained(System.Boolean value) */
    inline static auto& m_set_MovementConstrained = methods.get<false, false>(9);
    /* System.Void AvatarCommandsBuildModeOnOnSetSpawn(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation) */
    inline static auto& m_AvatarCommandsBuildModeOnOnSetSpawn = methods.get<false, false>(10);
    /* System.Void DeActivate(MVBuildModeAvatarLocal+AvatarBuildModes toMode) */
    inline static auto& m_DeActivate = methods.get<false, true>(11);
    /* System.Void ModifySpeed(System.Single xz, System.Single y) */
    inline static auto& m_ModifySpeed = methods.get<false, false>(12);
    /* System.Void FrameUpdate(InputToInGameAction interactionMap) */
    inline static auto& m_FrameUpdate = methods.get<false, true>(13);
    /* System.Void FixedUpdate(IInputToPlayerMovement movementMap) */
    inline static auto& m_FixedUpdate = methods.get<false, true>(14);
    /* System.Void SetMoveConstraint(UnityEngine.Vector3 center, System.Single radius) */
    inline static auto& m_SetMoveConstraint = methods.get<false, false>(15);
    /* System.Void TouchRotationToCamera() */
    inline static auto& m_TouchRotationToCamera = methods.get<false, false>(16);
    /* System.Void UpdateRotationToCamera() */
    inline static auto& m_UpdateRotationToCamera = methods.get<false, false>(17);
    /* System.Void SetToEditMode() */
    inline static auto& m_SetToEditMode = methods.get<false, false>(18);
    /* System.Void MoveCharacter(UnityEngine.Vector3 moveDelta) */
    inline static auto& m_MoveCharacter = methods.get<false, false>(19);
    /* UnityEngine.Vector3 GetElevationVelocity() */
    inline static auto& m_GetElevationVelocity = methods.get<false, false>(20);
    /* System.Void Move(UnityEngine.Vector3 velocity) */
    inline static auto& m_Move = methods.get<false, false>(21);
    /* UnityEngine.Vector3 GetDirection(System.Boolean freeFlight) */
    inline static auto& m_GetDirection = methods.get<false, false>(22);
    /* UnityEngine.Vector3 GetTouchInputDirection() */
    inline static auto& m_GetTouchInputDirection = methods.get<true, false>(23);
    /* UnityEngine.Vector3 GetInputDirection() */
    inline static auto& m_GetInputDirection = methods.get<true, false>(24);
    /* UnityEngine.Vector3 GetMovementVelocity() */
    inline static auto& m_GetMovementVelocity = methods.get<false, false>(25);
    /* System.Void AvatarCommandsBuildModeOnEnterBuildStateEvent(EditorEvent editorEvent, System.Object data) */
    inline static auto& m_AvatarCommandsBuildModeOnEnterBuildStateEvent = methods.get<false, false>(26);
    /* System.Void ESLeaveCubeTutorialSetup() */
    inline static auto& m_ESLeaveCubeTutorialSetup = methods.get<false, false>(27);
    /* System.Void FocusOnPosition() */
    inline static auto& m_FocusOnPosition = methods.get<false, false>(28);
    /* System.Void ESEditCubeTutorialSetup(MVBuildModeAvatarLocal+EditMode+ESEditCubeTutorialData data) */
    inline static auto& m_ESEditCubeTutorialSetup = methods.get<false, false>(29);
    /* System.Void AvatarCommandsBuildModeOnExitBuildStateEvent(EditorEvent editorEvent, System.Object data) */
    inline static auto& m_AvatarCommandsBuildModeOnExitBuildStateEvent = methods.get<false, false>(30);
    /* System.Void EditCubesExitSetup() */
    inline static auto& m_EditCubesExitSetup = methods.get<false, false>(31);
    /* System.Void ESEditCubeTutorialExitSetup() */
    inline static auto& m_ESEditCubeTutorialExitSetup = methods.get<false, false>(32);
    /* System.Void CERoamUUIExitSetup() */
    inline static auto& m_CERoamUUIExitSetup = methods.get<false, false>(33);
    /* System.Void CEEditBodyUUIExitSetup() */
    inline static auto& m_CEEditBodyUUIExitSetup = methods.get<false, false>(34);
    /* System.Void CEEditBodyUUIEnterSetup(MVBuildModeAvatarLocal+EditMode+CEEditBodyUUIData data) */
    inline static auto& m_CEEditBodyUUIEnterSetup = methods.get<false, false>(35);
    /* System.Void CERoamUUIEnterSetup(MVBuildModeAvatarLocal+EditMode+CERoamUUISetupData data) */
    inline static auto& m_CERoamUUIEnterSetup = methods.get<false, false>(36);
    /* System.Void EditCubesDataEnterSetup(MVBuildModeAvatarLocal+EditMode+EditCubesSetupData data) */
    inline static auto& m_EditCubesDataEnterSetup = methods.get<false, false>(37);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct RotationHelper {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<1> fields;
inline static auto /* EditorStateMachine */ &f_editorStateMachine = fields.get<false>(0);

    inline static ::Tools::Il2Cpp::Metadata::array_method<7> methods;
    /* System.Void .ctor(EditorStateMachine editorStateMachine) */
    inline static auto& m__ctor = methods.get<false, false>(0);
    /* System.Void ResetRotation() */
    inline static auto& m_ResetRotation = methods.get<false, false>(1);
    /* System.Void RotateStep(RotationMode rotationMode, System.Single rotationSpeed) */
    inline static auto& m_RotateStep = methods.get<false, false>(2);
    /* System.Boolean IsRotationInvalid() */
    inline static auto& m_IsRotationInvalid = methods.get<false, false>(3);
    /* UnityEngine.Vector3 GetPivot(System.Collections.Generic.List`1<WorldObjectClientRef> targets, System.Collections.Generic.List`1<UnityEngine.Transform> targetTransforms) */
    inline static auto& m_GetPivot = methods.get<true, false>(4);
    /* System.Void DoGridSnapping(System.Collections.Generic.List`1<WorldObjectClientRef> targets) */
    inline static auto& m_DoGridSnapping = methods.get<true, false>(5);
    /* System.Boolean ValidateTargets(System.Collections.Generic.List`1<WorldObjectClientRef> targets) */
    inline static auto& m_ValidateTargets = methods.get<true, false>(6);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct SettingsSlider {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<4> fields;
inline static auto /* UnityEngine.UI.Slider */ &f_slider = fields.get<false>(0), /* System.Single */ &f_interval = fields.get<false>(1), /* System.Boolean */ &f_round = fields.get<false>(2), /* System.String */ &f_key = fields.get<false>(3);

    inline static ::Tools::Il2Cpp::Metadata::array_method<6> methods;
    /* System.Single get_Value() */
    inline static auto& m_get_Value = methods.get<false, false>(0);
    /* System.Void Initialize(System.String key, System.Single value, System.Single minValue, System.Single maxValue) */
    inline static auto& m0_Initialize = methods.get<false, false>(1);
    /* System.Void Initialize(System.String key, System.Int32 value, System.Int32 minValue, System.Int32 maxValue) */
    inline static auto& m1_Initialize = methods.get<false, false>(2);
    /* System.Void ValueChanged() */
    inline static auto& m_ValueChanged = methods.get<false, false>(3);
    /* System.Void Reset() */
    inline static auto& m_Reset = methods.get<false, false>(4);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(5);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVGameControllerBase {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<50> fields;
inline static auto /* System.Boolean */ &f_LevelingTestMode = fields.get<true>(0), /* System.Boolean */ &f_ClientShopInsideInventory = fields.get<true>(1), /* System.Boolean */ &f__IsInitialized_k__BackingField = fields.get<true>(12), /* System.Boolean */ &f__DisconnectIsOk_k__BackingField = fields.get<true>(13), /* IPlayModeUI */ &f__PlayModeUI_k__BackingField = fields.get<true>(14), /* IEditModeUI */ &f__EditModeUI_k__BackingField = fields.get<true>(15), /* MVGameControllerBase+OnReceivedGameMsgDelegate */ &f_OnReceivedGameMsg = fields.get<true>(16), /* MVGameControllerBase+OnReceivedNotificationEventDelegate */ &f_OnReceivedNotification = fields.get<true>(17), /* MVGameControllerBase+OnPostGameInitDelegate */ &f_OnPostGameInit = fields.get<true>(18), /* MVGameControllerBase */ &f_instance = fields.get<true>(19), /* System.Boolean */ &f__WebPlayAsTouch_k__BackingField = fields.get<true>(36), /* System.Boolean */ &f__PortalUI_k__BackingField = fields.get<true>(37), /* System.Boolean */ &f__WebPlayAsTouchInitialized_k__BackingField = fields.get<true>(39), /* GameSessionData */ &f__GameSessionData_k__BackingField = fields.get<true>(40), /* System.Boolean */ &f__SeekAdConsent_k__BackingField = fields.get<true>(42), /* System.Boolean */ &f__Quitting_k__BackingField = fields.get<true>(48), /* System.Boolean */ &f__LeavingEditPlayMode_k__BackingField = fields.get<true>(49);
inline static auto /* RegionConfigManager */ &f_regionConfigManager = fields.get<false>(2), /* DebugLogHandler */ &f_debugLogHandler = fields.get<false>(3), /* MainCameraManager */ &f_mainCameraManager = fields.get<false>(4), /* Styles */ &f_styles = fields.get<false>(5), /* MaterialLoader */ &f_materialLoader = fields.get<false>(6), /* PrefabPool */ &f_prefabPool = fields.get<false>(7), /* AntiHack.TextureIntegrityChecker */ &f_textureIntegrityChecker = fields.get<false>(8), /* ThemeRepository */ &f_themeRepository = fields.get<false>(9), /* StreamingAssetManager */ &f_streamingAssetManager = fields.get<false>(10), /* EmbeddedPlayerConfig */ &f_embeddedPlayerConfig = fields.get<false>(11), /* MVNetworkGame */ &f_game = fields.get<false>(20), /* AudioManager */ &f_audioManager = fields.get<false>(21), /* BrowserComm */ &f_browserComm = fields.get<false>(22), /* LevelLoader */ &f_levelLoader = fields.get<false>(23), /* SkinnedMeshOptimizeManager */ &f_skinnedMeshOptimizeManager = fields.get<false>(24), /* FlagDebriefingControl */ &f_flagDebriefingControl = fields.get<false>(25), /* GoldRewardManager */ &f_goldRewardManager = fields.get<false>(26), /* JoystickControllerStack */ &f_joystickControllerStack = fields.get<false>(27), /* System.Boolean */ &f_quitHasBeenCalled = fields.get<false>(28), /* TimeReward */ &f_timeReward = fields.get<false>(29), /* OverrideMaterials */ &f_overrideMaterials = fields.get<false>(30), /* LoadStats */ &f_loadStats = fields.get<false>(31), /* MVJoinState */ &f__joinState = fields.get<false>(32), /* FirstFrameUpdateActorReady */ &f_firstFrameUpdateActorReady = fields.get<false>(33), /* System.Int32 */ &f_reAuthTestTries = fields.get<false>(34), /* ModeControllerBase */ &f_modeController = fields.get<false>(35), /* System.Boolean */ &f__ShuttingDown_k__BackingField = fields.get<false>(38), /* System.Action`1<MVJoinState> */ &f_onJoinStateChanged = fields.get<false>(41), /* AudioBuild */ &f_audioBuild = fields.get<false>(43), /* WaterPlaneManager */ &f_waterPlaneManagerPrefab = fields.get<false>(44), /* WaterPlaneManager */ &f_waterPlaneManager = fields.get<false>(45), /* SkyboxManager */ &f_skyboxManager = fields.get<false>(46), /* Assets.Scripts.Subscription.SubscriberCooldownsManager */ &f_subscriberCooldownsManager = fields.get<false>(47);

    inline static ::Tools::Il2Cpp::Metadata::array_method<114> methods;
    /* Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.Mediator.SpawnRoleDataMediator get_SpawnRoleDataMediatorLocal() */
    inline static auto& m_get_SpawnRoleDataMediatorLocal = methods.get<true, false>(0);
    /* MVLocalPlayer get_LocalPlayer() */
    inline static auto& m_get_LocalPlayer = methods.get<true, false>(1);
    /* GameEventManager get_GameEventManager() */
    inline static auto& m_get_GameEventManager = methods.get<true, false>(2);
    /* System.Boolean IsInCorrectInventory(System.Boolean insidePlayerInventory) */
    inline static auto& m_IsInCorrectInventory = methods.get<true, false>(3);
    /* System.Boolean get_IsInitialized() */
    inline static auto& m_get_IsInitialized = methods.get<true, false>(4);
    /* System.Void set_IsInitialized(System.Boolean value) */
    inline static auto& m_set_IsInitialized = methods.get<true, false>(5);
    /* System.Boolean get_DisconnectIsOk() */
    inline static auto& m_get_DisconnectIsOk = methods.get<true, false>(6);
    /* System.Void set_DisconnectIsOk(System.Boolean value) */
    inline static auto& m_set_DisconnectIsOk = methods.get<true, false>(7);
    /* IPlayModeUI get_PlayModeUI() */
    inline static auto& m_get_PlayModeUI = methods.get<true, false>(8);
    /* System.Void set_PlayModeUI(IPlayModeUI value) */
    inline static auto& m_set_PlayModeUI = methods.get<true, false>(9);
    /* IEditModeUI get_EditModeUI() */
    inline static auto& m_get_EditModeUI = methods.get<true, false>(10);
    /* System.Void set_EditModeUI(IEditModeUI value) */
    inline static auto& m_set_EditModeUI = methods.get<true, false>(11);
    /* System.Boolean get_IsAlive() */
    inline static auto& m_get_IsAlive = methods.get<true, false>(12);
    /* MVNetworkGame get_Game() */
    inline static auto& m_get_Game = methods.get<true, false>(13);
    /* AudioManager get_AudioManager() */
    inline static auto& m_get_AudioManager = methods.get<true, false>(14);
    /* BrowserComm get_BrowserComm() */
    inline static auto& m_get_BrowserComm = methods.get<true, false>(15);
    /* LevelLoader get_LevelLoader() */
    inline static auto& m_get_LevelLoader = methods.get<true, false>(16);
    /* SkinnedMeshOptimizeManager get_SkinnedMeshOptimizeManager() */
    inline static auto& m_get_SkinnedMeshOptimizeManager = methods.get<true, false>(17);
    /* FlagDebriefingControl get_FlagDebriefingControl() */
    inline static auto& m_get_FlagDebriefingControl = methods.get<true, false>(18);
    /* GoldRewardManager get_GoldRewardManager() */
    inline static auto& m_get_GoldRewardManager = methods.get<true, false>(19);
    /* AntiHack.TextureIntegrityChecker get_TextureIntegrityChecker() */
    inline static auto& m_get_TextureIntegrityChecker = methods.get<true, false>(20);
    /* StreamingAssetManager get_StreamingAssetManager() */
    inline static auto& m_get_StreamingAssetManager = methods.get<true, false>(21);
    /* EmbeddedPlayerConfig get_EmbeddedPlayerConfig() */
    inline static auto& m_get_EmbeddedPlayerConfig = methods.get<false, false>(22);
    /* RegionConfig get_RegionConfig() */
    inline static auto& m_get_RegionConfig = methods.get<false, false>(23);
    /* StaticAssetsConfig get_StaticAssetsConfig() */
    inline static auto& m_get_StaticAssetsConfig = methods.get<true, false>(24);
    /* System.Boolean get_WebPlayAsTouch() */
    inline static auto& m_get_WebPlayAsTouch = methods.get<true, false>(25);
    /* System.Void set_WebPlayAsTouch(System.Boolean value) */
    inline static auto& m_set_WebPlayAsTouch = methods.get<true, false>(26);
    /* System.Boolean get_PortalUI() */
    inline static auto& m_get_PortalUI = methods.get<true, false>(27);
    /* System.Void set_PortalUI(System.Boolean value) */
    inline static auto& m_set_PortalUI = methods.get<true, false>(28);
    /* System.Boolean get_ShuttingDown() */
    inline static auto& m_get_ShuttingDown = methods.get<false, false>(29);
    /* System.Void set_ShuttingDown(System.Boolean value) */
    inline static auto& m_set_ShuttingDown = methods.get<false, false>(30);
    /* System.Boolean get_WebPlayAsTouchInitialized() */
    inline static auto& m_get_WebPlayAsTouchInitialized = methods.get<true, false>(31);
    /* System.Void set_WebPlayAsTouchInitialized(System.Boolean value) */
    inline static auto& m_set_WebPlayAsTouchInitialized = methods.get<true, false>(32);
    /* GameSessionData get_GameSessionData() */
    inline static auto& m_get_GameSessionData = methods.get<true, false>(33);
    /* System.Void set_GameSessionData(GameSessionData value) */
    inline static auto& m_set_GameSessionData = methods.get<true, false>(34);
    /* MV.Common.BuildTarget get_BuildTarget() */
    inline static auto& m_get_BuildTarget = methods.get<true, false>(35);
    /* System.Action get_OnFirstFrameUpdateActorReady() */
    inline static auto& m_get_OnFirstFrameUpdateActorReady = methods.get<true, false>(36);
    /* System.Void set_OnFirstFrameUpdateActorReady(System.Action value) */
    inline static auto& m_set_OnFirstFrameUpdateActorReady = methods.get<true, false>(37);
    /* System.Boolean get_OkToReAuth() */
    inline static auto& m_get_OkToReAuth = methods.get<true, false>(38);
    /* System.Int32 get_ReAuthTries() */
    inline static auto& m_get_ReAuthTries = methods.get<true, false>(39);
    /* System.Boolean get_UsingDevSessionData() */
    inline static auto& m_get_UsingDevSessionData = methods.get<true, false>(40);
    /* MVNetworkGame+OperationRequests get_OperationRequests() */
    inline static auto& m_get_OperationRequests = methods.get<true, false>(41);
    /* LoadStats get_LoadStats() */
    inline static auto& m_get_LoadStats = methods.get<true, false>(42);
    /* MV.Common.MVGameMode get_GameMode() */
    inline static auto& m_get_GameMode = methods.get<true, false>(43);
    /* MVWorldObjectClientManager get_WOCM() */
    inline static auto& m_get_WOCM = methods.get<true, false>(44);
    /* TimeReward get_TimeReward() */
    inline static auto& m_get_TimeReward = methods.get<true, false>(45);
    /* System.Boolean get_IsTouristSession() */
    inline static auto& m_get_IsTouristSession = methods.get<true, false>(46);
    /* Assets.Scripts.AdIntegration.IAdManager get_AdManager() */
    inline static auto& m_get_AdManager = methods.get<true, false>(47);
    /* Assets.Scripts.AdIntegration.IAdManager get_GetAdManager() */
    inline static auto& m_get_GetAdManager = methods.get<false, true>(48);
    /* System.Boolean get_SeekAdConsent() */
    inline static auto& m_get_SeekAdConsent = methods.get<true, false>(49);
    /* System.Void set_SeekAdConsent(System.Boolean value) */
    inline static auto& m_set_SeekAdConsent = methods.get<true, false>(50);
    /* MVJoinState get_JoinState() */
    inline static auto& m_get_JoinState = methods.get<true, false>(51);
    /* System.Void set_JoinState(MVJoinState value) */
    inline static auto& m_set_JoinState = methods.get<true, false>(52);
    /* System.Action`1<MVJoinState> get_OnJoinStateChanged() */
    inline static auto& m_get_OnJoinStateChanged = methods.get<true, false>(53);
    /* System.Void set_OnJoinStateChanged(System.Action`1<MVJoinState> value) */
    inline static auto& m_set_OnJoinStateChanged = methods.get<true, false>(54);
    /* System.Boolean get_IsPlayingInternal() */
    inline static auto& m_get_IsPlayingInternal = methods.get<false, true>(55);
    /* System.Boolean get_IsPlaying() */
    inline static auto& m_get_IsPlaying = methods.get<true, false>(56);
    /* MaterialLoader get_MaterialLoader() */
    inline static auto& m_get_MaterialLoader = methods.get<true, false>(57);
    /* MainCameraManager get_MainCameraManager() */
    inline static auto& m_get_MainCameraManager = methods.get<true, false>(58);
    /* WaterPlaneManager get_WaterPlaneManager() */
    inline static auto& m_get_WaterPlaneManager = methods.get<true, false>(59);
    /* SkyboxManager get_SkyboxManager() */
    inline static auto& m_get_SkyboxManager = methods.get<true, false>(60);
    /* Assets.Scripts.Subscription.SubscriberCooldownsManager get_SubscriberCooldownsManager() */
    inline static auto& m_get_SubscriberCooldownsManager = methods.get<true, false>(61);
    /* System.Void Awake() */
    inline static auto& m_Awake = methods.get<false, true>(62);
    /* System.Collections.IEnumerator InitRegionDependent() */
    inline static auto& m_InitRegionDependent = methods.get<false, false>(63);
    /* System.Void Start() */
    inline static auto& m_Start = methods.get<false, true>(64);
    /* System.Void OnDestroy() */
    inline static auto& m_OnDestroy = methods.get<false, true>(65);
    /* System.Void UnregisterPlayModeController() */
    inline static auto& m_UnregisterPlayModeController = methods.get<true, false>(66);
    /* System.Void Update() */
    inline static auto& m_Update = methods.get<false, false>(67);
    /* System.Void FixedUpdate() */
    inline static auto& m_FixedUpdate = methods.get<false, false>(68);
    /* System.Void LateUpdate() */
    inline static auto& m_LateUpdate = methods.get<false, true>(69);
    /* System.Void OnDrawGizmos() */
    inline static auto& m_OnDrawGizmos = methods.get<false, false>(70);
    /* System.Void OnRTGAppInitialize() */
    inline static auto& m_OnRTGAppInitialize = methods.get<false, false>(71);
    /* System.Void RegisterPlayModeController(ModeControllerBase playModeController) */
    inline static auto& m_RegisterPlayModeController = methods.get<true, false>(72);
    /* System.Void PostGameMsg(MV.Common.MVGameMsgType gameMsgType, System.Collections.Generic.Dictionary`2<System.Object, System.Object> gameMsgData) */
    inline static auto& m0_PostGameMsg = methods.get<true, false>(73);
    /* System.Void PostGameMsg(MV.Common.MVGameMsgType gameMsgType, System.String message) */
    inline static auto& m1_PostGameMsg = methods.get<true, false>(74);
    /* System.Void PostDestroyCleanup() */
    inline static auto& m_PostDestroyCleanup = methods.get<true, false>(75);
    /* System.Void UpdateControllerUpdate() */
    inline static auto& m_UpdateControllerUpdate = methods.get<false, true>(76);
    /* System.Void RegisterJoystickControllerStack(JoystickControllerStack joystickControllerStack) */
    inline static auto& m_RegisterJoystickControllerStack = methods.get<true, false>(77);
    /* System.Void PushJoystick(ControlType joystickType) */
    inline static auto& m_PushJoystick = methods.get<true, false>(78);
    /* System.Void PopJoystick() */
    inline static auto& m_PopJoystick = methods.get<true, false>(79);
    /* System.Void SetGameSessionData(GameSessionData gameSessionData) */
    inline static auto& m_SetGameSessionData = methods.get<true, false>(80);
    /* System.Boolean TryReauth() */
    inline static auto& m_TryReauth = methods.get<true, false>(81);
    /* System.Void ApplicationQuit(QuitBaseCallback applicationQuitObject) */
    inline static auto& m_ApplicationQuit = methods.get<true, false>(82);
    /* System.Void RegisterOverrideMaterials() */
    inline static auto& m_RegisterOverrideMaterials = methods.get<true, false>(83);
    /* System.Boolean SetWindowPos(System.IntPtr hwnd, System.Int32 hWndInsertAfter, System.Int32 x, System.Int32 Y, System.Int32 cx, System.Int32 cy, System.Int32 wFlags) */
    inline static auto& m_SetWindowPos = methods.get<true, false>(84);
    /* System.IntPtr FindWindow(System.String className, System.String windowName) */
    inline static auto& m_FindWindow = methods.get<true, false>(85);
    /* System.Void SetPosition(System.Int32 x, System.Int32 y, System.Int32 resX = 0, System.Int32 resY = 0) */
    inline static auto& m_SetPosition = methods.get<true, false>(86);
    /* System.Boolean get_Quitting() */
    inline static auto& m_get_Quitting = methods.get<true, false>(87);
    /* System.Void set_Quitting(System.Boolean value) */
    inline static auto& m_set_Quitting = methods.get<true, false>(88);
    /* System.Boolean get_LeavingEditPlayMode() */
    inline static auto& m_get_LeavingEditPlayMode = methods.get<true, false>(89);
    /* System.Void set_LeavingEditPlayMode(System.Boolean value) */
    inline static auto& m_set_LeavingEditPlayMode = methods.get<true, false>(90);
    /* System.Void OnApplicationQuit() */
    inline static auto& m_OnApplicationQuit = methods.get<false, false>(91);
    /* System.Void ShutDown() */
    inline static auto& m_ShutDown = methods.get<false, false>(92);
    /* System.Void HandleApplicationQuit(QuitBaseCallback quitBaseCallback) */
    inline static auto& m_HandleApplicationQuit = methods.get<false, true>(93);
    /* System.Void CleanUp() */
    inline static auto& m_CleanUp = methods.get<false, true>(94);
    /* System.Void CleanUpPortal() */
    inline static auto& m_CleanUpPortal = methods.get<false, false>(95);
    /* System.Void HandleQuitDisconnect() */
    inline static auto& m_HandleQuitDisconnect = methods.get<false, false>(96);
    /* System.Void AlternatePortTest() */
    inline static auto& m_AlternatePortTest = methods.get<false, false>(97);
    /* System.Void StartGame() */
    inline static auto& m_StartGame = methods.get<false, true>(98);
    /* System.Void InitWebGL(System.Boolean developmentMode) */
    inline static auto& m_InitWebGL = methods.get<false, true>(99);
    /* System.Void InitStandAlone(System.Boolean developmentMode) */
    inline static auto& m_InitStandAlone = methods.get<false, true>(100);
    /* System.Void OnReceivedReAuthWebParametersFromHttpRequest(UnityEngine.Networking.UnityWebRequest www) */
    inline static auto& m_OnReceivedReAuthWebParametersFromHttpRequest = methods.get<false, false>(101);
    /* System.Void OnReceivedSessionData(UnityEngine.Networking.UnityWebRequest www) */
    inline static auto& m_OnReceivedSessionData = methods.get<false, false>(102);
    /* System.Void UpdateInternal() */
    inline static auto& m_UpdateInternal = methods.get<false, true>(103);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, false>(104);
    /* System.Void HandleDebugShortCuts() */
    inline static auto& m_HandleDebugShortCuts = methods.get<false, false>(105);
    /* System.Void StartGameWithSessionData(System.Boolean ok, System.String sessionDataJson) */
    inline static auto& m_StartGameWithSessionData = methods.get<false, false>(106);
    /* System.Void ReceivedLoadStatsCallback(System.Boolean ok, System.String data) */
    inline static auto& m_ReceivedLoadStatsCallback = methods.get<false, false>(107);
    /* System.Void UpdateGame() */
    inline static auto& m_UpdateGame = methods.get<false, false>(108);
    /* System.Void DeleteScreenPlayerPrefs() */
    inline static auto& m_DeleteScreenPlayerPrefs = methods.get<true, false>(109);
    /* System.Void UpdateControllerLateUpdate() */
    inline static auto& m_UpdateControllerLateUpdate = methods.get<false, false>(110);
    /* System.Void ForceEmbedSite(System.String url) */
    inline static auto& m_ForceEmbedSite = methods.get<true, false>(111);
    /* System.Void TogglePlayerIndicators() */
    inline static auto& m_TogglePlayerIndicators = methods.get<true, false>(112);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(113);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct AwayMonitor {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<14> fields;
inline static auto /* AwayMonitor */ &f_instance = fields.get<true>(0), /* System.String */ &f_mouseX = fields.get<true>(7), /* System.String */ &f_mouseY = fields.get<true>(8), /* System.String */ &f_scroll = fields.get<true>(9), /* System.String */ &f_platformerLeft = fields.get<true>(10), /* System.String */ &f_platformerRight = fields.get<true>(11), /* System.Boolean */ &f_allAxisAvailable = fields.get<true>(12), /* System.Boolean */ &f_allPlatformerButtonsAvailable = fields.get<true>(13);
inline static auto /* System.DateTime */ &f_latestResetAFKTime = fields.get<false>(1), /* System.TimeSpan */ &f_awayCheckFrequency = fields.get<false>(2), /* AwayMonitor+IdleKickTimes */ &f_idleKickTimes = fields.get<false>(3), /* AwayMonitor+State */ &f_state = fields.get<false>(4), /* System.Boolean */ &f_idleKickEnabled = fields.get<false>(5), /* System.DateTime */ &f_latestMouseMoveTime = fields.get<false>(6);

    inline static ::Tools::Il2Cpp::Metadata::array_method<16> methods;
    /* System.Boolean get_IdleKickEnabled() */
    inline static auto& m_get_IdleKickEnabled = methods.get<true, false>(0);
    /* System.Void set_IdleKickEnabled(System.Boolean value) */
    inline static auto& m_set_IdleKickEnabled = methods.get<true, false>(1);
    /* System.DateTime get_LatestMouseMoveTime() */
    inline static auto& m_get_LatestMouseMoveTime = methods.get<false, false>(2);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(3);
    /* System.Void Initialize(MV.Common.MVGameMode mode) */
    inline static auto& m_Initialize = methods.get<true, false>(4);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<true, false>(5);
    /* System.Void UpdateMobile() */
    inline static auto& m_UpdateMobile = methods.get<true, false>(6);
    /* System.Void BackgroundUpdate() */
    inline static auto& m_BackgroundUpdate = methods.get<true, false>(7);
    /* System.Void InternalUpdate() */
    inline static auto& m_InternalUpdate = methods.get<true, false>(8);
    /* System.Void UpdateButtons() */
    inline static auto& m_UpdateButtons = methods.get<false, false>(9);
    /* System.Void Update() */
    inline static auto& m_Update = methods.get<true, false>(10);
    /* System.Void UpdateIdleAction() */
    inline static auto& m_UpdateIdleAction = methods.get<true, false>(11);
    /* System.Void UpdateIdle() */
    inline static auto& m_UpdateIdle = methods.get<false, false>(12);
    /* System.Void UpdateMouse() */
    inline static auto& m_UpdateMouse = methods.get<false, false>(13);
    /* System.Void HandleIdle(System.Boolean fromBackgroundUpdate) */
    inline static auto& m_HandleIdle = methods.get<false, false>(14);
    /* System.Void CheckAndResolvePendingKick() */
    inline static auto& m_CheckAndResolvePendingKick = methods.get<false, false>(15);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct CrossHair {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<9> fields;
inline static auto /* UnityEngine.UI.Image */ &f_crossHair = fields.get<false>(0), /* UnityEngine.GameObject */ &f_ammoRoot = fields.get<false>(1), /* UnityEngine.UI.Text */ &f_ammoCount = fields.get<false>(2), /* UnityEngine.UI.Image */ &f_chargeFill = fields.get<false>(3), /* System.Single */ &f_toggleInterval = fields.get<false>(4), /* UnityEngine.UI.Image */ &f_hitIndicatorImage = fields.get<false>(5), /* UnityEngine.AnimationCurve */ &f_fadeCurve = fields.get<false>(6), /* System.Single */ &f_timeSinceLastToggle = fields.get<false>(7), /* System.Boolean */ &f_isFillOn = fields.get<false>(8);

    inline static ::Tools::Il2Cpp::Metadata::array_method<9> methods;
    /* System.Boolean get_Visible() */
    inline static auto& m_get_Visible = methods.get<false, true>(0);
    /* System.Void set_Visible(System.Boolean value) */
    inline static auto& m_set_Visible = methods.get<false, true>(1);
    /* System.Void ShowHasHitEffect() */
    inline static auto& m_ShowHasHitEffect = methods.get<false, true>(2);
    /* System.Collections.IEnumerator HitIndicatorAnimation() */
    inline static auto& m_HitIndicatorAnimation = methods.get<false, false>(3);
    /* System.Void UpdateCrossHair(PickupItem pickupItem) */
    inline static auto& m_UpdateCrossHair = methods.get<false, true>(4);
    /* System.Void UpdateAmmoCount(PickupItem pickupItem) */
    inline static auto& m_UpdateAmmoCount = methods.get<false, false>(5);
    /* System.Void UpdateChargeState(PickupItem pickupItem) */
    inline static auto& m_UpdateChargeState = methods.get<false, false>(6);
    /* System.Void UpdateCrosshairColor(PickupItem pickupItem) */
    inline static auto& m_UpdateCrosshairColor = methods.get<false, false>(7);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(8);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct UI_Graphic {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<23> fields;
inline static auto /* UnityEngine.Material */ &f_s_DefaultUI = fields.get<true>(0), /* UnityEngine.Texture2D */ &f_s_WhiteTexture = fields.get<true>(1), /* UnityEngine.Mesh */ &f_s_Mesh = fields.get<true>(17), /* UnityEngine.UI.VertexHelper */ &f_s_VertexHelper = fields.get<true>(18);
inline static auto /* UnityEngine.Material */ &f_m_Material = fields.get<false>(2), /* UnityEngine.Color */ &f_m_Color = fields.get<false>(3), /* System.Boolean */ &f_m_SkipLayoutUpdate = fields.get<false>(4), /* System.Boolean */ &f_m_SkipMaterialUpdate = fields.get<false>(5), /* System.Boolean */ &f_m_RaycastTarget = fields.get<false>(6), /* System.Boolean */ &f_m_RaycastTargetCache = fields.get<false>(7), /* UnityEngine.Vector4 */ &f_m_RaycastPadding = fields.get<false>(8), /* UnityEngine.RectTransform */ &f_m_RectTransform = fields.get<false>(9), /* UnityEngine.CanvasRenderer */ &f_m_CanvasRenderer = fields.get<false>(10), /* UnityEngine.Canvas */ &f_m_Canvas = fields.get<false>(11), /* System.Boolean */ &f_m_VertsDirty = fields.get<false>(12), /* System.Boolean */ &f_m_MaterialDirty = fields.get<false>(13), /* UnityEngine.Events.UnityAction */ &f_m_OnDirtyLayoutCallback = fields.get<false>(14), /* UnityEngine.Events.UnityAction */ &f_m_OnDirtyVertsCallback = fields.get<false>(15), /* UnityEngine.Events.UnityAction */ &f_m_OnDirtyMaterialCallback = fields.get<false>(16), /* UnityEngine.Mesh */ &f_m_CachedMesh = fields.get<false>(19), /* UnityEngine.Vector2[] */ &f_m_CachedUvs = fields.get<false>(20), /* UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> */ &f_m_ColorTweenRunner = fields.get<false>(21), /* System.Boolean */ &f__useLegacyMeshGeneration_k__BackingField = fields.get<false>(22);

    inline static ::Tools::Il2Cpp::Metadata::array_method<62> methods;
    /* UnityEngine.Material get_defaultGraphicMaterial() */
    inline static auto& m_get_defaultGraphicMaterial = methods.get<true, false>(0);
    /* UnityEngine.Color get_color() */
    inline static auto& m_get_color = methods.get<false, true>(1);
    /* System.Void set_color(UnityEngine.Color value) */
    inline static auto& m_set_color = methods.get<false, true>(2);
    /* System.Boolean get_raycastTarget() */
    inline static auto& m_get_raycastTarget = methods.get<false, true>(3);
    /* System.Void set_raycastTarget(System.Boolean value) */
    inline static auto& m_set_raycastTarget = methods.get<false, true>(4);
    /* UnityEngine.Vector4 get_raycastPadding() */
    inline static auto& m_get_raycastPadding = methods.get<false, false>(5);
    /* System.Void set_raycastPadding(UnityEngine.Vector4 value) */
    inline static auto& m_set_raycastPadding = methods.get<false, false>(6);
    /* System.Boolean get_useLegacyMeshGeneration() */
    inline static auto& m_get_useLegacyMeshGeneration = methods.get<false, false>(7);
    /* System.Void set_useLegacyMeshGeneration(System.Boolean value) */
    inline static auto& m_set_useLegacyMeshGeneration = methods.get<false, false>(8);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(9);
    /* System.Void SetAllDirty() */
    inline static auto& m_SetAllDirty = methods.get<false, true>(10);
    /* System.Void SetLayoutDirty() */
    inline static auto& m_SetLayoutDirty = methods.get<false, true>(11);
    /* System.Void SetVerticesDirty() */
    inline static auto& m_SetVerticesDirty = methods.get<false, true>(12);
    /* System.Void SetMaterialDirty() */
    inline static auto& m_SetMaterialDirty = methods.get<false, true>(13);
    /* System.Void SetRaycastDirty() */
    inline static auto& m_SetRaycastDirty = methods.get<false, false>(14);
    /* System.Void OnRectTransformDimensionsChange() */
    inline static auto& m_OnRectTransformDimensionsChange = methods.get<false, true>(15);
    /* System.Void OnBeforeTransformParentChanged() */
    inline static auto& m_OnBeforeTransformParentChanged = methods.get<false, true>(16);
    /* System.Void OnTransformParentChanged() */
    inline static auto& m_OnTransformParentChanged = methods.get<false, true>(17);
    /* System.Int32 get_depth() */
    inline static auto& m_get_depth = methods.get<false, false>(18);
    /* UnityEngine.RectTransform get_rectTransform() */
    inline static auto& m_get_rectTransform = methods.get<false, true>(19);
    /* UnityEngine.Canvas get_canvas() */
    inline static auto& m_get_canvas = methods.get<false, false>(20);
    /* System.Void CacheCanvas() */
    inline static auto& m_CacheCanvas = methods.get<false, false>(21);
    /* UnityEngine.CanvasRenderer get_canvasRenderer() */
    inline static auto& m_get_canvasRenderer = methods.get<false, false>(22);
    /* UnityEngine.Material get_defaultMaterial() */
    inline static auto& m_get_defaultMaterial = methods.get<false, true>(23);
    /* UnityEngine.Material get_material() */
    inline static auto& m_get_material = methods.get<false, true>(24);
    /* System.Void set_material(UnityEngine.Material value) */
    inline static auto& m_set_material = methods.get<false, true>(25);
    /* UnityEngine.Material get_materialForRendering() */
    inline static auto& m_get_materialForRendering = methods.get<false, true>(26);
    /* UnityEngine.Texture get_mainTexture() */
    inline static auto& m_get_mainTexture = methods.get<false, true>(27);
    /* System.Void OnEnable() */
    inline static auto& m_OnEnable = methods.get<false, true>(28);
    /* System.Void OnDisable() */
    inline static auto& m_OnDisable = methods.get<false, true>(29);
    /* System.Void OnDestroy() */
    inline static auto& m_OnDestroy = methods.get<false, true>(30);
    /* System.Void OnCanvasHierarchyChanged() */
    inline static auto& m_OnCanvasHierarchyChanged = methods.get<false, true>(31);
    /* System.Void OnCullingChanged() */
    inline static auto& m_OnCullingChanged = methods.get<false, true>(32);
    /* System.Void Rebuild(UnityEngine.UI.CanvasUpdate update) */
    inline static auto& m_Rebuild = methods.get<false, true>(33);
    /* System.Void LayoutComplete() */
    inline static auto& m_LayoutComplete = methods.get<false, true>(34);
    /* System.Void GraphicUpdateComplete() */
    inline static auto& m_GraphicUpdateComplete = methods.get<false, true>(35);
    /* System.Void UpdateMaterial() */
    inline static auto& m_UpdateMaterial = methods.get<false, true>(36);
    /* System.Void UpdateGeometry() */
    inline static auto& m_UpdateGeometry = methods.get<false, true>(37);
    /* System.Void DoMeshGeneration() */
    inline static auto& m_DoMeshGeneration = methods.get<false, false>(38);
    /* System.Void DoLegacyMeshGeneration() */
    inline static auto& m_DoLegacyMeshGeneration = methods.get<false, false>(39);
    /* UnityEngine.Mesh get_workerMesh() */
    inline static auto& m_get_workerMesh = methods.get<true, false>(40);
    /* System.Void OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex> vbo) */
    inline static auto& m_OnFillVBO = methods.get<false, true>(41);
    /* System.Void OnPopulateMesh(UnityEngine.Mesh m) */
    inline static auto& m0_OnPopulateMesh = methods.get<false, true>(42);
    /* System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh) */
    inline static auto& m1_OnPopulateMesh = methods.get<false, true>(43);
    /* System.Void OnDidApplyAnimationProperties() */
    inline static auto& m_OnDidApplyAnimationProperties = methods.get<false, true>(44);
    /* System.Void SetNativeSize() */
    inline static auto& m_SetNativeSize = methods.get<false, true>(45);
    /* System.Boolean Raycast(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera) */
    inline static auto& m0_Raycast = methods.get<false, true>(46);
    /* System.Boolean Raycast(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera, System.Boolean ignoreMasks) */
    inline static auto& m1_Raycast = methods.get<false, false>(47);
    /* UnityEngine.Vector2 PixelAdjustPoint(UnityEngine.Vector2 point) */
    inline static auto& m_PixelAdjustPoint = methods.get<false, false>(48);
    /* UnityEngine.Rect GetPixelAdjustedRect() */
    inline static auto& m_GetPixelAdjustedRect = methods.get<false, false>(49);
    /* System.Void CrossFadeColor(UnityEngine.Color targetColor, System.Single duration, System.Boolean ignoreTimeScale, System.Boolean useAlpha) */
    inline static auto& m0_CrossFadeColor = methods.get<false, true>(50);
    /* System.Void CrossFadeColor(UnityEngine.Color targetColor, System.Single duration, System.Boolean ignoreTimeScale, System.Boolean useAlpha, System.Boolean useRGB) */
    inline static auto& m1_CrossFadeColor = methods.get<false, true>(51);
    /* UnityEngine.Color CreateColorFromAlpha(System.Single alpha) */
    inline static auto& m_CreateColorFromAlpha = methods.get<true, false>(52);
    /* System.Void CrossFadeAlpha(System.Single alpha, System.Single duration, System.Boolean ignoreTimeScale) */
    inline static auto& m_CrossFadeAlpha = methods.get<false, true>(53);
    /* System.Void RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction action) */
    inline static auto& m_RegisterDirtyLayoutCallback = methods.get<false, false>(54);
    /* System.Void UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction action) */
    inline static auto& m_UnregisterDirtyLayoutCallback = methods.get<false, false>(55);
    /* System.Void RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction action) */
    inline static auto& m_RegisterDirtyVerticesCallback = methods.get<false, false>(56);
    /* System.Void UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction action) */
    inline static auto& m_UnregisterDirtyVerticesCallback = methods.get<false, false>(57);
    /* System.Void RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction action) */
    inline static auto& m_RegisterDirtyMaterialCallback = methods.get<false, false>(58);
    /* System.Void UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction action) */
    inline static auto& m_UnregisterDirtyMaterialCallback = methods.get<false, false>(59);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(60);
    /* UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform() */
    inline static auto& m_UnityEngine_UI_ICanvasElement_get_transform = methods.get<false, true>(61);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct PlayButton {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<7> fields;
inline static auto /* TimedPlayReward */ &f_timedPlayReward = fields.get<false>(0), /* UnityEngine.UI.Button */ &f_button = fields.get<false>(1), /* System.Boolean */ &f_shouldConfirmPlay = fields.get<false>(2), /* ContinueButtonLockCursor */ &f_continueButtonPrefab = fields.get<false>(3), /* EmbeddedPlayerConfig */ &f_embeddedPlayerConfig = fields.get<false>(4), /* System.Boolean */ &f_isMouseOver = fields.get<false>(5), /* System.Action */ &f_OnPlayButtonPressed = fields.get<false>(6);

    inline static ::Tools::Il2Cpp::Metadata::array_method<15> methods;
    /* System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData) */
    inline static auto& m_OnPointerUp = methods.get<false, true>(0);
    /* System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData) */
    inline static auto& m_OnPointerDown = methods.get<false, false>(1);
    /* System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData) */
    inline static auto& m_OnPointerEnter = methods.get<false, true>(2);
    /* System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData) */
    inline static auto& m_OnPointerExit = methods.get<false, true>(3);
    /* System.Void Play() */
    inline static auto& m_Play = methods.get<false, false>(4);
    /* System.Void OnPromotionShown(System.Boolean promotionShown, System.Boolean withAd) */
    inline static auto& m_OnPromotionShown = methods.get<false, false>(5);
    /* System.Void OnContinuePressed() */
    inline static auto& m_OnContinuePressed = methods.get<false, false>(6);
    /* System.Void HandlePlayPress() */
    inline static auto& m_HandlePlayPress = methods.get<false, false>(7);
    /* System.Void ConfirmPlay() */
    inline static auto& m_ConfirmPlay = methods.get<false, false>(8);
    /* System.Void Update() */
    inline static auto& m_Update = methods.get<false, false>(9);
    /* System.Void OnEnable() */
    inline static auto& m_OnEnable = methods.get<false, false>(10);
    /* System.Boolean HandlePlayAvailable() */
    inline static auto& m_HandlePlayAvailable = methods.get<false, true>(11);
    /* System.Void OnCountDownEnd() */
    inline static auto& m_OnCountDownEnd = methods.get<false, true>(12);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(13);
    /* System.Void <Play>b__11_0(IDeathPromotionSelector x, UnityEngine.EventSystems.BaseEventData y) */
    inline static auto& m__Play_b__11_0 = methods.get<false, false>(14);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct DeathUIBoostMenuController {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<19> fields;
inline static auto /* UnityEngine.UI.Text */ &f_restartText = fields.get<false>(0), /* NotificationFade */ &f_fader = fields.get<false>(1), /* NotificationFade */ &f_buttonFader = fields.get<false>(2), /* NotificationFade */ &f_resetButtonFader = fields.get<false>(3), /* NotificationFade */ &f_boostFader = fields.get<false>(4), /* NotificationFade */ &f_menuButtonFader = fields.get<false>(5), /* UnityEngine.UI.Image */ &f_readyToPlayTimerFill = fields.get<false>(6), /* PointerDownController */ &f_respawnButton = fields.get<false>(7), /* PointerDownController */ &f_resetButton = fields.get<false>(8), /* BoostMenuController */ &f_boostMenu = fields.get<false>(9), /* ContinueTierBoostPopup */ &f_continueTierBoostPopupPrefab = fields.get<false>(10), /* ContinueButtonLockCursor */ &f_continueButtonLockCursor = fields.get<false>(11), /* UnityEngine.UI.Image */ &f_adIcon = fields.get<false>(12), /* EmbeddedPlayerConfig */ &f_embeddedPlayerConfig = fields.get<false>(13), /* System.Single */ &f_startTime = fields.get<false>(14), /* System.Single */ &f_timeUntilGhostMode = fields.get<false>(15), /* System.Boolean */ &f_shouldPop = fields.get<false>(16), /* System.Boolean */ &f_wantsToPlay = fields.get<false>(17), /* System.Boolean */ &f_isGhost = fields.get<false>(18);

    inline static ::Tools::Il2Cpp::Metadata::array_method<12> methods;
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, false>(0);
    /* System.Void OpenMenu() */
    inline static auto& m_OpenMenu = methods.get<false, false>(1);
    /* System.Void OnDestroy() */
    inline static auto& m_OnDestroy = methods.get<false, false>(2);
    /* System.Void Update() */
    inline static auto& m_Update = methods.get<false, false>(3);
    /* System.Void OnEnable() */
    inline static auto& m_OnEnable = methods.get<false, false>(4);
    /* System.Void OnResetToSpawnPoint() */
    inline static auto& m_OnResetToSpawnPoint = methods.get<false, false>(5);
    /* System.Void OnRespawn() */
    inline static auto& m_OnRespawn = methods.get<false, false>(6);
    /* System.Void ReadyToSpawn(System.Boolean promotionPushedToStack, System.Boolean withAd) */
    inline static auto& m_ReadyToSpawn = methods.get<false, false>(7);
    /* System.Void LockCursorAndPop() */
    inline static auto& m_LockCursorAndPop = methods.get<false, false>(8);
    /* System.Void OnAvatarStateChanged(MV.Common.SpawnRoleModeType mode) */
    inline static auto& m_OnAvatarStateChanged = methods.get<false, false>(9);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(10);
    /* System.Void <OnRespawn>b__25_0(IDeathPromotionSelector x, UnityEngine.EventSystems.BaseEventData y) */
    inline static auto& m__OnRespawn_b__25_0 = methods.get<false, false>(11);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct ImageConversion {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<0> fields;

    inline static ::Tools::Il2Cpp::Metadata::array_method<5> methods;
    /* System.Byte[] EncodeToPNG(UnityEngine.Texture2D tex) */
    inline static auto& m_EncodeToPNG = methods.get<true, false>(0);
    /* System.Boolean LoadImage(UnityEngine.Texture2D tex, System.ReadOnlySpan`1<System.Byte> data, System.Boolean markNonReadable) */
    inline static auto& m0_LoadImage = methods.get<true, false>(1);
    /* System.Boolean LoadImage(UnityEngine.Texture2D tex, System.Byte[] data) */
    inline static auto& m1_LoadImage = methods.get<true, false>(2);
    /* System.Void EncodeToPNG_Injected(System.IntPtr tex, out UnityEngine.Bindings.BlittableArrayWrapper ret) */
    inline static auto& m_EncodeToPNG_Injected = methods.get<true, false>(3);
    /* System.Boolean LoadImage_Injected(System.IntPtr tex, ref UnityEngine.Bindings.ManagedSpanWrapper data, System.Boolean markNonReadable) */
    inline static auto& m_LoadImage_Injected = methods.get<true, false>(4);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct Texture2D {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<2> fields;
inline static auto /* System.Int32 */ &f_streamingMipmapsPriorityMin = fields.get<true>(0), /* System.Int32 */ &f_streamingMipmapsPriorityMax = fields.get<true>(1);

    inline static ::Tools::Il2Cpp::Metadata::array_method<53> methods;
    /* UnityEngine.TextureFormat get_format() */
    inline static auto& m_get_format = methods.get<false, false>(0);
    /* UnityEngine.Texture2D get_whiteTexture() */
    inline static auto& m_get_whiteTexture = methods.get<true, false>(1);
    /* System.Boolean Internal_CreateEmptyImpl(UnityEngine.Texture2D mono) */
    inline static auto& m_Internal_CreateEmptyImpl = methods.get<true, false>(2);
    /* System.Boolean Internal_CreateImpl(UnityEngine.Texture2D mono, System.Int32 w, System.Int32 h, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.TextureColorSpace colorSpace, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.IntPtr nativeTex, System.Boolean ignoreMipmapLimit, System.String mipmapLimitGroupName) */
    inline static auto& m_Internal_CreateImpl = methods.get<true, false>(3);
    /* System.Void Internal_Create(UnityEngine.Texture2D mono, System.Int32 w, System.Int32 h, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.TextureColorSpace colorSpace, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.IntPtr nativeTex, System.Boolean ignoreMipmapLimit, System.String mipmapLimitGroupName) */
    inline static auto& m_Internal_Create = methods.get<true, false>(4);
    /* System.Boolean get_isReadable() */
    inline static auto& m_get_isReadable = methods.get<false, true>(5);
    /* System.Void ApplyImpl(System.Boolean updateMipmaps, System.Boolean makeNoLongerReadable) */
    inline static auto& m_ApplyImpl = methods.get<false, false>(6);
    /* System.Boolean ReinitializeImpl(System.Int32 width, System.Int32 height) */
    inline static auto& m_ReinitializeImpl = methods.get<false, false>(7);
    /* System.Void SetPixelImpl(System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y, UnityEngine.Color color) */
    inline static auto& m_SetPixelImpl = methods.get<false, false>(8);
    /* UnityEngine.Color GetPixelImpl(System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y) */
    inline static auto& m_GetPixelImpl = methods.get<false, false>(9);
    /* UnityEngine.Color GetPixelBilinearImpl(System.Int32 image, System.Int32 mip, System.Single u, System.Single v) */
    inline static auto& m_GetPixelBilinearImpl = methods.get<false, false>(10);
    /* System.Boolean ReinitializeWithTextureFormatImpl(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Boolean hasMipMap) */
    inline static auto& m_ReinitializeWithTextureFormatImpl = methods.get<false, false>(11);
    /* System.Void ReadPixelsImpl(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps) */
    inline static auto& m_ReadPixelsImpl = methods.get<false, false>(12);
    /* System.IntPtr GetWritableImageData(System.Int32 frame) */
    inline static auto& m_GetWritableImageData = methods.get<false, false>(13);
    /* System.UInt64 GetImageDataSize() */
    inline static auto& m_GetImageDataSize = methods.get<false, false>(14);
    /* System.Void SetAllPixels32(UnityEngine.Color32[] colors, System.Int32 miplevel) */
    inline static auto& m_SetAllPixels32 = methods.get<false, false>(15);
    /* UnityEngine.Color[] GetPixels(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, System.Int32 miplevel) */
    inline static auto& m0_GetPixels = methods.get<false, false>(16);
    /* UnityEngine.Color[] GetPixels(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight) */
    inline static auto& m1_GetPixels = methods.get<false, false>(17);
    /* UnityEngine.Color32[] GetPixels32(System.Int32 miplevel) */
    inline static auto& m0_GetPixels32 = methods.get<false, false>(18);
    /* UnityEngine.Color32[] GetPixels32() */
    inline static auto& m1_GetPixels32 = methods.get<false, false>(19);
    /* System.Boolean ValidateFormat(UnityEngine.TextureFormat format, System.Int32 width, System.Int32 height) */
    inline static auto& m_ValidateFormat = methods.get<false, false>(20);
    /* System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Int32 mipCount, System.Boolean linear, System.IntPtr nativeTex, System.Boolean createUninitialized, UnityEngine.MipmapLimitDescriptor mipmapLimitDescriptor) */
    inline static auto& m0__ctor = methods.get<false, false>(21);
    /* System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Int32 mipCount, System.Boolean linear) */
    inline static auto& m1__ctor = methods.get<false, false>(22);
    /* System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain) */
    inline static auto& m2__ctor = methods.get<false, false>(23);
    /* System.Void .ctor(System.Int32 width, System.Int32 height) */
    inline static auto& m3__ctor = methods.get<false, false>(24);
    /* System.Void SetPixel(System.Int32 x, System.Int32 y, UnityEngine.Color color) */
    inline static auto& m_SetPixel = methods.get<false, false>(25);
    /* UnityEngine.Color GetPixel(System.Int32 x, System.Int32 y) */
    inline static auto& m_GetPixel = methods.get<false, false>(26);
    /* UnityEngine.Color GetPixelBilinear(System.Single u, System.Single v) */
    inline static auto& m_GetPixelBilinear = methods.get<false, false>(27);
    /* Unity.Collections.NativeArray`1<T> GetRawTextureData() */
    inline static auto& m_GetRawTextureData = methods.get<false, false>(28);
    /* System.Void Apply(System.Boolean updateMipmaps, System.Boolean makeNoLongerReadable) */
    inline static auto& m0_Apply = methods.get<false, false>(29);
    /* System.Void Apply() */
    inline static auto& m1_Apply = methods.get<false, false>(30);
    /* System.Boolean Reinitialize(System.Int32 width, System.Int32 height) */
    inline static auto& m0_Reinitialize = methods.get<false, false>(31);
    /* System.Boolean Reinitialize(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat format, System.Boolean hasMipMap) */
    inline static auto& m1_Reinitialize = methods.get<false, false>(32);
    /* System.Void ReadPixels(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps) */
    inline static auto& m0_ReadPixels = methods.get<false, false>(33);
    /* System.Void ReadPixels(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY) */
    inline static auto& m1_ReadPixels = methods.get<false, false>(34);
    /* System.Void SetPixels32(UnityEngine.Color32[] colors, System.Int32 miplevel) */
    inline static auto& m0_SetPixels32 = methods.get<false, false>(35);
    /* System.Void SetPixels32(UnityEngine.Color32[] colors) */
    inline static auto& m1_SetPixels32 = methods.get<false, false>(36);
    /* UnityEngine.TextureFormat get_format_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_format_Injected = methods.get<true, false>(37);
    /* System.IntPtr get_whiteTexture_Injected() */
    inline static auto& m_get_whiteTexture_Injected = methods.get<true, false>(38);
    /* System.Boolean Internal_CreateImpl_Injected(UnityEngine.Texture2D mono, System.Int32 w, System.Int32 h, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.TextureColorSpace colorSpace, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.IntPtr nativeTex, System.Boolean ignoreMipmapLimit, ref UnityEngine.Bindings.ManagedSpanWrapper mipmapLimitGroupName) */
    inline static auto& m_Internal_CreateImpl_Injected = methods.get<true, false>(39);
    /* System.Boolean get_isReadable_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_isReadable_Injected = methods.get<true, false>(40);
    /* System.Void ApplyImpl_Injected(System.IntPtr _unity_self, System.Boolean updateMipmaps, System.Boolean makeNoLongerReadable) */
    inline static auto& m_ApplyImpl_Injected = methods.get<true, false>(41);
    /* System.Boolean ReinitializeImpl_Injected(System.IntPtr _unity_self, System.Int32 width, System.Int32 height) */
    inline static auto& m_ReinitializeImpl_Injected = methods.get<true, false>(42);
    /* System.Void SetPixelImpl_Injected(System.IntPtr _unity_self, System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y, in UnityEngine.Color color) */
    inline static auto& m_SetPixelImpl_Injected = methods.get<true, false>(43);
    /* System.Void GetPixelImpl_Injected(System.IntPtr _unity_self, System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y, out UnityEngine.Color ret) */
    inline static auto& m_GetPixelImpl_Injected = methods.get<true, false>(44);
    /* System.Void GetPixelBilinearImpl_Injected(System.IntPtr _unity_self, System.Int32 image, System.Int32 mip, System.Single u, System.Single v, out UnityEngine.Color ret) */
    inline static auto& m_GetPixelBilinearImpl_Injected = methods.get<true, false>(45);
    /* System.Boolean ReinitializeWithTextureFormatImpl_Injected(System.IntPtr _unity_self, System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Boolean hasMipMap) */
    inline static auto& m_ReinitializeWithTextureFormatImpl_Injected = methods.get<true, false>(46);
    /* System.Void ReadPixelsImpl_Injected(System.IntPtr _unity_self, in UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps) */
    inline static auto& m_ReadPixelsImpl_Injected = methods.get<true, false>(47);
    /* System.IntPtr GetWritableImageData_Injected(System.IntPtr _unity_self, System.Int32 frame) */
    inline static auto& m_GetWritableImageData_Injected = methods.get<true, false>(48);
    /* System.UInt64 GetImageDataSize_Injected(System.IntPtr _unity_self) */
    inline static auto& m_GetImageDataSize_Injected = methods.get<true, false>(49);
    /* System.Void SetAllPixels32_Injected(System.IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper colors, System.Int32 miplevel) */
    inline static auto& m_SetAllPixels32_Injected = methods.get<true, false>(50);
    /* UnityEngine.Color[] GetPixels_Injected(System.IntPtr _unity_self, System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, System.Int32 miplevel) */
    inline static auto& m_GetPixels_Injected = methods.get<true, false>(51);
    /* UnityEngine.Color32[] GetPixels32_Injected(System.IntPtr _unity_self, System.Int32 miplevel) */
    inline static auto& m_GetPixels32_Injected = methods.get<true, false>(52);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct IPlayModeUI {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<0> fields;

    inline static ::Tools::Il2Cpp::Metadata::array_method<13> methods;
    /* System.Void ShowEUseIcon(ShowUseOption option, System.Int32 woId = 0) */
    inline static auto& m_ShowEUseIcon = methods.get<false, true>(0);
    /* System.Void HideEUseIcon() */
    inline static auto& m_HideEUseIcon = methods.get<false, true>(1);
    /* IGUICrossHair GetCrossHair() */
    inline static auto& m_GetCrossHair = methods.get<false, true>(2);
    /* System.Action`1<System.Boolean> get_IsPausedStateChange() */
    inline static auto& m_get_IsPausedStateChange = methods.get<false, true>(3);
    /* System.Void set_IsPausedStateChange(System.Action`1<System.Boolean> value) */
    inline static auto& m_set_IsPausedStateChange = methods.get<false, true>(4);
    /* System.Action`1<ChatConsoleMode> get_IsChatConsoleStateChange() */
    inline static auto& m_get_IsChatConsoleStateChange = methods.get<false, true>(5);
    /* System.Void set_IsChatConsoleStateChange(System.Action`1<ChatConsoleMode> value) */
    inline static auto& m_set_IsChatConsoleStateChange = methods.get<false, true>(6);
    /* System.Boolean get_IsInPauseMenu() */
    inline static auto& m_get_IsInPauseMenu = methods.get<false, true>(7);
    /* System.Void set_IsInPauseMenu(System.Boolean value) */
    inline static auto& m_set_IsInPauseMenu = methods.get<false, true>(8);
    /* System.Boolean get_IsInLobby() */
    inline static auto& m_get_IsInLobby = methods.get<false, true>(9);
    /* System.Void set_IsInLobby(System.Boolean value) */
    inline static auto& m_set_IsInLobby = methods.get<false, true>(10);
    /* System.Boolean get_IsDying() */
    inline static auto& m_get_IsDying = methods.get<false, true>(11);
    /* System.Void set_IsDying(System.Boolean value) */
    inline static auto& m_set_IsDying = methods.get<false, true>(12);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct Image {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<23> fields;
inline static auto /* UnityEngine.Material */ &f_s_ETC1DefaultUI = fields.get<true>(0), /* UnityEngine.SecondarySpriteTexture[] */ &f_s_TempNewSecondaryTextures = fields.get<true>(15), /* UnityEngine.Vector2[] */ &f_s_VertScratch = fields.get<true>(17), /* UnityEngine.Vector2[] */ &f_s_UVScratch = fields.get<true>(18), /* UnityEngine.Vector3[] */ &f_s_Xy = fields.get<true>(19), /* UnityEngine.Vector3[] */ &f_s_Uv = fields.get<true>(20), /* System.Collections.Generic.List`1<UnityEngine.UI.Image> */ &f_m_TrackedTexturelessImages = fields.get<true>(21), /* System.Boolean */ &f_s_Initialized = fields.get<true>(22);
inline static auto /* UnityEngine.Sprite */ &f_m_Sprite = fields.get<false>(1), /* UnityEngine.Sprite */ &f_m_OverrideSprite = fields.get<false>(2), /* UnityEngine.UI.Image+Type */ &f_m_Type = fields.get<false>(3), /* System.Boolean */ &f_m_PreserveAspect = fields.get<false>(4), /* System.Boolean */ &f_m_FillCenter = fields.get<false>(5), /* UnityEngine.UI.Image+FillMethod */ &f_m_FillMethod = fields.get<false>(6), /* System.Single */ &f_m_FillAmount = fields.get<false>(7), /* System.Boolean */ &f_m_FillClockwise = fields.get<false>(8), /* System.Int32 */ &f_m_FillOrigin = fields.get<false>(9), /* System.Single */ &f_m_AlphaHitTestMinimumThreshold = fields.get<false>(10), /* System.Boolean */ &f_m_Tracked = fields.get<false>(11), /* System.Boolean */ &f_m_UseSpriteMesh = fields.get<false>(12), /* System.Single */ &f_m_PixelsPerUnitMultiplier = fields.get<false>(13), /* System.Single */ &f_m_CachedReferencePixelsPerUnit = fields.get<false>(14), /* UnityEngine.SecondarySpriteTexture[] */ &f_m_SecondaryTextures = fields.get<false>(16);

    inline static ::Tools::Il2Cpp::Metadata::array_method<81> methods;
    /* UnityEngine.Sprite get_sprite() */
    inline static auto& m_get_sprite = methods.get<false, false>(0);
    /* System.Void set_sprite(UnityEngine.Sprite value) */
    inline static auto& m_set_sprite = methods.get<false, false>(1);
    /* System.Void DisableSpriteOptimizations() */
    inline static auto& m_DisableSpriteOptimizations = methods.get<false, false>(2);
    /* UnityEngine.Sprite get_overrideSprite() */
    inline static auto& m_get_overrideSprite = methods.get<false, false>(3);
    /* System.Void set_overrideSprite(UnityEngine.Sprite value) */
    inline static auto& m_set_overrideSprite = methods.get<false, false>(4);
    /* UnityEngine.Sprite get_activeSprite() */
    inline static auto& m_get_activeSprite = methods.get<false, false>(5);
    /* UnityEngine.UI.Image+Type get_type() */
    inline static auto& m_get_type = methods.get<false, false>(6);
    /* System.Void set_type(UnityEngine.UI.Image+Type value) */
    inline static auto& m_set_type = methods.get<false, false>(7);
    /* System.Boolean get_preserveAspect() */
    inline static auto& m_get_preserveAspect = methods.get<false, false>(8);
    /* System.Void set_preserveAspect(System.Boolean value) */
    inline static auto& m_set_preserveAspect = methods.get<false, false>(9);
    /* System.Boolean get_fillCenter() */
    inline static auto& m_get_fillCenter = methods.get<false, false>(10);
    /* System.Void set_fillCenter(System.Boolean value) */
    inline static auto& m_set_fillCenter = methods.get<false, false>(11);
    /* UnityEngine.UI.Image+FillMethod get_fillMethod() */
    inline static auto& m_get_fillMethod = methods.get<false, false>(12);
    /* System.Void set_fillMethod(UnityEngine.UI.Image+FillMethod value) */
    inline static auto& m_set_fillMethod = methods.get<false, false>(13);
    /* System.Single get_fillAmount() */
    inline static auto& m_get_fillAmount = methods.get<false, false>(14);
    /* System.Void set_fillAmount(System.Single value) */
    inline static auto& m_set_fillAmount = methods.get<false, false>(15);
    /* System.Boolean get_fillClockwise() */
    inline static auto& m_get_fillClockwise = methods.get<false, false>(16);
    /* System.Void set_fillClockwise(System.Boolean value) */
    inline static auto& m_set_fillClockwise = methods.get<false, false>(17);
    /* System.Int32 get_fillOrigin() */
    inline static auto& m_get_fillOrigin = methods.get<false, false>(18);
    /* System.Void set_fillOrigin(System.Int32 value) */
    inline static auto& m_set_fillOrigin = methods.get<false, false>(19);
    /* System.Single get_eventAlphaThreshold() */
    inline static auto& m_get_eventAlphaThreshold = methods.get<false, false>(20);
    /* System.Void set_eventAlphaThreshold(System.Single value) */
    inline static auto& m_set_eventAlphaThreshold = methods.get<false, false>(21);
    /* System.Single get_alphaHitTestMinimumThreshold() */
    inline static auto& m_get_alphaHitTestMinimumThreshold = methods.get<false, false>(22);
    /* System.Void set_alphaHitTestMinimumThreshold(System.Single value) */
    inline static auto& m_set_alphaHitTestMinimumThreshold = methods.get<false, false>(23);
    /* System.Boolean get_useSpriteMesh() */
    inline static auto& m_get_useSpriteMesh = methods.get<false, false>(24);
    /* System.Void set_useSpriteMesh(System.Boolean value) */
    inline static auto& m_set_useSpriteMesh = methods.get<false, false>(25);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(26);
    /* UnityEngine.Material get_defaultETC1GraphicMaterial() */
    inline static auto& m_get_defaultETC1GraphicMaterial = methods.get<true, false>(27);
    /* UnityEngine.Texture get_mainTexture() */
    inline static auto& m_get_mainTexture = methods.get<false, true>(28);
    /* System.Boolean get_hasBorder() */
    inline static auto& m_get_hasBorder = methods.get<false, false>(29);
    /* System.Single get_pixelsPerUnitMultiplier() */
    inline static auto& m_get_pixelsPerUnitMultiplier = methods.get<false, false>(30);
    /* System.Void set_pixelsPerUnitMultiplier(System.Single value) */
    inline static auto& m_set_pixelsPerUnitMultiplier = methods.get<false, false>(31);
    /* System.Single get_pixelsPerUnit() */
    inline static auto& m_get_pixelsPerUnit = methods.get<false, false>(32);
    /* System.Single get_multipliedPixelsPerUnit() */
    inline static auto& m_get_multipliedPixelsPerUnit = methods.get<false, false>(33);
    /* UnityEngine.Material get_material() */
    inline static auto& m_get_material = methods.get<false, true>(34);
    /* System.Void set_material(UnityEngine.Material value) */
    inline static auto& m_set_material = methods.get<false, true>(35);
    /* System.Void OnBeforeSerialize() */
    inline static auto& m_OnBeforeSerialize = methods.get<false, true>(36);
    /* System.Void OnAfterDeserialize() */
    inline static auto& m_OnAfterDeserialize = methods.get<false, true>(37);
    /* System.Void PreserveSpriteAspectRatio(ref UnityEngine.Rect rect, UnityEngine.Vector2 spriteSize) */
    inline static auto& m_PreserveSpriteAspectRatio = methods.get<false, false>(38);
    /* UnityEngine.Vector4 GetDrawingDimensions(System.Boolean shouldPreserveAspect) */
    inline static auto& m_GetDrawingDimensions = methods.get<false, false>(39);
    /* System.Void SetNativeSize() */
    inline static auto& m_SetNativeSize = methods.get<false, true>(40);
    /* System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper toFill) */
    inline static auto& m_OnPopulateMesh = methods.get<false, true>(41);
    /* System.Void TrackSprite() */
    inline static auto& m_TrackSprite = methods.get<false, false>(42);
    /* System.Void OnEnable() */
    inline static auto& m_OnEnable = methods.get<false, true>(43);
    /* System.Void OnDisable() */
    inline static auto& m_OnDisable = methods.get<false, true>(44);
    /* UnityEngine.SecondarySpriteTexture[] get_secondaryTextures() */
    inline static auto& m_get_secondaryTextures = methods.get<false, false>(45);
    /* System.Void ClearArray(ref UnityEngine.SecondarySpriteTexture[] array) */
    inline static auto& m_ClearArray = methods.get<true, false>(46);
    /* System.Boolean CheckSecondaryTexturesChanged(UnityEngine.Sprite sprite) */
    inline static auto& m0_CheckSecondaryTexturesChanged = methods.get<false, false>(47);
    /* System.Boolean CheckSecondaryTexturesChanged(UnityEngine.Sprite sprite, ref UnityEngine.SecondarySpriteTexture[] newSecondaryTextures) */
    inline static auto& m1_CheckSecondaryTexturesChanged = methods.get<false, false>(48);
    /* System.Void SetSecondaryTextures(UnityEngine.CanvasRenderer renderer) */
    inline static auto& m_SetSecondaryTextures = methods.get<false, false>(49);
    /* System.Void UpdateMaterial() */
    inline static auto& m_UpdateMaterial = methods.get<false, true>(50);
    /* System.Void OnCanvasHierarchyChanged() */
    inline static auto& m_OnCanvasHierarchyChanged = methods.get<false, true>(51);
    /* System.Void GenerateSimpleSprite(UnityEngine.UI.VertexHelper vh, System.Boolean lPreserveAspect) */
    inline static auto& m_GenerateSimpleSprite = methods.get<false, false>(52);
    /* System.Void GenerateSprite(UnityEngine.UI.VertexHelper vh, System.Boolean lPreserveAspect) */
    inline static auto& m_GenerateSprite = methods.get<false, false>(53);
    /* System.Void GenerateSlicedSprite(UnityEngine.UI.VertexHelper toFill) */
    inline static auto& m_GenerateSlicedSprite = methods.get<false, false>(54);
    /* System.Void GenerateTiledSprite(UnityEngine.UI.VertexHelper toFill) */
    inline static auto& m_GenerateTiledSprite = methods.get<false, false>(55);
    /* System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector3[] quadPositions, UnityEngine.Color32 color, UnityEngine.Vector3[] quadUVs) */
    inline static auto& m0_AddQuad = methods.get<true, false>(56);
    /* System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color, UnityEngine.Vector2 uvMin, UnityEngine.Vector2 uvMax) */
    inline static auto& m1_AddQuad = methods.get<true, false>(57);
    /* UnityEngine.Vector4 GetAdjustedBorders(UnityEngine.Vector4 border, UnityEngine.Rect adjustedRect) */
    inline static auto& m_GetAdjustedBorders = methods.get<false, false>(58);
    /* System.Void GenerateFilledSprite(UnityEngine.UI.VertexHelper toFill, System.Boolean preserveAspect) */
    inline static auto& m_GenerateFilledSprite = methods.get<false, false>(59);
    /* System.Boolean RadialCut(UnityEngine.Vector3[] xy, UnityEngine.Vector3[] uv, System.Single fill, System.Boolean invert, System.Int32 corner) */
    inline static auto& m0_RadialCut = methods.get<true, false>(60);
    /* System.Void RadialCut(UnityEngine.Vector3[] xy, System.Single cos, System.Single sin, System.Boolean invert, System.Int32 corner) */
    inline static auto& m1_RadialCut = methods.get<true, false>(61);
    /* System.Void CalculateLayoutInputHorizontal() */
    inline static auto& m_CalculateLayoutInputHorizontal = methods.get<false, true>(62);
    /* System.Void CalculateLayoutInputVertical() */
    inline static auto& m_CalculateLayoutInputVertical = methods.get<false, true>(63);
    /* System.Single get_minWidth() */
    inline static auto& m_get_minWidth = methods.get<false, true>(64);
    /* System.Single get_preferredWidth() */
    inline static auto& m_get_preferredWidth = methods.get<false, true>(65);
    /* System.Single get_flexibleWidth() */
    inline static auto& m_get_flexibleWidth = methods.get<false, true>(66);
    /* System.Single get_minHeight() */
    inline static auto& m_get_minHeight = methods.get<false, true>(67);
    /* System.Single get_preferredHeight() */
    inline static auto& m_get_preferredHeight = methods.get<false, true>(68);
    /* System.Single get_flexibleHeight() */
    inline static auto& m_get_flexibleHeight = methods.get<false, true>(69);
    /* System.Int32 get_layoutPriority() */
    inline static auto& m_get_layoutPriority = methods.get<false, true>(70);
    /* System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 screenPoint, UnityEngine.Camera eventCamera) */
    inline static auto& m_IsRaycastLocationValid = methods.get<false, true>(71);
    /* UnityEngine.Vector2 MapCoordinate(UnityEngine.Vector2 local, UnityEngine.Rect rect) */
    inline static auto& m_MapCoordinate = methods.get<false, false>(72);
    /* System.Void RebuildImage(UnityEngine.U2D.SpriteAtlas spriteAtlas) */
    inline static auto& m_RebuildImage = methods.get<true, false>(73);
    /* System.Void TrackImage(UnityEngine.UI.Image g) */
    inline static auto& m_TrackImage = methods.get<true, false>(74);
    /* System.Void UnTrackImage(UnityEngine.UI.Image g) */
    inline static auto& m_UnTrackImage = methods.get<true, false>(75);
    /* System.Void OnDidApplyAnimationProperties() */
    inline static auto& m_OnDidApplyAnimationProperties = methods.get<false, true>(76);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(77);
    /* System.Void <set_sprite>g__ResetAlphaHitThresholdIfNeeded|11_0() */
    inline static auto& m__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0 = methods.get<false, false>(78);
    /* System.Boolean <set_sprite>g__SpriteSupportsAlphaHitTest|11_1() */
    inline static auto& m__set_sprite_g__SpriteSupportsAlphaHitTest_11_1 = methods.get<false, false>(79);
    /* System.Boolean <CheckSecondaryTexturesChanged>g__Compare|93_0(UnityEngine.SecondarySpriteTexture[] array1, UnityEngine.SecondarySpriteTexture[] array2) */
    inline static auto& m__CheckSecondaryTexturesChanged_g__Compare_93_0 = methods.get<true, false>(80);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct Sprite {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<0> fields;

    inline static ::Tools::Il2Cpp::Metadata::array_method<49> methods;
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(0);
    /* System.Int32 GetPackingRotation() */
    inline static auto& m_GetPackingRotation = methods.get<false, false>(1);
    /* System.Int32 GetPacked() */
    inline static auto& m_GetPacked = methods.get<false, false>(2);
    /* UnityEngine.Vector2 GetTextureRectOffset() */
    inline static auto& m_GetTextureRectOffset = methods.get<false, false>(3);
    /* UnityEngine.Vector4 GetInnerUVs() */
    inline static auto& m_GetInnerUVs = methods.get<false, false>(4);
    /* UnityEngine.Vector4 GetOuterUVs() */
    inline static auto& m_GetOuterUVs = methods.get<false, false>(5);
    /* UnityEngine.Vector4 GetPadding() */
    inline static auto& m_GetPadding = methods.get<false, false>(6);
    /* UnityEngine.Sprite CreateSprite(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape, UnityEngine.SecondarySpriteTexture[] secondaryTexture) */
    inline static auto& m_CreateSprite = methods.get<true, false>(7);
    /* UnityEngine.Bounds get_bounds() */
    inline static auto& m_get_bounds = methods.get<false, false>(8);
    /* UnityEngine.Rect get_rect() */
    inline static auto& m_get_rect = methods.get<false, false>(9);
    /* UnityEngine.Vector4 get_border() */
    inline static auto& m_get_border = methods.get<false, false>(10);
    /* UnityEngine.Texture2D get_texture() */
    inline static auto& m_get_texture = methods.get<false, false>(11);
    /* System.Int32 GetSecondaryTextureCount() */
    inline static auto& m_GetSecondaryTextureCount = methods.get<false, false>(12);
    /* System.Int32 GetSecondaryTextures(UnityEngine.SecondarySpriteTexture[] secondaryTexture) */
    inline static auto& m_GetSecondaryTextures = methods.get<false, false>(13);
    /* System.Single get_pixelsPerUnit() */
    inline static auto& m_get_pixelsPerUnit = methods.get<false, false>(14);
    /* UnityEngine.Texture2D get_associatedAlphaSplitTexture() */
    inline static auto& m_get_associatedAlphaSplitTexture = methods.get<false, false>(15);
    /* UnityEngine.Vector2 get_pivot() */
    inline static auto& m_get_pivot = methods.get<false, false>(16);
    /* System.Boolean get_packed() */
    inline static auto& m_get_packed = methods.get<false, false>(17);
    /* UnityEngine.SpritePackingRotation get_packingRotation() */
    inline static auto& m_get_packingRotation = methods.get<false, false>(18);
    /* UnityEngine.Vector2 get_textureRectOffset() */
    inline static auto& m_get_textureRectOffset = methods.get<false, false>(19);
    /* UnityEngine.Vector2[] get_vertices() */
    inline static auto& m_get_vertices = methods.get<false, false>(20);
    /* System.UInt16[] get_triangles() */
    inline static auto& m_get_triangles = methods.get<false, false>(21);
    /* UnityEngine.Vector2[] get_uv() */
    inline static auto& m_get_uv = methods.get<false, false>(22);
    /* UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape) */
    inline static auto& m0_Create = methods.get<true, false>(23);
    /* UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape, UnityEngine.SecondarySpriteTexture[] secondaryTextures) */
    inline static auto& m1_Create = methods.get<true, false>(24);
    /* UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border) */
    inline static auto& m2_Create = methods.get<true, false>(25);
    /* UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType) */
    inline static auto& m3_Create = methods.get<true, false>(26);
    /* UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude) */
    inline static auto& m4_Create = methods.get<true, false>(27);
    /* UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit) */
    inline static auto& m5_Create = methods.get<true, false>(28);
    /* UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot) */
    inline static auto& m6_Create = methods.get<true, false>(29);
    /* System.Int32 GetPackingRotation_Injected(System.IntPtr _unity_self) */
    inline static auto& m_GetPackingRotation_Injected = methods.get<true, false>(30);
    /* System.Int32 GetPacked_Injected(System.IntPtr _unity_self) */
    inline static auto& m_GetPacked_Injected = methods.get<true, false>(31);
    /* System.Void GetTextureRectOffset_Injected(System.IntPtr _unity_self, out UnityEngine.Vector2 ret) */
    inline static auto& m_GetTextureRectOffset_Injected = methods.get<true, false>(32);
    /* System.Void GetInnerUVs_Injected(System.IntPtr _unity_self, out UnityEngine.Vector4 ret) */
    inline static auto& m_GetInnerUVs_Injected = methods.get<true, false>(33);
    /* System.Void GetOuterUVs_Injected(System.IntPtr _unity_self, out UnityEngine.Vector4 ret) */
    inline static auto& m_GetOuterUVs_Injected = methods.get<true, false>(34);
    /* System.Void GetPadding_Injected(System.IntPtr _unity_self, out UnityEngine.Vector4 ret) */
    inline static auto& m_GetPadding_Injected = methods.get<true, false>(35);
    /* System.IntPtr CreateSprite_Injected(System.IntPtr texture, in UnityEngine.Rect rect, in UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, in UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape, UnityEngine.SecondarySpriteTexture[] secondaryTexture) */
    inline static auto& m_CreateSprite_Injected = methods.get<true, false>(36);
    /* System.Void get_bounds_Injected(System.IntPtr _unity_self, out UnityEngine.Bounds ret) */
    inline static auto& m_get_bounds_Injected = methods.get<true, false>(37);
    /* System.Void get_rect_Injected(System.IntPtr _unity_self, out UnityEngine.Rect ret) */
    inline static auto& m_get_rect_Injected = methods.get<true, false>(38);
    /* System.Void get_border_Injected(System.IntPtr _unity_self, out UnityEngine.Vector4 ret) */
    inline static auto& m_get_border_Injected = methods.get<true, false>(39);
    /* System.IntPtr get_texture_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_texture_Injected = methods.get<true, false>(40);
    /* System.Int32 GetSecondaryTextureCount_Injected(System.IntPtr _unity_self) */
    inline static auto& m_GetSecondaryTextureCount_Injected = methods.get<true, false>(41);
    /* System.Int32 GetSecondaryTextures_Injected(System.IntPtr _unity_self, UnityEngine.SecondarySpriteTexture[] secondaryTexture) */
    inline static auto& m_GetSecondaryTextures_Injected = methods.get<true, false>(42);
    /* System.Single get_pixelsPerUnit_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_pixelsPerUnit_Injected = methods.get<true, false>(43);
    /* System.IntPtr get_associatedAlphaSplitTexture_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_associatedAlphaSplitTexture_Injected = methods.get<true, false>(44);
    /* System.Void get_pivot_Injected(System.IntPtr _unity_self, out UnityEngine.Vector2 ret) */
    inline static auto& m_get_pivot_Injected = methods.get<true, false>(45);
    /* UnityEngine.Vector2[] get_vertices_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_vertices_Injected = methods.get<true, false>(46);
    /* System.UInt16[] get_triangles_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_triangles_Injected = methods.get<true, false>(47);
    /* UnityEngine.Vector2[] get_uv_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_uv_Injected = methods.get<true, false>(48);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct Vector2 {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<12> fields;
inline static auto /* UnityEngine.Vector2 */ &f_zeroVector = fields.get<true>(2), /* UnityEngine.Vector2 */ &f_oneVector = fields.get<true>(3), /* UnityEngine.Vector2 */ &f_upVector = fields.get<true>(4), /* UnityEngine.Vector2 */ &f_downVector = fields.get<true>(5), /* UnityEngine.Vector2 */ &f_leftVector = fields.get<true>(6), /* UnityEngine.Vector2 */ &f_rightVector = fields.get<true>(7), /* UnityEngine.Vector2 */ &f_positiveInfinityVector = fields.get<true>(8), /* UnityEngine.Vector2 */ &f_negativeInfinityVector = fields.get<true>(9), /* System.Single */ &f_kEpsilon = fields.get<true>(10), /* System.Single */ &f_kEpsilonNormalSqrt = fields.get<true>(11);
inline static auto /* System.Single */ &f_x = fields.get<false>(0), /* System.Single */ &f_y = fields.get<false>(1);

    inline static ::Tools::Il2Cpp::Metadata::array_method<43> methods;
    /* System.Single get_Item(System.Int32 index) */
    inline static auto& m_get_Item = methods.get<false, false>(0);
    /* System.Void set_Item(System.Int32 index, System.Single value) */
    inline static auto& m_set_Item = methods.get<false, false>(1);
    /* System.Void .ctor(System.Single x, System.Single y) */
    inline static auto& m__ctor = methods.get<false, false>(2);
    /* System.Void Set(System.Single newX, System.Single newY) */
    inline static auto& m_Set = methods.get<false, false>(3);
    /* UnityEngine.Vector2 Lerp(UnityEngine.Vector2 a, UnityEngine.Vector2 b, System.Single t) */
    inline static auto& m_Lerp = methods.get<true, false>(4);
    /* UnityEngine.Vector2 LerpUnclamped(UnityEngine.Vector2 a, UnityEngine.Vector2 b, System.Single t) */
    inline static auto& m_LerpUnclamped = methods.get<true, false>(5);
    /* UnityEngine.Vector2 Scale(UnityEngine.Vector2 a, UnityEngine.Vector2 b) */
    inline static auto& m_Scale = methods.get<true, false>(6);
    /* System.Void Normalize() */
    inline static auto& m_Normalize = methods.get<false, false>(7);
    /* UnityEngine.Vector2 get_normalized() */
    inline static auto& m_get_normalized = methods.get<false, false>(8);
    /* System.String ToString() */
    inline static auto& m0_ToString = methods.get<false, true>(9);
    /* System.String ToString(System.String format) */
    inline static auto& m1_ToString = methods.get<false, false>(10);
    /* System.String ToString(System.String format, System.IFormatProvider formatProvider) */
    inline static auto& m2_ToString = methods.get<false, true>(11);
    /* System.Int32 GetHashCode() */
    inline static auto& m_GetHashCode = methods.get<false, true>(12);
    /* System.Boolean Equals(System.Object other) */
    inline static auto& m0_Equals = methods.get<false, true>(13);
    /* System.Boolean Equals(UnityEngine.Vector2 other) */
    inline static auto& m1_Equals = methods.get<false, true>(14);
    /* System.Single Dot(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs) */
    inline static auto& m_Dot = methods.get<true, false>(15);
    /* System.Single get_magnitude() */
    inline static auto& m_get_magnitude = methods.get<false, false>(16);
    /* System.Single get_sqrMagnitude() */
    inline static auto& m_get_sqrMagnitude = methods.get<false, false>(17);
    /* System.Single Angle(UnityEngine.Vector2 from, UnityEngine.Vector2 to) */
    inline static auto& m_Angle = methods.get<true, false>(18);
    /* System.Single Distance(UnityEngine.Vector2 a, UnityEngine.Vector2 b) */
    inline static auto& m_Distance = methods.get<true, false>(19);
    /* System.Single SqrMagnitude() */
    inline static auto& m_SqrMagnitude = methods.get<false, false>(20);
    /* UnityEngine.Vector2 Min(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs) */
    inline static auto& m_Min = methods.get<true, false>(21);
    /* UnityEngine.Vector2 Max(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs) */
    inline static auto& m_Max = methods.get<true, false>(22);
    /* UnityEngine.Vector2 op_Addition(UnityEngine.Vector2 a, UnityEngine.Vector2 b) */
    inline static auto& m_op_Addition = methods.get<true, false>(23);
    /* UnityEngine.Vector2 op_Subtraction(UnityEngine.Vector2 a, UnityEngine.Vector2 b) */
    inline static auto& m_op_Subtraction = methods.get<true, false>(24);
    /* UnityEngine.Vector2 op_Multiply(UnityEngine.Vector2 a, UnityEngine.Vector2 b) */
    inline static auto& m0_op_Multiply = methods.get<true, false>(25);
    /* UnityEngine.Vector2 op_Multiply(UnityEngine.Vector2 a, System.Single d) */
    inline static auto& m1_op_Multiply = methods.get<true, false>(28);
    /* UnityEngine.Vector2 op_Multiply(System.Single d, UnityEngine.Vector2 a) */
    inline static auto& m2_op_Multiply = methods.get<true, false>(29);
    /* UnityEngine.Vector2 op_Division(UnityEngine.Vector2 a, UnityEngine.Vector2 b) */
    inline static auto& m0_op_Division = methods.get<true, false>(26);
    /* UnityEngine.Vector2 op_Division(UnityEngine.Vector2 a, System.Single d) */
    inline static auto& m1_op_Division = methods.get<true, false>(30);
    /* UnityEngine.Vector2 op_UnaryNegation(UnityEngine.Vector2 a) */
    inline static auto& m_op_UnaryNegation = methods.get<true, false>(27);
    /* System.Boolean op_Equality(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs) */
    inline static auto& m_op_Equality = methods.get<true, false>(31);
    /* System.Boolean op_Inequality(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs) */
    inline static auto& m_op_Inequality = methods.get<true, false>(32);
    /* UnityEngine.Vector2 op_Implicit(UnityEngine.Vector3 v) */
    inline static auto& m0_op_Implicit = methods.get<true, false>(33);
    /* UnityEngine.Vector3 op_Implicit(UnityEngine.Vector2 v) */
    inline static auto& m1_op_Implicit = methods.get<true, false>(34);
    /* UnityEngine.Vector2 get_zero() */
    inline static auto& m_get_zero = methods.get<true, false>(35);
    /* UnityEngine.Vector2 get_one() */
    inline static auto& m_get_one = methods.get<true, false>(36);
    /* UnityEngine.Vector2 get_up() */
    inline static auto& m_get_up = methods.get<true, false>(37);
    /* UnityEngine.Vector2 get_down() */
    inline static auto& m_get_down = methods.get<true, false>(38);
    /* UnityEngine.Vector2 get_left() */
    inline static auto& m_get_left = methods.get<true, false>(39);
    /* UnityEngine.Vector2 get_right() */
    inline static auto& m_get_right = methods.get<true, false>(40);
    /* UnityEngine.Vector2 get_negativeInfinity() */
    inline static auto& m_get_negativeInfinity = methods.get<true, false>(41);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(42);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct Rect {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<4> fields;
inline static auto /* System.Single */ &f_m_XMin = fields.get<false>(0), /* System.Single */ &f_m_YMin = fields.get<false>(1), /* System.Single */ &f_m_Width = fields.get<false>(2), /* System.Single */ &f_m_Height = fields.get<false>(3);

    inline static ::Tools::Il2Cpp::Metadata::array_method<43> methods;
    /* System.Void .ctor(System.Single x, System.Single y, System.Single width, System.Single height) */
    inline static auto& m0__ctor = methods.get<false, false>(0);
    /* System.Void .ctor(UnityEngine.Vector2 position, UnityEngine.Vector2 size) */
    inline static auto& m1__ctor = methods.get<false, false>(1);
    /* System.Void .ctor(UnityEngine.Rect source) */
    inline static auto& m2__ctor = methods.get<false, false>(2);
    /* UnityEngine.Rect get_zero() */
    inline static auto& m_get_zero = methods.get<true, false>(3);
    /* UnityEngine.Rect MinMaxRect(System.Single xmin, System.Single ymin, System.Single xmax, System.Single ymax) */
    inline static auto& m_MinMaxRect = methods.get<true, false>(4);
    /* System.Single get_x() */
    inline static auto& m_get_x = methods.get<false, false>(5);
    /* System.Void set_x(System.Single value) */
    inline static auto& m_set_x = methods.get<false, false>(6);
    /* System.Single get_y() */
    inline static auto& m_get_y = methods.get<false, false>(7);
    /* System.Void set_y(System.Single value) */
    inline static auto& m_set_y = methods.get<false, false>(8);
    /* UnityEngine.Vector2 get_position() */
    inline static auto& m_get_position = methods.get<false, false>(9);
    /* System.Void set_position(UnityEngine.Vector2 value) */
    inline static auto& m_set_position = methods.get<false, false>(10);
    /* UnityEngine.Vector2 get_center() */
    inline static auto& m_get_center = methods.get<false, false>(11);
    /* UnityEngine.Vector2 get_min() */
    inline static auto& m_get_min = methods.get<false, false>(12);
    /* System.Void set_min(UnityEngine.Vector2 value) */
    inline static auto& m_set_min = methods.get<false, false>(13);
    /* UnityEngine.Vector2 get_max() */
    inline static auto& m_get_max = methods.get<false, false>(14);
    /* System.Void set_max(UnityEngine.Vector2 value) */
    inline static auto& m_set_max = methods.get<false, false>(15);
    /* System.Single get_width() */
    inline static auto& m_get_width = methods.get<false, false>(16);
    /* System.Void set_width(System.Single value) */
    inline static auto& m_set_width = methods.get<false, false>(17);
    /* System.Single get_height() */
    inline static auto& m_get_height = methods.get<false, false>(18);
    /* System.Void set_height(System.Single value) */
    inline static auto& m_set_height = methods.get<false, false>(19);
    /* UnityEngine.Vector2 get_size() */
    inline static auto& m_get_size = methods.get<false, false>(20);
    /* System.Void set_size(UnityEngine.Vector2 value) */
    inline static auto& m_set_size = methods.get<false, false>(21);
    /* System.Single get_xMin() */
    inline static auto& m_get_xMin = methods.get<false, false>(22);
    /* System.Void set_xMin(System.Single value) */
    inline static auto& m_set_xMin = methods.get<false, false>(23);
    /* System.Single get_yMin() */
    inline static auto& m_get_yMin = methods.get<false, false>(24);
    /* System.Void set_yMin(System.Single value) */
    inline static auto& m_set_yMin = methods.get<false, false>(25);
    /* System.Single get_xMax() */
    inline static auto& m_get_xMax = methods.get<false, false>(26);
    /* System.Void set_xMax(System.Single value) */
    inline static auto& m_set_xMax = methods.get<false, false>(27);
    /* System.Single get_yMax() */
    inline static auto& m_get_yMax = methods.get<false, false>(28);
    /* System.Void set_yMax(System.Single value) */
    inline static auto& m_set_yMax = methods.get<false, false>(29);
    /* System.Boolean Contains(UnityEngine.Vector2 point) */
    inline static auto& m0_Contains = methods.get<false, false>(30);
    /* System.Boolean Contains(UnityEngine.Vector3 point) */
    inline static auto& m1_Contains = methods.get<false, false>(31);
    /* System.Boolean Contains(UnityEngine.Vector3 point, System.Boolean allowInverse) */
    inline static auto& m2_Contains = methods.get<false, false>(32);
    /* UnityEngine.Rect OrderMinMax(UnityEngine.Rect rect) */
    inline static auto& m_OrderMinMax = methods.get<true, false>(33);
    /* System.Boolean Overlaps(UnityEngine.Rect other) */
    inline static auto& m0_Overlaps = methods.get<false, false>(34);
    /* System.Boolean Overlaps(UnityEngine.Rect other, System.Boolean allowInverse) */
    inline static auto& m1_Overlaps = methods.get<false, false>(35);
    /* System.Boolean op_Inequality(UnityEngine.Rect lhs, UnityEngine.Rect rhs) */
    inline static auto& m_op_Inequality = methods.get<true, false>(36);
    /* System.Boolean op_Equality(UnityEngine.Rect lhs, UnityEngine.Rect rhs) */
    inline static auto& m_op_Equality = methods.get<true, false>(37);
    /* System.Int32 GetHashCode() */
    inline static auto& m_GetHashCode = methods.get<false, true>(38);
    /* System.Boolean Equals(System.Object other) */
    inline static auto& m0_Equals = methods.get<false, true>(39);
    /* System.Boolean Equals(UnityEngine.Rect other) */
    inline static auto& m1_Equals = methods.get<false, true>(40);
    /* System.String ToString() */
    inline static auto& m0_ToString = methods.get<false, true>(41);
    /* System.String ToString(System.String format, System.IFormatProvider formatProvider) */
    inline static auto& m1_ToString = methods.get<false, true>(42);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct Texture {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<1> fields;
inline static auto /* System.Int32 */ &f_GenerateAllMips = fields.get<true>(0);

    inline static ::Tools::Il2Cpp::Metadata::array_method<35> methods;
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(0);
    /* System.Int32 GetDataWidth() */
    inline static auto& m_GetDataWidth = methods.get<false, false>(1);
    /* System.Int32 GetDataHeight() */
    inline static auto& m_GetDataHeight = methods.get<false, false>(2);
    /* System.Int32 get_width() */
    inline static auto& m_get_width = methods.get<false, true>(3);
    /* System.Void set_width(System.Int32 value) */
    inline static auto& m_set_width = methods.get<false, true>(4);
    /* System.Int32 get_height() */
    inline static auto& m_get_height = methods.get<false, true>(5);
    /* System.Void set_height(System.Int32 value) */
    inline static auto& m_set_height = methods.get<false, true>(6);
    /* System.Boolean get_isReadable() */
    inline static auto& m_get_isReadable = methods.get<false, true>(7);
    /* UnityEngine.TextureWrapMode get_wrapMode() */
    inline static auto& m_get_wrapMode = methods.get<false, false>(8);
    /* System.Void set_wrapMode(UnityEngine.TextureWrapMode value) */
    inline static auto& m_set_wrapMode = methods.get<false, false>(9);
    /* UnityEngine.FilterMode get_filterMode() */
    inline static auto& m_get_filterMode = methods.get<false, false>(10);
    /* System.Void set_filterMode(UnityEngine.FilterMode value) */
    inline static auto& m_set_filterMode = methods.get<false, false>(11);
    /* System.Int32 get_anisoLevel() */
    inline static auto& m_get_anisoLevel = methods.get<false, false>(12);
    /* System.Void set_anisoLevel(System.Int32 value) */
    inline static auto& m_set_anisoLevel = methods.get<false, false>(13);
    /* UnityEngine.Vector2 get_texelSize() */
    inline static auto& m_get_texelSize = methods.get<false, false>(14);
    /* System.Int32 Internal_GetActiveTextureColorSpace() */
    inline static auto& m_Internal_GetActiveTextureColorSpace = methods.get<false, false>(15);
    /* UnityEngine.ColorSpace get_activeTextureColorSpace() */
    inline static auto& m_get_activeTextureColorSpace = methods.get<false, false>(16);
    /* UnityEngine.TextureColorSpace GetTextureColorSpace(System.Boolean linear) */
    inline static auto& m0_GetTextureColorSpace = methods.get<false, false>(17);
    /* UnityEngine.TextureColorSpace GetTextureColorSpace(UnityEngine.Experimental.Rendering.GraphicsFormat format) */
    inline static auto& m1_GetTextureColorSpace = methods.get<false, false>(18);
    /* System.Boolean ValidateFormat(UnityEngine.TextureFormat format) */
    inline static auto& m0_ValidateFormat = methods.get<false, false>(19);
    /* System.Boolean ValidateFormat(UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.GraphicsFormatUsage usage) */
    inline static auto& m1_ValidateFormat = methods.get<false, false>(20);
    /* UnityEngine.UnityException CreateNonReadableException(UnityEngine.Texture t) */
    inline static auto& m_CreateNonReadableException = methods.get<false, false>(21);
    /* UnityEngine.UnityException CreateNativeArrayLengthOverflowException() */
    inline static auto& m_CreateNativeArrayLengthOverflowException = methods.get<false, false>(22);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(23);
    /* System.Int32 GetDataWidth_Injected(System.IntPtr _unity_self) */
    inline static auto& m_GetDataWidth_Injected = methods.get<true, false>(24);
    /* System.Int32 GetDataHeight_Injected(System.IntPtr _unity_self) */
    inline static auto& m_GetDataHeight_Injected = methods.get<true, false>(25);
    /* System.Boolean get_isReadable_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_isReadable_Injected = methods.get<true, false>(26);
    /* UnityEngine.TextureWrapMode get_wrapMode_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_wrapMode_Injected = methods.get<true, false>(27);
    /* System.Void set_wrapMode_Injected(System.IntPtr _unity_self, UnityEngine.TextureWrapMode value) */
    inline static auto& m_set_wrapMode_Injected = methods.get<true, false>(28);
    /* UnityEngine.FilterMode get_filterMode_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_filterMode_Injected = methods.get<true, false>(29);
    /* System.Void set_filterMode_Injected(System.IntPtr _unity_self, UnityEngine.FilterMode value) */
    inline static auto& m_set_filterMode_Injected = methods.get<true, false>(30);
    /* System.Int32 get_anisoLevel_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_anisoLevel_Injected = methods.get<true, false>(31);
    /* System.Void set_anisoLevel_Injected(System.IntPtr _unity_self, System.Int32 value) */
    inline static auto& m_set_anisoLevel_Injected = methods.get<true, false>(32);
    /* System.Void get_texelSize_Injected(System.IntPtr _unity_self, out UnityEngine.Vector2 ret) */
    inline static auto& m_get_texelSize_Injected = methods.get<true, false>(33);
    /* System.Int32 Internal_GetActiveTextureColorSpace_Injected(System.IntPtr _unity_self) */
    inline static auto& m_Internal_GetActiveTextureColorSpace_Injected = methods.get<true, false>(34);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct TextCommand {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<0> fields;

    inline static ::Tools::Il2Cpp::Metadata::array_method<4> methods;
    /* System.Void Resolve(System.String commandLine) */
    inline static auto& m_Resolve = methods.get<true, false>(0);
    /* System.Void Command_AssetBundleCacheTest(TextCommand+Command command) */
    inline static auto& m_Command_AssetBundleCacheTest = methods.get<true, false>(1);
    /* System.Void Command_Invalid(TextCommand+Command command) */
    inline static auto& m_Command_Invalid = methods.get<true, false>(2);
    /* System.Void NotifyUser(System.String msg) */
    inline static auto& m_NotifyUser = methods.get<true, false>(3);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVWorldObjectClientManager {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<13> fields;
inline static auto /* System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> */ &f_worldObjects = fields.get<false>(0), /* System.Collections.Generic.Queue`1<System.Int32> */ &f_pendingUngroupQueue = fields.get<false>(1), /* MVWorldObjectClientManager+WorldObjectMapping */ &f_worldObjectMapping = fields.get<false>(2), /* System.Collections.Generic.Dictionary`2<System.Int32, System.Action`2<System.Object, WorldObjectDestroyedEventArgs>> */ &f_woDestroyedEventSubscribers = fields.get<false>(3), /* System.Collections.Generic.Dictionary`2<System.Type, System.Action`2<System.Object, WorldObjectCreatedEventArgs>> */ &f_woCreatedEventSubscribers = fields.get<false>(4), /* System.Int32 */ &f_rootGroupId = fields.get<false>(5), /* MoveableController */ &f__MoveableController_k__BackingField = fields.get<false>(6), /* UnityEngine.Bounds */ &f_worldBounds = fields.get<false>(7), /* System.EventHandler`1<OnTransferOwnershipResponseEventArgs> */ &f_OnWorldObjectTransferOwnershipResponse = fields.get<false>(8), /* System.EventHandler`1<OnHierarchyLockedEventArgs> */ &f_OnHierarchyLockedResponse = fields.get<false>(9), /* System.EventHandler`1<OnTransferWosResponseEventArgs> */ &f_OnTransferWosResponse = fields.get<false>(10), /* System.EventHandler`1<CloneWorldObjectTreeResponseEventArgs> */ &f_CloneWorldObjectTreeResponse = fields.get<false>(11), /* System.EventHandler`1<System.EventArgs> */ &f_OnResetWorldDone = fields.get<false>(12);

    inline static ::Tools::Il2Cpp::Metadata::array_method<41> methods;
    /* MoveableController get_MoveableController() */
    inline static auto& m_get_MoveableController = methods.get<false, false>(0);
    /* System.Void set_MoveableController(MoveableController value) */
    inline static auto& m_set_MoveableController = methods.get<false, false>(1);
    /* UnityEngine.Bounds get_WorldBounds() */
    inline static auto& m_get_WorldBounds = methods.get<false, false>(2);
    /* System.Int32 get_Count() */
    inline static auto& m_get_Count = methods.get<false, false>(3);
    /* MVGroup get_RootGroup() */
    inline static auto& m_get_RootGroup = methods.get<false, false>(4);
    /* System.Void set_RootGroup(MVGroup value) */
    inline static auto& m_set_RootGroup = methods.get<false, false>(5);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(6);
    /* System.Boolean Contains(System.Int32 woID) */
    inline static auto& m_Contains = methods.get<false, false>(7);
    /* System.Boolean IsType(System.Int32 woID, MV.WorldObject.WorldObjectType worldObjectType) */
    inline static auto& m_IsType = methods.get<false, false>(8);
    /* System.Void GetAllWoIds(System.Int32 id, System.Collections.Generic.HashSet`1<System.Int32> ids) */
    inline static auto& m_GetAllWoIds = methods.get<false, false>(9);
    /* System.Void UpdateWorldBounds(UnityEngine.Bounds bounds) */
    inline static auto& m_UpdateWorldBounds = methods.get<false, false>(10);
    /* System.Collections.Generic.List`1<MVWorldObjectClient> GetWorldObjectsByType(MV.WorldObject.WorldObjectType type) */
    inline static auto& m_GetWorldObjectsByType = methods.get<false, false>(11);
    /* System.Int32 GetWoIDHighestInHierarchyWithComponent(System.Int32 woId) */
    inline static auto& m_GetWoIDHighestInHierarchyWithComponent = methods.get<false, false>(12);
    /* T GetSingletonWorldObject() */
    inline static auto& m_GetSingletonWorldObject = methods.get<false, false>(13);
    /* WorldObjectClientRef`1<T> GetSingletonWorldObjectRef() */
    inline static auto& m_GetSingletonWorldObjectRef = methods.get<false, false>(14);
    /* MVWorldObjectClient GetSingletonWorldObjectByType(MV.WorldObject.WorldObjectType worldObjectType) */
    inline static auto& m_GetSingletonWorldObjectByType = methods.get<false, false>(15);
    /* T GetEnabledMonoBehaviourHighestInHierarchy(UnityEngine.GameObject gameObject) */
    inline static auto& m_GetEnabledMonoBehaviourHighestInHierarchy = methods.get<true, false>(16);
    /* System.Int32 GetWoIDWithLocalOwnerHighestInHierarchy(System.Int32 woID) */
    inline static auto& m_GetWoIDWithLocalOwnerHighestInHierarchy = methods.get<false, false>(17);
    /* System.Collections.Generic.List`1<MVWorldObjectClient> GetBlueprintWorldObjectsByType(System.Type type) */
    inline static auto& m_GetBlueprintWorldObjectsByType = methods.get<false, false>(18);
    /* System.Boolean GetUnmodifiedWorldObject(KoGaMaPackageClient koGaMaPackageClient, ref System.Int32 worldObjectId) */
    inline static auto& m_GetUnmodifiedWorldObject = methods.get<false, false>(19);
    /* MVWorldObjectClient GetWorldObjectClient(System.Int32 id) */
    inline static auto& m0_GetWorldObjectClient = methods.get<false, false>(20);
    /* T GetWorldObjectClient(System.Int32 id) */
    inline static auto& m1_GetWorldObjectClient = methods.get<false, false>(21);
    /* WorldObjectClientRef`1<T> GetWorldObjectClientRef(System.Int32 id) */
    inline static auto& m0_GetWorldObjectClientRef = methods.get<false, false>(22);
    /* WorldObjectClientRef GetWorldObjectClientRef(System.Int32 id) */
    inline static auto& m1_GetWorldObjectClientRef = methods.get<false, false>(24);
    /* WorldObjectClientRef`1<MVWorldObjectClient> GetWorldObjectClientRefNullRefTyped() */
    inline static auto& m_GetWorldObjectClientRefNullRefTyped = methods.get<true, false>(23);
    /* WorldObjectClientRef GetWorldObjectClientRefNullRef() */
    inline static auto& m_GetWorldObjectClientRefNullRef = methods.get<true, false>(25);
    /* MV.WorldObject.MVWorldObject GetWorldObject(System.Int32 id) */
    inline static auto& m_GetWorldObject = methods.get<false, true>(26);
    /* System.Boolean TryGetWorldObject(System.Int32 id, out MV.WorldObject.MVWorldObject worldObject) */
    inline static auto& m_TryGetWorldObject = methods.get<false, true>(27);
    /* MVWorldObjectClient GetWorldObjectClientRoot(System.Int32 id) */
    inline static auto& m_GetWorldObjectClientRoot = methods.get<false, false>(28);
    /* MVWorldObjectClient GetWorldObjectClientWhere(System.Func`2<MVWorldObjectClient, System.Boolean> predicate) */
    inline static auto& m_GetWorldObjectClientWhere = methods.get<false, false>(29);
    /* System.Collections.Generic.IEnumerable`1<MVWorldObjectClient> GetWorldObjectClientsWhere(System.Func`2<MVWorldObjectClient, System.Boolean> predicate) */
    inline static auto& m_GetWorldObjectClientsWhere = methods.get<false, false>(30);
    /* MVWorldObjectClient GetWorldObjectByGoId(System.Int32 goId) */
    inline static auto& m_GetWorldObjectByGoId = methods.get<false, false>(31);
    /* MVWorldObjectClient GetMVObject(UnityEngine.Transform t) */
    inline static auto& m_GetMVObject = methods.get<true, false>(32);
    /* MVWorldObjectClient GetValidSpawnPoint() */
    inline static auto& m_GetValidSpawnPoint = methods.get<true, false>(33);
    /* MV.WorldObject.WorldObjectType GetSpawnPointTypeForNoneTeam() */
    inline static auto& m_GetSpawnPointTypeForNoneTeam = methods.get<false, false>(34);
    /* System.Void SubscribeWODestroyedEvent(System.Int32 woID, System.Action`2<System.Object, WorldObjectDestroyedEventArgs> woDestroyedEventHandler) */
    inline static auto& m_SubscribeWODestroyedEvent = methods.get<false, false>(35);
    /* System.Void UnsubscribeWODestroyedEvent(System.Int32 woID, System.Action`2<System.Object, WorldObjectDestroyedEventArgs> woDestroyedEventHandler) */
    inline static auto& m_UnsubscribeWODestroyedEvent = methods.get<false, false>(36);
    /* System.Void SubscribeWOCreatedEvent(System.Type type, System.Action`2<System.Object, WorldObjectCreatedEventArgs> woCreatedEventHandler) */
    inline static auto& m_SubscribeWOCreatedEvent = methods.get<false, false>(37);
    /* System.Void UnsubscribeWOCreatedEvent(System.Type type, System.Action`2<System.Object, WorldObjectCreatedEventArgs> woCreatedEventHandler) */
    inline static auto& m_UnsubscribeWOCreatedEvent = methods.get<false, false>(38);
    /* System.Boolean UnregisterWorldObject(System.Int32 worldObjectId) */
    inline static auto& m_UnregisterWorldObject = methods.get<false, false>(39);
    /* System.Void CloneWorldObjectTree(MVWorldObjectClient root, System.Boolean localOwner, System.Boolean setAsPreviewItem, System.Boolean cloneToRootGroup) */
    inline static auto& m_CloneWorldObjectTree = methods.get<false, false>(40);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVWorldObjectClient {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<26> fields;
inline static auto /* System.Int32 */ &f_woShadowCastersCount = fields.get<true>(5), /* System.Int32 */ &f_woMaxShadowCasters = fields.get<true>(6);
inline static auto /* UnityEngine.Events.UnityAction`2<MVWorldObjectClient, PositionChangedEventArgs> */ &f_PositionChanged = fields.get<false>(0), /* UnityEngine.Events.UnityAction`2<MVWorldObjectClient, RotationChangedEventArgs> */ &f_RotationChanged = fields.get<false>(1), /* UnityEngine.Events.UnityAction`2<MVWorldObjectClient, ScaleChangedEventArgs> */ &f_ScaleChanged = fields.get<false>(2), /* UnityEngine.Events.UnityAction`2<MVWorldObjectClient, SelectedEventArgs> */ &f_SelectedChanged = fields.get<false>(3), /* System.Boolean */ &f_isCastingShadows = fields.get<false>(4), /* System.Int32 */ &f_goId = fields.get<false>(7), /* System.String */ &f_name = fields.get<false>(8), /* UnityEngine.GameObject */ &f_gameObject = fields.get<false>(9), /* UnityEngine.Collider */ &f_collider = fields.get<false>(10), /* UnityEngine.Transform */ &f_transform = fields.get<false>(11), /* InteractionDataHandlerBase */ &f_interactionDataHandlerBase = fields.get<false>(12), /* ObjectPrefab */ &f_component = fields.get<false>(13), /* MVGroup */ &f_group = fields.get<false>(14), /* System.Boolean */ &f_selected = fields.get<false>(15), /* SelectedConnector */ &f_selectedConnector = fields.get<false>(16), /* UnityEngine.GameObject */ &f_inputConnectorObject = fields.get<false>(17), /* UnityEngine.GameObject */ &f_outputConnectorObject = fields.get<false>(18), /* UnityEngine.GameObject */ &f_objectConnectorObject = fields.get<false>(19), /* InteractionFlags */ &f_interactionFlags = fields.get<false>(20), /* InteractionFlags */ &f_eliteRequiredFlags = fields.get<false>(21), /* LayerFlags */ &f_previewLayerMask = fields.get<false>(22), /* PlayInteractionType */ &f__PlayInteractionType_k__BackingField = fields.get<false>(23), /* MVRuntimeDataVariables */ &f_runtimeDataVariables = fields.get<false>(24), /* System.Boolean */ &f_initializedFromInventory = fields.get<false>(25);

    inline static ::Tools::Il2Cpp::Metadata::array_method<129> methods;
    /* UnityEngine.Vector3 get_Position() */
    inline static auto& m_get_Position = methods.get<false, true>(0);
    /* System.Void set_Position(UnityEngine.Vector3 value) */
    inline static auto& m_set_Position = methods.get<false, true>(1);
    /* UnityEngine.Quaternion get_Rotation() */
    inline static auto& m_get_Rotation = methods.get<false, true>(2);
    /* System.Void set_Rotation(UnityEngine.Quaternion value) */
    inline static auto& m_set_Rotation = methods.get<false, true>(3);
    /* UnityEngine.Vector3 get_EulerAngles() */
    inline static auto& m_get_EulerAngles = methods.get<false, false>(4);
    /* System.Void set_EulerAngles(UnityEngine.Vector3 value) */
    inline static auto& m_set_EulerAngles = methods.get<false, false>(5);
    /* UnityEngine.Vector3 get_Scale() */
    inline static auto& m_get_Scale = methods.get<false, true>(6);
    /* System.Void set_Scale(UnityEngine.Vector3 value) */
    inline static auto& m_set_Scale = methods.get<false, true>(7);
    /* UnityEngine.Vector3 get_WorldPosition() */
    inline static auto& m_get_WorldPosition = methods.get<false, true>(8);
    /* System.Void set_WorldPosition(UnityEngine.Vector3 value) */
    inline static auto& m_set_WorldPosition = methods.get<false, true>(9);
    /* System.Boolean get_IsTransformDefined() */
    inline static auto& m_get_IsTransformDefined = methods.get<false, true>(10);
    /* UnityEngine.Quaternion get_WorldRotation() */
    inline static auto& m_get_WorldRotation = methods.get<false, true>(11);
    /* System.Void set_WorldRotation(UnityEngine.Quaternion value) */
    inline static auto& m_set_WorldRotation = methods.get<false, false>(12);
    /* UnityEngine.Vector3 get_WorldEulerAngles() */
    inline static auto& m_get_WorldEulerAngles = methods.get<false, false>(13);
    /* System.Void set_WorldEulerAngles(UnityEngine.Vector3 value) */
    inline static auto& m_set_WorldEulerAngles = methods.get<false, false>(14);
    /* UnityEngine.Vector3 get_SyncPos() */
    inline static auto& m_get_SyncPos = methods.get<false, true>(15);
    /* System.Void set_SyncPos(UnityEngine.Vector3 value) */
    inline static auto& m_set_SyncPos = methods.get<false, true>(16);
    /* UnityEngine.Quaternion get_SyncRot() */
    inline static auto& m_get_SyncRot = methods.get<false, true>(17);
    /* System.Void set_SyncRot(UnityEngine.Quaternion value) */
    inline static auto& m_set_SyncRot = methods.get<false, true>(18);
    /* System.Void PositionChangedNotify() */
    inline static auto& m_PositionChangedNotify = methods.get<false, true>(19);
    /* MVGroup get_Group() */
    inline static auto& m_get_Group = methods.get<false, false>(20);
    /* System.Void set_Group(MVGroup value) */
    inline static auto& m_set_Group = methods.get<false, false>(21);
    /* System.Boolean get_Selected() */
    inline static auto& m_get_Selected = methods.get<false, false>(22);
    /* System.Void set_Selected(System.Boolean value) */
    inline static auto& m_set_Selected = methods.get<false, false>(23);
    /* System.Collections.Generic.HashSet`1<System.Int32> get_WorldIDsRecursive() */
    inline static auto& m_get_WorldIDsRecursive = methods.get<false, false>(24);
    /* UnityEngine.Vector3 get_WorldPivot() */
    inline static auto& m_get_WorldPivot = methods.get<false, true>(25);
    /* System.Boolean get_HasInputConnector() */
    inline static auto& m_get_HasInputConnector = methods.get<false, true>(26);
    /* System.Boolean get_HasOutputConnector() */
    inline static auto& m_get_HasOutputConnector = methods.get<false, true>(27);
    /* System.Boolean get_HasObjectConnector() */
    inline static auto& m_get_HasObjectConnector = methods.get<false, true>(28);
    /* InteractionFlags get_InteractionFlags() */
    inline static auto& m_get_InteractionFlags = methods.get<false, true>(29);
    /* System.Void set_InteractionFlags(InteractionFlags value) */
    inline static auto& m_set_InteractionFlags = methods.get<false, false>(30);
    /* LayerFlags get_PreviewLayerMask() */
    inline static auto& m_get_PreviewLayerMask = methods.get<false, false>(31);
    /* PlayInteractionType get_PlayInteractionType() */
    inline static auto& m_get_PlayInteractionType = methods.get<false, false>(32);
    /* System.Void set_PlayInteractionType(PlayInteractionType value) */
    inline static auto& m_set_PlayInteractionType = methods.get<false, false>(33);
    /* System.Int32 get_GameObjectID() */
    inline static auto& m_get_GameObjectID = methods.get<false, false>(34);
    /* UnityEngine.GameObject get_GameObject() */
    inline static auto& m_get_GameObject = methods.get<false, true>(35);
    /* ObjectPrefab get_Component() */
    inline static auto& m_get_Component = methods.get<false, false>(36);
    /* UnityEngine.Collider get_Collider() */
    inline static auto& m_get_Collider = methods.get<false, false>(37);
    /* UnityEngine.Transform get_Transform() */
    inline static auto& m_get_Transform = methods.get<false, true>(38);
    /* InteractionDataHandlerBase get_InteractionDataHandlerBase() */
    inline static auto& m_get_InteractionDataHandlerBase = methods.get<false, false>(39);
    /* SelectedConnector get_SelectedConnector() */
    inline static auto& m_get_SelectedConnector = methods.get<false, false>(40);
    /* UnityEngine.Vector3 get_InputConnectorOffset() */
    inline static auto& m_get_InputConnectorOffset = methods.get<false, true>(41);
    /* UnityEngine.Vector3 get_OutputConnectorOffset() */
    inline static auto& m_get_OutputConnectorOffset = methods.get<false, true>(42);
    /* UnityEngine.Vector3 get_ObjectConnectorOffset() */
    inline static auto& m_get_ObjectConnectorOffset = methods.get<false, true>(43);
    /* UnityEngine.Quaternion get_InputConnectorRotation() */
    inline static auto& m_get_InputConnectorRotation = methods.get<false, true>(44);
    /* UnityEngine.Quaternion get_OutputConnectorRotation() */
    inline static auto& m_get_OutputConnectorRotation = methods.get<false, true>(45);
    /* UnityEngine.Quaternion get_ObjectConnectorRotation() */
    inline static auto& m_get_ObjectConnectorRotation = methods.get<false, true>(46);
    /* MVRuntimeDataVariables get_RuntimeDataVariables() */
    inline static auto& m_get_RuntimeDataVariables = methods.get<false, false>(47);
    /* System.Collections.Generic.Dictionary`2<System.Object, System.Object> get_RunTimeData() */
    inline static auto& m_get_RunTimeData = methods.get<false, true>(48);
    /* System.Void set_RunTimeData(System.Collections.Generic.Dictionary`2<System.Object, System.Object> value) */
    inline static auto& m_set_RunTimeData = methods.get<false, true>(49);
    /* MVWorldObjectDocumentationType get_DocumentationType() */
    inline static auto& m_get_DocumentationType = methods.get<false, true>(50);
    /* System.Void set_DocumentationType(MVWorldObjectDocumentationType value) */
    inline static auto& m_set_DocumentationType = methods.get<false, false>(51);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, UnityEngine.GameObject prefabObject, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m0__ctor = methods.get<false, false>(52);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, ObjectPrefab prefabObject, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m1__ctor = methods.get<false, false>(53);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m2__ctor = methods.get<false, false>(56);
    /* UnityEngine.GameObject InstantiatePrefab(UnityEngine.GameObject prefabObject, MVWorldObjectClient+TransformData transformData) */
    inline static auto& m0_InstantiatePrefab = methods.get<false, false>(54);
    /* ObjectPrefab InstantiatePrefab(ObjectPrefab prefabObject, MVWorldObjectClient+TransformData transformData) */
    inline static auto& m1_InstantiatePrefab = methods.get<false, false>(55);
    /* System.Boolean HasInteractionFlag(InteractionFlags flag) */
    inline static auto& m_HasInteractionFlag = methods.get<false, false>(57);
    /* System.Boolean HasEliteRequiredFlag(InteractionFlags flag) */
    inline static auto& m_HasEliteRequiredFlag = methods.get<false, false>(58);
    /* System.Void SetupBusinessLogic() */
    inline static auto& m_SetupBusinessLogic = methods.get<false, false>(59);
    /* MVWorldObjectClient+TransformData GetTransformData(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data) */
    inline static auto& m_GetTransformData = methods.get<false, false>(60);
    /* System.Void ApplyData(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data) */
    inline static auto& m_ApplyData = methods.get<false, false>(61);
    /* System.Void CreateWorldObject(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m_CreateWorldObject = methods.get<false, false>(62);
    /* MVWorldObjectClient GetHitInteractionHandlingWO() */
    inline static auto& m_GetHitInteractionHandlingWO = methods.get<false, false>(63);
    /* System.Void TraverseRecursiveTail(MVWorldObjectClient+CallBackDelegate callBack) */
    inline static auto& m_TraverseRecursiveTail = methods.get<false, true>(64);
    /* System.Boolean CompareWithKoGaMaPackage(MVWorldObjectClient wo, KoGaMaPackageClient koGaMaPackageClient, ref System.Int32 insertedByProfileId) */
    inline static auto& m_CompareWithKoGaMaPackage = methods.get<false, true>(65);
    /* System.Void Compare(MVWorldObjectClient wo, System.Boolean visibleCubesOnly, ref System.Int32 matchingCubeCount, ref System.Int32 investigatedCubeCount) */
    inline static auto& m_Compare = methods.get<false, true>(66);
    /* MVWorldObjectClient Clone(System.Int32 ownerActorNumber, System.Int32 cloneGroupId, CloneBookkeeping cloneBookkeeping, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects, System.Collections.Generic.Dictionary`2<System.Int32, RuntimePrototypeCubeModel> prototypes) */
    inline static auto& m_Clone = methods.get<false, true>(67);
    /* System.Void SetWorldObjectToPurchased() */
    inline static auto& m_SetWorldObjectToPurchased = methods.get<false, true>(68);
    /* System.Void SetNetworkObject(System.Boolean local) */
    inline static auto& m_SetNetworkObject = methods.get<false, false>(69);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(70);
    /* System.Void InventoryInitialize() */
    inline static auto& m_InventoryInitialize = methods.get<false, false>(71);
    /* System.Void InitializeInventory() */
    inline static auto& m_InitializeInventory = methods.get<false, true>(72);
    /* System.Void PlayModeInitialize() */
    inline static auto& m_PlayModeInitialize = methods.get<false, true>(73);
    /* System.Void SetupTierInventory() */
    inline static auto& m_SetupTierInventory = methods.get<false, true>(74);
    /* System.Void UnSetupTierInventory() */
    inline static auto& m_UnSetupTierInventory = methods.get<false, true>(75);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<false, true>(76);
    /* System.Void OnDataUpdate() */
    inline static auto& m_OnDataUpdate = methods.get<false, true>(77);
    /* System.Void OnRunTimeDataUpdate() */
    inline static auto& m_OnRunTimeDataUpdate = methods.get<false, true>(78);
    /* System.Boolean OnEnterObject(EditorStateMachine e) */
    inline static auto& m_OnEnterObject = methods.get<false, true>(79);
    /* System.Boolean OnExitObject(EditorStateMachine e) */
    inline static auto& m_OnExitObject = methods.get<false, true>(80);
    /* System.Void OnSelectedChanged(System.Boolean selected) */
    inline static auto& m_OnSelectedChanged = methods.get<false, true>(81);
    /* System.Boolean ValidateObjectLinkTarget(MVWorldObjectClient wo) */
    inline static auto& m_ValidateObjectLinkTarget = methods.get<false, true>(82);
    /* System.Void SendPackage(System.Collections.Generic.Dictionary`2<System.Object, System.Object> package) */
    inline static auto& m_SendPackage = methods.get<false, false>(83);
    /* System.Void ReceivePackage(MVPlayer p, System.Collections.Generic.Dictionary`2<System.Object, System.Object> package) */
    inline static auto& m_ReceivePackage = methods.get<false, true>(84);
    /* System.Void ReceiveInteractionPackage(MV.WorldObject.InteractionData interactionStruct, MVPlayer p) */
    inline static auto& m_ReceiveInteractionPackage = methods.get<false, true>(85);
    /* System.Void CreateConnectors() */
    inline static auto& m_CreateConnectors = methods.get<false, false>(86);
    /* System.Void RuntimeDataUpdate(System.Collections.Generic.Dictionary`2<System.Object, System.Object> dataDelta) */
    inline static auto& m_RuntimeDataUpdate = methods.get<false, false>(87);
    /* System.Void PartialUpdateWOData(System.Collections.Generic.Dictionary`2<System.Object, System.Object> woData) */
    inline static auto& m_PartialUpdateWOData = methods.get<false, true>(88);
    /* System.Void PartialRemoveFromWOData(System.Collections.Generic.Dictionary`2<System.Object, System.Object> entriesToRemove) */
    inline static auto& m_PartialRemoveFromWOData = methods.get<false, true>(89);
    /* System.Void HandleInput(NetworkInputActionCodes actionCode, NetworkInputKeyCodes keyCode) */
    inline static auto& m_HandleInput = methods.get<false, true>(90);
    /* UnityEngine.Vector3 GetClosestGridPoint(System.Single gridSize, UnityEngine.Vector3 position) */
    inline static auto& m_GetClosestGridPoint = methods.get<false, true>(91);
    /* System.Boolean OnClickHandler(EditorStateMachine esm, UnityEngine.Collider collider) */
    inline static auto& m_OnClickHandler = methods.get<false, true>(92);
    /* UnityEngine.Vector3 GetInputConnectorPos() */
    inline static auto& m_GetInputConnectorPos = methods.get<false, false>(93);
    /* UnityEngine.Vector3 GetOutputConnectorPos() */
    inline static auto& m_GetOutputConnectorPos = methods.get<false, false>(94);
    /* UnityEngine.Vector3 GetObjectConnectorPos() */
    inline static auto& m_GetObjectConnectorPos = methods.get<false, false>(95);
    /* System.Boolean IsPointOverInputConnector(UnityEngine.Vector3 mousePoint) */
    inline static auto& m_IsPointOverInputConnector = methods.get<false, false>(96);
    /* System.Boolean IsPointOverOutputConnector(UnityEngine.Vector3 mousePoint) */
    inline static auto& m_IsPointOverOutputConnector = methods.get<false, false>(97);
    /* System.Void HighlightConnector(System.Boolean state) */
    inline static auto& m_HighlightConnector = methods.get<false, true>(98);
    /* System.Boolean DoesScreenPointHitCollider(UnityEngine.Vector3 point, UnityEngine.Collider collider) */
    inline static auto& m_DoesScreenPointHitCollider = methods.get<false, false>(99);
    /* UnityEngine.Bounds GetLocalBounds(BoundsContext boundsContext) */
    inline static auto& m_GetLocalBounds = methods.get<false, true>(100);
    /* UnityEngine.Vector3[] GetBoundsCornersLocal(BoundsContext boundsContext) */
    inline static auto& m_GetBoundsCornersLocal = methods.get<false, false>(101);
    /* UnityEngine.Vector3[] GetBoundsCornersWorld(BoundsContext boundsContext) */
    inline static auto& m_GetBoundsCornersWorld = methods.get<false, false>(102);
    /* System.Void Select() */
    inline static auto& m0_Select = methods.get<false, true>(103);
    /* System.Void Select(UnityEngine.Color color) */
    inline static auto& m1_Select = methods.get<false, true>(104);
    /* System.Void DeSelect() */
    inline static auto& m_DeSelect = methods.get<false, true>(105);
    /* System.Void AddPreviewBox() */
    inline static auto& m_AddPreviewBox = methods.get<false, true>(106);
    /* System.Void AddSelectionBox() */
    inline static auto& m_AddSelectionBox = methods.get<false, true>(107);
    /* UnityEngine.GameObject CreateBox(System.String name, System.Single scale) */
    inline static auto& m_CreateBox = methods.get<false, false>(108);
    /* System.Void RemoveSelectionBox() */
    inline static auto& m_RemoveSelectionBox = methods.get<false, true>(109);
    /* System.Void RemovePreviewBox() */
    inline static auto& m_RemovePreviewBox = methods.get<false, true>(110);
    /* System.Void HideConnectors() */
    inline static auto& m_HideConnectors = methods.get<false, true>(111);
    /* System.Void ShowConnectors() */
    inline static auto& m_ShowConnectors = methods.get<false, true>(112);
    /* System.Boolean Delete(MVWorldObjectClientManager worldObjectClientManager, ref System.String errorText) */
    inline static auto& m_Delete = methods.get<false, true>(113);
    /* System.Void SetName() */
    inline static auto& m_SetName = methods.get<false, false>(114);
    /* System.String ToString() */
    inline static auto& m_ToString = methods.get<false, true>(115);
    /* System.Boolean get_Visible() */
    inline static auto& m_get_Visible = methods.get<false, true>(116);
    /* System.Void set_Visible(System.Boolean value) */
    inline static auto& m_set_Visible = methods.get<false, true>(117);
    /* UnityEngine.Vector3 GetTargetPosition() */
    inline static auto& m_GetTargetPosition = methods.get<false, true>(118);
    /* System.Single ComputeObjectRadius() */
    inline static auto& m_ComputeObjectRadius = methods.get<false, false>(119);
    /* System.Single ComputeObjectSqrRadius() */
    inline static auto& m_ComputeObjectSqrRadius = methods.get<false, false>(120);
    /* System.Void RotateAround(UnityEngine.Vector3 pivot, UnityEngine.Vector3 axis, System.Single angle) */
    inline static auto& m_RotateAround = methods.get<false, false>(121);
    /* System.Void RotateAroundLocal(UnityEngine.Vector3 pivot, RotationMode rotationMode, System.Single angle) */
    inline static auto& m_RotateAroundLocal = methods.get<false, false>(122);
    /* UnityEngine.Vector3 GetLocalAxis(RotationMode rotationMode) */
    inline static auto& m_GetLocalAxis = methods.get<false, false>(123);
    /* System.Void ResetRotation() */
    inline static auto& m_ResetRotation = methods.get<false, false>(124);
    /* System.Void DestroyRecursive(MVWorldObjectClient wo) */
    inline static auto& m_DestroyRecursive = methods.get<true, false>(125);
    /* System.Void DrawTransformGizmo() */
    inline static auto& m_DrawTransformGizmo = methods.get<false, true>(126);
    /* System.Void OnContextMenu() */
    inline static auto& m_OnContextMenu = methods.get<false, true>(127);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(128);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct WorldNetwork {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<2> fields;
inline static auto /* Links */ &f_links = fields.get<false>(0), /* ObjectLinks */ &f_objectLinks = fields.get<false>(1);

    inline static ::Tools::Il2Cpp::Metadata::array_method<26> methods;
    /* MVWorldObjectClientManagerNetwork get_WorldObjectClientManagerNetwork() */
    inline static auto& m_get_WorldObjectClientManagerNetwork = methods.get<false, false>(0);
    /* RuntimeEventManagerNetwork get_RuntimeEventManagerNetwork() */
    inline static auto& m_get_RuntimeEventManagerNetwork = methods.get<false, false>(1);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(2);
    /* System.Void Update(MVNetworkGame game) */
    inline static auto& m_Update = methods.get<false, false>(3);
    /* System.Void CreateGameWorldFromQueryData(MV.WorldObject.BytePacker queryData, System.Int32 instigatorActorNumber) */
    inline static auto& m_CreateGameWorldFromQueryData = methods.get<false, false>(4);
    /* System.Void OnGameDataDeserialized(MV.WorldObject.BytePacker queryData, System.Int32 instigatorActorNumber, System.Int32 rootId) */
    inline static auto& m_OnGameDataDeserialized = methods.get<false, false>(5);
    /* System.Void ConstructRuntimeEventManager() */
    inline static auto& m_ConstructRuntimeEventManager = methods.get<false, false>(6);
    /* System.Void AddGameQueryDataToGameWorld(MV.WorldObject.BytePacker queryData, System.Int32 instigatorActorNumber) */
    inline static auto& m_AddGameQueryDataToGameWorld = methods.get<false, false>(7);
    /* MVWorldObjectClient InitializeQueryData(MV.WorldObject.BytePacker queryData) */
    inline static auto& m_InitializeQueryData = methods.get<false, false>(8);
    /* System.Void DeserializeRuntimeEvents(MV.WorldObject.BytePacker queryData) */
    inline static auto& m_DeserializeRuntimeEvents = methods.get<false, false>(9);
    /* System.Void CreateQueryEvent(MVWorldObjectClient root, System.Int32 instigatorActorNumber) */
    inline static auto& m_CreateQueryEvent = methods.get<false, false>(10);
    /* System.Void HandleDeserializedWorldData(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, MV.WorldObject.KogamaDataType dataType) */
    inline static auto& m_HandleDeserializedWorldData = methods.get<false, false>(11);
    /* System.Void AddPrototype(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data) */
    inline static auto& m_AddPrototype = methods.get<false, false>(12);
    /* System.Void AddWorldObject(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data) */
    inline static auto& m_AddWorldObject = methods.get<false, false>(13);
    /* System.Void AddLink(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data) */
    inline static auto& m0_AddLink = methods.get<false, false>(14);
    /* System.Void AddLink(MV.WorldObject.Link link) */
    inline static auto& m1_AddLink = methods.get<false, false>(20);
    /* System.Void AddObjectLink(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data) */
    inline static auto& m0_AddObjectLink = methods.get<false, false>(15);
    /* System.Void AddObjectLink(MV.WorldObject.ObjectLink objectLink) */
    inline static auto& m1_AddObjectLink = methods.get<false, false>(23);
    /* MVWorldObjectClient OnCloneWorldObjectTreeEvent(System.Int32 ownerActorNumber, System.Int32 previewProfileOwnerId, System.Boolean cloneToRootGroup, System.Int32 originalId, System.Int32 cloneId, System.Int32 cloneLinkId, System.Int32 cloneObjectLinkId) */
    inline static auto& m_OnCloneWorldObjectTreeEvent = methods.get<false, false>(16);
    /* System.Void CloneLinks(CloneBookkeeping cloneBookkeeping) */
    inline static auto& m_CloneLinks = methods.get<false, false>(17);
    /* System.Void CloneObjectLinks(CloneBookkeeping cloneBookkeeping) */
    inline static auto& m_CloneObjectLinks = methods.get<false, false>(18);
    /* System.Boolean OnUnregisterWorldObject(System.Int32 id) */
    inline static auto& m_OnUnregisterWorldObject = methods.get<false, false>(19);
    /* MV.WorldObject.Link RemoveLink(System.Int32 linkID) */
    inline static auto& m_RemoveLink = methods.get<false, false>(21);
    /* System.Boolean LinksContains(System.Int32 linkID) */
    inline static auto& m_LinksContains = methods.get<false, false>(22);
    /* System.Void RemoveObjectLink(System.Int32 objectLinkID) */
    inline static auto& m_RemoveObjectLink = methods.get<false, false>(24);
    /* System.Boolean ObjectLinksContains(System.Int32 linkID) */
    inline static auto& m_ObjectLinksContains = methods.get<false, false>(25);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct Links {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<2> fields;
inline static auto /* System.Collections.Generic.Dictionary`2<System.Int32, MV.WorldObject.Link> */ &f_links = fields.get<false>(0), /* System.Collections.Generic.Dictionary`2<System.Int32, LinkObjectScript> */ &f_linkObjects = fields.get<false>(1);

    inline static ::Tools::Il2Cpp::Metadata::array_method<6> methods;
    /* System.Boolean RemoveLink(System.Int32 linkID, MVWorldObjectClient outputWo, MVWorldObjectClient inputWo) */
    inline static auto& m_RemoveLink = methods.get<false, false>(0);
    /* System.Void Update() */
    inline static auto& m_Update = methods.get<false, false>(1);
    /* System.Boolean Contains(System.Int32 linkID) */
    inline static auto& m_Contains = methods.get<false, false>(2);
    /* MV.WorldObject.Link GetLink(System.Int32 linkID) */
    inline static auto& m_GetLink = methods.get<false, false>(3);
    /* System.Void AddLink(MV.WorldObject.Link link, MVWorldObjectClient outputWo, MVWorldObjectClient inputWo) */
    inline static auto& m_AddLink = methods.get<false, false>(4);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(5);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct ObjectLinks {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<2> fields;
inline static auto /* System.Collections.Generic.Dictionary`2<System.Int32, MV.WorldObject.ObjectLink> */ &f_objectLinks = fields.get<false>(0), /* System.Collections.Generic.Dictionary`2<System.Int32, ObjectLinkObjectScript> */ &f_objectLinkObjects = fields.get<false>(1);

    inline static ::Tools::Il2Cpp::Metadata::array_method<6> methods;
    /* MV.WorldObject.ObjectLink GetObjectLink(System.Int32 objectLinkID) */
    inline static auto& m_GetObjectLink = methods.get<false, false>(0);
    /* System.Void Update() */
    inline static auto& m_Update = methods.get<false, false>(1);
    /* System.Boolean Contains(System.Int32 objectLinkID) */
    inline static auto& m_Contains = methods.get<false, false>(2);
    /* System.Boolean RemoveObjectLink(MV.WorldObject.ObjectLink link, MVWorldObjectClient objectConnectorWo, MVWorldObjectClient objectWo) */
    inline static auto& m_RemoveObjectLink = methods.get<false, false>(3);
    /* System.Boolean AddObjectLink(MV.WorldObject.ObjectLink objectLink, MVWorldObjectClient objectConnectorWo, MVWorldObjectClient objectWo) */
    inline static auto& m_AddObjectLink = methods.get<false, false>(4);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(5);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct World {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<4> fields;
inline static auto /* MVWorldObjectClientManagerNetwork */ &f_worldObjectClientManager = fields.get<false>(0), /* MVWorldInventory */ &f_worldInventory = fields.get<false>(1), /* RuntimeEventManagerNetwork */ &f_runtimeEventManagerNetwork = fields.get<false>(2), /* System.EventHandler`1<InitializedGameQueryDataEventArgs> */ &f_InitializedGameQueryData = fields.get<false>(3);

    inline static ::Tools::Il2Cpp::Metadata::array_method<4> methods;
    /* MVWorldInventory get_WorldInventory() */
    inline static auto& m_get_WorldInventory = methods.get<false, false>(0);
    /* MVWorldObjectClientManager get_WorldObjectClientManager() */
    inline static auto& m_get_WorldObjectClientManager = methods.get<false, false>(1);
    /* RuntimeEventManager get_RuntimeEventManager() */
    inline static auto& m_get_RuntimeEventManager = methods.get<false, false>(2);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(3);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVWorldInventory {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<5> fields;
inline static auto /* System.Int32 */ &f_NumberOfLowPriorityMeshGenerations = fields.get<true>(3);
inline static auto /* System.Collections.Generic.Dictionary`2<System.Int32, RuntimePrototypeCubeModel> */ &f_runtimePrototypes = fields.get<false>(0), /* System.Collections.Generic.Dictionary`2<System.Int32, PendingPrototypeData> */ &f_pendingRuntimePrototypes = fields.get<false>(1), /* System.Collections.Generic.List`1<RuntimePrototypeCubeModel> */ &f_dirtyRPCM = fields.get<false>(2), /* MVWorldInventory+OnWorldInventoryChangeDelegate */ &f_OnWorldInventoryChange = fields.get<false>(4);

    inline static ::Tools::Il2Cpp::Metadata::array_method<17> methods;
    /* System.Collections.Generic.Dictionary`2<System.Int32, RuntimePrototypeCubeModel> get_RuntimePrototypes() */
    inline static auto& m_get_RuntimePrototypes = methods.get<false, false>(0);
    /* System.Void AddRuntimePrototypeToDirty(RuntimePrototypeCubeModel rpcm) */
    inline static auto& m_AddRuntimePrototypeToDirty = methods.get<false, false>(1);
    /* System.Void OnUpdatePrototypeEvent(System.Int32 worldInventoryID, System.Byte[] worldInventoryData) */
    inline static auto& m_OnUpdatePrototypeEvent = methods.get<false, false>(2);
    /* System.Void OnUpdatePrototypeScaleEvent(System.Int32 worldInventoryID, System.Single scale) */
    inline static auto& m_OnUpdatePrototypeScaleEvent = methods.get<false, false>(3);
    /* System.Void GenerateAllDirty(ref System.Int32 counter) */
    inline static auto& m_GenerateAllDirty = methods.get<false, false>(4);
    /* System.Boolean GenerateDirty(MeshGeneratePriority priority, ref System.Int32 counter) */
    inline static auto& m_GenerateDirty = methods.get<false, false>(5);
    /* System.Void GenerateDirtyRPCM() */
    inline static auto& m_GenerateDirtyRPCM = methods.get<false, false>(6);
    /* System.Void LateUpdate() */
    inline static auto& m_LateUpdate = methods.get<false, false>(7);
    /* System.Void AddPrototype(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data) */
    inline static auto& m_AddPrototype = methods.get<false, false>(8);
    /* System.Void RemovePrototype(System.Int32 id) */
    inline static auto& m_RemovePrototype = methods.get<false, false>(9);
    /* System.Void UnpendRuntimePrototype(System.Int32 woId) */
    inline static auto& m_UnpendRuntimePrototype = methods.get<false, false>(10);
    /* System.Void OnReplaceWoPrototype(System.Int32 woId, System.Int32 worldInventoryId) */
    inline static auto& m_OnReplaceWoPrototype = methods.get<false, false>(11);
    /* System.Void RequestWoMakeUniquePrototype(System.Int32 woId) */
    inline static auto& m_RequestWoMakeUniquePrototype = methods.get<false, false>(12);
    /* System.Void ReplaceWithPendingRuntimePrototype(System.Int32 woId) */
    inline static auto& m_ReplaceWithPendingRuntimePrototype = methods.get<false, false>(13);
    /* RuntimePrototypeCubeModel CreatePendingPrototype(System.Int32 prototypeId) */
    inline static auto& m_CreatePendingPrototype = methods.get<false, false>(14);
    /* System.Void NotifyWorldInventoryChange() */
    inline static auto& m_NotifyWorldInventoryChange = methods.get<false, false>(15);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(16);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVNetworkGame {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<69> fields;
inline static auto /* System.String */ &f_appName = fields.get<true>(0), /* System.Single */ &f_serviceCallInterval = fields.get<true>(1);
inline static auto /* GameEventManager */ &f_GameEventManager = fields.get<false>(2), /* System.EventHandler`1<ReceivedItemFromQueryEventArgs> */ &f_ReceivedItemFromQuery = fields.get<false>(3), /* System.EventHandler`1<ReceivedItemFromQueryEventArgs> */ &f_ReceivedAvatarBodiesFromQuery = fields.get<false>(4), /* System.Action`1<System.String> */ &f_ReceivedAccessoryData = fields.get<false>(5), /* System.Action`1<MV.WorldObject.OwnershipData.PlanetOwnershipsData> */ &f_ReceivedPlanetOwnershipData = fields.get<false>(6), /* System.Action`1<System.Collections.Generic.Dictionary`2<System.Int32, System.Collections.Generic.List`1<System.Int32>>> */ &f_ReceivedPlanetPermissionsData = fields.get<false>(7), /* System.Collections.Generic.Dictionary`2<MV.Common.Region, System.Single> */ &f_timeZoneMap = fields.get<false>(8), /* System.Boolean */ &f_isPublished = fields.get<false>(9), /* MVConnState */ &f_connState = fields.get<false>(10), /* MVItemBusinessLogic */ &f_itemBusinessLogic = fields.get<false>(11), /* MVNetworkGame+GameDataQueryManager */ &f_gameDataQueryManager = fields.get<false>(12), /* TransformNetworkManager */ &f_transformNetworkManager = fields.get<false>(13), /* MVTeamManager */ &f_teamManager = fields.get<false>(14), /* GameStatCounterManager */ &f_gameStatCounterManager = fields.get<false>(15), /* LevelRewardsManager */ &f_levelRewardsManager = fields.get<false>(16), /* System.Single */ &f_prevServiceCallTime = fields.get<false>(17), /* LogicObjectManagerClient */ &f__LogicObjectManager_k__BackingField = fields.get<false>(18), /* MV.Common.Region */ &f__Region_k__BackingField = fields.get<false>(19), /* MVGameCoinManager */ &f__GameCoinManager_k__BackingField = fields.get<false>(20), /* ItemCategories */ &f__ItemCategories_k__BackingField = fields.get<false>(21), /* MVNetworkGameStateListener */ &f__NetworkGameStateListener_k__BackingField = fields.get<false>(22), /* ExitGames.Client.Photon.PhotonPeer */ &f__Peer_k__BackingField = fields.get<false>(23), /* CodeStage.AntiCheat.ObscuredTypes.ObscuredString */ &f__XpKey_k__BackingField = fields.get<false>(24), /* System.Int32 */ &f__MarketPlaceLevel_k__BackingField = fields.get<false>(25), /* System.Int32 */ &f__PublishLevel_k__BackingField = fields.get<false>(26), /* System.String */ &f__AdConsentEndpointURL_k__BackingField = fields.get<false>(27), /* System.String */ &f__KogamaMainpageURL_k__BackingField = fields.get<false>(28), /* CreySettings */ &f__CreySettings_k__BackingField = fields.get<false>(29), /* CustomTouristPromotionSettings */ &f__CustomTouristPromotionSettings_k__BackingField = fields.get<false>(30), /* ElitePromotionSettings */ &f__EliteSettings_k__BackingField = fields.get<false>(31), /* System.Int32 */ &f_serverTimeInMilliseconds = fields.get<false>(32), /* System.Int32 */ &f_lastFrameServerTimeUpdate = fields.get<false>(33), /* System.Int32 */ &f_localTimeInMilliseconds = fields.get<false>(34), /* System.Int32 */ &f_lastFrameLocalTimeUpdate = fields.get<false>(35), /* MVMaterialRepository */ &f__MaterialRepository_k__BackingField = fields.get<false>(36), /* PlayerRepository */ &f__PlayerRepository_k__BackingField = fields.get<false>(37), /* ShopRepository */ &f__ShopRepository_k__BackingField = fields.get<false>(38), /* GameTierShopRepository */ &f__GameTierShopRepository_k__BackingField = fields.get<false>(39), /* AvatarRepository */ &f__AvatarShopRepository_k__BackingField = fields.get<false>(40), /* MV.WorldObject.MvAvatarMetaDataWoMap */ &f__AvatarMetaDataWoMap_k__BackingField = fields.get<false>(41), /* MVGameModeChangeNotifier */ &f__GameStateController_k__BackingField = fields.get<false>(42), /* FriendList */ &f__Friends_k__BackingField = fields.get<false>(43), /* MVLocalObjectController */ &f__PlayerController_k__BackingField = fields.get<false>(44), /* WinningConditionManager */ &f__WinningConditionManager_k__BackingField = fields.get<false>(45), /* WorldNetwork */ &f_worldNetwork = fields.get<false>(46), /* System.Action`2<System.Int32, System.Collections.Generic.Dictionary`2<System.Object, System.Object>> */ &f_PurchaseProductResponseHandler = fields.get<false>(47), /* System.Action`1<IWinningCondition> */ &f_OnWinningConditionFulfilled = fields.get<false>(48), /* System.Action`1<System.Int32> */ &f_OnActiveAvatar = fields.get<false>(49), /* System.Action`1<System.Boolean> */ &f_OnItemAddedToWorld = fields.get<false>(50), /* UnityEngine.Events.UnityAction`1<System.String> */ &f_OnPublishedPlanet = fields.get<false>(51), /* UnityEngine.Events.UnityAction`1<System.String> */ &f_OnAddWorldObjectToInventoryCallbackDev = fields.get<false>(52), /* System.Action`1<System.Boolean> */ &f_OnSetAvatarAccessoryResponse = fields.get<false>(53), /* MVNetworkGame+OnReceivedChatMessageDelegate */ &f_OnReceivedChatMessage = fields.get<false>(54), /* MVNetworkGame+OnMarketPlaceActionCompleteDelegate */ &f_OnMarketPlaceActionComplete = fields.get<false>(55), /* System.EventHandler`1<ScreenshotUploadedEventArgs> */ &f_ScreenshotUploaded = fields.get<false>(56), /* System.Action */ &f_OnActiveAvatarSet = fields.get<false>(57), /* System.Action */ &f_OnAccessoryUnequipped = fields.get<false>(58), /* MVPlayerContainer */ &f_playerContainer = fields.get<false>(59), /* PhotonLoggingConfig */ &f_photonLoggingConfig = fields.get<false>(60), /* EmbeddedSiteConfigData */ &f_embeddedSiteConfigData = fields.get<false>(61), /* MVNetworkGame+LogicObjectManagerClientWrapper */ &f_logicObjectManagerClientWrapper = fields.get<false>(62), /* RuntimeVariableNetworkManager */ &f_runtimeVariableNetworkManager = fields.get<false>(63), /* MVNetworkGame+GameDataQueryManager+GameDataQuery */ &f_gameDataQuery = fields.get<false>(64), /* MVNetworkGame+EventHandling */ &f_eventHandling = fields.get<false>(65), /* MVNetworkGame+OperationRequests */ &f_operationRequests = fields.get<false>(66), /* MVNetworkGame+OperationResponseHandling */ &f_operationResponseHandling = fields.get<false>(67), /* MVNetworkGame+StatusChangedHandling */ &f_statusChangedHandling = fields.get<false>(68);

    inline static ::Tools::Il2Cpp::Metadata::array_method<163> methods;
    /* System.Void add_ReceivedItemFromQuery(System.EventHandler`1<ReceivedItemFromQueryEventArgs> value) */
    inline static auto& m_add_ReceivedItemFromQuery = methods.get<false, false>(0);
    /* System.Void remove_ReceivedItemFromQuery(System.EventHandler`1<ReceivedItemFromQueryEventArgs> value) */
    inline static auto& m_remove_ReceivedItemFromQuery = methods.get<false, false>(1);
    /* System.Void add_ReceivedAvatarBodiesFromQuery(System.EventHandler`1<ReceivedItemFromQueryEventArgs> value) */
    inline static auto& m_add_ReceivedAvatarBodiesFromQuery = methods.get<false, false>(2);
    /* System.Void remove_ReceivedAvatarBodiesFromQuery(System.EventHandler`1<ReceivedItemFromQueryEventArgs> value) */
    inline static auto& m_remove_ReceivedAvatarBodiesFromQuery = methods.get<false, false>(3);
    /* System.Void add_ReceivedAccessoryData(System.Action`1<System.String> value) */
    inline static auto& m_add_ReceivedAccessoryData = methods.get<false, false>(4);
    /* System.Void remove_ReceivedAccessoryData(System.Action`1<System.String> value) */
    inline static auto& m_remove_ReceivedAccessoryData = methods.get<false, false>(5);
    /* System.Void add_ReceivedPlanetOwnershipData(System.Action`1<MV.WorldObject.OwnershipData.PlanetOwnershipsData> value) */
    inline static auto& m_add_ReceivedPlanetOwnershipData = methods.get<false, false>(6);
    /* System.Void remove_ReceivedPlanetOwnershipData(System.Action`1<MV.WorldObject.OwnershipData.PlanetOwnershipsData> value) */
    inline static auto& m_remove_ReceivedPlanetOwnershipData = methods.get<false, false>(7);
    /* System.Void add_ReceivedPlanetPermissionsData(System.Action`1<System.Collections.Generic.Dictionary`2<System.Int32, System.Collections.Generic.List`1<System.Int32>>> value) */
    inline static auto& m_add_ReceivedPlanetPermissionsData = methods.get<false, false>(8);
    /* System.Void remove_ReceivedPlanetPermissionsData(System.Action`1<System.Collections.Generic.Dictionary`2<System.Int32, System.Collections.Generic.List`1<System.Int32>>> value) */
    inline static auto& m_remove_ReceivedPlanetPermissionsData = methods.get<false, false>(9);
    /* LogicObjectManagerClient get_LogicObjectManager() */
    inline static auto& m_get_LogicObjectManager = methods.get<false, false>(10);
    /* System.Void set_LogicObjectManager(LogicObjectManagerClient value) */
    inline static auto& m_set_LogicObjectManager = methods.get<false, false>(11);
    /* MV.Common.Region get_Region() */
    inline static auto& m_get_Region = methods.get<false, false>(12);
    /* System.Void set_Region(MV.Common.Region value) */
    inline static auto& m_set_Region = methods.get<false, false>(13);
    /* System.Single get_TimeZone() */
    inline static auto& m_get_TimeZone = methods.get<false, false>(14);
    /* MVItemBusinessLogic get_ItemBusinessLogic() */
    inline static auto& m_get_ItemBusinessLogic = methods.get<false, false>(15);
    /* MVGameCoinManager get_GameCoinManager() */
    inline static auto& m_get_GameCoinManager = methods.get<false, false>(16);
    /* System.Void set_GameCoinManager(MVGameCoinManager value) */
    inline static auto& m_set_GameCoinManager = methods.get<false, false>(17);
    /* ItemCategories get_ItemCategories() */
    inline static auto& m_get_ItemCategories = methods.get<false, false>(18);
    /* System.Void set_ItemCategories(ItemCategories value) */
    inline static auto& m_set_ItemCategories = methods.get<false, false>(19);
    /* MVConnState get_ConnState() */
    inline static auto& m_get_ConnState = methods.get<false, false>(20);
    /* System.Void set_ConnState(MVConnState value) */
    inline static auto& m_set_ConnState = methods.get<false, false>(21);
    /* System.Boolean get_IsPlaying() */
    inline static auto& m_get_IsPlaying = methods.get<false, false>(22);
    /* MVNetworkGameStateListener get_NetworkGameStateListener() */
    inline static auto& m_get_NetworkGameStateListener = methods.get<false, false>(23);
    /* System.Void set_NetworkGameStateListener(MVNetworkGameStateListener value) */
    inline static auto& m_set_NetworkGameStateListener = methods.get<false, false>(24);
    /* ExitGames.Client.Photon.PhotonPeer get_Peer() */
    inline static auto& m_get_Peer = methods.get<false, false>(25);
    /* System.Void set_Peer(ExitGames.Client.Photon.PhotonPeer value) */
    inline static auto& m_set_Peer = methods.get<false, false>(26);
    /* CodeStage.AntiCheat.ObscuredTypes.ObscuredString get_XpKey() */
    inline static auto& m_get_XpKey = methods.get<false, false>(27);
    /* System.Void set_XpKey(CodeStage.AntiCheat.ObscuredTypes.ObscuredString value) */
    inline static auto& m_set_XpKey = methods.get<false, false>(28);
    /* System.Int32 get_MarketPlaceLevel() */
    inline static auto& m_get_MarketPlaceLevel = methods.get<false, false>(29);
    /* System.Void set_MarketPlaceLevel(System.Int32 value) */
    inline static auto& m_set_MarketPlaceLevel = methods.get<false, false>(30);
    /* System.Int32 get_PublishLevel() */
    inline static auto& m_get_PublishLevel = methods.get<false, false>(31);
    /* System.Void set_PublishLevel(System.Int32 value) */
    inline static auto& m_set_PublishLevel = methods.get<false, false>(32);
    /* System.String get_AdConsentEndpointURL() */
    inline static auto& m_get_AdConsentEndpointURL = methods.get<false, false>(33);
    /* System.Void set_AdConsentEndpointURL(System.String value) */
    inline static auto& m_set_AdConsentEndpointURL = methods.get<false, false>(34);
    /* System.String get_KogamaMainpageURL() */
    inline static auto& m_get_KogamaMainpageURL = methods.get<false, false>(35);
    /* System.Void set_KogamaMainpageURL(System.String value) */
    inline static auto& m_set_KogamaMainpageURL = methods.get<false, false>(36);
    /* CreySettings get_CreySettings() */
    inline static auto& m_get_CreySettings = methods.get<false, false>(37);
    /* System.Void set_CreySettings(CreySettings value) */
    inline static auto& m_set_CreySettings = methods.get<false, false>(38);
    /* CustomTouristPromotionSettings get_CustomTouristPromotionSettings() */
    inline static auto& m_get_CustomTouristPromotionSettings = methods.get<false, false>(39);
    /* System.Void set_CustomTouristPromotionSettings(CustomTouristPromotionSettings value) */
    inline static auto& m_set_CustomTouristPromotionSettings = methods.get<false, false>(40);
    /* ElitePromotionSettings get_EliteSettings() */
    inline static auto& m_get_EliteSettings = methods.get<false, false>(41);
    /* System.Void set_EliteSettings(ElitePromotionSettings value) */
    inline static auto& m_set_EliteSettings = methods.get<false, false>(42);
    /* System.Int32 get_ServerTimeInMilliSeconds() */
    inline static auto& m_get_ServerTimeInMilliSeconds = methods.get<false, false>(43);
    /* System.Int32 get_LocalTimeInMilliSeconds() */
    inline static auto& m_get_LocalTimeInMilliSeconds = methods.get<false, false>(44);
    /* System.Int32 get_StepTimeStamp() */
    inline static auto& m_get_StepTimeStamp = methods.get<false, false>(45);
    /* MVMaterialRepository get_MaterialRepository() */
    inline static auto& m_get_MaterialRepository = methods.get<false, false>(46);
    /* System.Void set_MaterialRepository(MVMaterialRepository value) */
    inline static auto& m_set_MaterialRepository = methods.get<false, false>(47);
    /* PlayerRepository get_PlayerRepository() */
    inline static auto& m_get_PlayerRepository = methods.get<false, false>(48);
    /* System.Void set_PlayerRepository(PlayerRepository value) */
    inline static auto& m_set_PlayerRepository = methods.get<false, false>(49);
    /* ShopRepository get_ShopRepository() */
    inline static auto& m_get_ShopRepository = methods.get<false, false>(50);
    /* System.Void set_ShopRepository(ShopRepository value) */
    inline static auto& m_set_ShopRepository = methods.get<false, false>(51);
    /* GameTierShopRepository get_GameTierShopRepository() */
    inline static auto& m_get_GameTierShopRepository = methods.get<false, false>(52);
    /* System.Void set_GameTierShopRepository(GameTierShopRepository value) */
    inline static auto& m_set_GameTierShopRepository = methods.get<false, false>(53);
    /* AvatarRepository get_AvatarShopRepository() */
    inline static auto& m_get_AvatarShopRepository = methods.get<false, false>(54);
    /* System.Void set_AvatarShopRepository(AvatarRepository value) */
    inline static auto& m_set_AvatarShopRepository = methods.get<false, false>(55);
    /* MV.WorldObject.MvAvatarMetaDataWoMap get_AvatarMetaDataWoMap() */
    inline static auto& m_get_AvatarMetaDataWoMap = methods.get<false, false>(56);
    /* System.Void set_AvatarMetaDataWoMap(MV.WorldObject.MvAvatarMetaDataWoMap value) */
    inline static auto& m_set_AvatarMetaDataWoMap = methods.get<false, false>(57);
    /* LevelRewardsManager get_LevelRewardsManager() */
    inline static auto& m_get_LevelRewardsManager = methods.get<false, false>(58);
    /* MVTeamManager get_TeamManager() */
    inline static auto& m_get_TeamManager = methods.get<false, false>(59);
    /* MVGameModeChangeNotifier get_GameStateController() */
    inline static auto& m_get_GameStateController = methods.get<false, false>(60);
    /* System.Void set_GameStateController(MVGameModeChangeNotifier value) */
    inline static auto& m_set_GameStateController = methods.get<false, false>(61);
    /* FriendList get_Friends() */
    inline static auto& m_get_Friends = methods.get<false, false>(62);
    /* System.Void set_Friends(FriendList value) */
    inline static auto& m_set_Friends = methods.get<false, false>(63);
    /* MVLocalObjectController get_PlayerController() */
    inline static auto& m_get_PlayerController = methods.get<false, false>(64);
    /* System.Void set_PlayerController(MVLocalObjectController value) */
    inline static auto& m_set_PlayerController = methods.get<false, false>(65);
    /* GameStatCounterManager get_GameStatCounterManager() */
    inline static auto& m_get_GameStatCounterManager = methods.get<false, false>(66);
    /* WinningConditionManager get_WinningConditionManager() */
    inline static auto& m_get_WinningConditionManager = methods.get<false, false>(67);
    /* System.Void set_WinningConditionManager(WinningConditionManager value) */
    inline static auto& m_set_WinningConditionManager = methods.get<false, false>(68);
    /* World get_World() */
    inline static auto& m_get_World = methods.get<false, false>(69);
    /* MVWorldObjectClientManager get_WorldObjectClientManager() */
    inline static auto& m_get_WorldObjectClientManager = methods.get<false, false>(70);
    /* MVNetworkGame+OperationRequests get_OperationRequestSender() */
    inline static auto& m_get_OperationRequestSender = methods.get<false, false>(71);
    /* System.Void add_ScreenshotUploaded(System.EventHandler`1<ScreenshotUploadedEventArgs> value) */
    inline static auto& m_add_ScreenshotUploaded = methods.get<false, false>(72);
    /* System.Void remove_ScreenshotUploaded(System.EventHandler`1<ScreenshotUploadedEventArgs> value) */
    inline static auto& m_remove_ScreenshotUploaded = methods.get<false, false>(73);
    /* TransformNetworkManager get_TransformNetworkManager() */
    inline static auto& m_get_TransformNetworkManager = methods.get<false, false>(74);
    /* MVPlayerContainer get_MVPlayerContainer() */
    inline static auto& m_get_MVPlayerContainer = methods.get<false, false>(75);
    /* MVLocalPlayer get_LocalPlayer() */
    inline static auto& m_get_LocalPlayer = methods.get<false, false>(76);
    /* System.Void .ctor(PhotonLoggingConfig photonLoggingConfig, EmbeddedSiteConfigData embeddedSiteConfigData) */
    inline static auto& m__ctor = methods.get<false, false>(77);
    /* System.Void SubscribeToEvent(MV.Common.MVEventCodes eventCode, System.Action`1<ExitGames.Client.Photon.EventData> callback) */
    inline static auto& m_SubscribeToEvent = methods.get<false, false>(78);
    /* System.Void UnSubscribeToEvent(MV.Common.MVEventCodes eventCode, System.Action`1<ExitGames.Client.Photon.EventData> callback) */
    inline static auto& m_UnSubscribeToEvent = methods.get<false, false>(79);
    /* System.Void CreatePrivateClasses() */
    inline static auto& m_CreatePrivateClasses = methods.get<false, false>(80);
    /* System.Void networkGameStateListener_OnGameStateChanged(System.Object sender, GameStateChangeEventArgs e) */
    inline static auto& m_networkGameStateListener_OnGameStateChanged = methods.get<false, false>(81);
    /* System.Void Update() */
    inline static auto& m_Update = methods.get<false, false>(82);
    /* System.Void Cleanup() */
    inline static auto& m_Cleanup = methods.get<false, false>(83);
    /* RuntimeVariableNetworkManager get_RuntimeVariableNetworkManager() */
    inline static auto& m_get_RuntimeVariableNetworkManager = methods.get<false, false>(84);
    /* System.Void UpdateGame() */
    inline static auto& m_UpdateGame = methods.get<false, false>(85);
    /* System.Void Service() */
    inline static auto& m_Service = methods.get<false, false>(86);
    /* System.Boolean Join() */
    inline static auto& m_Join = methods.get<false, false>(87);
    /* System.Void GeneratePlanetScreenShot(System.Action`1<System.Byte[]> callback) */
    inline static auto& m_GeneratePlanetScreenShot = methods.get<true, false>(88);
    /* System.Void OnUnregisterWorldObjectResponse(System.Int32 worldObjectID) */
    inline static auto& m_OnUnregisterWorldObjectResponse = methods.get<false, false>(89);
    /* System.Void OnResetLogicChunkEvent(System.Int32 worldObjectID) */
    inline static auto& m_OnResetLogicChunkEvent = methods.get<false, false>(90);
    /* System.Void OnPickupItemStateChangeEvent(MV.WorldObject.PickupItemState state, System.Int32 worldObjectID, System.Int32 instigatorActorNr) */
    inline static auto& m_OnPickupItemStateChangeEvent = methods.get<false, false>(91);
    /* System.Void OnUpdateLineOfFire(System.Int32 worldObjectID, UnityEngine.Vector3 camOrigin, UnityEngine.Vector3 camDir) */
    inline static auto& m_OnUpdateLineOfFire = methods.get<false, false>(92);
    /* System.Void AllModesSetup(ExitGames.Client.Photon.EventData photonEvent) */
    inline static auto& m_AllModesSetup = methods.get<false, false>(93);
    /* System.Void PlayModeSetup(ExitGames.Client.Photon.EventData photonEvent) */
    inline static auto& m_PlayModeSetup = methods.get<false, false>(94);
    /* System.Void BuildModeSetup(ExitGames.Client.Photon.EventData photonEvent) */
    inline static auto& m_BuildModeSetup = methods.get<false, false>(95);
    /* System.Void SetupLogicManager(System.Int32 stepTimestamp) */
    inline static auto& m_SetupLogicManager = methods.get<false, false>(96);
    /* System.Void OnNotificationEventReceived(MV.Common.NotificationType type, System.Collections.Generic.Dictionary`2<System.Object, System.Object> data) */
    inline static auto& m_OnNotificationEventReceived = methods.get<false, false>(97);
    /* System.Void OnRequestFriendshipResponse(System.Int32 returnCode) */
    inline static auto& m_OnRequestFriendshipResponse = methods.get<false, false>(98);
    /* System.Void OnPurchaseProductResponse(System.Int32 returnCode, System.Collections.Generic.Dictionary`2<System.Object, System.Object> purchaseResponseData) */
    inline static auto& m_OnPurchaseProductResponse = methods.get<false, false>(99);
    /* System.Void AddCloneToWorldObjects(MVWorldObjectClient wo) */
    inline static auto& m_AddCloneToWorldObjects = methods.get<false, false>(100);
    /* System.Collections.Generic.Dictionary`2<System.Byte, System.Object> GetAttachWorldObjectToSeatData(VehicleSeatBase seatBase) */
    inline static auto& m_GetAttachWorldObjectToSeatData = methods.get<false, false>(101);
    /* System.Void OnJoinResponse(System.Collections.Generic.Dictionary`2<System.Byte, System.Object> returnValues) */
    inline static auto& m_OnJoinResponse = methods.get<false, false>(102);
    /* MVLocalPlayer CreateLocalPlayer(System.Int32 actorNr, System.Int32 planetOwnershipTypeID, System.Collections.Generic.List`1<System.Int32> planetPermissionIDs, MV.WorldObject.MetaData.UserProfileData userProfileData) */
    inline static auto& m_CreateLocalPlayer = methods.get<false, false>(103);
    /* System.Void InitializeManagers() */
    inline static auto& m_InitializeManagers = methods.get<false, false>(104);
    /* System.Void OnRequestMaterialsResponse(System.Collections.Generic.Dictionary`2<System.Object, System.Object> materialList) */
    inline static auto& m_OnRequestMaterialsResponse = methods.get<false, false>(105);
    /* System.Void CreatePlayersFromUserList(System.Collections.Generic.Dictionary`2<System.Object, System.Object> userList) */
    inline static auto& m_CreatePlayersFromUserList = methods.get<false, false>(106);
    /* System.Void OnGetBuiltInItemBusinessData(System.Collections.Generic.Dictionary`2<System.Object, System.Object> builtInItemBusinessData) */
    inline static auto& m_OnGetBuiltInItemBusinessData = methods.get<false, false>(107);
    /* System.Void OnRequestFriendsResponse(System.Collections.Generic.Dictionary`2<System.Object, System.Object> friendsList) */
    inline static auto& m_OnRequestFriendsResponse = methods.get<false, false>(108);
    /* System.Void WOCM_InitializedGameQueryDataHandler(System.Object sender, InitializedGameQueryDataEventArgs e) */
    inline static auto& m_WOCM_InitializedGameQueryDataHandler = methods.get<false, false>(109);
    /* System.Void TransferBodyResponseHandler(System.Object sender, OnTransferWosResponseEventArgs e) */
    inline static auto& m_TransferBodyResponseHandler = methods.get<false, false>(110);
    /* System.Void OnTransferOwnershipResponse(System.Collections.Generic.Dictionary`2<System.Byte, System.Object> returnValues, System.Int32 returnCode) */
    inline static auto& m_OnTransferOwnershipResponse = methods.get<false, false>(111);
    /* System.Void OnLockHierarchyResponse(System.Collections.Generic.Dictionary`2<System.Byte, System.Object> returnValues, System.Int32 returnCode) */
    inline static auto& m_OnLockHierarchyResponse = methods.get<false, false>(112);
    /* System.Void OnRequestWoUniquePrototypeFailed(System.Collections.Generic.Dictionary`2<System.Byte, System.Object> returnValues) */
    inline static auto& m_OnRequestWoUniquePrototypeFailed = methods.get<false, false>(113);
    /* System.Void OnInventoryChange(System.Collections.Generic.Dictionary`2<System.Object, System.Object> inventory, System.Int64 inventoryVersion) */
    inline static auto& m_OnInventoryChange = methods.get<false, false>(114);
    /* System.Void OnLockHierarchyEvent(ExitGames.Client.Photon.EventData eventData) */
    inline static auto& m_OnLockHierarchyEvent = methods.get<false, false>(115);
    /* System.Void OnUnregisterWorldObjectEvent(System.Int32 worldObjectID) */
    inline static auto& m_OnUnregisterWorldObjectEvent = methods.get<false, false>(116);
    /* System.Void OnUpdateWorldObjectEvent(ExitGames.Client.Photon.EventData photonEvent) */
    inline static auto& m_OnUpdateWorldObjectEvent = methods.get<false, false>(117);
    /* System.Void OnWorldObjectRPCEvent(ExitGames.Client.Photon.EventData photonEvent) */
    inline static auto& m_OnWorldObjectRPCEvent = methods.get<false, false>(118);
    /* System.Void OnTransferOwnershipEvent(ExitGames.Client.Photon.EventData photonEvent) */
    inline static auto& m_OnTransferOwnershipEvent = methods.get<false, false>(119);
    /* System.Void OnUnregisterPrototypeEvent(System.Int32 worldInventoryID) */
    inline static auto& m_OnUnregisterPrototypeEvent = methods.get<false, false>(120);
    /* System.Void OnFriendRequestEvent(System.Int32 friendID, System.Int32 profileID, System.Int32 friendProfileID) */
    inline static auto& m_OnFriendRequestEvent = methods.get<false, false>(121);
    /* System.Void OnFriendUpdateEvent(System.Int32 friendID, System.Int32 profileID, MV.Common.FriendStatus status) */
    inline static auto& m_OnFriendUpdateEvent = methods.get<false, false>(122);
    /* System.Void OnAddLinkEvent(System.Int32 fromID, System.Int32 toID, System.Int32 linkID) */
    inline static auto& m_OnAddLinkEvent = methods.get<false, false>(123);
    /* System.Void OnRemoveLinkEvent(System.Int32 linkID) */
    inline static auto& m_OnRemoveLinkEvent = methods.get<false, false>(124);
    /* System.Void OnAddObjectLinkEvent(System.Int32 fromID, System.Int32 toID, System.Int32 linkID) */
    inline static auto& m_OnAddObjectLinkEvent = methods.get<false, false>(125);
    /* System.Void OnRemoveObjectLinkEvent(System.Int32 linkID) */
    inline static auto& m_OnRemoveObjectLinkEvent = methods.get<false, false>(126);
    /* System.Void OnTriggerBoxEnterEvent(System.Int32 actorNr, System.Int32 worldObjectID) */
    inline static auto& m_OnTriggerBoxEnterEvent = methods.get<false, false>(127);
    /* System.Void OnTriggerBoxExitEvent(System.Int32 actorNr, System.Int32 worldObjectID) */
    inline static auto& m_OnTriggerBoxExitEvent = methods.get<false, false>(128);
    /* System.Void OnTriggerBoxStayBegin(System.Int32 worldObjectID, System.Int32 instigatorId) */
    inline static auto& m_OnTriggerBoxStayBegin = methods.get<false, false>(129);
    /* System.Void OnTriggerBoxStayEnd(System.Int32 worldObjectID) */
    inline static auto& m_OnTriggerBoxStayEnd = methods.get<false, false>(130);
    /* System.Void OnRemoveItemFromInventory(System.Int32 itemID) */
    inline static auto& m_OnRemoveItemFromInventory = methods.get<false, false>(131);
    /* System.Void OnWoUniquePrototypeEvent(System.Int32 woId, System.Int32 worldInventoryId) */
    inline static auto& m_OnWoUniquePrototypeEvent = methods.get<false, false>(132);
    /* System.Void ResetPlayer() */
    inline static auto& m_ResetPlayer = methods.get<false, false>(133);
    /* System.Void OnSetWorldObjectsToPurchasedEvent(System.Int32 purchaseProfileId, System.Int32 itemId) */
    inline static auto& m_OnSetWorldObjectsToPurchasedEvent = methods.get<false, false>(134);
    /* System.Void OnTransferWorldObjectsToGroup(ExitGames.Client.Photon.EventData eventData) */
    inline static auto& m_OnTransferWorldObjectsToGroup = methods.get<false, false>(135);
    /* MVWorldObjectClient OnCloneWorldObjectTree(ExitGames.Client.Photon.EventData eventData) */
    inline static auto& m_OnCloneWorldObjectTree = methods.get<false, false>(136);
    /* MVWorldObjectClient OnCloneWorldObjectTreePosition(ExitGames.Client.Photon.EventData eventData) */
    inline static auto& m_OnCloneWorldObjectTreePosition = methods.get<false, false>(137);
    /* System.Void OnCloneTempWorldObjectWithOriginalReferenceEvent(ExitGames.Client.Photon.EventData eventData) */
    inline static auto& m_OnCloneTempWorldObjectWithOriginalReferenceEvent = methods.get<false, false>(138);
    /* System.Void OnGetGameBatch(ExitGames.Client.Photon.EventData eventData) */
    inline static auto& m_OnGetGameBatch = methods.get<false, false>(139);
    /* System.Void OnGameQueryReady(ExitGames.Client.Photon.EventData eventData) */
    inline static auto& m_OnGameQueryReady = methods.get<false, false>(140);
    /* System.Void OnPostWinnerReportEvent() */
    inline static auto& m_OnPostWinnerReportEvent = methods.get<false, false>(141);
    /* IWinningCondition GetWinningCondition() */
    inline static auto& m_GetWinningCondition = methods.get<false, false>(142);
    /* System.Void OnCollectiblePickedUp(ExitGames.Client.Photon.EventData photonEvent) */
    inline static auto& m_OnCollectiblePickedUp = methods.get<false, false>(143);
    /* System.Void OnGetActiveAvatarResponse(System.Int32 woid) */
    inline static auto& m_OnGetActiveAvatarResponse = methods.get<false, false>(144);
    /* System.Void OnSetTeamEvent(System.Int32 actorNr, MV.WorldObject.MVTeam team) */
    inline static auto& m_OnSetTeamEvent = methods.get<false, false>(145);
    /* System.Void OnGetItemCategories(System.Collections.Generic.Dictionary`2<System.Object, System.Object> outData) */
    inline static auto& m_OnGetItemCategories = methods.get<false, false>(146);
    /* System.Void OnGetPlanetOwnershipTypes(System.Collections.Generic.Dictionary`2<System.Object, System.Object> outData) */
    inline static auto& m_OnGetPlanetOwnershipTypes = methods.get<false, false>(147);
    /* System.Void OnInventoryResultSetResponse(System.Collections.Generic.Dictionary`2<System.Object, System.Object> outData) */
    inline static auto& m_OnInventoryResultSetResponse = methods.get<false, false>(148);
    /* System.Void OnShopInventoryResultSetResponse(System.Collections.Generic.Dictionary`2<System.Object, System.Object> outData, System.Boolean isDone) */
    inline static auto& m_OnShopInventoryResultSetResponse = methods.get<false, false>(149);
    /* System.Void OnAvatarShopInventoryResultSetResponse(System.Collections.Generic.Dictionary`2<System.Object, System.Object> outData) */
    inline static auto& m_OnAvatarShopInventoryResultSetResponse = methods.get<false, false>(150);
    /* System.Void OnAddItemToInventory(System.Collections.Generic.Dictionary`2<System.Byte, System.Object> returnValues, System.Int16 returnCode) */
    inline static auto& m_OnAddItemToInventory = methods.get<false, false>(151);
    /* System.Void OnAddWorldObjectToInventoryResponseDev(System.Int32 returnCode, System.Int32 worldObjectID, System.Int32 itemID) */
    inline static auto& m_OnAddWorldObjectToInventoryResponseDev = methods.get<false, false>(152);
    /* System.Void OnOperationResponse(ExitGames.Client.Photon.OperationResponse operationResponse) */
    inline static auto& m_OnOperationResponse = methods.get<false, true>(153);
    /* System.Void OnStatusChanged(ExitGames.Client.Photon.StatusCode statusCode) */
    inline static auto& m_OnStatusChanged = methods.get<false, true>(154);
    /* System.Void OnEvent(ExitGames.Client.Photon.EventData eventData) */
    inline static auto& m_OnEvent = methods.get<false, true>(155);
    /* System.Void HandleGameSnapshotData(MV.WorldObject.BytePacker bytePacker, MV.Common.QueryType queryType, System.Boolean dataLeft) */
    inline static auto& m_HandleGameSnapshotData = methods.get<false, false>(156);
    /* System.Void CreateGame() */
    inline static auto& m_CreateGame = methods.get<false, false>(157);
    /* System.Void OnGameCreated(System.Object sender, InitializedGameQueryDataEventArgs initializedGameQueryDataEventArgs) */
    inline static auto& m_OnGameCreated = methods.get<false, false>(158);
    /* System.Void OnLevelChanged(System.Int32 actorNr, System.Int32 level) */
    inline static auto& m_OnLevelChanged = methods.get<false, false>(159);
    /* System.Void OnSetSayChatBubbleVisible(System.Int32 actorNr, System.Boolean visible) */
    inline static auto& m_OnSetSayChatBubbleVisible = methods.get<false, false>(160);
    /* System.Void LoadModeGui() */
    inline static auto& m_LoadModeGui = methods.get<false, false>(161);
    /* System.Void DebugReturn(ExitGames.Client.Photon.DebugLevel level, System.String debug) */
    inline static auto& m_DebugReturn = methods.get<false, true>(162);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct PhotonPeer {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<43> fields;
inline static auto /* System.Boolean */ &f_NoSocket = fields.get<true>(3), /* System.Boolean */ &f_NativeDatagramEncrypt = fields.get<true>(4), /* System.Boolean */ &f_DebugBuild = fields.get<true>(5), /* System.Int32 */ &f_OutgoingStreamBufferSize = fields.get<true>(25), /* System.Boolean */ &f_AsyncKeyExchange = fields.get<true>(28);
inline static auto /* System.Int32 */ &f__CommandBufferSize_k__BackingField = fields.get<false>(0), /* System.Int32 */ &f__LimitOfUnreliableCommands_k__BackingField = fields.get<false>(1), /* System.Int32 */ &f_WarningSize = fields.get<false>(2), /* System.Byte */ &f_ClientSdkId = fields.get<false>(6), /* System.String */ &f_clientVersion = fields.get<false>(7), /* ExitGames.Client.Photon.SerializationProtocol */ &f__SerializationProtocolType_k__BackingField = fields.get<false>(8), /* System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol, System.Type> */ &f_SocketImplementationConfig = fields.get<false>(9), /* System.Type */ &f__SocketImplementation_k__BackingField = fields.get<false>(10), /* ExitGames.Client.Photon.DebugLevel */ &f_DebugOut = fields.get<false>(11), /* ExitGames.Client.Photon.IPhotonPeerListener */ &f__Listener_k__BackingField = fields.get<false>(12), /* System.Boolean */ &f_reuseEventInstance = fields.get<false>(13), /* System.Boolean */ &f__EnableServerTracing_k__BackingField = fields.get<false>(14), /* System.Byte */ &f_quickResendAttempts = fields.get<false>(15), /* System.Int32 */ &f_RhttpMinConnections = fields.get<false>(16), /* System.Int32 */ &f_RhttpMaxConnections = fields.get<false>(17), /* System.Byte */ &f_ChannelCount = fields.get<false>(18), /* System.Boolean */ &f_crcEnabled = fields.get<false>(19), /* System.Int32 */ &f_SentCountAllowance = fields.get<false>(20), /* System.Int32 */ &f_InitialResendTimeMax = fields.get<false>(21), /* System.Int32 */ &f_TimePingInterval = fields.get<false>(22), /* System.Int32 */ &f_DisconnectTimeout = fields.get<false>(23), /* ExitGames.Client.Photon.ConnectionProtocol */ &f__TransportProtocol_k__BackingField = fields.get<false>(24), /* System.Int32 */ &f_mtu = fields.get<false>(26), /* System.Boolean */ &f__IsSendingOnlyAcks_k__BackingField = fields.get<false>(27), /* System.Boolean */ &f_RandomizeSequenceNumbers = fields.get<false>(29), /* System.Byte[] */ &f_RandomizedSequenceNumbers = fields.get<false>(30), /* ExitGames.Client.Photon.TrafficStats */ &f__TrafficStatsIncoming_k__BackingField = fields.get<false>(31), /* ExitGames.Client.Photon.TrafficStats */ &f__TrafficStatsOutgoing_k__BackingField = fields.get<false>(32), /* ExitGames.Client.Photon.TrafficStatsGameLevel */ &f__TrafficStatsGameLevel_k__BackingField = fields.get<false>(33), /* System.Diagnostics.Stopwatch */ &f_trafficStatsStopwatch = fields.get<false>(34), /* System.Boolean */ &f_trafficStatsEnabled = fields.get<false>(35), /* ExitGames.Client.Photon.PeerBase */ &f_peerBase = fields.get<false>(36), /* System.Object */ &f_SendOutgoingLockObject = fields.get<false>(37), /* System.Object */ &f_DispatchLockObject = fields.get<false>(38), /* System.Object */ &f_EnqueueLock = fields.get<false>(39), /* System.Byte[] */ &f_PayloadEncryptionSecret = fields.get<false>(40), /* System.Type */ &f_encryptorType = fields.get<false>(41), /* ExitGames.Client.Photon.Encryption.IPhotonEncryptor */ &f_Encryptor = fields.get<false>(42);

    inline static ::Tools::Il2Cpp::Metadata::array_method<36> methods;
    /* System.Byte get_ClientSdkIdShifted() */
    inline static auto& m_get_ClientSdkIdShifted = methods.get<false, false>(0);
    /* System.String get_ClientVersion() */
    inline static auto& m_get_ClientVersion = methods.get<false, false>(1);
    /* ExitGames.Client.Photon.SerializationProtocol get_SerializationProtocolType() */
    inline static auto& m_get_SerializationProtocolType = methods.get<false, false>(2);
    /* System.Type get_SocketImplementation() */
    inline static auto& m_get_SocketImplementation = methods.get<false, false>(3);
    /* System.Void set_SocketImplementation(System.Type value) */
    inline static auto& m_set_SocketImplementation = methods.get<false, false>(4);
    /* ExitGames.Client.Photon.IPhotonPeerListener get_Listener() */
    inline static auto& m_get_Listener = methods.get<false, false>(5);
    /* System.Void set_Listener(ExitGames.Client.Photon.IPhotonPeerListener value) */
    inline static auto& m_set_Listener = methods.get<false, false>(6);
    /* System.Boolean get_ReuseEventInstance() */
    inline static auto& m_get_ReuseEventInstance = methods.get<false, false>(7);
    /* System.Boolean get_EnableServerTracing() */
    inline static auto& m_get_EnableServerTracing = methods.get<false, false>(8);
    /* System.Byte get_QuickResendAttempts() */
    inline static auto& m_get_QuickResendAttempts = methods.get<false, false>(9);
    /* System.Boolean get_CrcEnabled() */
    inline static auto& m_get_CrcEnabled = methods.get<false, false>(10);
    /* System.Int32 get_ServerTimeInMilliSeconds() */
    inline static auto& m_get_ServerTimeInMilliSeconds = methods.get<false, false>(11);
    /* System.Int32 get_RoundTripTime() */
    inline static auto& m_get_RoundTripTime = methods.get<false, false>(12);
    /* ExitGames.Client.Photon.ConnectionProtocol get_TransportProtocol() */
    inline static auto& m_get_TransportProtocol = methods.get<false, false>(13);
    /* System.Void set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol value) */
    inline static auto& m_set_TransportProtocol = methods.get<false, false>(14);
    /* System.Int32 get_MaximumTransferUnit() */
    inline static auto& m_get_MaximumTransferUnit = methods.get<false, false>(15);
    /* System.Boolean get_IsSendingOnlyAcks() */
    inline static auto& m_get_IsSendingOnlyAcks = methods.get<false, false>(16);
    /* ExitGames.Client.Photon.TrafficStats get_TrafficStatsIncoming() */
    inline static auto& m_get_TrafficStatsIncoming = methods.get<false, false>(17);
    /* System.Void set_TrafficStatsIncoming(ExitGames.Client.Photon.TrafficStats value) */
    inline static auto& m_set_TrafficStatsIncoming = methods.get<false, false>(18);
    /* ExitGames.Client.Photon.TrafficStats get_TrafficStatsOutgoing() */
    inline static auto& m_get_TrafficStatsOutgoing = methods.get<false, false>(19);
    /* System.Void set_TrafficStatsOutgoing(ExitGames.Client.Photon.TrafficStats value) */
    inline static auto& m_set_TrafficStatsOutgoing = methods.get<false, false>(20);
    /* ExitGames.Client.Photon.TrafficStatsGameLevel get_TrafficStatsGameLevel() */
    inline static auto& m_get_TrafficStatsGameLevel = methods.get<false, false>(21);
    /* System.Void set_TrafficStatsGameLevel(ExitGames.Client.Photon.TrafficStatsGameLevel value) */
    inline static auto& m_set_TrafficStatsGameLevel = methods.get<false, false>(22);
    /* System.Boolean get_TrafficStatsEnabled() */
    inline static auto& m_get_TrafficStatsEnabled = methods.get<false, false>(23);
    /* System.Void InitializeTrafficStats() */
    inline static auto& m_InitializeTrafficStats = methods.get<false, false>(24);
    /* System.Void .ctor(ExitGames.Client.Photon.ConnectionProtocol protocolType) */
    inline static auto& m0__ctor = methods.get<false, false>(25);
    /* System.Void .ctor(ExitGames.Client.Photon.IPhotonPeerListener listener, ExitGames.Client.Photon.ConnectionProtocol protocolType) */
    inline static auto& m1__ctor = methods.get<false, false>(26);
    /* System.Boolean Connect(System.String serverAddress, System.String applicationName) */
    inline static auto& m0_Connect = methods.get<false, true>(27);
    /* System.Boolean Connect(System.String serverAddress, System.String applicationName, System.Object custom) */
    inline static auto& m1_Connect = methods.get<false, true>(28);
    /* System.Void CreatePeerBase() */
    inline static auto& m_CreatePeerBase = methods.get<false, false>(29);
    /* System.Void Disconnect() */
    inline static auto& m_Disconnect = methods.get<false, true>(30);
    /* System.Void Service() */
    inline static auto& m_Service = methods.get<false, true>(31);
    /* System.Boolean SendOutgoingCommands() */
    inline static auto& m_SendOutgoingCommands = methods.get<false, true>(32);
    /* System.Boolean DispatchIncomingCommands() */
    inline static auto& m_DispatchIncomingCommands = methods.get<false, true>(33);
    /* System.Boolean SendOperation(System.Byte operationCode, System.Collections.Generic.Dictionary`2<System.Byte, System.Object> operationParameters, ExitGames.Client.Photon.SendOptions sendOptions) */
    inline static auto& m_SendOperation = methods.get<false, true>(34);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(35);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct UE_Time {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<0> fields;

    inline static ::Tools::Il2Cpp::Metadata::array_method<15> methods;
    /* System.Single get_time() */
    inline static auto& m_get_time = methods.get<true, false>(0);
    /* System.Double get_timeAsDouble() */
    inline static auto& m_get_timeAsDouble = methods.get<true, false>(1);
    /* Unity.IntegerTime.RationalTime get_timeAsRational() */
    inline static auto& m_get_timeAsRational = methods.get<true, false>(2);
    /* System.Single get_timeSinceLevelLoad() */
    inline static auto& m_get_timeSinceLevelLoad = methods.get<true, false>(3);
    /* System.Single get_deltaTime() */
    inline static auto& m_get_deltaTime = methods.get<true, false>(4);
    /* System.Single get_fixedTime() */
    inline static auto& m_get_fixedTime = methods.get<true, false>(5);
    /* System.Single get_unscaledTime() */
    inline static auto& m_get_unscaledTime = methods.get<true, false>(6);
    /* System.Single get_unscaledDeltaTime() */
    inline static auto& m_get_unscaledDeltaTime = methods.get<true, false>(7);
    /* System.Single get_fixedDeltaTime() */
    inline static auto& m_get_fixedDeltaTime = methods.get<true, false>(8);
    /* System.Single get_smoothDeltaTime() */
    inline static auto& m_get_smoothDeltaTime = methods.get<true, false>(9);
    /* System.Single get_timeScale() */
    inline static auto& m_get_timeScale = methods.get<true, false>(10);
    /* System.Int32 get_frameCount() */
    inline static auto& m_get_frameCount = methods.get<true, false>(11);
    /* System.Single get_realtimeSinceStartup() */
    inline static auto& m_get_realtimeSinceStartup = methods.get<true, false>(12);
    /* System.Double get_realtimeSinceStartupAsDouble() */
    inline static auto& m_get_realtimeSinceStartupAsDouble = methods.get<true, false>(13);
    /* System.Void get_timeAsRational_Injected(out Unity.IntegerTime.RationalTime ret) */
    inline static auto& m_get_timeAsRational_Injected = methods.get<true, false>(14);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct BuildSystem_GameBuildSettings {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<0> fields;

    inline static ::Tools::Il2Cpp::Metadata::array_method<17> methods;
    /* System.String get_VersionString() */
    inline static auto& m_get_VersionString = methods.get<true, false>(0);
    /* System.String get_VersionStringNoBuild() */
    inline static auto& m_get_VersionStringNoBuild = methods.get<true, false>(1);
    /* System.Int32 get_VersionCode() */
    inline static auto& m_get_VersionCode = methods.get<true, false>(2);
    /* System.String get_ReleaseName() */
    inline static auto& m_get_ReleaseName = methods.get<true, false>(3);
    /* System.String get_BranchName() */
    inline static auto& m_get_BranchName = methods.get<true, false>(4);
    /* System.String get_BuildTime() */
    inline static auto& m_get_BuildTime = methods.get<true, false>(5);
    /* System.Boolean get_ShowDebugLogin() */
    inline static auto& m_get_ShowDebugLogin = methods.get<true, false>(6);
    /* System.String get_VersionGuid() */
    inline static auto& m_get_VersionGuid = methods.get<true, false>(7);
    /* System.Int32 get_LocalDiscCacheAssetVersion() */
    inline static auto& m_get_LocalDiscCacheAssetVersion = methods.get<true, false>(8);
    /* System.String get_UrlCacheAssetVersionArgument() */
    inline static auto& m_get_UrlCacheAssetVersionArgument = methods.get<true, false>(9);
    /* System.Int32 get_VersionMajor() */
    inline static auto& m_get_VersionMajor = methods.get<true, false>(10);
    /* System.Int32 get_VersionMinor() */
    inline static auto& m_get_VersionMinor = methods.get<true, false>(11);
    /* System.Int32 get_VersionMicro() */
    inline static auto& m_get_VersionMicro = methods.get<true, false>(12);
    /* System.Int32 get_VersionBuild() */
    inline static auto& m_get_VersionBuild = methods.get<true, false>(13);
    /* System.DateTime get_BuildTimeDateTime() */
    inline static auto& m_get_BuildTimeDateTime = methods.get<true, false>(14);
    /* System.String GetBuildInfoString() */
    inline static auto& m_GetBuildInfoString = methods.get<true, false>(15);
    /* System.Void SetStreamingAssetVersion(System.Int32 version) */
    inline static auto& m_SetStreamingAssetVersion = methods.get<true, false>(16);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct InteractionFlags {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<43> fields;
inline static auto /* InteractionFlags */ &f_None = fields.get<true>(1), /* InteractionFlags */ &f_Selectable = fields.get<true>(2), /* InteractionFlags */ &f_HasCubeModel = fields.get<true>(3), /* InteractionFlags */ &f_IsTerrain = fields.get<true>(4), /* InteractionFlags */ &f_DirectlySelectable = fields.get<true>(5), /* InteractionFlags */ &f_SelectionRequiresEditGroup = fields.get<true>(6), /* InteractionFlags */ &f_NotUserTransformable = fields.get<true>(7), /* InteractionFlags */ &f_DontPushGroupToSelectionStack = fields.get<true>(8), /* InteractionFlags */ &f_CanRotateX = fields.get<true>(9), /* InteractionFlags */ &f_CanRotateY = fields.get<true>(10), /* InteractionFlags */ &f_CanRotateZ = fields.get<true>(11), /* InteractionFlags */ &f_NotTranslatbleY = fields.get<true>(12), /* InteractionFlags */ &f_NotTranslatbleXZ = fields.get<true>(13), /* InteractionFlags */ &f_CanEdit = fields.get<true>(14), /* InteractionFlags */ &f_CanClone = fields.get<true>(15), /* InteractionFlags */ &f_CanAddToInventory = fields.get<true>(16), /* InteractionFlags */ &f_HasSettings = fields.get<true>(17), /* InteractionFlags */ &f_CanResetLogic = fields.get<true>(18), /* InteractionFlags */ &f_IsPreview = fields.get<true>(19), /* InteractionFlags */ &f_IsUsable = fields.get<true>(20), /* InteractionFlags */ &f_CantAddChildren = fields.get<true>(21), /* InteractionFlags */ &f_CanUseGameCoins = fields.get<true>(22), /* InteractionFlags */ &f_CanUseLevel = fields.get<true>(23), /* InteractionFlags */ &f_CanUseStars = fields.get<true>(24), /* InteractionFlags */ &f_TranslatbleXZ2D = fields.get<true>(25), /* InteractionFlags */ &f_Sounds = fields.get<true>(26), /* InteractionFlags */ &f_CanUseTeam = fields.get<true>(27), /* InteractionFlags */ &f_CanCloneRoot = fields.get<true>(28), /* InteractionFlags */ &f_GlobalSounds = fields.get<true>(29), /* InteractionFlags */ &f_CanUseGameRank = fields.get<true>(30), /* InteractionFlags */ &f_CanEarnGamePoints = fields.get<true>(31), /* InteractionFlags */ &f_CanEarnGamePointsMinor = fields.get<true>(32), /* InteractionFlags */ &f_CanEnterPlay = fields.get<true>(33), /* InteractionFlags */ &f_CanRespawn = fields.get<true>(34), /* InteractionFlags */ &f_CanUseRewardedAd = fields.get<true>(35), /* InteractionFlags */ &f_UnlockRotateX = fields.get<true>(36), /* InteractionFlags */ &f_UnlockRotateZ = fields.get<true>(37), /* InteractionFlags */ &f_LockRotateY = fields.get<true>(38), /* InteractionFlags */ &f_RemoveResetRotation = fields.get<true>(39), /* InteractionFlags */ &f_CanChangeScale = fields.get<true>(40), /* InteractionFlags */ &f_Info = fields.get<true>(41), /* InteractionFlags */ &f_CanEditMuzzle = fields.get<true>(42);
inline static auto /* System.Int64 */ &f_value__ = fields.get<false>(0);

    inline static ::Tools::Il2Cpp::Metadata::array_method<0> methods;

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVPlayer {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<18> fields;
inline static auto /* System.Int32 */ &f_checkpointWOID = fields.get<false>(0), /* MV.WorldObject.GamePassSystem.PlayerPlanetDataRemote */ &f_playerPlanetDataRemote = fields.get<false>(1), /* System.Int32 */ &f_level = fields.get<false>(2), /* System.Action */ &f_OnGoldAmountChange = fields.get<false>(3), /* UnityEngine.Events.UnityAction`1<System.Int32> */ &f_OnLevelChanged = fields.get<false>(4), /* UnityEngine.Events.UnityAction */ &f_OnCheckpointReached = fields.get<false>(5), /* UnityEngine.Events.UnityAction */ &f_OnPause = fields.get<false>(6), /* UnityEngine.Events.UnityAction */ &f_OnResume = fields.get<false>(7), /* UnityEngine.Events.UnityAction */ &f_OnObserve = fields.get<false>(8), /* System.Int32 */ &f__ProfileID_k__BackingField = fields.get<false>(9), /* System.Int32 */ &f__ActorNr_k__BackingField = fields.get<false>(10), /* System.String */ &f__RegionCode_k__BackingField = fields.get<false>(11), /* MV.Common.BuildTarget */ &f__BuildTarget_k__BackingField = fields.get<false>(12), /* MV.WorldObject.MetaData.UserProfileData */ &f__UserProfileData_k__BackingField = fields.get<false>(13), /* MV.WorldObject.Subscription.SubscriptionRulesWrapper */ &f__SubscriptionRules_k__BackingField = fields.get<false>(14), /* MV.Common.PlayerGameState */ &f_playerState = fields.get<false>(15), /* MV.WorldObject.MVTeam */ &f__Team_k__BackingField = fields.get<false>(16), /* SpawnRolesManager */ &f_spawnRolesManager = fields.get<false>(17);

    inline static ::Tools::Il2Cpp::Metadata::array_method<38> methods;
    /* System.Int32 get_ProfileID() */
    inline static auto& m_get_ProfileID = methods.get<false, false>(0);
    /* System.Void set_ProfileID(System.Int32 value) */
    inline static auto& m_set_ProfileID = methods.get<false, false>(1);
    /* System.Boolean get_IsTourist() */
    inline static auto& m_get_IsTourist = methods.get<false, false>(2);
    /* System.Int32 get_WoId() */
    inline static auto& m_get_WoId = methods.get<false, false>(3);
    /* System.Int32 get_ActorNr() */
    inline static auto& m_get_ActorNr = methods.get<false, false>(4);
    /* System.Void set_ActorNr(System.Int32 value) */
    inline static auto& m_set_ActorNr = methods.get<false, false>(5);
    /* System.String get_RegionCode() */
    inline static auto& m_get_RegionCode = methods.get<false, false>(6);
    /* System.Void set_RegionCode(System.String value) */
    inline static auto& m_set_RegionCode = methods.get<false, false>(7);
    /* MV.Common.BuildTarget get_BuildTarget() */
    inline static auto& m_get_BuildTarget = methods.get<false, false>(8);
    /* System.Void set_BuildTarget(MV.Common.BuildTarget value) */
    inline static auto& m_set_BuildTarget = methods.get<false, false>(9);
    /* MV.WorldObject.GamePassSystem.PlayerPlanetDataRemote get_PlayerPlanetDataRemote() */
    inline static auto& m_get_PlayerPlanetDataRemote = methods.get<false, false>(10);
    /* System.Void set_PlayerPlanetDataRemote(MV.WorldObject.GamePassSystem.PlayerPlanetDataRemote value) */
    inline static auto& m_set_PlayerPlanetDataRemote = methods.get<false, false>(11);
    /* MV.WorldObject.MetaData.UserProfileData get_UserProfileData() */
    inline static auto& m_get_UserProfileData = methods.get<false, false>(12);
    /* System.Void set_UserProfileData(MV.WorldObject.MetaData.UserProfileData value) */
    inline static auto& m_set_UserProfileData = methods.get<false, false>(13);
    /* MV.WorldObject.Subscription.SubscriptionRulesWrapper get_SubscriptionRules() */
    inline static auto& m_get_SubscriptionRules = methods.get<false, false>(14);
    /* System.Void set_SubscriptionRules(MV.WorldObject.Subscription.SubscriptionRulesWrapper value) */
    inline static auto& m_set_SubscriptionRules = methods.get<false, false>(15);
    /* System.Boolean get_IsSubscriber() */
    inline static auto& m_get_IsSubscriber = methods.get<false, false>(16);
    /* MV.Common.PlayerGameState get_PlayerState() */
    inline static auto& m_get_PlayerState = methods.get<false, false>(17);
    /* System.Void set_PlayerState(MV.Common.PlayerGameState value) */
    inline static auto& m_set_PlayerState = methods.get<false, false>(18);
    /* System.Boolean get_IsReady() */
    inline static auto& m_get_IsReady = methods.get<false, false>(19);
    /* System.Boolean get_IsPlayerStateInWorld() */
    inline static auto& m_get_IsPlayerStateInWorld = methods.get<false, false>(20);
    /* System.Int32 get_Level() */
    inline static auto& m_get_Level = methods.get<false, false>(21);
    /* System.Void set_Level(System.Int32 value) */
    inline static auto& m_set_Level = methods.get<false, false>(22);
    /* System.Void .ctor(System.Int32 actorNumber, System.Int32 profileID, System.String regionCode, MV.Common.BuildTarget buildTarget, MV.WorldObject.MetaData.UserProfileData userProfileData, System.Boolean isReady, System.Boolean observer) */
    inline static auto& m0__ctor = methods.get<false, false>(23);
    /* System.Void .ctor(System.Int32 actorNumber, System.Int32 profileID, System.Int32 level, System.String regionCode, MV.Common.BuildTarget buildTarget, MV.WorldObject.MetaData.UserProfileData userProfileData, System.Boolean isReady, System.Boolean observer, MV.WorldObject.GamePassSystem.PlayerPlanetDataRemote playerPlanetDataRemote) */
    inline static auto& m1__ctor = methods.get<false, false>(24);
    /* System.Void NotifyAvatarCreated(System.Int32 id) */
    inline static auto& m_NotifyAvatarCreated = methods.get<false, false>(25);
    /* System.Boolean IsOnSameTeam(MVPlayer other) */
    inline static auto& m0_IsOnSameTeam = methods.get<false, false>(26);
    /* System.Boolean IsOnSameTeam(MVWorldObjectClient wo) */
    inline static auto& m1_IsOnSameTeam = methods.get<false, false>(28);
    /* System.Boolean IsOnTeam(MV.WorldObject.MVTeam otherTeam) */
    inline static auto& m_IsOnTeam = methods.get<false, false>(27);
    /* System.Void SetCheckpoint(System.Int32 woid) */
    inline static auto& m_SetCheckpoint = methods.get<false, false>(29);
    /* MVCheckpoint GetCheckpoint() */
    inline static auto& m_GetCheckpoint = methods.get<false, false>(30);
    /* System.Void ResetCheckpoint() */
    inline static auto& m_ResetCheckpoint = methods.get<false, false>(31);
    /* MV.WorldObject.MVTeam get_Team() */
    inline static auto& m_get_Team = methods.get<false, false>(32);
    /* System.Void set_Team(MV.WorldObject.MVTeam value) */
    inline static auto& m_set_Team = methods.get<false, false>(33);
    /* System.Int32 GetGameStat(GameStatCounterType gameStatCounterType) */
    inline static auto& m_GetGameStat = methods.get<false, false>(34);
    /* System.Void SetReady() */
    inline static auto& m_SetReady = methods.get<false, false>(35);
    /* SpawnRolesManager get_SpawnRolesManager() */
    inline static auto& m_get_SpawnRolesManager = methods.get<false, false>(36);
    /* System.Void SetupSpawnRoleManager(ISpawnRoleChangeHandler spawnRoleChangeHandler, MV.WorldObject.SpawnRoles.SpawnRolesRuntimeData spawnRolesRuntimeData) */
    inline static auto& m_SetupSpawnRoleManager = methods.get<false, false>(37);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct Metadata_UserProfileData {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<6> fields;
inline static auto /* System.Boolean */ &f_IsAdmin = fields.get<false>(0), /* System.String */ &f_UserName = fields.get<false>(1), /* System.Int32 */ &f_Gold = fields.get<false>(2), /* System.Boolean */ &f_IsTourist = fields.get<false>(3), /* System.Boolean */ &f_IsUnderAge = fields.get<false>(4), /* MV.WorldObject.MetaData.SubscriptionData */ &f_SubscriptionData = fields.get<false>(5);

    inline static ::Tools::Il2Cpp::Metadata::array_method<4> methods;
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(0);
    /* MV.WorldObject.MetaData.UserProfileData CreateRegisteredProfileData(System.Boolean admin, System.String username, System.Int32 gold, System.Nullable`1<System.DateTime> age) */
    inline static auto& m_CreateRegisteredProfileData = methods.get<true, false>(1);
    /* System.Boolean CheckUnderAge(System.Boolean admin, System.Nullable`1<System.DateTime> age) */
    inline static auto& m_CheckUnderAge = methods.get<true, false>(2);
    /* MV.WorldObject.MetaData.UserProfileData GetTouristProfileData(System.String userName) */
    inline static auto& m_GetTouristProfileData = methods.get<true, false>(3);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct XPProgressData {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<5> fields;
inline static auto /* XPLevelLimits */ &f_xpLevelLimits = fields.get<false>(0), /* System.Int32 */ &f_playerCurrentXP = fields.get<false>(1), /* MV.Common.XPRewardType */ &f_xpId = fields.get<false>(2), /* System.Int32 */ &f_memberCount = fields.get<false>(3), /* System.Int32 */ &f_xpDelta = fields.get<false>(4);

    inline static ::Tools::Il2Cpp::Metadata::array_method<17> methods;
    /* System.Void set_XPLevelLimits(XPLevelLimits value) */
    inline static auto& m_set_XPLevelLimits = methods.get<false, false>(0);
    /* System.Int32 get_NextXP() */
    inline static auto& m_get_NextXP = methods.get<false, false>(1);
    /* System.Int32 get_PrevXP() */
    inline static auto& m_get_PrevXP = methods.get<false, false>(2);
    /* MV.Common.XPRewardType get_XpID() */
    inline static auto& m_get_XpID = methods.get<false, false>(3);
    /* System.Void set_XpID(MV.Common.XPRewardType value) */
    inline static auto& m_set_XpID = methods.get<false, false>(4);
    /* System.Int32 get_XP() */
    inline static auto& m_get_XP = methods.get<false, false>(5);
    /* System.Void set_XP(System.Int32 value) */
    inline static auto& m_set_XP = methods.get<false, false>(6);
    /* System.Int32 get_MemberCount() */
    inline static auto& m_get_MemberCount = methods.get<false, false>(7);
    /* System.Void set_MemberCount(System.Int32 value) */
    inline static auto& m_set_MemberCount = methods.get<false, false>(8);
    /* System.String get_XPString() */
    inline static auto& m_get_XPString = methods.get<false, false>(9);
    /* System.Int32 get_XPDelta() */
    inline static auto& m_get_XPDelta = methods.get<false, false>(10);
    /* System.Void set_XPDelta(System.Int32 value) */
    inline static auto& m_set_XPDelta = methods.get<false, false>(11);
    /* System.Int32 get_XpRel() */
    inline static auto& m_get_XpRel = methods.get<false, false>(12);
    /* System.Int32 get_XpNextRel() */
    inline static auto& m_get_XpNextRel = methods.get<false, false>(13);
    /* System.Boolean get_XPLimitExceeded() */
    inline static auto& m_get_XPLimitExceeded = methods.get<false, false>(14);
    /* System.Int32 get_Level() */
    inline static auto& m_get_Level = methods.get<false, false>(15);
    /* System.Void .ctor(System.Int32 playerCurrentXP, XPLevelLimits xpLevelLimits) */
    inline static auto& m__ctor = methods.get<false, false>(16);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVLocalPlayer {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<18> fields;
inline static auto /* System.Int32 */ &f_NrOfTimesDiedOffset = fields.get<true>(4), /* System.Single */ &f_respawnDuration = fields.get<true>(14), /* System.Single */ &f_reviveTimeout = fields.get<true>(16);
inline static auto /* MV.WorldObject.SpawnRoles.SpawnRolesMetaData */ &f_spawnRolesMetaData = fields.get<false>(0), /* MV.WorldObject.GamePassSystem.PlayerPlanetData */ &f_playerPlanetData = fields.get<false>(1), /* BoostController */ &f_boostController = fields.get<false>(2), /* System.Int32 */ &f_defaultBodyWoId = fields.get<false>(3), /* CodeStage.AntiCheat.ObscuredTypes.ObscuredInt */ &f_numberOfTimesDiedInRound = fields.get<false>(5), /* System.Action */ &f_OnInitializeLeveling = fields.get<false>(6), /* Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.Mediator.SpawnRoleDataMediator */ &f_spawnRoleDataMediator = fields.get<false>(7), /* WorldObjectTypes.Avatar.Local.WorldObjectUseRequirementTracker */ &f__WorldObjectUseRequirementTracker_k__BackingField = fields.get<false>(8), /* XPProgress */ &f_xpProgress = fields.get<false>(9), /* System.Int32 */ &f_planetOwnershipTypeID = fields.get<false>(10), /* System.Collections.Generic.List`1<System.Int32> */ &f_planetPermissionIDs = fields.get<false>(11), /* XPProgress+OnXPProgressDataDelegate */ &f_OnXPProgressData = fields.get<false>(12), /* System.Int32 */ &f_joinTime = fields.get<false>(13), /* System.Single */ &f_respawnTime = fields.get<false>(15), /* System.Int32 */ &f_oldLevel = fields.get<false>(17);

    inline static ::Tools::Il2Cpp::Metadata::array_method<44> methods;
    /* MVBody get_Body() */
    inline static auto& m_get_Body = methods.get<false, false>(0);
    /* System.Int32 get_DefaultSpawnRoleId() */
    inline static auto& m_get_DefaultSpawnRoleId = methods.get<false, false>(1);
    /* Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.Mediator.SpawnRoleDataMediator get_SpawnRoleDataMediator() */
    inline static auto& m_get_SpawnRoleDataMediator = methods.get<false, false>(2);
    /* MV.WorldObject.GamePassSystem.PlayerPlanetData get_PlayerPlanetData() */
    inline static auto& m_get_PlayerPlanetData = methods.get<false, false>(3);
    /* System.Void set_PlayerPlanetData(MV.WorldObject.GamePassSystem.PlayerPlanetData value) */
    inline static auto& m_set_PlayerPlanetData = methods.get<false, false>(4);
    /* BoostController get_BoostController() */
    inline static auto& m_get_BoostController = methods.get<false, false>(5);
    /* System.Void set_BoostController(BoostController value) */
    inline static auto& m_set_BoostController = methods.get<false, false>(6);
    /* WorldObjectTypes.Avatar.Local.WorldObjectUseRequirementTracker get_WorldObjectUseRequirementTracker() */
    inline static auto& m_get_WorldObjectUseRequirementTracker = methods.get<false, false>(7);
    /* System.Void set_WorldObjectUseRequirementTracker(WorldObjectTypes.Avatar.Local.WorldObjectUseRequirementTracker value) */
    inline static auto& m_set_WorldObjectUseRequirementTracker = methods.get<false, false>(8);
    /* System.Int32 get_DefaultBodyWoId() */
    inline static auto& m_get_DefaultBodyWoId = methods.get<false, false>(9);
    /* System.Int32 get_PlanetOwnershipTypeID() */
    inline static auto& m_get_PlanetOwnershipTypeID = methods.get<false, false>(10);
    /* System.Void set_PlanetOwnershipTypeID(System.Int32 value) */
    inline static auto& m_set_PlanetOwnershipTypeID = methods.get<false, false>(11);
    /* MV.Common.PlanetOwnershipType get_PlanetOwnership() */
    inline static auto& m_get_PlanetOwnership = methods.get<false, false>(12);
    /* System.Collections.Generic.List`1<MV.Common.PlanetPermissionType> get_PlanetPermissions() */
    inline static auto& m_get_PlanetPermissions = methods.get<false, false>(13);
    /* XPProgressData get_XPProgressData() */
    inline static auto& m_get_XPProgressData = methods.get<false, false>(14);
    /* System.Int32 get_JoinTime() */
    inline static auto& m_get_JoinTime = methods.get<false, false>(15);
    /* System.Boolean get_CanGetXPProgressData() */
    inline static auto& m_get_CanGetXPProgressData = methods.get<false, false>(16);
    /* System.Single get_RespawnDuration() */
    inline static auto& m_get_RespawnDuration = methods.get<false, false>(17);
    /* System.Single get_RespawnTime() */
    inline static auto& m_get_RespawnTime = methods.get<false, false>(18);
    /* System.Void set_RespawnTime(System.Single value) */
    inline static auto& m_set_RespawnTime = methods.get<false, false>(19);
    /* System.Single get_ReviveTimeout() */
    inline static auto& m_get_ReviveTimeout = methods.get<false, false>(20);
    /* System.Void .ctor(System.Int32 actorNumber, System.Int32 profileID, System.String regionCode, System.Int32 planetOwnershipTypeID, System.Collections.Generic.List`1<System.Int32> planetPermissionIDs, MV.WorldObject.MetaData.UserProfileData userProfileData) */
    inline static auto& m__ctor = methods.get<false, false>(21);
    /* System.Void SpawnRoleModeOnOnChange(MV.Common.SpawnRoleModeType value) */
    inline static auto& m_SpawnRoleModeOnOnChange = methods.get<false, false>(22);
    /* System.Void SetupPlayerWorldObjects(System.Int32 defaultBodyWoId, MV.WorldObject.SpawnRoles.SpawnRolesRuntimeData spawnRolesRuntimeData) */
    inline static auto& m_SetupPlayerWorldObjects = methods.get<false, false>(23);
    /* System.Void InitializeLeveling(InitialLevelData initialLevelData) */
    inline static auto& m_InitializeLeveling = methods.get<false, true>(24);
    /* System.Void SetSpawnRoleMetaData(MV.WorldObject.SpawnRoles.SpawnRolesMetaData spawnRolesMetaData) */
    inline static auto& m_SetSpawnRoleMetaData = methods.get<false, false>(25);
    /* System.Void SetActiveSpawnRole(System.Int32 existingAvatarWoId) */
    inline static auto& m_SetActiveSpawnRole = methods.get<false, false>(26);
    /* System.Void CreateSpawnRole(System.Int32 avatarSpawnerWoId) */
    inline static auto& m_CreateSpawnRole = methods.get<false, false>(27);
    /* System.Void CreateSpawnRoleFailed() */
    inline static auto& m_CreateSpawnRoleFailed = methods.get<false, false>(28);
    /* System.Void SuspendCurrentSpawnRole() */
    inline static auto& m_SuspendCurrentSpawnRole = methods.get<false, false>(29);
    /* System.Void UnSuspendCurrentSpawnRole() */
    inline static auto& m_UnSuspendCurrentSpawnRole = methods.get<false, false>(30);
    /* System.Void AddXp(System.Int32 currentPlayerXP, MV.Common.XPRewardType typeId, System.Int32 xpDelta, System.Int32 memberCount) */
    inline static auto& m_AddXp = methods.get<false, false>(31);
    /* System.Void SendXpProgressEvent(XPProgressData xpProgressData) */
    inline static auto& m_SendXpProgressEvent = methods.get<false, false>(32);
    /* System.Void OnLevelChangedLocal(System.Int32 level) */
    inline static auto& m_OnLevelChangedLocal = methods.get<false, false>(33);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<false, true>(34);
    /* MVAvatarLocal get_AvatarLocal() */
    inline static auto& m_get_AvatarLocal = methods.get<false, false>(35);
    /* System.Boolean get_IsAdmin() */
    inline static auto& m_get_IsAdmin = methods.get<false, false>(36);
    /* System.Boolean get_IsChatLocked() */
    inline static auto& m_get_IsChatLocked = methods.get<false, false>(37);
    /* System.Boolean IsPlaying() */
    inline static auto& m_IsPlaying = methods.get<false, false>(38);
    /* System.Void DiedInRound() */
    inline static auto& m_DiedInRound = methods.get<false, false>(39);
    /* System.Boolean HasDiedInRound() */
    inline static auto& m_HasDiedInRound = methods.get<false, false>(40);
    /* System.Void RoundEnded() */
    inline static auto& m_RoundEnded = methods.get<false, false>(41);
    /* System.Boolean IsAvatarDriving(MVVehicleBase vehicleBase) */
    inline static auto& m_IsAvatarDriving = methods.get<false, false>(42);
    /* System.Void SetLocalAvatarEarsState(System.Boolean activeState) */
    inline static auto& m_SetLocalAvatarEarsState = methods.get<false, false>(43);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct ContextMenu {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<7> fields;
inline static auto /* System.Single */ &f_Padding = fields.get<true>(0);
inline static auto /* System.Boolean */ &f_linkMenu = fields.get<false>(1), /* UnityEngine.Vector3 */ &f_worldPosition = fields.get<false>(2), /* System.Int32 */ &f_woID = fields.get<false>(3), /* ContextMenuButton */ &f_contextMenuButtonPrefab = fields.get<false>(4), /* ContextMenuButton */ &f_contextMenuLockedButtonPrefab = fields.get<false>(5), /* UnityEngine.RectTransform */ &f_rectTransform = fields.get<false>(6);

    inline static ::Tools::Il2Cpp::Metadata::array_method<11> methods;
    /* System.Void Initialize(System.Int32 woID, UnityEngine.Vector3 worldPosition) */
    inline static auto& m_Initialize = methods.get<false, false>(0);
    /* System.Void InitializeLink(System.Int32 linkID, UnityEngine.Vector3 worldPosition) */
    inline static auto& m_InitializeLink = methods.get<false, false>(1);
    /* System.Void PopWoDestroyed(System.Object obj, WorldObjectDestroyedEventArgs args) */
    inline static auto& m_PopWoDestroyed = methods.get<false, false>(2);
    /* System.Void Pop() */
    inline static auto& m_Pop = methods.get<false, false>(3);
    /* System.Void AddButton(System.String buttonText, UnityEngine.Events.UnityAction onClickCallback) */
    inline static auto& m_AddButton = methods.get<false, false>(4);
    /* System.Void AddLockedButton(System.String buttonText) */
    inline static auto& m_AddLockedButton = methods.get<false, false>(5);
    /* System.Void Update() */
    inline static auto& m_Update = methods.get<false, false>(6);
    /* System.Void SetToScreenPoint() */
    inline static auto& m_SetToScreenPoint = methods.get<false, false>(7);
    /* System.Void LateUpdate() */
    inline static auto& m_LateUpdate = methods.get<false, false>(8);
    /* System.Void OnDestroy() */
    inline static auto& m_OnDestroy = methods.get<false, false>(9);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(10);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct UE_Events_UnityAction {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<0> fields;

    inline static ::Tools::Il2Cpp::Metadata::array_method<2> methods;
    /* System.Void .ctor(System.Object object, System.IntPtr method) */
    inline static auto& m__ctor = methods.get<false, false>(0);
    /* System.Void Invoke() */
    inline static auto& m_Invoke = methods.get<false, true>(1);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct TM {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<7> fields;
inline static auto /* System.String */ &f_baseResourcesPath = fields.get<true>(5), /* TM */ &f_instance = fields.get<true>(6);
inline static auto /* GNU.Gettext.Catalog */ &f_catalog = fields.get<false>(0), /* System.String */ &f_fileName = fields.get<false>(1), /* System.Boolean */ &f_languageLoadingDone = fields.get<false>(2), /* System.Collections.Generic.List`1<System.Action> */ &f_languageChangedCallback = fields.get<false>(3), /* System.String */ &f_cultureName = fields.get<false>(4);

    inline static ::Tools::Il2Cpp::Metadata::array_method<13> methods;
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(0);
    /* TM get_Instance() */
    inline static auto& m_get_Instance = methods.get<true, false>(1);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<true, false>(2);
    /* System.String _(System.String key) */
    inline static auto& m__ = methods.get<true, false>(3);
    /* System.Void LanguageChanged(System.Action onLanguageChangedCallback) */
    inline static auto& m_LanguageChanged = methods.get<true, false>(4);
    /* System.String GetTextWithValues(System.String index, ValueInsert values) */
    inline static auto& m_GetTextWithValues = methods.get<true, false>(5);
    /* System.String[] GetTextAsArray(System.String toArrayString) */
    inline static auto& m_GetTextAsArray = methods.get<true, false>(6);
    /* System.Void LoadLanguage(System.String languageName) */
    inline static auto& m_LoadLanguage = methods.get<true, false>(7);
    /* System.String GetFilename(System.String languageName) */
    inline static auto& m_GetFilename = methods.get<true, false>(8);
    /* System.Void TryGetTextAsset(System.String fileName) */
    inline static auto& m_TryGetTextAsset = methods.get<true, false>(9);
    /* System.Void StreamingAssetCallback(UnityEngine.Networking.UnityWebRequest www) */
    inline static auto& m_StreamingAssetCallback = methods.get<true, false>(10);
    /* System.Void SetLanguageLoadingDone() */
    inline static auto& m_SetLanguageLoadingDone = methods.get<true, false>(11);
    /* System.String StripAssetStringFromFuncIdentifier(System.String key) */
    inline static auto& m_StripAssetStringFromFuncIdentifier = methods.get<true, false>(12);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct DesktopEditModeController {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<36> fields;
inline static auto /* System.Single */ &f_focusTimeInputSupressTimeOut = fields.get<true>(0);
inline static auto /* EditorWorldObjectCreation */ &f_editorWorldObjectCreation = fields.get<false>(1), /* UIStack */ &f_uiStack = fields.get<false>(2), /* InEditMenu */ &f_inEditMenuPrefab = fields.get<false>(3), /* UnityEngine.GameObject */ &f_stackBottom = fields.get<false>(4), /* UnityEngine.GameObject */ &f_playModeButton = fields.get<false>(5), /* ChatControllerUGUI */ &f_chatController = fields.get<false>(6), /* DrawPlaneControllerUUI */ &f_drawPlaneController = fields.get<false>(7), /* MaterialsControllerEditMode */ &f_materialsController = fields.get<false>(8), /* ContextMenuController */ &f_contextMenuController = fields.get<false>(9), /* GizmoController */ &f_gizmoController = fields.get<false>(10), /* EditModeRepositoryController */ &f_repositoryController = fields.get<false>(11), /* EditModeClientShopController */ &f_clientShopController = fields.get<false>(12), /* PlayerInventoryController */ &f_playerInventoryController = fields.get<false>(13), /* CreateCubeModelController */ &f_createCubeModelController = fields.get<false>(14), /* UnityEngine.RectTransform */ &f_notificationsManager = fields.get<false>(15), /* ChatBubbleController */ &f_chatBubbleController = fields.get<false>(16), /* FirstTimeSetupTerrainEditTutorial */ &f_firstTimeSetupTerrainEditTutorial = fields.get<false>(17), /* SetupCubeModelTutorialUI */ &f_setupCubeModelTutorialUI = fields.get<false>(18), /* GoldPurchasedTracker */ &f_goldPurchasedTracker = fields.get<false>(19), /* System.Single */ &f_focusTime = fields.get<false>(20), /* System.Boolean */ &f_enterPlayModeOnceGuard = fields.get<false>(21), /* System.Boolean */ &f_enterBuildModeOnceGuard = fields.get<false>(22), /* System.Boolean */ &f_isInPlayInEditMode = fields.get<false>(23), /* System.Boolean */ &f_gridSnap = fields.get<false>(24), /* System.Boolean */ &f_canEdit = fields.get<false>(25), /* System.Boolean */ &f_canEnterPlayMode = fields.get<false>(26), /* System.Boolean */ &f_storedRenderLogicState = fields.get<false>(27), /* System.Boolean */ &f_focusSuppressInput = fields.get<false>(28), /* System.Action`1<EditModeChangeArgs> */ &f_editModeChange = fields.get<false>(29), /* DesktopPlayModeController */ &f_desktopPlayModeController = fields.get<false>(30), /* PlayModeOnlyStateMachine */ &f_playModeOnlyStateMachine = fields.get<false>(31), /* InEditMenu */ &f_inEditMenu = fields.get<false>(32), /* FSMEntity */ &f_stateMachine = fields.get<false>(33), /* EditorStateMachine */ &f__EditModeStateMachine_k__BackingField = fields.get<false>(34), /* UGUI.Desktop.Scripts.EditMode.Inventories.PlayerShopInventoryRepository */ &f__PlayerShopInventoryRepository_k__BackingField = fields.get<false>(35);

    inline static ::Tools::Il2Cpp::Metadata::array_method<43> methods;
    /* EditorStateMachine get_EditModeStateMachine() */
    inline static auto& m_get_EditModeStateMachine = methods.get<false, false>(0);
    /* System.Void set_EditModeStateMachine(EditorStateMachine value) */
    inline static auto& m_set_EditModeStateMachine = methods.get<false, false>(1);
    /* System.Boolean get_IsInPlayInEditMode() */
    inline static auto& m_get_IsInPlayInEditMode = methods.get<false, true>(2);
    /* UGUI.Desktop.Scripts.EditMode.Inventories.PlayerShopInventoryRepository get_PlayerShopInventoryRepository() */
    inline static auto& m_get_PlayerShopInventoryRepository = methods.get<false, true>(3);
    /* System.Void set_PlayerShopInventoryRepository(UGUI.Desktop.Scripts.EditMode.Inventories.PlayerShopInventoryRepository value) */
    inline static auto& m_set_PlayerShopInventoryRepository = methods.get<false, true>(4);
    /* System.Void Awake() */
    inline static auto& m_Awake = methods.get<false, false>(5);
    /* System.Void OnDestroy() */
    inline static auto& m_OnDestroy = methods.get<false, false>(6);
    /* System.Void Start() */
    inline static auto& m_Start = methods.get<false, false>(7);
    /* System.Void OnStackChanged() */
    inline static auto& m_OnStackChanged = methods.get<false, false>(8);
    /* System.Void HandleFocusInputSuppress() */
    inline static auto& m_HandleFocusInputSuppress = methods.get<false, false>(9);
    /* System.Void Update() */
    inline static auto& m_Update = methods.get<false, false>(10);
    /* System.Void HandleInput() */
    inline static auto& m_HandleInput = methods.get<false, false>(11);
    /* System.Void OnApplicationFocus(System.Boolean focus) */
    inline static auto& m_OnApplicationFocus = methods.get<false, false>(12);
    /* System.Void RegisterPlayModeController(DesktopPlayModeController desktopPlayModeController) */
    inline static auto& m_RegisterPlayModeController = methods.get<false, false>(13);
    /* System.Boolean CanEdit() */
    inline static auto& m_CanEdit = methods.get<false, false>(14);
    /* System.Boolean CanEnterPlayMode() */
    inline static auto& m_CanEnterPlayMode = methods.get<false, false>(15);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(16);
    /* System.Void InitializeEditSystems() */
    inline static auto& m_InitializeEditSystems = methods.get<false, false>(17);
    /* System.Void InitializePlayModeSystems() */
    inline static auto& m_InitializePlayModeSystems = methods.get<false, false>(18);
    /* System.Void DestroyFirstTimeEditTutorials() */
    inline static auto& m_DestroyFirstTimeEditTutorials = methods.get<false, false>(19);
    /* System.Void HideUI() */
    inline static auto& m_HideUI = methods.get<false, false>(20);
    /* System.Void DisableEditMode() */
    inline static auto& m_DisableEditMode = methods.get<false, true>(21);
    /* System.Void EnterPlayMode() */
    inline static auto& m_EnterPlayMode = methods.get<false, true>(22);
    /* System.Void LeaveEditPlayMode() */
    inline static auto& m_LeaveEditPlayMode = methods.get<false, false>(23);
    /* System.Void EnterBuildMode() */
    inline static auto& m_EnterBuildMode = methods.get<false, true>(24);
    /* IState GetCurrentState() */
    inline static auto& m_GetCurrentState = methods.get<false, true>(25);
    /* System.Void SetState(EditorEvent editorEvent) */
    inline static auto& m0_SetState = methods.get<false, true>(26);
    /* System.Void SetState(PlayModeOnlyEvent playModeOnlyEvent) */
    inline static auto& m1_SetState = methods.get<false, false>(27);
    /* System.Void ClearStateStack() */
    inline static auto& m_ClearStateStack = methods.get<false, true>(28);
    /* System.Collections.IEnumerator HandleCursorVisible() */
    inline static auto& m_HandleCursorVisible = methods.get<false, false>(29);
    /* System.Boolean IsGridSnap() */
    inline static auto& m_IsGridSnap = methods.get<false, true>(30);
    /* System.Action`1<EditModeChangeArgs> get_EditModeChange() */
    inline static auto& m_get_EditModeChange = methods.get<false, true>(31);
    /* System.Void set_EditModeChange(System.Action`1<EditModeChangeArgs> value) */
    inline static auto& m_set_EditModeChange = methods.get<false, true>(32);
    /* System.Void Set(System.Boolean snap) */
    inline static auto& m_Set = methods.get<false, true>(33);
    /* System.Void RegisterShortcuts() */
    inline static auto& m_RegisterShortcuts = methods.get<false, false>(34);
    /* System.Void Respawn() */
    inline static auto& m_Respawn = methods.get<false, false>(35);
    /* System.Void MoveToSelectedObject() */
    inline static auto& m_MoveToSelectedObject = methods.get<false, false>(36);
    /* System.Void DeleteWoid(System.Int32 woid) */
    inline static auto& m_DeleteWoid = methods.get<false, true>(37);
    /* System.Void SetUIReady() */
    inline static auto& m_SetUIReady = methods.get<false, false>(38);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(39);
    /* System.Void <HandleInput>b__50_0(UnityEngine.EventSystems.IUIStack x, UnityEngine.EventSystems.BaseEventData y) */
    inline static auto& m__HandleInput_b__50_0 = methods.get<false, false>(40);
    /* System.Void <RegisterShortcuts>b__74_0(UnityEngine.EventSystems.IShortcutKeyRegister x, UnityEngine.EventSystems.BaseEventData y) */
    inline static auto& m__RegisterShortcuts_b__74_0 = methods.get<false, false>(41);
    /* System.Void <RegisterShortcuts>b__74_1(UnityEngine.EventSystems.IShortcutKeyRegister x, UnityEngine.EventSystems.BaseEventData y) */
    inline static auto& m__RegisterShortcuts_b__74_1 = methods.get<false, false>(42);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct EditorStateMachine {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<7> fields;
inline static auto /* SelectionController */ &f_selectionController = fields.get<false>(0), /* MainCameraManager */ &f_weCamera = fields.get<false>(1), /* CubeModelingStateMachine */ &f_cubeModelingStateMachine = fields.get<false>(2), /* MVNetworkSelector */ &f_networkSelector = fields.get<false>(3), /* UnityEngine.GameObject */ &f_gameObject = fields.get<false>(4), /* System.Boolean */ &f__GridMode_k__BackingField = fields.get<false>(5), /* System.Boolean */ &f__MuzzleEditMode_k__BackingField = fields.get<false>(6);

    inline static ::Tools::Il2Cpp::Metadata::array_method<32> methods;
    /* MVNetworkSelector get_NetworkSelector() */
    inline static auto& m_get_NetworkSelector = methods.get<false, false>(0);
    /* MainCameraManager get_MainCameraManager() */
    inline static auto& m_get_MainCameraManager = methods.get<false, false>(1);
    /* System.Boolean get_GridMode() */
    inline static auto& m_get_GridMode = methods.get<false, false>(2);
    /* System.Void set_GridMode(System.Boolean value) */
    inline static auto& m_set_GridMode = methods.get<false, false>(3);
    /* System.Boolean get_MuzzleEditMode() */
    inline static auto& m_get_MuzzleEditMode = methods.get<false, false>(4);
    /* System.Void set_MuzzleEditMode(System.Boolean value) */
    inline static auto& m_set_MuzzleEditMode = methods.get<false, false>(5);
    /* CubeModelingStateMachine get_CubeModelingStateMachine() */
    inline static auto& m_get_CubeModelingStateMachine = methods.get<false, false>(6);
    /* EditorEvent get_CurEvent() */
    inline static auto& m_get_CurEvent = methods.get<false, false>(7);
    /* EditorEvent get_PrevEvent() */
    inline static auto& m_get_PrevEvent = methods.get<false, false>(8);
    /* EditorEvent get_NextEvent() */
    inline static auto& m_get_NextEvent = methods.get<false, false>(9);
    /* ISelectionController get_SelectionController() */
    inline static auto& m_get_SelectionController = methods.get<false, false>(10);
    /* System.Collections.Generic.HashSet`1<System.Int32> get_SelectedIDs() */
    inline static auto& m_get_SelectedIDs = methods.get<false, false>(11);
    /* System.Collections.Generic.HashSet`1<MVWorldObjectClient> get_SelectedWOs() */
    inline static auto& m_get_SelectedWOs = methods.get<false, false>(12);
    /* MVWorldObjectClient get_SingleSelectedWO() */
    inline static auto& m_get_SingleSelectedWO = methods.get<false, false>(13);
    /* System.Int32 get_ParentGroupID() */
    inline static auto& m_get_ParentGroupID = methods.get<false, false>(14);
    /* MVGroup get_ParentGroup() */
    inline static auto& m_get_ParentGroup = methods.get<false, false>(15);
    /* System.Boolean get_ParentGroupIsRoot() */
    inline static auto& m_get_ParentGroupIsRoot = methods.get<false, false>(16);
    /* UnityEngine.GameObject get_GameObject() */
    inline static auto& m_get_GameObject = methods.get<false, false>(17);
    /* System.Void .ctor(UnityEngine.GameObject gameObject) */
    inline static auto& m0__ctor = methods.get<false, false>(18);
    /* System.Void .ctor(UnityEngine.GameObject gameObject, UnityEngine.Vector3 avatarEditModeCenterPos) */
    inline static auto& m1__ctor = methods.get<false, false>(19);
    /* System.Void .ctor(UnityEngine.GameObject gameObject, ContextMenuController contextMenuController, GizmoController gizmoController) */
    inline static auto& m2__ctor = methods.get<false, false>(20);
    /* System.Void EnterGroup(MVGroup group) */
    inline static auto& m_EnterGroup = methods.get<false, false>(21);
    /* System.Int32 ExitGroup() */
    inline static auto& m_ExitGroup = methods.get<false, false>(22);
    /* System.Int32 ExitGroupToRoot() */
    inline static auto& m_ExitGroupToRoot = methods.get<false, false>(23);
    /* WorldObjectClientRef Select(System.Boolean addToSelection, System.Int32 layerMask = -5) */
    inline static auto& m0_Select = methods.get<false, false>(24);
    /* WorldObjectClientRef Select(VoxelHit hit, System.Boolean addToSelection) */
    inline static auto& m1_Select = methods.get<false, false>(25);
    /* System.Void DeSelectWorldObject(MVWorldObjectClient wo) */
    inline static auto& m_DeSelectWorldObject = methods.get<false, false>(26);
    /* WorldObjectClientRef SelectWO(System.Int32 id, System.Boolean addToSelection, System.Boolean showVisuals = True) */
    inline static auto& m_SelectWO = methods.get<false, false>(27);
    /* System.Void DeSelectAll() */
    inline static auto& m_DeSelectAll = methods.get<false, false>(28);
    /* System.Void DeSelectAllExcept(System.Int32 id) */
    inline static auto& m_DeSelectAllExcept = methods.get<false, false>(29);
    /* System.Boolean IsSelected(System.Int32 id) */
    inline static auto& m_IsSelected = methods.get<false, false>(30);
    /* System.Void Update() */
    inline static auto& m_Update = methods.get<false, true>(31);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct RuntimePrototypeCubeModel {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<16> fields;
inline static auto /* System.Action`1<MV.WorldObject.IntVector> */ &f_OnChunkRebuilt = fields.get<false>(0), /* System.Nullable`1<System.Single> */ &f_PendingScaleUpdate = fields.get<false>(1), /* System.Action`1<System.Collections.Generic.HashSet`1<MV.WorldObject.IntVector>> */ &f_DirtyChunksRegenerated = fields.get<false>(2), /* System.Int32 */ &f_prototypeId = fields.get<false>(3), /* ILogger */ &f_logger = fields.get<false>(4), /* System.Collections.Generic.HashSet`1<MV.WorldObject.IntVector> */ &f_dirtyChunks = fields.get<false>(5), /* MeshGeneratePriority */ &f_meshGeneratePriority = fields.get<false>(6), /* System.Boolean */ &f_useMeshGeneratePrioritySystem = fields.get<false>(7), /* System.Int32 */ &f_chunkSize = fields.get<false>(8), /* PrototypeState */ &f_prototypeState = fields.get<false>(9), /* System.Collections.Generic.List`1<System.Byte> */ &f_pendingDeltaCubes = fields.get<false>(10), /* DeltaCubes */ &f_deltaCubes = fields.get<false>(11), /* System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, CubeModelChunk> */ &f_chunks = fields.get<false>(12), /* System.Collections.Generic.HashSet`1<System.Int32> */ &f_instances = fields.get<false>(13), /* System.Single */ &f__Scale_k__BackingField = fields.get<false>(14), /* System.Int32 */ &f__AuthorProfileID_k__BackingField = fields.get<false>(15);

    inline static ::Tools::Il2Cpp::Metadata::array_method<69> methods;
    /* System.Int32 get_ChunkSize() */
    inline static auto& m_get_ChunkSize = methods.get<false, false>(0);
    /* MeshGeneratePriority get_MeshGeneratePriority() */
    inline static auto& m_get_MeshGeneratePriority = methods.get<false, false>(1);
    /* System.Single get_Scale() */
    inline static auto& m_get_Scale = methods.get<false, false>(2);
    /* System.Void set_Scale(System.Single value) */
    inline static auto& m_set_Scale = methods.get<false, false>(3);
    /* System.Int32 get_PrototypeId() */
    inline static auto& m_get_PrototypeId = methods.get<false, false>(4);
    /* System.Void set_PrototypeId(System.Int32 value) */
    inline static auto& m_set_PrototypeId = methods.get<false, false>(5);
    /* System.Int32 get_AuthorProfileID() */
    inline static auto& m_get_AuthorProfileID = methods.get<false, false>(6);
    /* System.Void set_AuthorProfileID(System.Int32 value) */
    inline static auto& m_set_AuthorProfileID = methods.get<false, false>(7);
    /* System.Int32 get_InstancesCount() */
    inline static auto& m_get_InstancesCount = methods.get<false, false>(8);
    /* System.Int32 get_DeltaCubesCount() */
    inline static auto& m_get_DeltaCubesCount = methods.get<false, false>(9);
    /* DeltaCubes get_DeltaCubes() */
    inline static auto& m_get_DeltaCubes = methods.get<false, false>(10);
    /* System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, CubeModelChunk> get_Chunks() */
    inline static auto& m_get_Chunks = methods.get<false, false>(11);
    /* System.Collections.Generic.HashSet`1<System.Int32> get_Instances() */
    inline static auto& m_get_Instances = methods.get<false, false>(12);
    /* System.Boolean get_ContainsCubes() */
    inline static auto& m_get_ContainsCubes = methods.get<false, false>(13);
    /* System.Int32 get_CubeCount() */
    inline static auto& m_get_CubeCount = methods.get<false, false>(14);
    /* PrototypeState get_PrototypeState() */
    inline static auto& m_get_PrototypeState = methods.get<false, false>(15);
    /* System.Void set_PrototypeState(PrototypeState value) */
    inline static auto& m_set_PrototypeState = methods.get<false, false>(16);
    /* System.Void .ctor() */
    inline static auto& m0__ctor = methods.get<false, false>(17);
    /* System.Void .ctor(System.Int32 id, System.Int32 authorProfileId, System.Single scale, System.Byte[] data) */
    inline static auto& m1__ctor = methods.get<false, false>(18);
    /* System.Void .ctor(System.Int32 id, System.Int32 authorProfileId, System.Single scale, System.Byte[] data, System.Int32 chunkSize) */
    inline static auto& m2__ctor = methods.get<false, false>(19);
    /* System.Void Create(System.Int32 id, System.Int32 authorProfileId, System.Single scale, System.Byte[] data) */
    inline static auto& m_Create = methods.get<false, false>(20);
    /* System.Void FineGrainedTerrainOverrideChunkSize(System.Int32 size) */
    inline static auto& m_FineGrainedTerrainOverrideChunkSize = methods.get<false, false>(21);
    /* RuntimePrototypeCubeModel CloneGeometry(System.Boolean withDeltaCubes = False) */
    inline static auto& m_CloneGeometry = methods.get<false, false>(22);
    /* System.Void RemoveAllCubesLocal() */
    inline static auto& m_RemoveAllCubesLocal = methods.get<false, false>(23);
    /* System.Boolean MeshGenerateDirtyChunksAll(ref System.Int32 meshUpdates) */
    inline static auto& m_MeshGenerateDirtyChunksAll = methods.get<false, false>(24);
    /* System.Boolean MeshGenerateDirtyChunks(ref System.Int32 meshUpdates) */
    inline static auto& m_MeshGenerateDirtyChunks = methods.get<false, false>(25);
    /* System.Boolean MeshGenerateStatus(System.Collections.Generic.HashSet`1<MV.WorldObject.IntVector> generatedChunks) */
    inline static auto& m_MeshGenerateStatus = methods.get<false, false>(26);
    /* UnityEngine.GameObject GetMesh() */
    inline static auto& m_GetMesh = methods.get<false, false>(27);
    /* System.Void SetVisibility() */
    inline static auto& m_SetVisibility = methods.get<false, false>(28);
    /* UnityEngine.Vector3 GetRandomCubePos(UnityEngine.GameObject go) */
    inline static auto& m_GetRandomCubePos = methods.get<false, false>(29);
    /* Cube GetCube(MV.WorldObject.IntVector cubePos) */
    inline static auto& m_GetCube = methods.get<false, false>(30);
    /* System.Boolean AddCube(MV.WorldObject.IntVector pos, Cube cube) */
    inline static auto& m_AddCube = methods.get<false, false>(31);
    /* System.Void UnIndentCubeFace(MV.WorldObject.IntVector localPos, MV.WorldObject.Face face, Cube cube) */
    inline static auto& m_UnIndentCubeFace = methods.get<false, false>(32);
    /* System.Void SetMaterial(MV.WorldObject.IntVector iVector, MV.WorldObject.Face face, System.Byte materialId) */
    inline static auto& m_SetMaterial = methods.get<false, false>(33);
    /* System.Void ReplaceCube(MV.WorldObject.IntVector iVector, System.Byte materialId) */
    inline static auto& m_ReplaceCube = methods.get<false, false>(34);
    /* System.Void CornersChangedDone(MV.WorldObject.IntVector iVector, Cube cube) */
    inline static auto& m_CornersChangedDone = methods.get<false, false>(35);
    /* System.Void CornersChanged(MV.WorldObject.IntVector iVector, Cube cube) */
    inline static auto& m_CornersChanged = methods.get<false, false>(36);
    /* System.Boolean RemoveCube(MV.WorldObject.IntVector iVector) */
    inline static auto& m_RemoveCube = methods.get<false, false>(37);
    /* System.Void CreateInstance(MVCubeModelBase cm) */
    inline static auto& m_CreateInstance = methods.get<false, false>(38);
    /* System.Void RemoveInstance(System.Int32 id) */
    inline static auto& m_RemoveInstance = methods.get<false, false>(39);
    /* System.Void ResetSharedMaterials(MVCubeModelInstance cm) */
    inline static auto& m_ResetSharedMaterials = methods.get<false, false>(40);
    /* System.Void DecodeBytePacker(MV.WorldObject.BytePacker bp, RuntimePrototypeCubeModel rpcm) */
    inline static auto& m_DecodeBytePacker = methods.get<true, false>(41);
    /* System.Void UpdatePrototype(MV.WorldObject.BytePacker bp) */
    inline static auto& m_UpdatePrototype = methods.get<false, false>(42);
    /* System.Void UpdatePrototypeScale(System.Single scale) */
    inline static auto& m_UpdatePrototypeScale = methods.get<false, false>(43);
    /* System.Void AddCubeNetworkUpdate(MV.WorldObject.IntVector iVector, Cube cube, MeshGeneratePriority priority) */
    inline static auto& m_AddCubeNetworkUpdate = methods.get<false, false>(44);
    /* System.Void RemoveCubeNetworkUpdate(MV.WorldObject.IntVector iVector, MeshGeneratePriority priority) */
    inline static auto& m_RemoveCubeNetworkUpdate = methods.get<false, false>(45);
    /* System.Void HandleDelta() */
    inline static auto& m_HandleDelta = methods.get<false, false>(46);
    /* System.Void RebuildChunk(MV.WorldObject.IntVector chunkPos, System.Single scale) */
    inline static auto& m_RebuildChunk = methods.get<false, false>(47);
    /* System.Void RebuildPrototypeMesh() */
    inline static auto& m_RebuildPrototypeMesh = methods.get<false, false>(48);
    /* System.Void AddChunk(MV.WorldObject.IntVector chunkPos) */
    inline static auto& m_AddChunk = methods.get<false, false>(49);
    /* System.Void RemoveChunk(MV.WorldObject.IntVector chunkPos) */
    inline static auto& m_RemoveChunk = methods.get<false, false>(50);
    /* System.Void SetInstanceDataRef(MV.WorldObject.IntVector chunkPos, MVCubeModelBase cubeInstance) */
    inline static auto& m_SetInstanceDataRef = methods.get<false, false>(51);
    /* System.Void CreateFromBytePackage(MV.WorldObject.BytePacker bp) */
    inline static auto& m_CreateFromBytePackage = methods.get<false, false>(52);
    /* System.Void AddToChunk(MV.WorldObject.IntVector iVector, Cube cube, MeshGeneratePriority meshGeneratePriority, System.Boolean setVisibility = True) */
    inline static auto& m_AddToChunk = methods.get<false, false>(53);
    /* CubeModelChunk GetChunkFromCubePos(MV.WorldObject.IntVector cubePos) */
    inline static auto& m_GetChunkFromCubePos = methods.get<false, false>(54);
    /* System.Void RemoveFromChunk(MV.WorldObject.IntVector iVector, MeshGeneratePriority meshGeneratePriority) */
    inline static auto& m_RemoveFromChunk = methods.get<false, false>(55);
    /* System.Void AddToDirtyChunks(MV.WorldObject.IntVector chunkPos, MeshGeneratePriority meshGeneratePriority) */
    inline static auto& m_AddToDirtyChunks = methods.get<false, false>(56);
    /* MV.WorldObject.BytePacker GetBytePackerFromCubeDict(System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cube> cubesDict, System.Boolean addCount) */
    inline static auto& m_GetBytePackerFromCubeDict = methods.get<true, false>(57);
    /* System.Void CubePosToChunkPos(ref MV.WorldObject.IntVector cubePos) */
    inline static auto& m_CubePosToChunkPos = methods.get<false, false>(58);
    /* System.Void AddRefenceToChunk(ref MV.WorldObject.IntVector chunkPosition) */
    inline static auto& m_AddRefenceToChunk = methods.get<false, false>(59);
    /* System.Void RemoveRefenceFromChunk(ref MV.WorldObject.IntVector chunkPosition) */
    inline static auto& m_RemoveRefenceFromChunk = methods.get<false, false>(60);
    /* System.Int32 GetRefenceCountFromChunk(ref MV.WorldObject.IntVector chunkPosition) */
    inline static auto& m_GetRefenceCountFromChunk = methods.get<false, false>(61);
    /* System.Void AddReferenceToAllChunks() */
    inline static auto& m_AddReferenceToAllChunks = methods.get<false, false>(62);
    /* System.Void RemoveReferenceFromAllChunks() */
    inline static auto& m_RemoveReferenceFromAllChunks = methods.get<false, false>(63);
    /* System.Boolean CompareGeometry(RuntimePrototypeCubeModel rpcm) */
    inline static auto& m_CompareGeometry = methods.get<false, false>(64);
    /* System.Void CompareGeometryDetailed(RuntimePrototypeCubeModel rpcm, System.Boolean visibleCubesOnly, ref System.Int32 matchingCubeCount, ref System.Int32 investigatedCubeCount) */
    inline static auto& m_CompareGeometryDetailed = methods.get<false, false>(65);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<false, false>(66);
    /* System.Void RebuildChunks() */
    inline static auto& m_RebuildChunks = methods.get<false, false>(67);
    /* System.String Guids() */
    inline static auto& m_Guids = methods.get<false, false>(68);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct CubeModelChunk {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<11> fields;
inline static auto /* System.Boolean */ &f_UseAOShadows = fields.get<true>(0), /* FaceData[] */ &f_faceData = fields.get<true>(10);
inline static auto /* MV.WorldObject.IntVector */ &f_chunkPos = fields.get<false>(1), /* System.Collections.Generic.Dictionary`2<System.Guid, ChunkInstances+ChunkInstanceVariables> */ &f_instances = fields.get<false>(2), /* SharedMeshData */ &f_sharedMeshData = fields.get<false>(3), /* UnityEngine.Bounds */ &f_meshBounds = fields.get<false>(4), /* System.String */ &f_name = fields.get<false>(5), /* System.Int32 */ &f_cubeCount = fields.get<false>(6), /* System.Int32 */ &f_triangleCount = fields.get<false>(7), /* System.Int32 */ &f_activeInstances = fields.get<false>(8), /* System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cell> */ &f_cells = fields.get<false>(9);

    inline static ::Tools::Il2Cpp::Metadata::array_method<35> methods;
    /* System.Int32 get_TriangleCount() */
    inline static auto& m_get_TriangleCount = methods.get<false, false>(0);
    /* System.Int32 get_ActiveInstances() */
    inline static auto& m_get_ActiveInstances = methods.get<false, false>(1);
    /* System.Void set_ActiveInstances(System.Int32 value) */
    inline static auto& m_set_ActiveInstances = methods.get<false, false>(2);
    /* System.Int32 get_CubeCount() */
    inline static auto& m_get_CubeCount = methods.get<false, false>(3);
    /* System.Void .ctor(MV.WorldObject.IntVector iVector) */
    inline static auto& m__ctor = methods.get<false, false>(4);
    /* CubeModelChunk CloneGeometry(System.Single scale) */
    inline static auto& m_CloneGeometry = methods.get<false, false>(5);
    /* System.Boolean CompareGeometry(CubeModelChunk chunk) */
    inline static auto& m0_CompareGeometry = methods.get<false, false>(6);
    /* System.Boolean CompareGeometry(CubeModelChunk chunk, ref System.Int32 matchingCubeCount, ref System.Int32 investigatedCubeCount, System.Boolean visibleCubesOnly) */
    inline static auto& m1_CompareGeometry = methods.get<false, false>(7);
    /* Cube GetCube(MV.WorldObject.IntVector iVector) */
    inline static auto& m_GetCube = methods.get<false, false>(8);
    /* System.Boolean ContainsCube(MV.WorldObject.IntVector iVector) */
    inline static auto& m_ContainsCube = methods.get<false, false>(9);
    /* System.Void AddToChunk(MV.WorldObject.IntVector iVector, Cube cube, System.Boolean setVisibility = True) */
    inline static auto& m_AddToChunk = methods.get<false, false>(10);
    /* MV.WorldObject.IntVector GetFirstSolidCubePos() */
    inline static auto& m_GetFirstSolidCubePos = methods.get<false, false>(11);
    /* System.Void RemoveFromChunk(MV.WorldObject.IntVector iVector) */
    inline static auto& m_RemoveFromChunk = methods.get<false, false>(12);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<false, false>(13);
    /* System.String Guids() */
    inline static auto& m_Guids = methods.get<false, false>(14);
    /* System.Void RebuildChunk(System.Single scale) */
    inline static auto& m_RebuildChunk = methods.get<false, false>(15);
    /* SharedMeshData GetMeshData() */
    inline static auto& m_GetMeshData = methods.get<false, false>(16);
    /* System.Void EvaluateReferenceCount(System.Int32 oldReferenceCount, System.Int32 newReferenceCount) */
    inline static auto& m_EvaluateReferenceCount = methods.get<false, false>(17);
    /* System.Void RevokeSharedMeshOnInstances() */
    inline static auto& m_RevokeSharedMeshOnInstances = methods.get<false, false>(18);
    /* System.Void RestoreSharedMeshOnInstances() */
    inline static auto& m_RestoreSharedMeshOnInstances = methods.get<false, false>(19);
    /* System.Void UpdateInstances() */
    inline static auto& m_UpdateInstances = methods.get<false, false>(20);
    /* System.Void SetInstanceDataRef(MV.WorldObject.IntVector chunkPos, MVCubeModelBase cubeInstance) */
    inline static auto& m_SetInstanceDataRef = methods.get<false, false>(21);
    /* System.Void ChunkInstancesChanged(System.Object sender, ChunkInstancesChanged e) */
    inline static auto& m_ChunkInstancesChanged = methods.get<false, false>(22);
    /* System.Void SetCubeVisibilityWithNeighbors(MV.WorldObject.IntVector pos) */
    inline static auto& m_SetCubeVisibilityWithNeighbors = methods.get<false, false>(23);
    /* System.Void SetCubeVisibility(MV.WorldObject.IntVector iVector) */
    inline static auto& m0_SetCubeVisibility = methods.get<false, false>(24);
    /* System.Void SetCubeVisibility() */
    inline static auto& m1_SetCubeVisibility = methods.get<false, false>(25);
    /* System.Void SetCubeVisibility(System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cell> cells) */
    inline static auto& m2_SetCubeVisibility = methods.get<true, false>(26);
    /* System.Void SetCubeVisibility(System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cell> cells, MV.WorldObject.IntVector pos, Cube cube) */
    inline static auto& m3_SetCubeVisibility = methods.get<true, false>(27);
    /* System.Void SimpleFaceVisibilityTest(MV.WorldObject.FaceFlags faceFlagCube, MV.WorldObject.FaceFlags faceFlagOpposite, ref Cube cube, ref Cube neighborCube) */
    inline static auto& m_SimpleFaceVisibilityTest = methods.get<true, false>(28);
    /* System.Boolean AllFaceCornersIsTouchingCubeBorder(MV.WorldObject.Face face, ref UnityEngine.Vector3[] faceIndices) */
    inline static auto& m_AllFaceCornersIsTouchingCubeBorder = methods.get<true, false>(29);
    /* System.Void AdvancedFaceVisibilityTest(MV.WorldObject.FaceFlags faceFlagCube, MV.WorldObject.FaceFlags faceFlagOpposite, ref Cube cube, ref Cube neighborCube) */
    inline static auto& m_AdvancedFaceVisibilityTest = methods.get<true, false>(30);
    /* System.Void GetMeshBounds(ref UnityEngine.Bounds bounds, System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cell> cells) */
    inline static auto& m_GetMeshBounds = methods.get<true, false>(31);
    /* System.Int32 RebuildMesh(System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cell> cells, System.Single scale) */
    inline static auto& m_RebuildMesh = methods.get<true, false>(32);
    /* UnityEngine.Vector2[] GetFaceUvs(UnityEngine.Vector3[] faceVertices, MV.WorldObject.Face face, System.Single scale) */
    inline static auto& m_GetFaceUvs = methods.get<true, false>(33);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(34);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct Cell {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<2> fields;
inline static auto /* Cube */ &f_cube = fields.get<false>(0), /* System.Byte */ &f_lightValue = fields.get<false>(1);

    inline static ::Tools::Il2Cpp::Metadata::array_method<2> methods;
    /* System.Void .ctor(Cube cube) */
    inline static auto& m__ctor = methods.get<false, false>(0);
    /* Cell Clone() */
    inline static auto& m_Clone = methods.get<false, false>(1);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct IntVector {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<5> fields;
inline static auto /* MV.WorldObject.IntVector */ &f_One = fields.get<true>(3), /* MV.WorldObject.IntVector */ &f_Zero = fields.get<true>(4);
inline static auto /* System.Int16 */ &f_x = fields.get<false>(0), /* System.Int16 */ &f_y = fields.get<false>(1), /* System.Int16 */ &f_z = fields.get<false>(2);

    inline static ::Tools::Il2Cpp::Metadata::array_method<20> methods;
    /* System.Boolean Equals(System.Object obj) */
    inline static auto& m0_Equals = methods.get<false, true>(0);
    /* System.Boolean Equals(MV.WorldObject.IntVector iV) */
    inline static auto& m1_Equals = methods.get<false, true>(1);
    /* System.Int32 GetHashCode() */
    inline static auto& m_GetHashCode = methods.get<false, true>(2);
    /* System.Boolean op_Equality(MV.WorldObject.IntVector a, MV.WorldObject.IntVector b) */
    inline static auto& m_op_Equality = methods.get<true, false>(3);
    /* System.Boolean op_Inequality(MV.WorldObject.IntVector a, MV.WorldObject.IntVector b) */
    inline static auto& m_op_Inequality = methods.get<true, false>(4);
    /* System.Void .ctor(System.Int16 x, System.Int16 y, System.Int16 z) */
    inline static auto& m0__ctor = methods.get<false, false>(5);
    /* System.Void .ctor(System.Int32 x, System.Int32 y, System.Int32 z) */
    inline static auto& m1__ctor = methods.get<false, false>(6);
    /* System.Void .ctor(System.Single x, System.Single y, System.Single z) */
    inline static auto& m2__ctor = methods.get<false, false>(7);
    /* UnityEngine.Vector3 ToVector3() */
    inline static auto& m_ToVector3 = methods.get<false, false>(8);
    /* System.String ToString() */
    inline static auto& m_ToString = methods.get<false, true>(9);
    /* MV.WorldObject.IntVector op_UnaryNegation(MV.WorldObject.IntVector i1) */
    inline static auto& m_op_UnaryNegation = methods.get<true, false>(10);
    /* MV.WorldObject.IntVector op_Addition(MV.WorldObject.IntVector i1, MV.WorldObject.IntVector i2) */
    inline static auto& m_op_Addition = methods.get<true, false>(11);
    /* MV.WorldObject.IntVector op_Subtraction(MV.WorldObject.IntVector i1, MV.WorldObject.IntVector i2) */
    inline static auto& m_op_Subtraction = methods.get<true, false>(12);
    /* MV.WorldObject.IntVector op_Multiply(System.Int32 i, MV.WorldObject.IntVector iV) */
    inline static auto& m0_op_Multiply = methods.get<true, false>(13);
    /* MV.WorldObject.IntVector op_Multiply(MV.WorldObject.IntVector iV, System.Int32 i) */
    inline static auto& m1_op_Multiply = methods.get<true, false>(14);
    /* UnityEngine.Vector3 op_Multiply(MV.WorldObject.IntVector iV, UnityEngine.Vector3 vector3) */
    inline static auto& m2_op_Multiply = methods.get<true, false>(15);
    /* MV.WorldObject.IntVector op_Division(MV.WorldObject.IntVector iV, System.Int32 i) */
    inline static auto& m_op_Division = methods.get<true, false>(16);
    /* System.Int16 get_Item(System.Int32 key) */
    inline static auto& m_get_Item = methods.get<false, false>(17);
    /* System.Void set_Item(System.Int32 key, System.Int16 value) */
    inline static auto& m_set_Item = methods.get<false, false>(18);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(19);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct CubeBase {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<5> fields;
inline static auto /* System.Byte[] */ &f_identityByteCorners = fields.get<true>(1), /* MV.WorldObject.FaceFlags[] */ &f_faceFlagsArray = fields.get<true>(4);
inline static auto /* System.Byte */ &f_unIndentedSides = fields.get<false>(0), /* System.Byte[] */ &f_byteCorners = fields.get<false>(2), /* System.Byte[] */ &f_faceMaterials = fields.get<false>(3);

    inline static ::Tools::Il2Cpp::Metadata::array_method<24> methods;
    /* System.Byte[] get_ByteCorners() */
    inline static auto& m_get_ByteCorners = methods.get<false, false>(0);
    /* System.Byte[] get_FaceMaterials() */
    inline static auto& m_get_FaceMaterials = methods.get<false, false>(1);
    /* System.Byte[] get_IdentityByteCorners() */
    inline static auto& m_get_IdentityByteCorners = methods.get<true, false>(2);
    /* UnityEngine.Vector3[] get_IdentityCorners() */
    inline static auto& m_get_IdentityCorners = methods.get<true, false>(3);
    /* UnityEngine.Vector3[] get_Corners() */
    inline static auto& m_get_Corners = methods.get<false, false>(4);
    /* System.Void set_Corners(UnityEngine.Vector3[] value) */
    inline static auto& m_set_Corners = methods.get<false, false>(5);
    /* MV.WorldObject.FaceFlags[] get_FaceFlagsArray() */
    inline static auto& m_get_FaceFlagsArray = methods.get<true, false>(6);
    /* System.Void GetCorners(MV.WorldObject.CubeBase cube, ref UnityEngine.Vector3[] corners) */
    inline static auto& m_GetCorners = methods.get<true, false>(7);
    /* System.Byte GetMaterial(MV.WorldObject.CubeBase cube, MV.WorldObject.Face face) */
    inline static auto& m_GetMaterial = methods.get<true, false>(8);
    /* System.Byte get_UnIndentedSides() */
    inline static auto& m_get_UnIndentedSides = methods.get<false, false>(9);
    /* System.Void set_UnIndentedSides(System.Byte value) */
    inline static auto& m_set_UnIndentedSides = methods.get<false, false>(10);
    /* System.Void .ctor(System.Byte[] byteCorners, System.Byte[] faceMaterials) */
    inline static auto& m0__ctor = methods.get<false, false>(11);
    /* System.Void .ctor(MV.WorldObject.BytePacker bp, System.Byte byteFlags) */
    inline static auto& m1__ctor = methods.get<false, false>(12);
    /* System.Void .ctor(System.Byte material) */
    inline static auto& m2__ctor = methods.get<false, false>(13);
    /* System.Boolean Equals(System.Object obj) */
    inline static auto& m0_Equals = methods.get<false, true>(14);
    /* System.Boolean Equals(MV.WorldObject.CubeBase cube) */
    inline static auto& m1_Equals = methods.get<false, false>(15);
    /* System.Boolean op_Equality(MV.WorldObject.CubeBase a, MV.WorldObject.CubeBase b) */
    inline static auto& m_op_Equality = methods.get<true, false>(16);
    /* System.Boolean op_Inequality(MV.WorldObject.CubeBase a, MV.WorldObject.CubeBase b) */
    inline static auto& m_op_Inequality = methods.get<true, false>(17);
    /* System.Int32 GetHashCode() */
    inline static auto& m_GetHashCode = methods.get<false, true>(18);
    /* System.Void SetCubeFlags(MV.WorldObject.CubeBase cube) */
    inline static auto& m_SetCubeFlags = methods.get<true, false>(19);
    /* MV.WorldObject.Face FaceFlagToFace(MV.WorldObject.FaceFlags faceFlag) */
    inline static auto& m_FaceFlagToFace = methods.get<true, false>(20);
    /* MV.WorldObject.FaceFlags FaceToFaceFlag(MV.WorldObject.Face face) */
    inline static auto& m_FaceToFaceFlag = methods.get<true, false>(21);
    /* System.Void GetFace(ref UnityEngine.Vector3[] corners, ref UnityEngine.Vector3[] faceVertices, MV.WorldObject.Face face) */
    inline static auto& m_GetFace = methods.get<true, false>(22);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(23);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct Cube {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<2> fields;
inline static auto /* UnityEngine.Vector3[] */ &f_cornersBookkeeping = fields.get<true>(0);
inline static auto /* System.Byte */ &f_hiddenSides = fields.get<false>(1);

    inline static ::Tools::Il2Cpp::Metadata::array_method<66> methods;
    /* System.Byte get_HiddenSides() */
    inline static auto& m_get_HiddenSides = methods.get<false, false>(0);
    /* System.Void set_HiddenSides(System.Byte value) */
    inline static auto& m_set_HiddenSides = methods.get<false, false>(1);
    /* System.Void .ctor(System.Byte[] byteCorners, System.Byte[] faceMaterials) */
    inline static auto& m0__ctor = methods.get<false, false>(2);
    /* System.Void .ctor(MV.WorldObject.BytePacker bp, System.Byte byteFlags) */
    inline static auto& m1__ctor = methods.get<false, false>(3);
    /* Cube Clone() */
    inline static auto& m0_Clone = methods.get<false, false>(4);
    /* Cube Clone(Cube original) */
    inline static auto& m1_Clone = methods.get<true, false>(6);
    /* System.Boolean IsSideVisible(MV.WorldObject.FaceFlags face) */
    inline static auto& m_IsSideVisible = methods.get<false, false>(5);
    /* System.Byte[] CreateMaterialArray(System.Byte material) */
    inline static auto& m_CreateMaterialArray = methods.get<true, false>(7);
    /* UnityEngine.Vector3[] GetCorners(Cube cube, MV.WorldObject.Face face) */
    inline static auto& m0_GetCorners = methods.get<true, false>(8);
    /* System.Collections.Generic.List`1<UnityEngine.Vector3> GetCorners(System.Collections.Generic.List`1<UnityEngine.Vector2> clockwiseCorners, MV.WorldObject.Face direction) */
    inline static auto& m1_GetCorners = methods.get<true, false>(14);
    /* System.Collections.Generic.List`1<UnityEngine.Vector3> GetCorners(UnityEngine.Vector3[] counterClockwiseFace, MV.WorldObject.Face direction) */
    inline static auto& m2_GetCorners = methods.get<true, false>(41);
    /* System.Void SetMaterial(Cube cube, MV.WorldObject.Face face, System.Byte materialId) */
    inline static auto& m_SetMaterial = methods.get<true, false>(9);
    /* UnityEngine.Vector3[] GetVertices(Cube cube) */
    inline static auto& m0_GetVertices = methods.get<true, false>(10);
    /* UnityEngine.Vector3[] GetVertices(UnityEngine.Vector3[] corners) */
    inline static auto& m1_GetVertices = methods.get<true, false>(44);
    /* MV.WorldObject.IntVector GetCubePosAboveFace(MV.WorldObject.IntVector localPos, MV.WorldObject.Face face) */
    inline static auto& m_GetCubePosAboveFace = methods.get<true, false>(11);
    /* MV.WorldObject.Face GetFaceIdentityFromLocalDir(UnityEngine.Vector3 localDir) */
    inline static auto& m_GetFaceIdentityFromLocalDir = methods.get<true, false>(12);
    /* UnityEngine.Vector3 GetFaceAxis(MV.WorldObject.Face face) */
    inline static auto& m_GetFaceAxis = methods.get<true, false>(13);
    /* System.Void SetFace(Cube cube, MV.WorldObject.Face face, UnityEngine.Vector3[] faceVertices) */
    inline static auto& m0_SetFace = methods.get<true, false>(15);
    /* System.Void SetFace(ref UnityEngine.Vector3[] corners, MV.WorldObject.Face face, UnityEngine.Vector3[] faceVertices) */
    inline static auto& m1_SetFace = methods.get<true, false>(45);
    /* System.Boolean IsFaceBoxSideAligened(Cube cube, MV.WorldObject.Face face) */
    inline static auto& m_IsFaceBoxSideAligened = methods.get<true, false>(16);
    /* System.Void UnIndentFace(Cube cube, MV.WorldObject.Face face) */
    inline static auto& m_UnIndentFace = methods.get<true, false>(17);
    /* UnityEngine.Vector3[] GetVerticesWorldAxisAligned(Cube cube, MV.WorldObject.IntVector iVector) */
    inline static auto& m_GetVerticesWorldAxisAligned = methods.get<true, false>(18);
    /* System.Single CalculateAOLightCheap(MV.WorldObject.Face face, System.Int32 faceCornerIndex, System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cell> cells, MV.WorldObject.IntVector cubePos, System.Boolean inside) */
    inline static auto& m_CalculateAOLightCheap = methods.get<true, false>(19);
    /* System.Single CalculateAOLightExpensive(MV.WorldObject.Face face, System.Int32 faceCornerIndex, System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cell> cells, MV.WorldObject.IntVector cubePos, System.Int32[] cornerIndexToVertex, UnityEngine.Vector3 normal) */
    inline static auto& m_CalculateAOLightExpensive = methods.get<true, false>(20);
    /* FaceData[] GenerateCubeFaces(Cube cube, MV.WorldObject.IntVector cubePos, System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cell> cells) */
    inline static auto& m_GenerateCubeFaces = methods.get<true, false>(21);
    /* FaceData[] GenerateCubeFacesExpensive(Cube cube, MV.WorldObject.IntVector cubePos, System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cell> cells) */
    inline static auto& m_GenerateCubeFacesExpensive = methods.get<true, false>(22);
    /* FaceData[] GenerateCubeFacesCheap(Cube cube, MV.WorldObject.IntVector cubePos, System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cell> cells) */
    inline static auto& m_GenerateCubeFacesCheap = methods.get<true, false>(23);
    /* FaceData GenerateFaceDataExpensive(MV.WorldObject.Face face, MV.WorldObject.IntVector cubePos, System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cell> cells) */
    inline static auto& m_GenerateFaceDataExpensive = methods.get<true, false>(24);
    /* FaceData GenerateFaceDataCheap(MV.WorldObject.Face face, MV.WorldObject.IntVector cubePos, System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cell> cells, System.Func`2<System.Int32, System.Boolean> insideCheck) */
    inline static auto& m_GenerateFaceDataCheap = methods.get<true, false>(25);
    /* System.Single CalculateAOBleed(FaceData faceData, System.Int32 index) */
    inline static auto& m_CalculateAOBleed = methods.get<true, false>(26);
    /* MV.WorldObject.Face GetFace(UnityEngine.Vector3[] corners, UnityEngine.Vector3[] triangleVertices) */
    inline static auto& m0_GetFace = methods.get<true, false>(27);
    /* UnityEngine.Vector3[] GetFace(UnityEngine.Vector3[] corners, MV.WorldObject.Face face) */
    inline static auto& m1_GetFace = methods.get<true, false>(28);
    /* UnityEngine.Vector3[] GetFaceVerticesWorld(UnityEngine.GameObject gameObject, Cube cube, MV.WorldObject.Face face, MV.WorldObject.IntVector iVector) */
    inline static auto& m_GetFaceVerticesWorld = methods.get<true, false>(29);
    /* UnityEngine.Vector3[] GetEdge(Cube cube, MV.WorldObject.Face face, Edge edge) */
    inline static auto& m0_GetEdge = methods.get<true, false>(30);
    /* Edge GetEdge(UnityEngine.GameObject gameObject, Cube cube, MV.WorldObject.Face face, UnityEngine.Vector3 pos, MV.WorldObject.IntVector iVector) */
    inline static auto& m1_GetEdge = methods.get<true, false>(32);
    /* System.Void SetEdge(Cube cube, MV.WorldObject.Face face, Edge edge, UnityEngine.Vector3[] edgeVertices) */
    inline static auto& m0_SetEdge = methods.get<true, false>(31);
    /* System.Void SetEdge(ref UnityEngine.Vector3[] corners, MV.WorldObject.Face face, Edge edge, UnityEngine.Vector3[] edgeVertices) */
    inline static auto& m1_SetEdge = methods.get<true, false>(51);
    /* UnityEngine.Vector3[] GetEdgeVerticesWorld(UnityEngine.GameObject gameObject, Cube cube, MV.WorldObject.Face face, Edge edge, MV.WorldObject.IntVector iVector) */
    inline static auto& m_GetEdgeVerticesWorld = methods.get<true, false>(33);
    /* System.Boolean IsOutOfBound(UnityEngine.Vector3[] corners) */
    inline static auto& m_IsOutOfBound = methods.get<true, false>(34);
    /* System.Void MoveVertex(CubePickingInfo info, System.Single value, UnityEngine.Vector3 axis, System.Boolean edgeIndex0, System.Boolean edgeIndex1, ref CubeOutOfBoundState coob) */
    inline static auto& m_MoveVertex = methods.get<true, false>(35);
    /* System.Void MoveEdge(CubePickingInfo info, System.Single value, UnityEngine.Vector3 axis, ref CubeOutOfBoundState coob) */
    inline static auto& m_MoveEdge = methods.get<true, false>(36);
    /* System.Boolean FaceIsOutOfCubeBoundery(UnityEngine.Vector3[] faceVertices) */
    inline static auto& m_FaceIsOutOfCubeBoundery = methods.get<true, false>(37);
    /* System.Void AddDeltaToFace(ref UnityEngine.Vector3[] faceVertices, System.Single delta, UnityEngine.Vector3 axis) */
    inline static auto& m_AddDeltaToFace = methods.get<true, false>(38);
    /* System.Void ClampFace(ref UnityEngine.Vector3[] faceVertices) */
    inline static auto& m_ClampFace = methods.get<true, false>(39);
    /* System.Void MoveFace(CubePickingInfo info, System.Single delta, UnityEngine.Vector3 axis, ref CubeOutOfBoundState outOfBoundState) */
    inline static auto& m_MoveFace = methods.get<true, false>(40);
    /* UnityEngine.Vector3[] GetNormals(UnityEngine.Vector3[] corners, MV.WorldObject.Face face) */
    inline static auto& m_GetNormals = methods.get<true, false>(42);
    /* UnityEngine.Vector3 GetDefaultNormal(MV.WorldObject.Face face) */
    inline static auto& m_GetDefaultNormal = methods.get<true, false>(43);
    /* System.Collections.Generic.List`1<UnityEngine.Vector3> SquareCornersToCubeCorners(System.Collections.Generic.List`1<UnityEngine.Vector2> corners, MV.WorldObject.Face direction) */
    inline static auto& m_SquareCornersToCubeCorners = methods.get<true, false>(46);
    /* System.Collections.Generic.List`1<UnityEngine.Vector3> CreateCubeCornersFromTopFace(System.Collections.Generic.List`1<UnityEngine.Vector3> cubeCorners, MV.WorldObject.Face direction) */
    inline static auto& m_CreateCubeCornersFromTopFace = methods.get<true, false>(47);
    /* UnityEngine.Quaternion GetFromTopRotation(MV.WorldObject.Face direction) */
    inline static auto& m_GetFromTopRotation = methods.get<true, false>(48);
    /* UnityEngine.Vector3[] RotateFaceToTop(Cube cube, MV.WorldObject.Face direction) */
    inline static auto& m_RotateFaceToTop = methods.get<true, false>(49);
    /* UnityEngine.Quaternion GetToTopRotation(MV.WorldObject.Face direction) */
    inline static auto& m_GetToTopRotation = methods.get<true, false>(50);
    /* System.Boolean IsFaceCollapsed(UnityEngine.Vector3[] faceIndices) */
    inline static auto& m_IsFaceCollapsed = methods.get<true, false>(52);
    /* System.Boolean IsFaceValid(UnityEngine.Vector3[] faceIndices, MV.WorldObject.Face face) */
    inline static auto& m_IsFaceValid = methods.get<true, false>(53);
    /* System.Boolean IsCollapsed(UnityEngine.Vector3[] corners) */
    inline static auto& m_IsCollapsed = methods.get<true, false>(54);
    /* System.Boolean GetPlaneVertices(UnityEngine.Vector3[] corners, ref UnityEngine.Vector3[] planeVertices) */
    inline static auto& m_GetPlaneVertices = methods.get<true, false>(55);
    /* System.Boolean IsLegal(UnityEngine.Vector3[] corners) */
    inline static auto& m_IsLegal = methods.get<true, false>(56);
    /* System.Boolean IsCornersValid(UnityEngine.Vector3[] corners) */
    inline static auto& m_IsCornersValid = methods.get<true, false>(57);
    /* System.Void GetTriangle(System.Int32 triangleNr, UnityEngine.Vector3[] triangleVertices, UnityEngine.Vector3[] corners) */
    inline static auto& m_GetTriangle = methods.get<true, false>(58);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(59);
    /* System.Boolean <GenerateCubeFacesCheap>g__insideCheck|26_0(System.Int32 i) */
    inline static auto& m__GenerateCubeFacesCheap_g__insideCheck_26_0 = methods.get<true, false>(60);
    /* System.Boolean <GenerateCubeFacesCheap>g__insideCheck|26_1(System.Int32 i) */
    inline static auto& m__GenerateCubeFacesCheap_g__insideCheck_26_1 = methods.get<true, false>(61);
    /* System.Boolean <GenerateCubeFacesCheap>g__insideCheck|26_2(System.Int32 i) */
    inline static auto& m__GenerateCubeFacesCheap_g__insideCheck_26_2 = methods.get<true, false>(62);
    /* System.Boolean <GenerateCubeFacesCheap>g__insideCheck|26_3(System.Int32 i) */
    inline static auto& m__GenerateCubeFacesCheap_g__insideCheck_26_3 = methods.get<true, false>(63);
    /* System.Boolean <GenerateCubeFacesCheap>g__insideCheck|26_4(System.Int32 i) */
    inline static auto& m__GenerateCubeFacesCheap_g__insideCheck_26_4 = methods.get<true, false>(64);
    /* System.Boolean <GenerateCubeFacesCheap>g__insideCheck|26_5(System.Int32 i) */
    inline static auto& m__GenerateCubeFacesCheap_g__insideCheck_26_5 = methods.get<true, false>(65);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVAdvancedGhost {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<10> fields;
inline static auto /* System.Single */ &f_deathExplosionDamageValue = fields.get<true>(7), /* System.Single */ &f_deathExplosionRadius = fields.get<true>(8), /* System.Single */ &f_deathExplosionImpulse = fields.get<true>(9);
inline static auto /* AdvancedGhostBehaviour */ &f_advancedGhostBehaviour = fields.get<false>(0), /* ClientSideNPCInteractable */ &f_interactable = fields.get<false>(1), /* AdvancedGhostCubeModelWrapper */ &f_editableCubeModelWrapper = fields.get<false>(2), /* AdvancedGhostIcon */ &f_advancedGhostIcon = fields.get<false>(3), /* UnityEngine.GameObject */ &f_attachmentObject = fields.get<false>(4), /* AdvancedGhostObject */ &f_advGhostObject = fields.get<false>(5), /* ClientSideNPCInteractionHandler */ &f_interactionHandler = fields.get<false>(6);

    inline static ::Tools::Il2Cpp::Metadata::array_method<25> methods;
    /* MVWorldObjectDocumentationType get_DocumentationType() */
    inline static auto& m_get_DocumentationType = methods.get<false, true>(0);
    /* MV.WorldObject.MVTeam get_Team() */
    inline static auto& m_get_Team = methods.get<false, false>(1);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m__ctor = methods.get<false, false>(2);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(3);
    /* System.Void OnPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs) */
    inline static auto& m_OnPositionChanged = methods.get<false, false>(4);
    /* System.Void SetupEditorIcon(MVCubeModelBase cubeModelBody, System.Boolean enableCulling) */
    inline static auto& m_SetupEditorIcon = methods.get<false, false>(5);
    /* System.Void InitializeInventory() */
    inline static auto& m_InitializeInventory = methods.get<false, true>(6);
    /* System.Void SetGameMode(System.Boolean isPlayMode) */
    inline static auto& m_SetGameMode = methods.get<false, false>(7);
    /* System.Boolean OnEnterObject(EditorStateMachine e) */
    inline static auto& m_OnEnterObject = methods.get<false, true>(8);
    /* System.Boolean OnExitObject(EditorStateMachine e) */
    inline static auto& m_OnExitObject = methods.get<false, true>(9);
    /* UnityEngine.Vector3 get_WorldPivot() */
    inline static auto& m_get_WorldPivot = methods.get<false, true>(10);
    /* UnityEngine.Bounds GetLocalBounds(BoundsContext boundsContext) */
    inline static auto& m_GetLocalBounds = methods.get<false, true>(11);
    /* System.Void Select(UnityEngine.Color color) */
    inline static auto& m_Select = methods.get<false, true>(12);
    /* System.Void DeSelect() */
    inline static auto& m_DeSelect = methods.get<false, true>(13);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<false, true>(14);
    /* UnityEngine.Vector3 GetTargetPosition() */
    inline static auto& m_GetTargetPosition = methods.get<false, true>(15);
    /* System.Void ReceiveDamage(System.Single amount, MVPlayer damageDealer, MV.Common.PlayerKilledByType damageType) */
    inline static auto& m_ReceiveDamage = methods.get<false, false>(16);
    /* System.Void RecieveHealing(System.Single amount, MVPlayer damageDealer) */
    inline static auto& m_RecieveHealing = methods.get<false, false>(17);
    /* System.Void Reset() */
    inline static auto& m_Reset = methods.get<false, true>(18);
    /* System.Boolean IsOnSameTeam(MV.WorldObject.MVTeam team) */
    inline static auto& m_IsOnSameTeam = methods.get<false, true>(19);
    /* System.Void OnDataUpdate() */
    inline static auto& m_OnDataUpdate = methods.get<false, true>(20);
    /* System.Void SetTeam(MV.WorldObject.MVTeam team) */
    inline static auto& m_SetTeam = methods.get<false, false>(21);
    /* System.Void SetTeam_Edit(MV.WorldObject.MVTeam team) */
    inline static auto& m_SetTeam_Edit = methods.get<false, false>(22);
    /* System.Void GameStateChanged(UpdateCondition condition) */
    inline static auto& m_GameStateChanged = methods.get<false, true>(23);
    /* UnityEngine.GameObject GetHealRayAttachmentObject() */
    inline static auto& m_GetHealRayAttachmentObject = methods.get<false, true>(24);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct CollectTheItemCollectable {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<9> fields;
inline static auto /* System.Action */ &f_OnCollectTheItemDestroyed = fields.get<false>(0), /* CullingSubscriberBase */ &f_cullingSubscriberBase = fields.get<false>(1), /* MVCubeModelInstance */ &f_collectableModel = fields.get<false>(2), /* CollectTheItemCollectableInstance */ &f_collectableInstance = fields.get<false>(3), /* EditableCubeModelWrapper */ &f_editableCubeModelWrapper = fields.get<false>(4), /* CollectTheItem */ &f_controller = fields.get<false>(5), /* ObscuredIntVector */ &f_minBounds = fields.get<false>(6), /* ObscuredIntVector */ &f_maxBounds = fields.get<false>(7), /* CodeStage.AntiCheat.ObscuredTypes.ObscuredInt */ &f_minCubes = fields.get<false>(8);

    inline static ::Tools::Il2Cpp::Metadata::array_method<15> methods;
    /* System.Boolean get_HasArrowIndicator() */
    inline static auto& m_get_HasArrowIndicator = methods.get<false, false>(0);
    /* System.Boolean get_HasDropOff() */
    inline static auto& m_get_HasDropOff = methods.get<false, false>(1);
    /* System.Int32 get_CollectableModelId() */
    inline static auto& m_get_CollectableModelId = methods.get<false, false>(2);
    /* System.Int32 get_DropOffId() */
    inline static auto& m_get_DropOffId = methods.get<false, false>(3);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m__ctor = methods.get<false, false>(4);
    /* System.Void InitializeWithController(CollectTheItem controller) */
    inline static auto& m_InitializeWithController = methods.get<false, false>(5);
    /* System.Void SetupCollectableModel() */
    inline static auto& m_SetupCollectableModel = methods.get<false, false>(6);
    /* System.Void OnPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs) */
    inline static auto& m_OnPositionChanged = methods.get<false, false>(7);
    /* System.Collections.Generic.Dictionary`2<System.String, System.Object> GetItemData() */
    inline static auto& m_GetItemData = methods.get<false, false>(8);
    /* System.Void CreateCollectableInstance(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation) */
    inline static auto& m_CreateCollectableInstance = methods.get<false, false>(9);
    /* System.Boolean OnExitObject(EditorStateMachine e) */
    inline static auto& m_OnExitObject = methods.get<false, true>(10);
    /* System.Boolean OnEnterObject(EditorStateMachine e) */
    inline static auto& m_OnEnterObject = methods.get<false, true>(11);
    /* System.Void OnStateChanged(UnityEngine.CullingGroupEvent cullingEvent) */
    inline static auto& m_OnStateChanged = methods.get<false, false>(12);
    /* System.Boolean Delete(MVWorldObjectClientManager worldObjectClientManager, ref System.String errorText) */
    inline static auto& m_Delete = methods.get<false, true>(13);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<false, true>(14);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct CollectTheItemDropOff {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<13> fields;
inline static auto /* System.String */ &f_isActiveKey = fields.get<true>(0), /* System.String */ &f_doOnce = fields.get<true>(1);
inline static auto /* System.Action`1<System.Boolean> */ &f_OnPickupCollected = fields.get<false>(2), /* EditableCubeModelWrapper */ &f_editableCubeModelWrapper = fields.get<false>(3), /* CollectTheItemDropOffObject */ &f_triggerObject = fields.get<false>(4), /* CullingSubscriberBase */ &f_cullingSubscriberBase = fields.get<false>(5), /* CollectTheItem */ &f_controller = fields.get<false>(6), /* ObscuredIntVector */ &f_minBounds = fields.get<false>(7), /* ObscuredIntVector */ &f_maxBounds = fields.get<false>(8), /* CodeStage.AntiCheat.ObscuredTypes.ObscuredInt */ &f_minCubes = fields.get<false>(9), /* OutputSignalTransmitter */ &f_outputSignalTransmitter = fields.get<false>(10), /* System.Boolean */ &f_sendSignal = fields.get<false>(11), /* IInputSignalReceiver */ &f__InputSignalReceiver_k__BackingField = fields.get<false>(12);

    inline static ::Tools::Il2Cpp::Metadata::array_method<26> methods;
    /* UnityEngine.Vector3 get_OutputConnectorOffset() */
    inline static auto& m_get_OutputConnectorOffset = methods.get<false, true>(0);
    /* System.Boolean get_HasOutputConnector() */
    inline static auto& m_get_HasOutputConnector = methods.get<false, true>(1);
    /* System.Boolean get_HasInputConnector() */
    inline static auto& m_get_HasInputConnector = methods.get<false, true>(2);
    /* IInputSignalReceiver get_InputSignalReceiver() */
    inline static auto& m_get_InputSignalReceiver = methods.get<false, true>(3);
    /* System.Void set_InputSignalReceiver(IInputSignalReceiver value) */
    inline static auto& m_set_InputSignalReceiver = methods.get<false, false>(4);
    /* System.Boolean get_IsActive() */
    inline static auto& m_get_IsActive = methods.get<false, false>(5);
    /* System.Boolean get_DoOnce() */
    inline static auto& m_get_DoOnce = methods.get<false, false>(6);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m__ctor = methods.get<false, false>(7);
    /* System.Void InitializeWithController(CollectTheItem controller) */
    inline static auto& m_InitializeWithController = methods.get<false, false>(8);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(9);
    /* System.Void SignalCallback(System.Boolean b, System.Boolean wasHot, LogicObjectManager logicObjectManager) */
    inline static auto& m_SignalCallback = methods.get<false, false>(10);
    /* System.Void OnChunkEditReset(System.Object sender, EditStateEventArgs args) */
    inline static auto& m_OnChunkEditReset = methods.get<false, false>(11);
    /* System.Void ReInitializeVisuals() */
    inline static auto& m_ReInitializeVisuals = methods.get<false, false>(12);
    /* System.Void OnEditModeChange(EditModeChangeArgs arg) */
    inline static auto& m_OnEditModeChange = methods.get<false, false>(13);
    /* System.Void OnCollected(System.Boolean shouldbeActiveOnCollect) */
    inline static auto& m_OnCollected = methods.get<false, false>(14);
    /* System.Void Reset() */
    inline static auto& m_Reset = methods.get<false, true>(15);
    /* System.Void SetupCulling() */
    inline static auto& m_SetupCulling = methods.get<false, false>(16);
    /* System.Void OnPositionChanged(MVWorldObjectClient arg0, PositionChangedEventArgs positionChangedEventArgs) */
    inline static auto& m_OnPositionChanged = methods.get<false, false>(17);
    /* System.Void OnStateChanged(UnityEngine.CullingGroupEvent cullingEvent) */
    inline static auto& m_OnStateChanged = methods.get<false, false>(18);
    /* System.Void OnDataUpdate() */
    inline static auto& m_OnDataUpdate = methods.get<false, true>(19);
    /* System.Void DropWoId(System.Int32 instigatorWoID) */
    inline static auto& m_DropWoId = methods.get<false, false>(20);
    /* System.Void TriggerBoxEvents_TriggerEnter(System.Object sender, TriggerEventArgs e) */
    inline static auto& m_TriggerBoxEvents_TriggerEnter = methods.get<false, false>(21);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<false, true>(22);
    /* System.Boolean OnExitObject(EditorStateMachine e) */
    inline static auto& m_OnExitObject = methods.get<false, true>(23);
    /* System.Boolean OnEnterObject(EditorStateMachine e) */
    inline static auto& m_OnEnterObject = methods.get<false, true>(24);
    /* System.Boolean Delete(MVWorldObjectClientManager worldObjectClientManager, ref System.String errorText) */
    inline static auto& m_Delete = methods.get<false, true>(25);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVJetPack {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<8> fields;
inline static auto /* CullingSubscriberDynamic */ &f_cullingSubscriberDynamic = fields.get<false>(0), /* EditableCubeModelWrapper */ &f_editableCubeModelWrapper = fields.get<false>(1), /* MVRuntimeDataVariableClampedFloat */ &f_shield = fields.get<false>(2), /* MVRuntimeDataVariableClampedFloat */ &f_Health = fields.get<false>(3), /* MVRuntimeDataVariable */ &f_Modifiers = fields.get<false>(4), /* MVRuntimeDataVariable */ &f_JetMode = fields.get<false>(5), /* WorldObjectTypes.JetPack.JetPackParameters */ &f_jetPackParameters = fields.get<false>(6), /* MVJetPack+JetPackType */ &f_jetPackType = fields.get<false>(7);

    inline static ::Tools::Il2Cpp::Metadata::array_method<17> methods;
    /* MVWorldObjectDocumentationType get_DocumentationType() */
    inline static auto& m_get_DocumentationType = methods.get<false, true>(0);
    /* System.Void set_Shield(MVRuntimeDataVariableClampedFloat value) */
    inline static auto& m_set_Shield = methods.get<false, false>(1);
    /* MVRuntimeDataVariableClampedFloat get_Shield() */
    inline static auto& m_get_Shield = methods.get<false, false>(2);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m__ctor = methods.get<false, false>(3);
    /* WorldObjectTypes.VehicleEnergy.VehicleEnergyContainerConfig SetupVehicleEnergyContainerConfig() */
    inline static auto& m_SetupVehicleEnergyContainerConfig = methods.get<false, true>(4);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(5);
    /* System.Void InitializeInventory() */
    inline static auto& m_InitializeInventory = methods.get<false, true>(6);
    /* System.Boolean OnEnterObject(EditorStateMachine e) */
    inline static auto& m_OnEnterObject = methods.get<false, true>(7);
    /* System.Boolean OnExitObject(EditorStateMachine e) */
    inline static auto& m_OnExitObject = methods.get<false, true>(8);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<false, true>(9);
    /* System.Boolean CompareWithKoGaMaPackage(MVWorldObjectClient wo, KoGaMaPackageClient koGaMaPackageClient, ref System.Int32 insertedByProfileId) */
    inline static auto& m_CompareWithKoGaMaPackage = methods.get<false, true>(10);
    /* System.Void VehicleEntered(MVAvatar vehicleUser, System.Int32 seatID) */
    inline static auto& m_VehicleEntered = methods.get<false, true>(11);
    /* MVVehicleBase+LocalObjectsBase CreateLocalObjects(System.Int32 seatID, MVAvatarLocal vehicleUser) */
    inline static auto& m_CreateLocalObjects = methods.get<false, true>(12);
    /* UnityEngine.Bounds GetLocalBounds(BoundsContext boundsContext) */
    inline static auto& m_GetLocalBounds = methods.get<false, true>(13);
    /* System.Void OnIsDeadChange(System.Object isDead) */
    inline static auto& m_OnIsDeadChange = methods.get<false, false>(14);
    /* MVJetPack+JetPackType GetJetPackType(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data) */
    inline static auto& m_GetJetPackType = methods.get<true, false>(15);
    /* WorldObjectTypes.VehiclesBase.Shared.VehicleBaseObject GetPickupPrefabName(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data) */
    inline static auto& m_GetPickupPrefabName = methods.get<true, false>(16);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVSimpleOneSeatVehicle {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<8> fields;
inline static auto /* MVRuntimeDataVariableClampedFloat */ &f_Health = fields.get<false>(0), /* MVRuntimeDataVariable */ &f_Modifiers = fields.get<false>(1), /* MVRuntimeDataVariable */ &f_CurrentItem = fields.get<false>(2), /* MVRuntimeDataVariable */ &f_IsFiring = fields.get<false>(3), /* MVRuntimeDataVariableClampedFloat */ &f_shield = fields.get<false>(4), /* EditableCubeModelWrapper */ &f_editableCubeModelWrapper = fields.get<false>(5), /* System.Single */ &f_maxHealth = fields.get<false>(6), /* System.Single */ &f_previousHealth = fields.get<false>(7);

    inline static ::Tools::Il2Cpp::Metadata::array_method<10> methods;
    /* System.Void set_Shield(MVRuntimeDataVariableClampedFloat value) */
    inline static auto& m_set_Shield = methods.get<false, false>(0);
    /* MVRuntimeDataVariableClampedFloat get_Shield() */
    inline static auto& m_get_Shield = methods.get<false, false>(1);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, WorldObjectTypes.VehiclesBase.Shared.VehicleBaseObject _vehiclePrefab, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m__ctor = methods.get<false, false>(2);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(3);
    /* System.Void Select(UnityEngine.Color color) */
    inline static auto& m_Select = methods.get<false, true>(4);
    /* System.Void DeSelect() */
    inline static auto& m_DeSelect = methods.get<false, true>(5);
    /* System.Boolean OnEnterObject(EditorStateMachine e) */
    inline static auto& m_OnEnterObject = methods.get<false, true>(6);
    /* System.Boolean OnExitObject(EditorStateMachine e) */
    inline static auto& m_OnExitObject = methods.get<false, true>(7);
    /* System.Collections.Generic.Dictionary`2<System.Object, System.Object> GetCurrentItemState() */
    inline static auto& m_GetCurrentItemState = methods.get<false, true>(8);
    /* System.Void SetCurrentItemState(System.Collections.Generic.Dictionary`2<System.Object, System.Object> aNewState) */
    inline static auto& m_SetCurrentItemState = methods.get<false, true>(9);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVDoorBlueprint {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<3> fields;
inline static auto /* WorldObjectTypes.MVDoor.MVDoor */ &f_doorLogic = fields.get<false>(0), /* EditableCubeModelWrapper */ &f_editableCubeModelWrapper = fields.get<false>(1), /* MVCubeModelInstance */ &f_editableCubeModel = fields.get<false>(2);

    inline static ::Tools::Il2Cpp::Metadata::array_method<11> methods;
    /* MVWorldObjectDocumentationType get_DocumentationType() */
    inline static auto& m_get_DocumentationType = methods.get<false, true>(0);
    /* WorldObjectTypes.MVDoor.MVDoor get_DoorLogic() */
    inline static auto& m_get_DoorLogic = methods.get<false, false>(1);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m__ctor = methods.get<false, false>(2);
    /* System.Void InitializeInventory() */
    inline static auto& m_InitializeInventory = methods.get<false, true>(3);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(4);
    /* System.Void SetCubeSize() */
    inline static auto& m_SetCubeSize = methods.get<false, false>(5);
    /* System.Void OnDataUpdate() */
    inline static auto& m_OnDataUpdate = methods.get<false, true>(6);
    /* System.Void Select(UnityEngine.Color color) */
    inline static auto& m_Select = methods.get<false, true>(7);
    /* System.Void DeSelect() */
    inline static auto& m_DeSelect = methods.get<false, true>(8);
    /* System.Boolean OnEnterObject(EditorStateMachine e) */
    inline static auto& m_OnEnterObject = methods.get<false, true>(9);
    /* System.Boolean OnExitObject(EditorStateMachine e) */
    inline static auto& m_OnExitObject = methods.get<false, true>(10);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVVehicleEnergy {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<14> fields;
inline static auto /* System.String */ &f_DefaultName = fields.get<true>(0), /* System.Int32 */ &f_DefaultSpawnOption = fields.get<true>(1), /* System.Int32 */ &f_MinSpawnOption = fields.get<true>(2), /* System.Int32 */ &f_MaxSpawnOption = fields.get<true>(3), /* System.Int32 */ &f_DefaultSpawnTime = fields.get<true>(4), /* System.Int32 */ &f_MinSpawnTime = fields.get<true>(5), /* System.Int32 */ &f_MaxSpawnTime = fields.get<true>(6), /* System.Int32 */ &f_DefaultEnergyAmount = fields.get<true>(7), /* System.Int32 */ &f_MinEnergyAmount = fields.get<true>(8), /* System.Int32 */ &f_MaxEnergyAmount = fields.get<true>(9);
inline static auto /* EditableCubeModelWrapper */ &f_editableCubeModelWrapper = fields.get<false>(10), /* UnityEngine.GameObject */ &f__VehicleEnergyVisualsGameObject_k__BackingField = fields.get<false>(11), /* WorldObjectTypes.VehicleEnergy.MVVehicleEnergyObject */ &f_vehicleEnergyObject = fields.get<false>(12), /* WorldObjectTypes.VehicleEnergy.MVVehicleEnergy+VehicleEnergyConfiguration */ &f__VehicleEnergyConfig_k__BackingField = fields.get<false>(13);

    inline static ::Tools::Il2Cpp::Metadata::array_method<19> methods;
    /* MVWorldObjectDocumentationType get_DocumentationType() */
    inline static auto& m_get_DocumentationType = methods.get<false, true>(0);
    /* MVCubeModelInstance get_CubeModelInstance() */
    inline static auto& m_get_CubeModelInstance = methods.get<false, false>(1);
    /* UnityEngine.GameObject get_VehicleEnergyVisualsGameObject() */
    inline static auto& m_get_VehicleEnergyVisualsGameObject = methods.get<false, false>(2);
    /* System.Void set_VehicleEnergyVisualsGameObject(UnityEngine.GameObject value) */
    inline static auto& m_set_VehicleEnergyVisualsGameObject = methods.get<false, false>(3);
    /* WorldObjectTypes.VehicleEnergy.MVVehicleEnergy+VehicleEnergyConfiguration get_VehicleEnergyConfig() */
    inline static auto& m_get_VehicleEnergyConfig = methods.get<false, false>(4);
    /* System.Void set_VehicleEnergyConfig(WorldObjectTypes.VehicleEnergy.MVVehicleEnergy+VehicleEnergyConfiguration value) */
    inline static auto& m_set_VehicleEnergyConfig = methods.get<false, false>(5);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m__ctor = methods.get<false, false>(6);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(7);
    /* System.Void UpdateVehicleEnergyConfig() */
    inline static auto& m_UpdateVehicleEnergyConfig = methods.get<false, false>(8);
    /* System.Void OnDataUpdate() */
    inline static auto& m_OnDataUpdate = methods.get<false, true>(9);
    /* WorldObjectTypes.VehicleEnergy.MVVehicleEnergy+VehicleEnergyConfiguration ReadWorldObjectData() */
    inline static auto& m_ReadWorldObjectData = methods.get<false, false>(10);
    /* WorldObjectTypes.VehicleEnergy.MVVehicleEnergy+VehicleEnergyConfiguration CreateDefaultVehicleEnergyConfig() */
    inline static auto& m_CreateDefaultVehicleEnergyConfig = methods.get<true, false>(11);
    /* System.Void Taken() */
    inline static auto& m_Taken = methods.get<false, false>(12);
    /* System.Void Spawned() */
    inline static auto& m_Spawned = methods.get<false, false>(13);
    /* System.Void ToggleColliders(System.Boolean val) */
    inline static auto& m_ToggleColliders = methods.get<false, false>(14);
    /* System.Void Select(UnityEngine.Color color) */
    inline static auto& m_Select = methods.get<false, true>(15);
    /* System.Void DeSelect() */
    inline static auto& m_DeSelect = methods.get<false, true>(16);
    /* System.Boolean OnEnterObject(EditorStateMachine e) */
    inline static auto& m_OnEnterObject = methods.get<false, true>(17);
    /* System.Boolean OnExitObject(EditorStateMachine e) */
    inline static auto& m_OnExitObject = methods.get<false, true>(18);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVSentryGunBlueprint {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<2> fields;
inline static auto /* MVCubeModelInstance */ &f_editableCubes = fields.get<false>(0), /* MVSentryGun */ &f_gun = fields.get<false>(1);

    inline static ::Tools::Il2Cpp::Metadata::array_method<10> methods;
    /* MVWorldObjectDocumentationType get_DocumentationType() */
    inline static auto& m_get_DocumentationType = methods.get<false, true>(0);
    /* MVCubeModelBase get_EditableCubesWO() */
    inline static auto& m_get_EditableCubesWO = methods.get<false, false>(1);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m__ctor = methods.get<false, false>(2);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(3);
    /* System.Void InitializeInventory() */
    inline static auto& m_InitializeInventory = methods.get<false, true>(4);
    /* System.Void InitializeCommon() */
    inline static auto& m_InitializeCommon = methods.get<false, false>(5);
    /* System.Boolean CompareWithKoGaMaPackage(MVWorldObjectClient wo, KoGaMaPackageClient koGaMaPackageClient, ref System.Int32 insertedByProfileId) */
    inline static auto& m_CompareWithKoGaMaPackage = methods.get<false, true>(6);
    /* System.Boolean OnEnterObject(EditorStateMachine e) */
    inline static auto& m_OnEnterObject = methods.get<false, true>(7);
    /* System.Boolean OnExitObject(EditorStateMachine e) */
    inline static auto& m_OnExitObject = methods.get<false, true>(8);
    /* IModelingConstraint <InitializeCommon>b__9_0() */
    inline static auto& m__InitializeCommon_b__9_0 = methods.get<false, false>(9);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVEditablePickupItemBaseBlueprint {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<8> fields;
inline static auto /* System.String */ &f_ItemBaseKey = fields.get<true>(0), /* System.String */ &f_ItemCubeModelKey = fields.get<true>(1);
inline static auto /* Assets.Scripts.WorldObjectTypes.EditablePickupItem.MVEditablePickupItemBase */ &f_itemBase = fields.get<false>(2), /* EditableCubeModelWrapper */ &f_editableCubeModelWrapper = fields.get<false>(3), /* MVCubeModelInstance */ &f_editableCubeModel = fields.get<false>(4), /* UnityEngine.Transform */ &f_cubeModelBaseParent = fields.get<false>(5), /* System.Int32 */ &f_cubeModelId = fields.get<false>(6), /* System.Int32 */ &f_cubeModelPid = fields.get<false>(7);

    inline static ::Tools::Il2Cpp::Metadata::array_method<16> methods;
    /* Assets.Scripts.WorldObjectTypes.EditablePickupItem.MVEditablePickupItemBase get_ItemBase() */
    inline static auto& m_get_ItemBase = methods.get<false, false>(0);
    /* System.Int32 get_CubeModelId() */
    inline static auto& m_get_CubeModelId = methods.get<false, false>(1);
    /* System.Int32 get_CubeModelPid() */
    inline static auto& m_get_CubeModelPid = methods.get<false, false>(2);
    /* System.Single get_CubeModelScale() */
    inline static auto& m_get_CubeModelScale = methods.get<false, true>(3);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m__ctor = methods.get<false, false>(4);
    /* System.Void InitializeInventory() */
    inline static auto& m_InitializeInventory = methods.get<false, true>(5);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(6);
    /* System.Void OnStartEditing() */
    inline static auto& m_OnStartEditing = methods.get<false, true>(7);
    /* System.Void OnEndEditing() */
    inline static auto& m_OnEndEditing = methods.get<false, true>(8);
    /* System.Void OnDataUpdate() */
    inline static auto& m_OnDataUpdate = methods.get<false, true>(9);
    /* System.Void ToggleCubeModelColliders(System.Boolean state) */
    inline static auto& m_ToggleCubeModelColliders = methods.get<false, false>(10);
    /* System.Void Select(UnityEngine.Color color) */
    inline static auto& m_Select = methods.get<false, true>(11);
    /* System.Void DeSelect() */
    inline static auto& m_DeSelect = methods.get<false, true>(12);
    /* System.Boolean OnEnterObject(EditorStateMachine e) */
    inline static auto& m_OnEnterObject = methods.get<false, true>(13);
    /* System.Boolean OnExitObject(EditorStateMachine e) */
    inline static auto& m_OnExitObject = methods.get<false, true>(14);
    /* System.Void SetCubeSize() */
    inline static auto& m_SetCubeSize = methods.get<false, true>(15);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVMovingPlatformGroup {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<8> fields;
inline static auto /* UnityEngine.LineRenderer */ &f_lineRenderer = fields.get<false>(0), /* System.Collections.Generic.Dictionary`2<System.Object, System.Object> */ &f_nodeMap = fields.get<false>(1), /* System.Collections.Generic.Dictionary`2<System.Object, System.Object> */ &f_nextNodeMap = fields.get<false>(2), /* MVMovingPlatformNode */ &f_startNode = fields.get<false>(3), /* System.Collections.Generic.Dictionary`2<System.Int32, MVMovingPlatformNode> */ &f_nodeIdToWoMap = fields.get<false>(4), /* System.Collections.Generic.Dictionary`2<System.Int32, System.Int32> */ &f_woIdToNodeIdMap = fields.get<false>(5), /* MVMovingPlatform */ &f_platform = fields.get<false>(6), /* System.Boolean */ &f_initializeFailed = fields.get<false>(7);

    inline static ::Tools::Il2Cpp::Metadata::array_method<17> methods;
    /* MVWorldObjectDocumentationType get_DocumentationType() */
    inline static auto& m_get_DocumentationType = methods.get<false, true>(0);
    /* MVMovingPlatform get_Platform() */
    inline static auto& m_get_Platform = methods.get<false, false>(1);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m__ctor = methods.get<false, false>(2);
    /* System.Boolean get_Visible() */
    inline static auto& m_get_Visible = methods.get<false, true>(3);
    /* System.Void set_Visible(System.Boolean value) */
    inline static auto& m_set_Visible = methods.get<false, true>(4);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(5);
    /* System.Void InitializeInventory() */
    inline static auto& m_InitializeInventory = methods.get<false, true>(6);
    /* System.Void InitializeCommon() */
    inline static auto& m_InitializeCommon = methods.get<false, false>(7);
    /* System.Void UpdateLine() */
    inline static auto& m_UpdateLine = methods.get<false, false>(8);
    /* System.Void WorldObjectClient_ScaleChangedHandler(System.Object sender, ScaleChangedEventArgs e) */
    inline static auto& m_WorldObjectClient_ScaleChangedHandler = methods.get<false, false>(9);
    /* System.Void WorldObjectClient_PositionChangedHandler(System.Object sender, PositionChangedEventArgs e) */
    inline static auto& m_WorldObjectClient_PositionChangedHandler = methods.get<false, false>(10);
    /* System.Void WorldObjectClient_RotationChangedHandler(System.Object sender, RotationChangedEventArgs e) */
    inline static auto& m_WorldObjectClient_RotationChangedHandler = methods.get<false, false>(11);
    /* System.Void WorldObjectClient_SelectedChangedHandler(System.Object sender, SelectedEventArgs e) */
    inline static auto& m_WorldObjectClient_SelectedChangedHandler = methods.get<false, false>(12);
    /* System.Boolean OnEnterObject(EditorStateMachine e) */
    inline static auto& m_OnEnterObject = methods.get<false, true>(13);
    /* System.Void SetWorldObjectToPurchased() */
    inline static auto& m_SetWorldObjectToPurchased = methods.get<false, true>(14);
    /* System.Void AddPreviewBox() */
    inline static auto& m_AddPreviewBox = methods.get<false, true>(15);
    /* System.Void AddPreviewBoxesToChildren() */
    inline static auto& m_AddPreviewBoxesToChildren = methods.get<false, false>(16);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVRotator {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<3> fields;
inline static auto /* System.Collections.Generic.HashSet`1<MVRotator> */ &f_selectedRotators = fields.get<true>(2);
inline static auto /* UnityEngine.Vector3 */ &f__InitAngularVelocity_k__BackingField = fields.get<false>(0), /* CullingSubscriberBase */ &f_cullingSubscriberBase = fields.get<false>(1);

    inline static ::Tools::Il2Cpp::Metadata::array_method<22> methods;
    /* MVWorldObjectDocumentationType get_DocumentationType() */
    inline static auto& m_get_DocumentationType = methods.get<false, true>(0);
    /* UnityEngine.Vector3 get_InitAngularVelocity() */
    inline static auto& m_get_InitAngularVelocity = methods.get<false, false>(1);
    /* System.Void set_InitAngularVelocity(UnityEngine.Vector3 value) */
    inline static auto& m_set_InitAngularVelocity = methods.get<false, false>(2);
    /* MVWorldObjectClientManager get_WOCM() */
    inline static auto& m_get_WOCM = methods.get<false, false>(3);
    /* System.Boolean get_Horizontal() */
    inline static auto& m_get_Horizontal = methods.get<false, false>(4);
    /* System.Boolean get_Vertical() */
    inline static auto& m_get_Vertical = methods.get<false, false>(5);
    /* UnityEngine.Vector3 get_WorldPivot() */
    inline static auto& m_get_WorldPivot = methods.get<false, true>(6);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m__ctor = methods.get<false, false>(7);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(8);
    /* System.Void SetupCulling() */
    inline static auto& m_SetupCulling = methods.get<false, false>(9);
    /* System.Void OnPositionChanged(System.Object sender, PositionChangedEventArgs positionChangedEventArgs) */
    inline static auto& m_OnPositionChanged = methods.get<false, false>(10);
    /* System.Void SetupCullingSphere() */
    inline static auto& m_SetupCullingSphere = methods.get<false, false>(11);
    /* System.Void Changed(CubeModelChangedEventArgs cubeModelChangedEventArgs) */
    inline static auto& m_Changed = methods.get<false, false>(12);
    /* System.Void OnStateChanged(UnityEngine.CullingGroupEvent cullingGroupEvent) */
    inline static auto& m_OnStateChanged = methods.get<false, false>(13);
    /* System.Void OnSelectedChanged(System.Boolean selected) */
    inline static auto& m_OnSelectedChanged = methods.get<false, true>(14);
    /* System.Void MVCubeModelBase_BeingEditedChanged(System.Object sender, EditStateEventArgs e) */
    inline static auto& m_MVCubeModelBase_BeingEditedChanged = methods.get<false, false>(15);
    /* System.Void WorldObjectClient_SelectedChangedHandler(System.Object sender, SelectedEventArgs e) */
    inline static auto& m_WorldObjectClient_SelectedChangedHandler = methods.get<false, false>(16);
    /* UnityEngine.Bounds GetLocalBounds(BoundsContext boundsContext) */
    inline static auto& m_GetLocalBounds = methods.get<false, true>(17);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<false, true>(18);
    /* System.Void SetWorldObjectToPurchased() */
    inline static auto& m_SetWorldObjectToPurchased = methods.get<false, true>(19);
    /* System.Void AddPreviewBox() */
    inline static auto& m_AddPreviewBox = methods.get<false, true>(20);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(21);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct EditableCubeModelWrapper {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<1> fields;
inline static auto /* MVCubeModelInstance */ &f_cubeModelBase = fields.get<false>(0);

    inline static ::Tools::Il2Cpp::Metadata::array_method<6> methods;
    /* MVCubeModelInstance get_CubeModel() */
    inline static auto& m_get_CubeModel = methods.get<false, false>(0);
    /* System.Void .ctor(MVCubeModelInstance cubeModelBase) */
    inline static auto& m0__ctor = methods.get<false, false>(1);
    /* System.Void .ctor(MVCubeModelInstance cubeModelBase, MV.WorldObject.IntVector min, MV.WorldObject.IntVector max, System.Int32 minCubeCount) */
    inline static auto& m1__ctor = methods.get<false, false>(2);
    /* System.Boolean OnEnterObject(EditorStateMachine e) */
    inline static auto& m_OnEnterObject = methods.get<false, true>(3);
    /* System.Boolean OnExitObject(EditorStateMachine e) */
    inline static auto& m_OnExitObject = methods.get<false, true>(4);
    /* System.Void SetConstraints(MV.WorldObject.IntVector min, MV.WorldObject.IntVector max, System.Int32 minCubeCount) */
    inline static auto& m_SetConstraints = methods.get<false, false>(5);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVMovable {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<17> fields;
inline static auto /* System.Single */ &f_direction = fields.get<true>(0);
inline static auto /* System.Collections.Generic.List`1<MVMovable> */ &f_MoveableChildren = fields.get<false>(1), /* UnityEngine.Vector3 */ &f_localPos = fields.get<false>(2), /* System.Single */ &f_timeToEnd = fields.get<false>(3), /* System.Single */ &f_linearTime = fields.get<false>(4), /* System.Single */ &f_fraction = fields.get<false>(5), /* MovableVisualization */ &f_movableVisualization = fields.get<false>(6), /* MVCubeModelInstance */ &f__CubeModel_k__BackingField = fields.get<false>(7), /* System.Single */ &f_distance = fields.get<false>(8), /* UnityEngine.Quaternion */ &f_orgRotation = fields.get<false>(9), /* UnityEngine.Vector3 */ &f_velocity = fields.get<false>(10), /* UnityEngine.Vector3 */ &f_angularDirection = fields.get<false>(11), /* System.Single */ &f_angularSpeed = fields.get<false>(12), /* System.Int32 */ &f_parentMoverID = fields.get<false>(13), /* System.Boolean */ &f_pausedMovement = fields.get<false>(14), /* System.Boolean */ &f_isVisible = fields.get<false>(15), /* MVMovable */ &f_parentMover = fields.get<false>(16);

    inline static ::Tools::Il2Cpp::Metadata::array_method<44> methods;
    /* MVCubeModelInstance get_CubeModel() */
    inline static auto& m_get_CubeModel = methods.get<false, false>(0);
    /* System.Void set_CubeModel(MVCubeModelInstance value) */
    inline static auto& m_set_CubeModel = methods.get<false, false>(1);
    /* System.Int32 get_CubeModelID() */
    inline static auto& m_get_CubeModelID = methods.get<false, false>(2);
    /* System.Single get_Distance() */
    inline static auto& m_get_Distance = methods.get<false, false>(3);
    /* UnityEngine.Quaternion get_OrgRotation() */
    inline static auto& m_get_OrgRotation = methods.get<false, false>(4);
    /* UnityEngine.Vector3 get_Velocity() */
    inline static auto& m_get_Velocity = methods.get<false, false>(5);
    /* UnityEngine.Vector3 get_AngularVelocity() */
    inline static auto& m_get_AngularVelocity = methods.get<false, false>(6);
    /* UnityEngine.Vector3 get_AngularDirection() */
    inline static auto& m_get_AngularDirection = methods.get<false, false>(7);
    /* System.Single get_AngularSpeed() */
    inline static auto& m_get_AngularSpeed = methods.get<false, false>(8);
    /* System.Int32 get_ParentMoverID() */
    inline static auto& m_get_ParentMoverID = methods.get<false, false>(9);
    /* System.Boolean get_PausedMovement() */
    inline static auto& m_get_PausedMovement = methods.get<false, false>(10);
    /* System.Void set_PausedMovement(System.Boolean value) */
    inline static auto& m_set_PausedMovement = methods.get<false, false>(11);
    /* UnityEngine.Vector3 get_WorldVelocity() */
    inline static auto& m_get_WorldVelocity = methods.get<false, true>(12);
    /* MVMovable get_ParentMover() */
    inline static auto& m_get_ParentMover = methods.get<false, false>(13);
    /* System.Boolean get_IsRoot() */
    inline static auto& m_get_IsRoot = methods.get<false, false>(14);
    /* MVMovable get_RootMover() */
    inline static auto& m_get_RootMover = methods.get<false, false>(15);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m__ctor = methods.get<false, false>(16);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(17);
    /* System.Boolean get_Visible() */
    inline static auto& m_get_Visible = methods.get<false, true>(18);
    /* System.Void set_Visible(System.Boolean value) */
    inline static auto& m_set_Visible = methods.get<false, true>(19);
    /* System.Void SetVisible(System.Boolean newVisible) */
    inline static auto& m_SetVisible = methods.get<false, false>(20);
    /* System.Void OnInputStateChanged() */
    inline static auto& m_OnInputStateChanged = methods.get<false, true>(21);
    /* System.Void InitializeInventory() */
    inline static auto& m_InitializeInventory = methods.get<false, true>(22);
    /* System.Void InitializeCommon() */
    inline static auto& m_InitializeCommon = methods.get<false, false>(23);
    /* System.String GetParamPath(System.String param) */
    inline static auto& m_GetParamPath = methods.get<false, false>(24);
    /* System.Void SetDistance(System.Single distance, System.Boolean updateWOData = False, System.Boolean syncServer = False) */
    inline static auto& m_SetDistance = methods.get<false, false>(25);
    /* System.Void SetOrgRotation(UnityEngine.Quaternion orgRotation, System.Boolean updateWOData = False, System.Boolean syncServer = False) */
    inline static auto& m_SetOrgRotation = methods.get<false, false>(26);
    /* System.Void SetVelocity(UnityEngine.Vector3 velocity, System.Boolean updateWOData = False, System.Boolean syncServer = False) */
    inline static auto& m_SetVelocity = methods.get<false, false>(27);
    /* System.Void SetAngularDirection(UnityEngine.Vector3 angularDirection, System.Boolean updateWOData = False, System.Boolean syncServer = False) */
    inline static auto& m_SetAngularDirection = methods.get<false, false>(28);
    /* System.Void SetAngularSpeed(System.Single angularSpeed, System.Boolean updateWOData = False, System.Boolean syncServer = False) */
    inline static auto& m_SetAngularSpeed = methods.get<false, false>(29);
    /* System.Void SetParentMoverID(System.Int32 parentMoverID, System.Boolean updateWOData = False, System.Boolean syncServer = False) */
    inline static auto& m_SetParentMoverID = methods.get<false, false>(30);
    /* System.Void SyncProperties() */
    inline static auto& m_SyncProperties = methods.get<false, false>(31);
    /* System.Void ReadWOData() */
    inline static auto& m_ReadWOData = methods.get<false, false>(32);
    /* System.Void UpdateMoverTree(System.Single directionFactor) */
    inline static auto& m_UpdateMoverTree = methods.get<false, false>(33);
    /* System.Void UpdateMoverSubTree(System.Single directionFactor, System.Int32 breakid) */
    inline static auto& m_UpdateMoverSubTree = methods.get<false, false>(34);
    /* System.Void AddMovableChild(MVMovable child) */
    inline static auto& m_AddMovableChild = methods.get<false, false>(35);
    /* System.Void RemoveMovableChild(MVMovable child) */
    inline static auto& m_RemoveMovableChild = methods.get<false, false>(36);
    /* System.Void Move(System.Single directionFactor, System.Int32 breakid) */
    inline static auto& m_Move = methods.get<false, false>(37);
    /* System.Void RecalcTimeToEnd() */
    inline static auto& m_RecalcTimeToEnd = methods.get<false, false>(38);
    /* System.Void OnDataUpdate() */
    inline static auto& m_OnDataUpdate = methods.get<false, true>(39);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<false, true>(40);
    /* System.Boolean OnEnterObject(EditorStateMachine e) */
    inline static auto& m_OnEnterObject = methods.get<false, true>(41);
    /* System.Boolean OnExitObject(EditorStateMachine e) */
    inline static auto& m_OnExitObject = methods.get<false, true>(42);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(43);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct SettingsInputFieldSlider {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<5> fields;
inline static auto /* UnityEngine.UI.InputField */ &f_inputField = fields.get<false>(0), /* SettingsSlider */ &f_settingsSlider = fields.get<false>(1), /* System.Boolean */ &f_round = fields.get<false>(2), /* System.String */ &f_suffix = fields.get<false>(3), /* System.String */ &f_key = fields.get<false>(4);

    inline static ::Tools::Il2Cpp::Metadata::array_method<16> methods;
    /* UnityEngine.UI.InputField get_InputField() */
    inline static auto& m_get_InputField = methods.get<false, false>(0);
    /* UnityEngine.UI.Slider get_Slider() */
    inline static auto& m_get_Slider = methods.get<false, false>(1);
    /* System.Void SetText(System.String text) */
    inline static auto& m_SetText = methods.get<false, false>(2);
    /* System.Void Initialize(System.String key, System.Collections.Generic.Dictionary`2<System.Object, System.Object> itemData, System.Func`2<System.String, System.ValueTuple`2<System.Single, System.Single>> minMaxFunc, System.Single conversionValue = 1) */
    inline static auto& m0_Initialize = methods.get<false, false>(3);
    /* System.Void Initialize(System.String key, System.Collections.Generic.Dictionary`2<System.Object, System.Object> itemData, System.Single min, System.Single max, System.Single conversionValue = 1) */
    inline static auto& m1_Initialize = methods.get<false, false>(4);
    /* System.Void Initialize(System.String key, System.Single value) */
    inline static auto& m2_Initialize = methods.get<false, false>(5);
    /* System.Void Initialize(System.String key, System.Int32 value) */
    inline static auto& m3_Initialize = methods.get<false, false>(6);
    /* System.Void Update() */
    inline static auto& m_Update = methods.get<false, false>(7);
    /* System.Void SliderValueChanged() */
    inline static auto& m_SliderValueChanged = methods.get<false, false>(8);
    /* System.String ConvertFloatToString(System.Single inputFieldValue) */
    inline static auto& m_ConvertFloatToString = methods.get<true, false>(9);
    /* System.Void InputFieldValueChanged() */
    inline static auto& m_InputFieldValueChanged = methods.get<false, false>(10);
    /* System.Single ConvertStringToFloat(System.String inputFieldText) */
    inline static auto& m_ConvertStringToFloat = methods.get<false, false>(11);
    /* System.Void ValueChanged(System.String value) */
    inline static auto& m_ValueChanged = methods.get<false, false>(12);
    /* System.Void Reset() */
    inline static auto& m_Reset = methods.get<false, false>(13);
    /* System.Single GetInputFieldValue(System.Single value) */
    inline static auto& m_GetInputFieldValue = methods.get<false, false>(14);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(15);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct UI_InputField {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<55> fields;
inline static auto /* System.Char[] */ &f_kSeparators = fields.get<true>(1), /* System.Boolean */ &f_s_IsQuestDevice = fields.get<true>(2), /* System.Single */ &f_kHScrollSpeed = fields.get<true>(37), /* System.Single */ &f_kVScrollSpeed = fields.get<true>(38), /* System.String */ &f_kEmailSpecialCharacters = fields.get<true>(51), /* System.String */ &f_kOculusQuestDeviceModel = fields.get<true>(52), /* System.Int32 */ &f_k_MaxTextLength = fields.get<true>(54);
inline static auto /* UnityEngine.TouchScreenKeyboard */ &f_m_Keyboard = fields.get<false>(0), /* UnityEngine.UI.Text */ &f_m_TextComponent = fields.get<false>(3), /* UnityEngine.UI.Graphic */ &f_m_Placeholder = fields.get<false>(4), /* UnityEngine.UI.InputField+ContentType */ &f_m_ContentType = fields.get<false>(5), /* UnityEngine.UI.InputField+InputType */ &f_m_InputType = fields.get<false>(6), /* System.Char */ &f_m_AsteriskChar = fields.get<false>(7), /* UnityEngine.TouchScreenKeyboardType */ &f_m_KeyboardType = fields.get<false>(8), /* UnityEngine.UI.InputField+LineType */ &f_m_LineType = fields.get<false>(9), /* System.Boolean */ &f_m_HideMobileInput = fields.get<false>(10), /* UnityEngine.UI.InputField+CharacterValidation */ &f_m_CharacterValidation = fields.get<false>(11), /* System.Int32 */ &f_m_CharacterLimit = fields.get<false>(12), /* UnityEngine.UI.InputField+SubmitEvent */ &f_m_OnSubmit = fields.get<false>(13), /* UnityEngine.UI.InputField+EndEditEvent */ &f_m_OnDidEndEdit = fields.get<false>(14), /* UnityEngine.UI.InputField+OnChangeEvent */ &f_m_OnValueChanged = fields.get<false>(15), /* UnityEngine.UI.InputField+OnValidateInput */ &f_m_OnValidateInput = fields.get<false>(16), /* UnityEngine.Color */ &f_m_CaretColor = fields.get<false>(17), /* System.Boolean */ &f_m_CustomCaretColor = fields.get<false>(18), /* UnityEngine.Color */ &f_m_SelectionColor = fields.get<false>(19), /* System.String */ &f_m_Text = fields.get<false>(20), /* System.Single */ &f_m_CaretBlinkRate = fields.get<false>(21), /* System.Int32 */ &f_m_CaretWidth = fields.get<false>(22), /* System.Boolean */ &f_m_ReadOnly = fields.get<false>(23), /* System.Boolean */ &f_m_ShouldActivateOnSelect = fields.get<false>(24), /* System.Int32 */ &f_m_CaretPosition = fields.get<false>(25), /* System.Int32 */ &f_m_CaretSelectPosition = fields.get<false>(26), /* UnityEngine.RectTransform */ &f_caretRectTrans = fields.get<false>(27), /* UnityEngine.UIVertex[] */ &f_m_CursorVerts = fields.get<false>(28), /* UnityEngine.TextGenerator */ &f_m_InputTextCache = fields.get<false>(29), /* UnityEngine.CanvasRenderer */ &f_m_CachedInputRenderer = fields.get<false>(30), /* System.Boolean */ &f_m_PreventFontCallback = fields.get<false>(31), /* UnityEngine.Mesh */ &f_m_Mesh = fields.get<false>(32), /* System.Boolean */ &f_m_AllowInput = fields.get<false>(33), /* System.Boolean */ &f_m_ShouldActivateNextUpdate = fields.get<false>(34), /* System.Boolean */ &f_m_UpdateDrag = fields.get<false>(35), /* System.Boolean */ &f_m_DragPositionOutOfBounds = fields.get<false>(36), /* System.Boolean */ &f_m_CaretVisible = fields.get<false>(39), /* UnityEngine.Coroutine */ &f_m_BlinkCoroutine = fields.get<false>(40), /* System.Single */ &f_m_BlinkStartTime = fields.get<false>(41), /* System.Int32 */ &f_m_DrawStart = fields.get<false>(42), /* System.Int32 */ &f_m_DrawEnd = fields.get<false>(43), /* UnityEngine.Coroutine */ &f_m_DragCoroutine = fields.get<false>(44), /* System.String */ &f_m_OriginalText = fields.get<false>(45), /* System.Boolean */ &f_m_WasCanceled = fields.get<false>(46), /* System.Boolean */ &f_m_HasDoneFocusTransition = fields.get<false>(47), /* UnityEngine.WaitForSecondsRealtime */ &f_m_WaitForSecondsRealtime = fields.get<false>(48), /* System.Boolean */ &f_m_TouchKeyboardAllowsInPlaceEditing = fields.get<false>(49), /* System.Boolean */ &f_m_IsCompositionActive = fields.get<false>(50), /* UnityEngine.Event */ &f_m_ProcessingEvent = fields.get<false>(53);

    inline static ::Tools::Il2Cpp::Metadata::array_method<165> methods;
    /* UnityEngine.EventSystems.BaseInput get_input() */
    inline static auto& m_get_input = methods.get<false, false>(0);
    /* System.String get_compositionString() */
    inline static auto& m_get_compositionString = methods.get<false, false>(1);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(2);
    /* UnityEngine.Mesh get_mesh() */
    inline static auto& m_get_mesh = methods.get<false, false>(3);
    /* UnityEngine.TextGenerator get_cachedInputTextGenerator() */
    inline static auto& m_get_cachedInputTextGenerator = methods.get<false, false>(4);
    /* System.Void set_shouldHideMobileInput(System.Boolean value) */
    inline static auto& m_set_shouldHideMobileInput = methods.get<false, false>(5);
    /* System.Boolean get_shouldHideMobileInput() */
    inline static auto& m_get_shouldHideMobileInput = methods.get<false, false>(6);
    /* System.Void set_shouldActivateOnSelect(System.Boolean value) */
    inline static auto& m_set_shouldActivateOnSelect = methods.get<false, true>(7);
    /* System.Boolean get_shouldActivateOnSelect() */
    inline static auto& m_get_shouldActivateOnSelect = methods.get<false, true>(8);
    /* System.String get_text() */
    inline static auto& m_get_text = methods.get<false, false>(9);
    /* System.Void set_text(System.String value) */
    inline static auto& m_set_text = methods.get<false, false>(10);
    /* System.Void SetTextWithoutNotify(System.String input) */
    inline static auto& m_SetTextWithoutNotify = methods.get<false, false>(11);
    /* System.Void SetText(System.String value, System.Boolean sendCallback = True) */
    inline static auto& m_SetText = methods.get<false, false>(12);
    /* System.Boolean get_isFocused() */
    inline static auto& m_get_isFocused = methods.get<false, false>(13);
    /* System.Single get_caretBlinkRate() */
    inline static auto& m_get_caretBlinkRate = methods.get<false, false>(14);
    /* System.Void set_caretBlinkRate(System.Single value) */
    inline static auto& m_set_caretBlinkRate = methods.get<false, false>(15);
    /* System.Int32 get_caretWidth() */
    inline static auto& m_get_caretWidth = methods.get<false, false>(16);
    /* System.Void set_caretWidth(System.Int32 value) */
    inline static auto& m_set_caretWidth = methods.get<false, false>(17);
    /* UnityEngine.UI.Text get_textComponent() */
    inline static auto& m_get_textComponent = methods.get<false, false>(18);
    /* System.Void set_textComponent(UnityEngine.UI.Text value) */
    inline static auto& m_set_textComponent = methods.get<false, false>(19);
    /* UnityEngine.UI.Graphic get_placeholder() */
    inline static auto& m_get_placeholder = methods.get<false, false>(20);
    /* System.Void set_placeholder(UnityEngine.UI.Graphic value) */
    inline static auto& m_set_placeholder = methods.get<false, false>(21);
    /* UnityEngine.Color get_caretColor() */
    inline static auto& m_get_caretColor = methods.get<false, false>(22);
    /* System.Void set_caretColor(UnityEngine.Color value) */
    inline static auto& m_set_caretColor = methods.get<false, false>(23);
    /* System.Boolean get_customCaretColor() */
    inline static auto& m_get_customCaretColor = methods.get<false, false>(24);
    /* System.Void set_customCaretColor(System.Boolean value) */
    inline static auto& m_set_customCaretColor = methods.get<false, false>(25);
    /* UnityEngine.Color get_selectionColor() */
    inline static auto& m_get_selectionColor = methods.get<false, false>(26);
    /* System.Void set_selectionColor(UnityEngine.Color value) */
    inline static auto& m_set_selectionColor = methods.get<false, false>(27);
    /* UnityEngine.UI.InputField+EndEditEvent get_onEndEdit() */
    inline static auto& m_get_onEndEdit = methods.get<false, false>(28);
    /* System.Void set_onEndEdit(UnityEngine.UI.InputField+EndEditEvent value) */
    inline static auto& m_set_onEndEdit = methods.get<false, false>(29);
    /* UnityEngine.UI.InputField+SubmitEvent get_onSubmit() */
    inline static auto& m_get_onSubmit = methods.get<false, false>(30);
    /* System.Void set_onSubmit(UnityEngine.UI.InputField+SubmitEvent value) */
    inline static auto& m_set_onSubmit = methods.get<false, false>(31);
    /* UnityEngine.UI.InputField+OnChangeEvent get_onValueChange() */
    inline static auto& m_get_onValueChange = methods.get<false, false>(32);
    /* System.Void set_onValueChange(UnityEngine.UI.InputField+OnChangeEvent value) */
    inline static auto& m_set_onValueChange = methods.get<false, false>(33);
    /* UnityEngine.UI.InputField+OnChangeEvent get_onValueChanged() */
    inline static auto& m_get_onValueChanged = methods.get<false, false>(34);
    /* System.Void set_onValueChanged(UnityEngine.UI.InputField+OnChangeEvent value) */
    inline static auto& m_set_onValueChanged = methods.get<false, false>(35);
    /* UnityEngine.UI.InputField+OnValidateInput get_onValidateInput() */
    inline static auto& m_get_onValidateInput = methods.get<false, false>(36);
    /* System.Void set_onValidateInput(UnityEngine.UI.InputField+OnValidateInput value) */
    inline static auto& m_set_onValidateInput = methods.get<false, false>(37);
    /* System.Int32 get_characterLimit() */
    inline static auto& m_get_characterLimit = methods.get<false, false>(38);
    /* System.Void set_characterLimit(System.Int32 value) */
    inline static auto& m_set_characterLimit = methods.get<false, false>(39);
    /* UnityEngine.UI.InputField+ContentType get_contentType() */
    inline static auto& m_get_contentType = methods.get<false, false>(40);
    /* System.Void set_contentType(UnityEngine.UI.InputField+ContentType value) */
    inline static auto& m_set_contentType = methods.get<false, false>(41);
    /* UnityEngine.UI.InputField+LineType get_lineType() */
    inline static auto& m_get_lineType = methods.get<false, false>(42);
    /* System.Void set_lineType(UnityEngine.UI.InputField+LineType value) */
    inline static auto& m_set_lineType = methods.get<false, false>(43);
    /* UnityEngine.UI.InputField+InputType get_inputType() */
    inline static auto& m_get_inputType = methods.get<false, false>(44);
    /* System.Void set_inputType(UnityEngine.UI.InputField+InputType value) */
    inline static auto& m_set_inputType = methods.get<false, false>(45);
    /* UnityEngine.TouchScreenKeyboard get_touchScreenKeyboard() */
    inline static auto& m_get_touchScreenKeyboard = methods.get<false, false>(46);
    /* UnityEngine.TouchScreenKeyboardType get_keyboardType() */
    inline static auto& m_get_keyboardType = methods.get<false, false>(47);
    /* System.Void set_keyboardType(UnityEngine.TouchScreenKeyboardType value) */
    inline static auto& m_set_keyboardType = methods.get<false, false>(48);
    /* UnityEngine.UI.InputField+CharacterValidation get_characterValidation() */
    inline static auto& m_get_characterValidation = methods.get<false, false>(49);
    /* System.Void set_characterValidation(UnityEngine.UI.InputField+CharacterValidation value) */
    inline static auto& m_set_characterValidation = methods.get<false, false>(50);
    /* System.Boolean get_readOnly() */
    inline static auto& m_get_readOnly = methods.get<false, false>(51);
    /* System.Void set_readOnly(System.Boolean value) */
    inline static auto& m_set_readOnly = methods.get<false, false>(52);
    /* System.Boolean get_multiLine() */
    inline static auto& m_get_multiLine = methods.get<false, false>(53);
    /* System.Char get_asteriskChar() */
    inline static auto& m_get_asteriskChar = methods.get<false, false>(54);
    /* System.Void set_asteriskChar(System.Char value) */
    inline static auto& m_set_asteriskChar = methods.get<false, false>(55);
    /* System.Boolean get_wasCanceled() */
    inline static auto& m_get_wasCanceled = methods.get<false, false>(56);
    /* System.Void ClampPos(ref System.Int32 pos) */
    inline static auto& m_ClampPos = methods.get<false, false>(57);
    /* System.Int32 get_caretPositionInternal() */
    inline static auto& m_get_caretPositionInternal = methods.get<false, false>(58);
    /* System.Void set_caretPositionInternal(System.Int32 value) */
    inline static auto& m_set_caretPositionInternal = methods.get<false, false>(59);
    /* System.Int32 get_caretSelectPositionInternal() */
    inline static auto& m_get_caretSelectPositionInternal = methods.get<false, false>(60);
    /* System.Void set_caretSelectPositionInternal(System.Int32 value) */
    inline static auto& m_set_caretSelectPositionInternal = methods.get<false, false>(61);
    /* System.Boolean get_hasSelection() */
    inline static auto& m_get_hasSelection = methods.get<false, false>(62);
    /* System.Int32 get_caretPosition() */
    inline static auto& m_get_caretPosition = methods.get<false, false>(63);
    /* System.Void set_caretPosition(System.Int32 value) */
    inline static auto& m_set_caretPosition = methods.get<false, false>(64);
    /* System.Int32 get_selectionAnchorPosition() */
    inline static auto& m_get_selectionAnchorPosition = methods.get<false, false>(65);
    /* System.Void set_selectionAnchorPosition(System.Int32 value) */
    inline static auto& m_set_selectionAnchorPosition = methods.get<false, false>(66);
    /* System.Int32 get_selectionFocusPosition() */
    inline static auto& m_get_selectionFocusPosition = methods.get<false, false>(67);
    /* System.Void set_selectionFocusPosition(System.Int32 value) */
    inline static auto& m_set_selectionFocusPosition = methods.get<false, false>(68);
    /* System.Void OnEnable() */
    inline static auto& m_OnEnable = methods.get<false, true>(69);
    /* System.Void OnDisable() */
    inline static auto& m_OnDisable = methods.get<false, true>(70);
    /* System.Void OnDestroy() */
    inline static auto& m_OnDestroy = methods.get<false, true>(71);
    /* System.Collections.IEnumerator CaretBlink() */
    inline static auto& m_CaretBlink = methods.get<false, false>(72);
    /* System.Void SetCaretVisible() */
    inline static auto& m_SetCaretVisible = methods.get<false, false>(73);
    /* System.Void SetCaretActive() */
    inline static auto& m_SetCaretActive = methods.get<false, false>(74);
    /* System.Void UpdateCaretMaterial() */
    inline static auto& m_UpdateCaretMaterial = methods.get<false, false>(75);
    /* System.Void OnFocus() */
    inline static auto& m_OnFocus = methods.get<false, false>(76);
    /* System.Void SelectAll() */
    inline static auto& m_SelectAll = methods.get<false, false>(77);
    /* System.Void MoveTextEnd(System.Boolean shift) */
    inline static auto& m_MoveTextEnd = methods.get<false, false>(78);
    /* System.Void MoveTextStart(System.Boolean shift) */
    inline static auto& m_MoveTextStart = methods.get<false, false>(79);
    /* System.String get_clipboard() */
    inline static auto& m_get_clipboard = methods.get<true, false>(80);
    /* System.Void set_clipboard(System.String value) */
    inline static auto& m_set_clipboard = methods.get<true, false>(81);
    /* System.Boolean TouchScreenKeyboardShouldBeUsed() */
    inline static auto& m_TouchScreenKeyboardShouldBeUsed = methods.get<false, false>(82);
    /* System.Boolean InPlaceEditing() */
    inline static auto& m_InPlaceEditing = methods.get<false, false>(83);
    /* System.Boolean InPlaceEditingChanged() */
    inline static auto& m_InPlaceEditingChanged = methods.get<false, false>(84);
    /* UnityEngine.RangeInt GetInternalSelection() */
    inline static auto& m_GetInternalSelection = methods.get<false, false>(85);
    /* System.Void UpdateKeyboardCaret() */
    inline static auto& m_UpdateKeyboardCaret = methods.get<false, false>(86);
    /* System.Void UpdateCaretFromKeyboard() */
    inline static auto& m_UpdateCaretFromKeyboard = methods.get<false, false>(87);
    /* System.Void LateUpdate() */
    inline static auto& m_LateUpdate = methods.get<false, true>(88);
    /* UnityEngine.Vector2 ScreenToLocal(UnityEngine.Vector2 screen) */
    inline static auto& m_ScreenToLocal = methods.get<false, false>(89);
    /* System.Int32 GetUnclampedCharacterLineFromPosition(UnityEngine.Vector2 pos, UnityEngine.TextGenerator generator) */
    inline static auto& m_GetUnclampedCharacterLineFromPosition = methods.get<false, false>(90);
    /* System.Int32 GetCharacterIndexFromPosition(UnityEngine.Vector2 pos) */
    inline static auto& m_GetCharacterIndexFromPosition = methods.get<false, false>(91);
    /* System.Boolean MayDrag(UnityEngine.EventSystems.PointerEventData eventData) */
    inline static auto& m_MayDrag = methods.get<false, false>(92);
    /* System.Void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData) */
    inline static auto& m_OnBeginDrag = methods.get<false, true>(93);
    /* System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData) */
    inline static auto& m_OnDrag = methods.get<false, true>(94);
    /* System.Collections.IEnumerator MouseDragOutsideRect(UnityEngine.EventSystems.PointerEventData eventData) */
    inline static auto& m_MouseDragOutsideRect = methods.get<false, false>(95);
    /* System.Void OnEndDrag(UnityEngine.EventSystems.PointerEventData eventData) */
    inline static auto& m_OnEndDrag = methods.get<false, true>(96);
    /* System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData) */
    inline static auto& m_OnPointerDown = methods.get<false, true>(97);
    /* UnityEngine.UI.InputField+EditState KeyPressed(UnityEngine.Event evt) */
    inline static auto& m_KeyPressed = methods.get<false, false>(98);
    /* System.Boolean IsValidChar(System.Char c) */
    inline static auto& m_IsValidChar = methods.get<false, false>(99);
    /* System.Void ProcessEvent(UnityEngine.Event e) */
    inline static auto& m_ProcessEvent = methods.get<false, false>(100);
    /* System.Void OnUpdateSelected(UnityEngine.EventSystems.BaseEventData eventData) */
    inline static auto& m_OnUpdateSelected = methods.get<false, true>(101);
    /* System.String GetSelectedString() */
    inline static auto& m_GetSelectedString = methods.get<false, false>(102);
    /* System.Int32 FindtNextWordBegin() */
    inline static auto& m_FindtNextWordBegin = methods.get<false, false>(103);
    /* System.Void MoveRight(System.Boolean shift, System.Boolean ctrl) */
    inline static auto& m_MoveRight = methods.get<false, false>(104);
    /* System.Int32 FindtPrevWordBegin() */
    inline static auto& m_FindtPrevWordBegin = methods.get<false, false>(105);
    /* System.Void MoveLeft(System.Boolean shift, System.Boolean ctrl) */
    inline static auto& m_MoveLeft = methods.get<false, false>(106);
    /* System.Int32 DetermineCharacterLine(System.Int32 charPos, UnityEngine.TextGenerator generator) */
    inline static auto& m_DetermineCharacterLine = methods.get<false, false>(107);
    /* System.Int32 LineUpCharacterPosition(System.Int32 originalPos, System.Boolean goToFirstChar) */
    inline static auto& m_LineUpCharacterPosition = methods.get<false, false>(108);
    /* System.Int32 LineDownCharacterPosition(System.Int32 originalPos, System.Boolean goToLastChar) */
    inline static auto& m_LineDownCharacterPosition = methods.get<false, false>(109);
    /* System.Void MoveDown(System.Boolean shift) */
    inline static auto& m0_MoveDown = methods.get<false, false>(110);
    /* System.Void MoveDown(System.Boolean shift, System.Boolean goToLastChar) */
    inline static auto& m1_MoveDown = methods.get<false, false>(111);
    /* System.Void MoveUp(System.Boolean shift) */
    inline static auto& m0_MoveUp = methods.get<false, false>(112);
    /* System.Void MoveUp(System.Boolean shift, System.Boolean goToFirstChar) */
    inline static auto& m1_MoveUp = methods.get<false, false>(113);
    /* System.Void Delete() */
    inline static auto& m_Delete = methods.get<false, false>(114);
    /* System.Void ForwardSpace() */
    inline static auto& m_ForwardSpace = methods.get<false, false>(115);
    /* System.Void Backspace() */
    inline static auto& m_Backspace = methods.get<false, false>(116);
    /* System.Void Insert(System.Char c) */
    inline static auto& m_Insert = methods.get<false, false>(117);
    /* System.Void UpdateTouchKeyboardFromEditChanges() */
    inline static auto& m_UpdateTouchKeyboardFromEditChanges = methods.get<false, false>(118);
    /* System.Void SendOnValueChangedAndUpdateLabel() */
    inline static auto& m_SendOnValueChangedAndUpdateLabel = methods.get<false, false>(119);
    /* System.Void SendOnValueChanged() */
    inline static auto& m_SendOnValueChanged = methods.get<false, false>(120);
    /* System.Void SendOnEndEdit() */
    inline static auto& m_SendOnEndEdit = methods.get<false, false>(121);
    /* System.Void SendOnSubmit() */
    inline static auto& m_SendOnSubmit = methods.get<false, false>(122);
    /* System.Void Append(System.String input) */
    inline static auto& m0_Append = methods.get<false, true>(123);
    /* System.Void Append(System.Char input) */
    inline static auto& m1_Append = methods.get<false, true>(124);
    /* System.Void UpdateLabel() */
    inline static auto& m_UpdateLabel = methods.get<false, false>(125);
    /* System.Boolean IsSelectionVisible() */
    inline static auto& m_IsSelectionVisible = methods.get<false, false>(126);
    /* System.Int32 GetLineStartPosition(UnityEngine.TextGenerator gen, System.Int32 line) */
    inline static auto& m_GetLineStartPosition = methods.get<true, false>(127);
    /* System.Int32 GetLineEndPosition(UnityEngine.TextGenerator gen, System.Int32 line) */
    inline static auto& m_GetLineEndPosition = methods.get<true, false>(128);
    /* System.Void SetDrawRangeToContainCaretPosition(System.Int32 caretPos) */
    inline static auto& m_SetDrawRangeToContainCaretPosition = methods.get<false, false>(129);
    /* System.Void ForceLabelUpdate() */
    inline static auto& m_ForceLabelUpdate = methods.get<false, false>(130);
    /* System.Void MarkGeometryAsDirty() */
    inline static auto& m_MarkGeometryAsDirty = methods.get<false, false>(131);
    /* System.Void Rebuild(UnityEngine.UI.CanvasUpdate update) */
    inline static auto& m_Rebuild = methods.get<false, true>(132);
    /* System.Void LayoutComplete() */
    inline static auto& m_LayoutComplete = methods.get<false, true>(133);
    /* System.Void GraphicUpdateComplete() */
    inline static auto& m_GraphicUpdateComplete = methods.get<false, true>(134);
    /* System.Void UpdateGeometry() */
    inline static auto& m_UpdateGeometry = methods.get<false, false>(135);
    /* System.Void AssignPositioningIfNeeded() */
    inline static auto& m_AssignPositioningIfNeeded = methods.get<false, false>(136);
    /* System.Void OnFillVBO(UnityEngine.Mesh vbo) */
    inline static auto& m_OnFillVBO = methods.get<false, false>(137);
    /* System.Void GenerateCaret(UnityEngine.UI.VertexHelper vbo, UnityEngine.Vector2 roundingOffset) */
    inline static auto& m_GenerateCaret = methods.get<false, false>(138);
    /* System.Void CreateCursorVerts() */
    inline static auto& m_CreateCursorVerts = methods.get<false, false>(139);
    /* System.Void GenerateHighlight(UnityEngine.UI.VertexHelper vbo, UnityEngine.Vector2 roundingOffset) */
    inline static auto& m_GenerateHighlight = methods.get<false, false>(140);
    /* System.Char Validate(System.String text, System.Int32 pos, System.Char ch) */
    inline static auto& m_Validate = methods.get<false, false>(141);
    /* System.Void ActivateInputField() */
    inline static auto& m_ActivateInputField = methods.get<false, false>(142);
    /* System.Void ActivateInputFieldInternal() */
    inline static auto& m_ActivateInputFieldInternal = methods.get<false, false>(143);
    /* System.Void OnSelect(UnityEngine.EventSystems.BaseEventData eventData) */
    inline static auto& m_OnSelect = methods.get<false, true>(144);
    /* System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData) */
    inline static auto& m_OnPointerClick = methods.get<false, true>(145);
    /* System.Void DeactivateInputField() */
    inline static auto& m_DeactivateInputField = methods.get<false, false>(146);
    /* System.Void OnDeselect(UnityEngine.EventSystems.BaseEventData eventData) */
    inline static auto& m_OnDeselect = methods.get<false, true>(147);
    /* System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData) */
    inline static auto& m_OnSubmit = methods.get<false, true>(148);
    /* System.Void EnforceContentType() */
    inline static auto& m_EnforceContentType = methods.get<false, false>(149);
    /* System.Void EnforceTextHOverflow() */
    inline static auto& m_EnforceTextHOverflow = methods.get<false, false>(150);
    /* System.Void SetToCustomIfContentTypeIsNot(UnityEngine.UI.InputField+ContentType[] allowedContentTypes) */
    inline static auto& m_SetToCustomIfContentTypeIsNot = methods.get<false, false>(151);
    /* System.Void SetToCustom() */
    inline static auto& m_SetToCustom = methods.get<false, false>(152);
    /* System.Void DoStateTransition(UnityEngine.UI.Selectable+SelectionState state, System.Boolean instant) */
    inline static auto& m_DoStateTransition = methods.get<false, true>(153);
    /* System.Void CalculateLayoutInputHorizontal() */
    inline static auto& m_CalculateLayoutInputHorizontal = methods.get<false, true>(154);
    /* System.Void CalculateLayoutInputVertical() */
    inline static auto& m_CalculateLayoutInputVertical = methods.get<false, true>(155);
    /* System.Single get_minWidth() */
    inline static auto& m_get_minWidth = methods.get<false, true>(156);
    /* System.Single get_preferredWidth() */
    inline static auto& m_get_preferredWidth = methods.get<false, true>(157);
    /* System.Single get_flexibleWidth() */
    inline static auto& m_get_flexibleWidth = methods.get<false, true>(158);
    /* System.Single get_minHeight() */
    inline static auto& m_get_minHeight = methods.get<false, true>(159);
    /* System.Single get_preferredHeight() */
    inline static auto& m_get_preferredHeight = methods.get<false, true>(160);
    /* System.Single get_flexibleHeight() */
    inline static auto& m_get_flexibleHeight = methods.get<false, true>(161);
    /* System.Int32 get_layoutPriority() */
    inline static auto& m_get_layoutPriority = methods.get<false, true>(162);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(163);
    /* UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform() */
    inline static auto& m_UnityEngine_UI_ICanvasElement_get_transform = methods.get<false, true>(164);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct SettingsInputField {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<2> fields;
inline static auto /* UnityEngine.UI.InputField */ &f_inputField = fields.get<false>(0), /* System.String */ &f_key = fields.get<false>(1);

    inline static ::Tools::Il2Cpp::Metadata::array_method<5> methods;
    /* System.Void Initialize(System.String key, System.String value) */
    inline static auto& m_Initialize = methods.get<false, false>(0);
    /* System.Void Update() */
    inline static auto& m_Update = methods.get<false, false>(1);
    /* System.Void ValueChanged(System.String value) */
    inline static auto& m_ValueChanged = methods.get<false, false>(2);
    /* System.Void Reset() */
    inline static auto& m_Reset = methods.get<false, false>(3);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(4);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct UE_Screen {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<0> fields;

    inline static ::Tools::Il2Cpp::Metadata::array_method<17> methods;
    /* System.Int32 get_width() */
    inline static auto& m_get_width = methods.get<true, false>(0);
    /* System.Int32 get_height() */
    inline static auto& m_get_height = methods.get<true, false>(1);
    /* System.Single get_dpi() */
    inline static auto& m_get_dpi = methods.get<true, false>(2);
    /* System.Void RequestOrientation(UnityEngine.ScreenOrientation orient) */
    inline static auto& m_RequestOrientation = methods.get<true, false>(3);
    /* UnityEngine.ScreenOrientation GetScreenOrientation() */
    inline static auto& m_GetScreenOrientation = methods.get<true, false>(4);
    /* UnityEngine.ScreenOrientation get_orientation() */
    inline static auto& m_get_orientation = methods.get<true, false>(5);
    /* System.Void set_orientation(UnityEngine.ScreenOrientation value) */
    inline static auto& m_set_orientation = methods.get<true, false>(6);
    /* UnityEngine.Resolution get_currentResolution() */
    inline static auto& m_get_currentResolution = methods.get<true, false>(7);
    /* System.Boolean get_fullScreen() */
    inline static auto& m_get_fullScreen = methods.get<true, false>(8);
    /* System.Void set_fullScreen(System.Boolean value) */
    inline static auto& m_set_fullScreen = methods.get<true, false>(9);
    /* UnityEngine.Rect[] get_cutouts() */
    inline static auto& m_get_cutouts = methods.get<true, false>(10);
    /* System.Void SetResolution(System.Int32 width, System.Int32 height, UnityEngine.FullScreenMode fullscreenMode, UnityEngine.RefreshRate preferredRefreshRate) */
    inline static auto& m0_SetResolution = methods.get<true, false>(11);
    /* System.Void SetResolution(System.Int32 width, System.Int32 height, System.Boolean fullscreen, System.Int32 preferredRefreshRate) */
    inline static auto& m1_SetResolution = methods.get<true, false>(12);
    /* System.Void SetResolution(System.Int32 width, System.Int32 height, System.Boolean fullscreen) */
    inline static auto& m2_SetResolution = methods.get<true, false>(13);
    /* System.Void get_currentResolution_Injected(out UnityEngine.Resolution ret) */
    inline static auto& m_get_currentResolution_Injected = methods.get<true, false>(14);
    /* System.Void get_cutouts_Injected(out UnityEngine.Bindings.BlittableArrayWrapper ret) */
    inline static auto& m_get_cutouts_Injected = methods.get<true, false>(15);
    /* System.Void SetResolution_Injected(System.Int32 width, System.Int32 height, UnityEngine.FullScreenMode fullscreenMode, in UnityEngine.RefreshRate preferredRefreshRate) */
    inline static auto& m_SetResolution_Injected = methods.get<true, false>(16);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct UE_FullScreenMode {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<5> fields;
inline static auto /* UnityEngine.FullScreenMode */ &f_ExclusiveFullScreen = fields.get<true>(1), /* UnityEngine.FullScreenMode */ &f_FullScreenWindow = fields.get<true>(2), /* UnityEngine.FullScreenMode */ &f_MaximizedWindow = fields.get<true>(3), /* UnityEngine.FullScreenMode */ &f_Windowed = fields.get<true>(4);
inline static auto /* System.Int32 */ &f_value__ = fields.get<false>(0);

    inline static ::Tools::Il2Cpp::Metadata::array_method<0> methods;

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct UE_RefreshRate {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<5> fields;
inline static auto /* UnityEngine.FullScreenMode */ &f_ExclusiveFullScreen = fields.get<true>(1), /* UnityEngine.FullScreenMode */ &f_FullScreenWindow = fields.get<true>(2), /* UnityEngine.FullScreenMode */ &f_MaximizedWindow = fields.get<true>(3), /* UnityEngine.FullScreenMode */ &f_Windowed = fields.get<true>(4);
inline static auto /* System.Int32 */ &f_value__ = fields.get<false>(0);

    inline static ::Tools::Il2Cpp::Metadata::array_method<0> methods;

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct UE_Camera {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<8> fields;
inline static auto /* System.Single */ &f_kMinAperture = fields.get<true>(0), /* System.Single */ &f_kMaxAperture = fields.get<true>(1), /* System.Int32 */ &f_kMinBladeCount = fields.get<true>(2), /* System.Int32 */ &f_kMaxBladeCount = fields.get<true>(3), /* UnityEngine.Camera+CameraCallback */ &f_onPreCull = fields.get<true>(5), /* UnityEngine.Camera+CameraCallback */ &f_onPreRender = fields.get<true>(6), /* UnityEngine.Camera+CameraCallback */ &f_onPostRender = fields.get<true>(7);
inline static auto /* System.UInt32 */ &f_m_NonSerializedVersion = fields.get<false>(4);

    inline static ::Tools::Il2Cpp::Metadata::array_method<110> methods;
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(0);
    /* System.Single get_nearClipPlane() */
    inline static auto& m_get_nearClipPlane = methods.get<false, false>(1);
    /* System.Void set_nearClipPlane(System.Single value) */
    inline static auto& m_set_nearClipPlane = methods.get<false, false>(2);
    /* System.Single get_farClipPlane() */
    inline static auto& m_get_farClipPlane = methods.get<false, false>(3);
    /* System.Void set_farClipPlane(System.Single value) */
    inline static auto& m_set_farClipPlane = methods.get<false, false>(4);
    /* System.Single get_fieldOfView() */
    inline static auto& m_get_fieldOfView = methods.get<false, false>(5);
    /* System.Void set_fieldOfView(System.Single value) */
    inline static auto& m_set_fieldOfView = methods.get<false, false>(6);
    /* System.Void set_renderingPath(UnityEngine.RenderingPath value) */
    inline static auto& m_set_renderingPath = methods.get<false, false>(7);
    /* System.Single get_orthographicSize() */
    inline static auto& m_get_orthographicSize = methods.get<false, false>(8);
    /* System.Void set_orthographicSize(System.Single value) */
    inline static auto& m_set_orthographicSize = methods.get<false, false>(9);
    /* System.Boolean get_orthographic() */
    inline static auto& m_get_orthographic = methods.get<false, false>(10);
    /* System.Void set_orthographic(System.Boolean value) */
    inline static auto& m_set_orthographic = methods.get<false, false>(11);
    /* System.Single get_depth() */
    inline static auto& m_get_depth = methods.get<false, false>(12);
    /* System.Void set_depth(System.Single value) */
    inline static auto& m_set_depth = methods.get<false, false>(13);
    /* System.Single get_aspect() */
    inline static auto& m_get_aspect = methods.get<false, false>(14);
    /* System.Void set_aspect(System.Single value) */
    inline static auto& m_set_aspect = methods.get<false, false>(15);
    /* System.Int32 get_cullingMask() */
    inline static auto& m_get_cullingMask = methods.get<false, false>(16);
    /* System.Void set_cullingMask(System.Int32 value) */
    inline static auto& m_set_cullingMask = methods.get<false, false>(17);
    /* System.Int32 get_eventMask() */
    inline static auto& m_get_eventMask = methods.get<false, false>(18);
    /* UnityEngine.Color get_backgroundColor() */
    inline static auto& m_get_backgroundColor = methods.get<false, false>(19);
    /* System.Void set_backgroundColor(UnityEngine.Color value) */
    inline static auto& m_set_backgroundColor = methods.get<false, false>(20);
    /* UnityEngine.CameraClearFlags get_clearFlags() */
    inline static auto& m_get_clearFlags = methods.get<false, false>(21);
    /* System.Void set_clearFlags(UnityEngine.CameraClearFlags value) */
    inline static auto& m_set_clearFlags = methods.get<false, false>(22);
    /* UnityEngine.DepthTextureMode get_depthTextureMode() */
    inline static auto& m_get_depthTextureMode = methods.get<false, false>(23);
    /* System.Void set_depthTextureMode(UnityEngine.DepthTextureMode value) */
    inline static auto& m_set_depthTextureMode = methods.get<false, false>(24);
    /* System.Void SetReplacementShader(UnityEngine.Shader shader, System.String replacementTag) */
    inline static auto& m_SetReplacementShader = methods.get<false, false>(25);
    /* System.Void ResetReplacementShader() */
    inline static auto& m_ResetReplacementShader = methods.get<false, false>(26);
    /* System.Void set_rect(UnityEngine.Rect value) */
    inline static auto& m_set_rect = methods.get<false, false>(27);
    /* UnityEngine.Rect get_pixelRect() */
    inline static auto& m_get_pixelRect = methods.get<false, false>(28);
    /* System.Int32 get_pixelWidth() */
    inline static auto& m_get_pixelWidth = methods.get<false, false>(29);
    /* System.Int32 get_pixelHeight() */
    inline static auto& m_get_pixelHeight = methods.get<false, false>(30);
    /* UnityEngine.RenderTexture get_targetTexture() */
    inline static auto& m_get_targetTexture = methods.get<false, false>(31);
    /* System.Void set_targetTexture(UnityEngine.RenderTexture value) */
    inline static auto& m_set_targetTexture = methods.get<false, false>(32);
    /* System.Int32 get_targetDisplay() */
    inline static auto& m_get_targetDisplay = methods.get<false, false>(33);
    /* UnityEngine.Matrix4x4 get_worldToCameraMatrix() */
    inline static auto& m_get_worldToCameraMatrix = methods.get<false, false>(34);
    /* System.Void set_worldToCameraMatrix(UnityEngine.Matrix4x4 value) */
    inline static auto& m_set_worldToCameraMatrix = methods.get<false, false>(35);
    /* UnityEngine.Matrix4x4 get_projectionMatrix() */
    inline static auto& m_get_projectionMatrix = methods.get<false, false>(36);
    /* System.Void set_projectionMatrix(UnityEngine.Matrix4x4 value) */
    inline static auto& m_set_projectionMatrix = methods.get<false, false>(37);
    /* UnityEngine.Matrix4x4 CalculateObliqueMatrix(UnityEngine.Vector4 clipPlane) */
    inline static auto& m_CalculateObliqueMatrix = methods.get<false, false>(38);
    /* UnityEngine.Vector3 WorldToScreenPoint(UnityEngine.Vector3 position, UnityEngine.Camera+MonoOrStereoscopicEye eye) */
    inline static auto& m0_WorldToScreenPoint = methods.get<false, false>(39);
    /* UnityEngine.Vector3 WorldToScreenPoint(UnityEngine.Vector3 position) */
    inline static auto& m1_WorldToScreenPoint = methods.get<false, false>(42);
    /* UnityEngine.Vector3 WorldToViewportPoint(UnityEngine.Vector3 position, UnityEngine.Camera+MonoOrStereoscopicEye eye) */
    inline static auto& m0_WorldToViewportPoint = methods.get<false, false>(40);
    /* UnityEngine.Vector3 WorldToViewportPoint(UnityEngine.Vector3 position) */
    inline static auto& m1_WorldToViewportPoint = methods.get<false, false>(43);
    /* UnityEngine.Vector3 ScreenToWorldPoint(UnityEngine.Vector3 position, UnityEngine.Camera+MonoOrStereoscopicEye eye) */
    inline static auto& m0_ScreenToWorldPoint = methods.get<false, false>(41);
    /* UnityEngine.Vector3 ScreenToWorldPoint(UnityEngine.Vector3 position) */
    inline static auto& m1_ScreenToWorldPoint = methods.get<false, false>(44);
    /* UnityEngine.Vector3 ScreenToViewportPoint(UnityEngine.Vector3 position) */
    inline static auto& m_ScreenToViewportPoint = methods.get<false, false>(45);
    /* UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector2 pos, UnityEngine.Camera+MonoOrStereoscopicEye eye) */
    inline static auto& m0_ScreenPointToRay = methods.get<false, false>(46);
    /* UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector3 pos, UnityEngine.Camera+MonoOrStereoscopicEye eye) */
    inline static auto& m1_ScreenPointToRay = methods.get<false, false>(47);
    /* UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector3 pos) */
    inline static auto& m2_ScreenPointToRay = methods.get<false, false>(48);
    /* UnityEngine.Camera get_main() */
    inline static auto& m_get_main = methods.get<true, false>(49);
    /* UnityEngine.Camera get_current() */
    inline static auto& m_get_current = methods.get<true, false>(50);
    /* UnityEngine.Camera get_currentInternal() */
    inline static auto& m_get_currentInternal = methods.get<true, false>(51);
    /* System.Int32 GetAllCamerasCount() */
    inline static auto& m_GetAllCamerasCount = methods.get<true, false>(52);
    /* System.Int32 GetAllCamerasImpl(out UnityEngine.Camera[] cam) */
    inline static auto& m_GetAllCamerasImpl = methods.get<true, false>(53);
    /* System.Int32 get_allCamerasCount() */
    inline static auto& m_get_allCamerasCount = methods.get<true, false>(54);
    /* System.Int32 GetAllCameras(UnityEngine.Camera[] cameras) */
    inline static auto& m_GetAllCameras = methods.get<true, false>(55);
    /* System.Void Render() */
    inline static auto& m_Render = methods.get<false, false>(56);
    /* System.Void SetupCurrent(UnityEngine.Camera cur) */
    inline static auto& m_SetupCurrent = methods.get<true, false>(57);
    /* System.Void FireOnPreCull(UnityEngine.Camera cam) */
    inline static auto& m_FireOnPreCull = methods.get<true, false>(58);
    /* System.Void FireOnPreRender(UnityEngine.Camera cam) */
    inline static auto& m_FireOnPreRender = methods.get<true, false>(59);
    /* System.Void FireOnPostRender(UnityEngine.Camera cam) */
    inline static auto& m_FireOnPostRender = methods.get<true, false>(60);
    /* System.Void BumpNonSerializedVersion(UnityEngine.Camera cam) */
    inline static auto& m_BumpNonSerializedVersion = methods.get<true, false>(61);
    /* System.Single get_nearClipPlane_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_nearClipPlane_Injected = methods.get<true, false>(62);
    /* System.Void set_nearClipPlane_Injected(System.IntPtr _unity_self, System.Single value) */
    inline static auto& m_set_nearClipPlane_Injected = methods.get<true, false>(63);
    /* System.Single get_farClipPlane_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_farClipPlane_Injected = methods.get<true, false>(64);
    /* System.Void set_farClipPlane_Injected(System.IntPtr _unity_self, System.Single value) */
    inline static auto& m_set_farClipPlane_Injected = methods.get<true, false>(65);
    /* System.Single get_fieldOfView_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_fieldOfView_Injected = methods.get<true, false>(66);
    /* System.Void set_fieldOfView_Injected(System.IntPtr _unity_self, System.Single value) */
    inline static auto& m_set_fieldOfView_Injected = methods.get<true, false>(67);
    /* System.Void set_renderingPath_Injected(System.IntPtr _unity_self, UnityEngine.RenderingPath value) */
    inline static auto& m_set_renderingPath_Injected = methods.get<true, false>(68);
    /* System.Single get_orthographicSize_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_orthographicSize_Injected = methods.get<true, false>(69);
    /* System.Void set_orthographicSize_Injected(System.IntPtr _unity_self, System.Single value) */
    inline static auto& m_set_orthographicSize_Injected = methods.get<true, false>(70);
    /* System.Boolean get_orthographic_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_orthographic_Injected = methods.get<true, false>(71);
    /* System.Void set_orthographic_Injected(System.IntPtr _unity_self, System.Boolean value) */
    inline static auto& m_set_orthographic_Injected = methods.get<true, false>(72);
    /* System.Single get_depth_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_depth_Injected = methods.get<true, false>(73);
    /* System.Void set_depth_Injected(System.IntPtr _unity_self, System.Single value) */
    inline static auto& m_set_depth_Injected = methods.get<true, false>(74);
    /* System.Single get_aspect_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_aspect_Injected = methods.get<true, false>(75);
    /* System.Void set_aspect_Injected(System.IntPtr _unity_self, System.Single value) */
    inline static auto& m_set_aspect_Injected = methods.get<true, false>(76);
    /* System.Int32 get_cullingMask_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_cullingMask_Injected = methods.get<true, false>(77);
    /* System.Void set_cullingMask_Injected(System.IntPtr _unity_self, System.Int32 value) */
    inline static auto& m_set_cullingMask_Injected = methods.get<true, false>(78);
    /* System.Int32 get_eventMask_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_eventMask_Injected = methods.get<true, false>(79);
    /* System.Void get_backgroundColor_Injected(System.IntPtr _unity_self, out UnityEngine.Color ret) */
    inline static auto& m_get_backgroundColor_Injected = methods.get<true, false>(80);
    /* System.Void set_backgroundColor_Injected(System.IntPtr _unity_self, in UnityEngine.Color value) */
    inline static auto& m_set_backgroundColor_Injected = methods.get<true, false>(81);
    /* UnityEngine.CameraClearFlags get_clearFlags_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_clearFlags_Injected = methods.get<true, false>(82);
    /* System.Void set_clearFlags_Injected(System.IntPtr _unity_self, UnityEngine.CameraClearFlags value) */
    inline static auto& m_set_clearFlags_Injected = methods.get<true, false>(83);
    /* UnityEngine.DepthTextureMode get_depthTextureMode_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_depthTextureMode_Injected = methods.get<true, false>(84);
    /* System.Void set_depthTextureMode_Injected(System.IntPtr _unity_self, UnityEngine.DepthTextureMode value) */
    inline static auto& m_set_depthTextureMode_Injected = methods.get<true, false>(85);
    /* System.Void SetReplacementShader_Injected(System.IntPtr _unity_self, System.IntPtr shader, ref UnityEngine.Bindings.ManagedSpanWrapper replacementTag) */
    inline static auto& m_SetReplacementShader_Injected = methods.get<true, false>(86);
    /* System.Void ResetReplacementShader_Injected(System.IntPtr _unity_self) */
    inline static auto& m_ResetReplacementShader_Injected = methods.get<true, false>(87);
    /* System.Void set_rect_Injected(System.IntPtr _unity_self, in UnityEngine.Rect value) */
    inline static auto& m_set_rect_Injected = methods.get<true, false>(88);
    /* System.Void get_pixelRect_Injected(System.IntPtr _unity_self, out UnityEngine.Rect ret) */
    inline static auto& m_get_pixelRect_Injected = methods.get<true, false>(89);
    /* System.Int32 get_pixelWidth_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_pixelWidth_Injected = methods.get<true, false>(90);
    /* System.Int32 get_pixelHeight_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_pixelHeight_Injected = methods.get<true, false>(91);
    /* System.IntPtr get_targetTexture_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_targetTexture_Injected = methods.get<true, false>(92);
    /* System.Void set_targetTexture_Injected(System.IntPtr _unity_self, System.IntPtr value) */
    inline static auto& m_set_targetTexture_Injected = methods.get<true, false>(93);
    /* System.Int32 get_targetDisplay_Injected(System.IntPtr _unity_self) */
    inline static auto& m_get_targetDisplay_Injected = methods.get<true, false>(94);
    /* System.Void get_worldToCameraMatrix_Injected(System.IntPtr _unity_self, out UnityEngine.Matrix4x4 ret) */
    inline static auto& m_get_worldToCameraMatrix_Injected = methods.get<true, false>(95);
    /* System.Void set_worldToCameraMatrix_Injected(System.IntPtr _unity_self, in UnityEngine.Matrix4x4 value) */
    inline static auto& m_set_worldToCameraMatrix_Injected = methods.get<true, false>(96);
    /* System.Void get_projectionMatrix_Injected(System.IntPtr _unity_self, out UnityEngine.Matrix4x4 ret) */
    inline static auto& m_get_projectionMatrix_Injected = methods.get<true, false>(97);
    /* System.Void set_projectionMatrix_Injected(System.IntPtr _unity_self, in UnityEngine.Matrix4x4 value) */
    inline static auto& m_set_projectionMatrix_Injected = methods.get<true, false>(98);
    /* System.Void CalculateObliqueMatrix_Injected(System.IntPtr _unity_self, in UnityEngine.Vector4 clipPlane, out UnityEngine.Matrix4x4 ret) */
    inline static auto& m_CalculateObliqueMatrix_Injected = methods.get<true, false>(99);
    /* System.Void WorldToScreenPoint_Injected(System.IntPtr _unity_self, in UnityEngine.Vector3 position, UnityEngine.Camera+MonoOrStereoscopicEye eye, out UnityEngine.Vector3 ret) */
    inline static auto& m_WorldToScreenPoint_Injected = methods.get<true, false>(100);
    /* System.Void WorldToViewportPoint_Injected(System.IntPtr _unity_self, in UnityEngine.Vector3 position, UnityEngine.Camera+MonoOrStereoscopicEye eye, out UnityEngine.Vector3 ret) */
    inline static auto& m_WorldToViewportPoint_Injected = methods.get<true, false>(101);
    /* System.Void ScreenToWorldPoint_Injected(System.IntPtr _unity_self, in UnityEngine.Vector3 position, UnityEngine.Camera+MonoOrStereoscopicEye eye, out UnityEngine.Vector3 ret) */
    inline static auto& m_ScreenToWorldPoint_Injected = methods.get<true, false>(102);
    /* System.Void ScreenToViewportPoint_Injected(System.IntPtr _unity_self, in UnityEngine.Vector3 position, out UnityEngine.Vector3 ret) */
    inline static auto& m_ScreenToViewportPoint_Injected = methods.get<true, false>(103);
    /* System.Void ScreenPointToRay_Injected(System.IntPtr _unity_self, in UnityEngine.Vector2 pos, UnityEngine.Camera+MonoOrStereoscopicEye eye, out UnityEngine.Ray ret) */
    inline static auto& m_ScreenPointToRay_Injected = methods.get<true, false>(104);
    /* System.IntPtr get_main_Injected() */
    inline static auto& m_get_main_Injected = methods.get<true, false>(105);
    /* System.IntPtr get_currentInternal_Injected() */
    inline static auto& m_get_currentInternal_Injected = methods.get<true, false>(106);
    /* System.Int32 GetAllCamerasImpl_Injected(out UnityEngine.Camera[] cam) */
    inline static auto& m_GetAllCamerasImpl_Injected = methods.get<true, false>(107);
    /* System.Void Render_Injected(System.IntPtr _unity_self) */
    inline static auto& m_Render_Injected = methods.get<true, false>(108);
    /* System.Void SetupCurrent_Injected(System.IntPtr cur) */
    inline static auto& m_SetupCurrent_Injected = methods.get<true, false>(109);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct FirstPersonCamera {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<15> fields;
inline static auto /* System.Single */ &f_cameraHeight = fields.get<false>(0), /* System.Single */ &f_maxLookAngleDownward = fields.get<false>(1), /* System.Single */ &f_maxLookAngleUpward = fields.get<false>(2), /* UnityEngine.Vector3 */ &f_cameraOffset = fields.get<false>(3), /* System.Single */ &f_pitchSensitivity = fields.get<false>(4), /* System.Single */ &f_yawSensitivity = fields.get<false>(5), /* FirstPersonWeaponBob */ &f_weaponBob = fields.get<false>(6), /* DamageIndicator */ &f_damageIndicator = fields.get<false>(7), /* ModifierIndicator */ &f_modifierIndicator = fields.get<false>(8), /* HealingIndicator */ &f_healingIndicator = fields.get<false>(9), /* TargetRotation */ &f_smoothRotation = fields.get<false>(10), /* UnityEngine.Vector2 */ &f_targetRotation = fields.get<false>(11), /* MVAvatarLocal */ &f_localAvatar = fields.get<false>(12), /* System.Collections.Generic.List`1<UnityEngine.MeshRenderer> */ &f_vehiclesHiddenMeshRenderers = fields.get<false>(13), /* System.Boolean */ &f_haveHiddenVehicle = fields.get<false>(14);

    inline static ::Tools::Il2Cpp::Metadata::array_method<22> methods;
    /* CameraType get_CameraType() */
    inline static auto& m_get_CameraType = methods.get<false, true>(0);
    /* System.Single get_FieldOfView() */
    inline static auto& m_get_FieldOfView = methods.get<false, true>(1);
    /* System.Void UpdateCameraRotation() */
    inline static auto& m_UpdateCameraRotation = methods.get<false, true>(2);
    /* System.Void Reset() */
    inline static auto& m_Reset = methods.get<false, true>(3);
    /* System.Void Initialize(MVAvatarLocal avatarLocal) */
    inline static auto& m0_Initialize = methods.get<false, false>(4);
    /* System.Void Initialize() */
    inline static auto& m1_Initialize = methods.get<false, false>(5);
    /* System.Void Enter(MVCameraController cameraController) */
    inline static auto& m_Enter = methods.get<false, true>(6);
    /* System.Void Resume(MVCameraController cameraController) */
    inline static auto& m_Resume = methods.get<false, true>(7);
    /* System.Void Exit(MVCameraController camController) */
    inline static auto& m_Exit = methods.get<false, true>(8);
    /* System.Void Suspend(MVCameraController camController) */
    inline static auto& m_Suspend = methods.get<false, true>(9);
    /* System.Void ActivateFirstPerson() */
    inline static auto& m_ActivateFirstPerson = methods.get<false, false>(10);
    /* System.Void OnDestroy() */
    inline static auto& m_OnDestroy = methods.get<false, false>(11);
    /* System.Void DeactivateFirstPerson() */
    inline static auto& m_DeactivateFirstPerson = methods.get<false, false>(12);
    /* System.Void MoveItemToFirstpersonView(PickupItem item) */
    inline static auto& m_MoveItemToFirstpersonView = methods.get<false, false>(13);
    /* System.Void HideBody(System.Boolean shouldHideBody) */
    inline static auto& m_HideBody = methods.get<false, false>(14);
    /* System.Void HideBlinking(System.Boolean shouldHideBlinking) */
    inline static auto& m_HideBlinking = methods.get<false, false>(15);
    /* System.Void HideVehicle() */
    inline static auto& m_HideVehicle = methods.get<false, false>(16);
    /* System.Void ShowVehicle() */
    inline static auto& m_ShowVehicle = methods.get<false, false>(17);
    /* System.Void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform) */
    inline static auto& m_UpdateCamera = methods.get<false, true>(18);
    /* System.Void UpdateCameraPosition() */
    inline static auto& m_UpdateCameraPosition = methods.get<false, false>(19);
    /* System.Void UpdateAvatar() */
    inline static auto& m_UpdateAvatar = methods.get<false, false>(20);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(21);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVCameraBase {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<3> fields;
inline static auto /* CameraImpact */ &f_cameraImpact = fields.get<false>(0), /* IgnoreInputTypes */ &f_ignoreInputTypes = fields.get<false>(1), /* System.Single */ &f_cameraRadius = fields.get<false>(2);

    inline static ::Tools::Il2Cpp::Metadata::array_method<20> methods;
    /* System.Boolean get_InputActive() */
    inline static auto& m_get_InputActive = methods.get<false, false>(0);
    /* CameraType get_CameraType() */
    inline static auto& m_get_CameraType = methods.get<false, true>(1);
    /* System.Void Awake() */
    inline static auto& m_Awake = methods.get<false, true>(2);
    /* System.Single get_FieldOfView() */
    inline static auto& m_get_FieldOfView = methods.get<false, true>(3);
    /* System.Void camController_onIgnoreInputTypes(System.Object sender, OnIgnoreInputTypesArgs e) */
    inline static auto& m_camController_onIgnoreInputTypes = methods.get<false, false>(4);
    /* System.Void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform) */
    inline static auto& m_UpdateCamera = methods.get<false, true>(5);
    /* System.Void UpdateImpactSimulation(ProtectedTransform targetTransform) */
    inline static auto& m_UpdateImpactSimulation = methods.get<false, false>(6);
    /* System.Void SimulateImpact(UnityEngine.Vector3 impactDirection, UnityEngine.AnimationCurve impactCurve, System.Single forceMultiplier = 1, UnityEngine.Space impactSpace = 0) */
    inline static auto& m0_SimulateImpact = methods.get<false, false>(7);
    /* System.Void SimulateImpact(UnityEngine.Transform targetTransform) */
    inline static auto& m1_SimulateImpact = methods.get<false, false>(8);
    /* System.Void SimulateImpact(UnityEngine.Transform targetTransform, UnityEngine.Vector3 impactDirection, UnityEngine.AnimationCurve impactCurve, System.Single forceMultiplier, UnityEngine.Space impactSpace = 0) */
    inline static auto& m2_SimulateImpact = methods.get<false, false>(9);
    /* System.Void CameraCollision() */
    inline static auto& m_CameraCollision = methods.get<false, true>(10);
    /* System.Void Enter(MVCameraController camController) */
    inline static auto& m_Enter = methods.get<false, true>(11);
    /* System.Void Exit(MVCameraController camController) */
    inline static auto& m_Exit = methods.get<false, true>(12);
    /* System.Void Suspend(MVCameraController camController) */
    inline static auto& m_Suspend = methods.get<false, true>(13);
    /* System.Void Resume(MVCameraController camController) */
    inline static auto& m_Resume = methods.get<false, true>(14);
    /* System.Void Reset() */
    inline static auto& m_Reset = methods.get<false, true>(15);
    /* System.Void FocusOnObject(MVWorldObjectClient wo, System.Single transitionTime = 2, UnityEngine.Vector3 avatarOffset = null, UnityEngine.Vector3 cameraOffset = null) */
    inline static auto& m_FocusOnObject = methods.get<false, true>(16);
    /* System.Void Activate() */
    inline static auto& m_Activate = methods.get<false, true>(17);
    /* System.Void Deactivate() */
    inline static auto& m_Deactivate = methods.get<false, true>(18);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(19);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct TransitionCamera {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<6> fields;
inline static auto /* System.Single */ &f_fieldOfView = fields.get<false>(0), /* System.Single */ &f_transitionPercentage = fields.get<false>(1), /* System.Boolean */ &f_superSoft = fields.get<false>(2), /* UnityEngine.Vector3 */ &f_prevCameraPosition = fields.get<false>(3), /* UnityEngine.Quaternion */ &f_prevCameraRotation = fields.get<false>(4), /* System.Single */ &f_time = fields.get<false>(5);

    inline static ::Tools::Il2Cpp::Metadata::array_method<9> methods;
    /* System.Single get_FieldOfView() */
    inline static auto& m_get_FieldOfView = methods.get<false, true>(0);
    /* System.Single get_TransitionPercentage() */
    inline static auto& m_get_TransitionPercentage = methods.get<false, false>(1);
    /* CameraType get_CameraType() */
    inline static auto& m_get_CameraType = methods.get<false, true>(2);
    /* System.Void InitTransition(UnityEngine.Transform targetCameraTransform, System.Single transitionTime = 2, System.Boolean soft = False) */
    inline static auto& m_InitTransition = methods.get<false, false>(3);
    /* System.Void AbortTransition() */
    inline static auto& m_AbortTransition = methods.get<false, false>(4);
    /* System.Void UpdateCamera(MVCameraController camController, ProtectedTransform targetTransform) */
    inline static auto& m_UpdateCamera = methods.get<false, true>(5);
    /* UnityEngine.Quaternion RotateTowardsY(UnityEngine.Vector3 eulerFrom, UnityEngine.Vector3 eulerTo, System.Single percentage) */
    inline static auto& m_RotateTowardsY = methods.get<false, false>(6);
    /* UnityEngine.Quaternion RotateTowardsX(UnityEngine.Vector3 eulerFrom, UnityEngine.Vector3 eulerTo, System.Single percentage) */
    inline static auto& m_RotateTowardsX = methods.get<false, false>(7);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(8);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct PickupItem {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<15> fields;
inline static auto /* UnityEngine.Transform */ &f_muzzlePoint = fields.get<false>(0), /* UnityEngine.Transform */ &f_holsterTransformOffset = fields.get<false>(1), /* UnityEngine.Transform */ &f_firstPersonTransform = fields.get<false>(2), /* UnityEngine.Transform */ &f_handTransform = fields.get<false>(3), /* UnityEngine.Transform */ &f_center = fields.get<false>(4), /* UnityEngine.MeshRenderer[] */ &f_meshRenderers = fields.get<false>(5), /* MVPickupOwner */ &f_owner = fields.get<false>(6), /* System.Boolean */ &f_firedThisFrame = fields.get<false>(7), /* UnityEngine.Transform */ &f_originalParent = fields.get<false>(8), /* UnityEngine.Vector3 */ &f_originalPos = fields.get<false>(9), /* UnityEngine.Quaternion */ &f_originalRot = fields.get<false>(10), /* UnityEngine.Vector3 */ &f_originalScale = fields.get<false>(11), /* System.Boolean */ &f__IsHolstered_k__BackingField = fields.get<false>(12), /* System.Int32 */ &f__VariantID_k__BackingField = fields.get<false>(13), /* System.Boolean */ &f__AbleToFire_k__BackingField = fields.get<false>(14);

    inline static ::Tools::Il2Cpp::Metadata::array_method<47> methods;
    /* MV.Common.AvatarItemType get_Type() */
    inline static auto& m_get_Type = methods.get<false, true>(0);
    /* System.Int32 get_MaxAmmo() */
    inline static auto& m_get_MaxAmmo = methods.get<false, true>(1);
    /* System.Int32 get_Quantity() */
    inline static auto& m_get_Quantity = methods.get<false, true>(2);
    /* UnityEngine.Color get_CrossHairColor() */
    inline static auto& m_get_CrossHairColor = methods.get<false, true>(3);
    /* System.Single get_ChargeState() */
    inline static auto& m_get_ChargeState = methods.get<false, true>(4);
    /* System.Boolean get_FirstPerson() */
    inline static auto& m_get_FirstPerson = methods.get<false, true>(5);
    /* System.Boolean get_GunMode() */
    inline static auto& m_get_GunMode = methods.get<false, true>(6);
    /* System.Boolean get_IsHandEquippable() */
    inline static auto& m_get_IsHandEquippable = methods.get<false, true>(7);
    /* System.Boolean get_ThirdPersonGunMode() */
    inline static auto& m_get_ThirdPersonGunMode = methods.get<false, true>(8);
    /* System.Boolean get_CanHolster() */
    inline static auto& m_get_CanHolster = methods.get<false, true>(9);
    /* System.Boolean get_HasUnlimitedAmmo() */
    inline static auto& m_get_HasUnlimitedAmmo = methods.get<false, true>(10);
    /* System.Boolean get_HasPercentageAmmo() */
    inline static auto& m_get_HasPercentageAmmo = methods.get<false, true>(11);
    /* System.Boolean get_CanUnequip() */
    inline static auto& m_get_CanUnequip = methods.get<false, true>(12);
    /* System.Boolean get_IsAmmoDepleted() */
    inline static auto& m_get_IsAmmoDepleted = methods.get<false, true>(13);
    /* System.Boolean get_IsHolstered() */
    inline static auto& m_get_IsHolstered = methods.get<false, false>(14);
    /* System.Void set_IsHolstered(System.Boolean value) */
    inline static auto& m_set_IsHolstered = methods.get<false, false>(15);
    /* UnityEngine.Vector3 get_Origin() */
    inline static auto& m_get_Origin = methods.get<false, false>(16);
    /* System.Boolean get_IsInFirstPersonMode() */
    inline static auto& m_get_IsInFirstPersonMode = methods.get<false, false>(17);
    /* System.Boolean get_IsAmmoEmpty() */
    inline static auto& m_get_IsAmmoEmpty = methods.get<false, false>(18);
    /* System.Int32 get_VariantID() */
    inline static auto& m_get_VariantID = methods.get<false, false>(19);
    /* System.Void set_VariantID(System.Int32 value) */
    inline static auto& m_set_VariantID = methods.get<false, false>(20);
    /* System.Boolean get_AbleToFire() */
    inline static auto& m_get_AbleToFire = methods.get<false, false>(21);
    /* System.Void set_AbleToFire(System.Boolean value) */
    inline static auto& m_set_AbleToFire = methods.get<false, false>(22);
    /* UnityEngine.GameObject InstantiatePickupItem(MV.Common.AvatarItemType type, System.Int32 variantId) */
    inline static auto& m_InstantiatePickupItem = methods.get<true, false>(23);
    /* System.Void HolsterPickup(UnityEngine.Transform targetHolsterTransform) */
    inline static auto& m_HolsterPickup = methods.get<false, false>(24);
    /* System.Void UnholsterPickup() */
    inline static auto& m_UnholsterPickup = methods.get<false, false>(25);
    /* System.Void EnterFirstPersonView(MVCameraBase camera) */
    inline static auto& m_EnterFirstPersonView = methods.get<false, false>(26);
    /* System.Void EquipToHand(UnityEngine.Transform hand) */
    inline static auto& m_EquipToHand = methods.get<false, false>(27);
    /* System.Void LeaveFirstPersonView() */
    inline static auto& m_LeaveFirstPersonView = methods.get<false, false>(28);
    /* System.Void RevertToOriginalTransform() */
    inline static auto& m_RevertToOriginalTransform = methods.get<false, false>(29);
    /* System.Boolean CanFire() */
    inline static auto& m_CanFire = methods.get<false, true>(30);
    /* System.Void TriggerBegin(System.Int32 instigatorActorNr) */
    inline static auto& m_TriggerBegin = methods.get<false, true>(31);
    /* System.Void TriggerEnd() */
    inline static auto& m_TriggerEnd = methods.get<false, true>(32);
    /* System.Void OnStateChanged(System.Collections.Generic.Dictionary`2<System.Object, System.Object> newState) */
    inline static auto& m_OnStateChanged = methods.get<false, true>(33);
    /* System.Void OnEquip() */
    inline static auto& m_OnEquip = methods.get<false, true>(34);
    /* System.Void OnUnequip() */
    inline static auto& m_OnUnequip = methods.get<false, true>(35);
    /* System.Void ResetAmmo() */
    inline static auto& m_ResetAmmo = methods.get<false, true>(36);
    /* System.Void OnLeaveVehicleWithWeapon() */
    inline static auto& m_OnLeaveVehicleWithWeapon = methods.get<false, true>(37);
    /* System.Void OnEnterVehicleWithWeapon() */
    inline static auto& m_OnEnterVehicleWithWeapon = methods.get<false, true>(38);
    /* System.Void OnHolstered() */
    inline static auto& m_OnHolstered = methods.get<false, true>(39);
    /* System.Void OnUnholstered() */
    inline static auto& m_OnUnholstered = methods.get<false, true>(40);
    /* System.Int32 CalculateMaxAmmo(System.Int32 defaultAmmo) */
    inline static auto& m_CalculateMaxAmmo = methods.get<false, true>(41);
    /* System.Void UpdateWithDirection(UnityEngine.Vector3 dir) */
    inline static auto& m_UpdateWithDirection = methods.get<false, true>(42);
    /* System.Boolean GetAndResetFiredThisFrame() */
    inline static auto& m_GetAndResetFiredThisFrame = methods.get<false, false>(43);
    /* UnityEngine.GameObject CloneCubeModelInstance(MVCubeModelInstance cmb, System.Boolean forceVisible = False) */
    inline static auto& m_CloneCubeModelInstance = methods.get<true, false>(44);
    /* UnityEngine.GameObject InstantiateMeleeWeapon(System.Int32 variantId) */
    inline static auto& m_InstantiateMeleeWeapon = methods.get<true, false>(45);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(46);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct CameraType {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<14> fields;
inline static auto /* CameraType */ &f_None = fields.get<true>(1), /* CameraType */ &f_ThirdPerson = fields.get<true>(2), /* CameraType */ &f_EditorCamera = fields.get<true>(3), /* CameraType */ &f_LobbyState = fields.get<true>(4), /* CameraType */ &f_TransitionCamera = fields.get<true>(5), /* CameraType */ &f_VehicleCamera = fields.get<true>(6), /* CameraType */ &f_AirCraftCamera = fields.get<true>(7), /* CameraType */ &f_AvatarEditModeCamera = fields.get<true>(8), /* CameraType */ &f_FirstPersonCamera = fields.get<true>(9), /* CameraType */ &f_TimeAttackFlagDebriefingCamera = fields.get<true>(10), /* CameraType */ &f_TimeAttackFlagCountdownCamera = fields.get<true>(11), /* CameraType */ &f_GhostCamera = fields.get<true>(12), /* CameraType */ &f_DeadCamera = fields.get<true>(13);
inline static auto /* System.Int32 */ &f_value__ = fields.get<false>(0);

    inline static ::Tools::Il2Cpp::Metadata::array_method<0> methods;

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct AvatarCamerasDesktop {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<9> fields;
inline static auto /* AvatarCamerasWrapper */ &f_avatarCamerasWrapper = fields.get<false>(0), /* MVCameraController */ &f_cameraController = fields.get<false>(1), /* DesktopFirstPersonCamera */ &f_firstPersonDesktopCamera = fields.get<false>(2), /* ThirdPersonCamera */ &f_thirdPersonDesktopCamera = fields.get<false>(3), /* LobbyStateCamera */ &f_lobbyStateCamera = fields.get<false>(4), /* TimeAttackFlagDebriefingCamera */ &f_timeAttackFlagDebriefingCamera = fields.get<false>(5), /* TimeAttackFlagCountdownCamera */ &f_timeAttackFlagCountdownCamera = fields.get<false>(6), /* GhostCamera */ &f_ghostCamera = fields.get<false>(7), /* DeadCamera */ &f_deadCamera = fields.get<false>(8);

    inline static ::Tools::Il2Cpp::Metadata::array_method<10> methods;
    /* System.Void Initialize(MVAvatarLocal avatarLocal) */
    inline static auto& m_Initialize = methods.get<false, true>(0);
    /* System.Void ActivateCameraController() */
    inline static auto& m_ActivateCameraController = methods.get<false, true>(1);
    /* System.Void SetCamera(CameraType cameraType) */
    inline static auto& m0_SetCamera = methods.get<false, true>(2);
    /* System.Void SetCamera(MVCameraBase cameraBase) */
    inline static auto& m1_SetCamera = methods.get<false, true>(3);
    /* System.Void PushCamera(CameraType cameraType) */
    inline static auto& m0_PushCamera = methods.get<false, true>(4);
    /* System.Void PushCamera(MVCameraBase cameraBase) */
    inline static auto& m1_PushCamera = methods.get<false, true>(5);
    /* System.Void RemoveCamera(CameraType cameraType) */
    inline static auto& m0_RemoveCamera = methods.get<false, true>(6);
    /* System.Void RemoveCamera(MVCameraBase cameraBase) */
    inline static auto& m1_RemoveCamera = methods.get<false, true>(7);
    /* System.Collections.Generic.List`1<MVCameraBase> GetCameraBases() */
    inline static auto& m_GetCameraBases = methods.get<false, true>(8);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(9);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct GameStatCounterType {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<10> fields;
inline static auto /* GameStatCounterType */ &f_None = fields.get<true>(1), /* GameStatCounterType */ &f_Kill = fields.get<true>(2), /* GameStatCounterType */ &f_Flag = fields.get<true>(3), /* GameStatCounterType */ &f_Collectible = fields.get<true>(4), /* GameStatCounterType */ &f_Time = fields.get<true>(5), /* GameStatCounterType */ &f_FlagCaptured = fields.get<true>(6), /* GameStatCounterType */ &f_OculusKill = fields.get<true>(7), /* GameStatCounterType */ &f_GameCoin = fields.get<true>(8), /* GameStatCounterType */ &f_TimeAttackFlag = fields.get<true>(9);
inline static auto /* System.Byte */ &f_value__ = fields.get<false>(0);

    inline static ::Tools::Il2Cpp::Metadata::array_method<0> methods;

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct WinningConditionControl {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<0> fields;

    inline static ::Tools::Il2Cpp::Metadata::array_method<7> methods;
    /* System.Boolean TryGetPrioritizedWinCondition(out WinningConditionType condition) */
    inline static auto& m_TryGetPrioritizedWinCondition = methods.get<true, false>(0);
    /* System.Boolean IsWinConditionPresent(WinningConditionType condition) */
    inline static auto& m_IsWinConditionPresent = methods.get<true, false>(1);
    /* System.Boolean TryGetPrioritizedStat(out GameStatCounterType statType) */
    inline static auto& m_TryGetPrioritizedStat = methods.get<true, false>(2);
    /* System.Int32 GetPrioritizedStatLimit(GameStatCounterType gameStatType) */
    inline static auto& m_GetPrioritizedStatLimit = methods.get<true, false>(3);
    /* System.Boolean IsNewScoreBetter(System.Int32 newScore, System.Int32 oldScore, GameStatCounterType statType) */
    inline static auto& m_IsNewScoreBetter = methods.get<true, false>(4);
    /* System.String MakeIntoScoreText(System.Int32 score, GameStatCounterType statType) */
    inline static auto& m_MakeIntoScoreText = methods.get<true, false>(5);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(6);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct ThemeRepository {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<4> fields;
inline static auto /* ThemeRepository */ &f__Instance_k__BackingField = fields.get<true>(0);
inline static auto /* System.Collections.Generic.List`1<Theme> */ &f_themePrefabs = fields.get<false>(1), /* System.Collections.Generic.Dictionary`2<System.String, Theme> */ &f_IdentifierToTheme = fields.get<false>(2), /* System.Boolean */ &f__ThemesEnabled_k__BackingField = fields.get<false>(3);

    inline static ::Tools::Il2Cpp::Metadata::array_method<16> methods;
    /* ThemeRepository get_Instance() */
    inline static auto& m_get_Instance = methods.get<true, false>(0);
    /* System.Void set_Instance(ThemeRepository value) */
    inline static auto& m_set_Instance = methods.get<true, false>(1);
    /* System.Boolean get_ThemesEnabled() */
    inline static auto& m_get_ThemesEnabled = methods.get<false, false>(2);
    /* System.Void set_ThemesEnabled(System.Boolean value) */
    inline static auto& m_set_ThemesEnabled = methods.get<false, false>(3);
    /* System.Int32 get_CurrentThemeWoid() */
    inline static auto& m_get_CurrentThemeWoid = methods.get<false, false>(4);
    /* Theme get_CurrentThemeVisualization() */
    inline static auto& m_get_CurrentThemeVisualization = methods.get<false, false>(5);
    /* System.String get_CurrentThemeIdentifier() */
    inline static auto& m_get_CurrentThemeIdentifier = methods.get<false, false>(6);
    /* System.Boolean get_SkyboxOverride() */
    inline static auto& m_get_SkyboxOverride = methods.get<false, false>(7);
    /* System.Boolean get_ThemeIsActive() */
    inline static auto& m_get_ThemeIsActive = methods.get<false, false>(8);
    /* ThemeWorldObject get_CurrentTheme() */
    inline static auto& m_get_CurrentTheme = methods.get<false, false>(9);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, false>(10);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<true, false>(11);
    /* Theme GetThemePrefab(System.String identifier) */
    inline static auto& m_GetThemePrefab = methods.get<false, false>(12);
    /* Theme CreateTemporaryThemeVisualization(System.String identifier) */
    inline static auto& m_CreateTemporaryThemeVisualization = methods.get<false, false>(13);
    /* System.Void DestroyTemporary(Theme theme) */
    inline static auto& m_DestroyTemporary = methods.get<false, false>(14);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(15);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct Theme {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<4> fields;
inline static auto /* System.Boolean */ &f_overrideSkyboxManager = fields.get<false>(0), /* UnityEngine.RectTransform */ &f_themeButtonImagePrefab = fields.get<false>(1), /* System.Collections.Generic.List`1<ThemeComponent> */ &f_components = fields.get<false>(2), /* ThemeSettings.SettingsWrapper */ &f__Settings_k__BackingField = fields.get<false>(3);

    inline static ::Tools::Il2Cpp::Metadata::array_method<19> methods;
    /* System.Boolean get_OverrideSkyboxManager() */
    inline static auto& m_get_OverrideSkyboxManager = methods.get<false, false>(0);
    /* UnityEngine.RectTransform get_ThemeButtonImagePrefab() */
    inline static auto& m_get_ThemeButtonImagePrefab = methods.get<false, false>(1);
    /* System.String get_Identifier() */
    inline static auto& m_get_Identifier = methods.get<false, true>(2);
    /* System.String get_DisplayName() */
    inline static auto& m_get_DisplayName = methods.get<false, true>(3);
    /* System.String get_Description() */
    inline static auto& m_get_Description = methods.get<false, true>(4);
    /* System.Void InitializeComponents() */
    inline static auto& m_InitializeComponents = methods.get<false, true>(5);
    /* System.Void InitializeAttributes() */
    inline static auto& m_InitializeAttributes = methods.get<false, true>(6);
    /* ThemeSettings.SettingsWrapper get_Settings() */
    inline static auto& m_get_Settings = methods.get<false, false>(7);
    /* System.Void set_Settings(ThemeSettings.SettingsWrapper value) */
    inline static auto& m_set_Settings = methods.get<false, false>(8);
    /* System.Collections.Generic.List`1<UnityEngine.RectTransform> get_Controllers() */
    inline static auto& m_get_Controllers = methods.get<false, true>(9);
    /* System.Void InitializeForPreview() */
    inline static auto& m_InitializeForPreview = methods.get<false, false>(10);
    /* System.Void Initialize(System.Int32 woid) */
    inline static auto& m0_Initialize = methods.get<false, false>(11);
    /* System.Void Initialize() */
    inline static auto& m1_Initialize = methods.get<false, false>(12);
    /* System.Void Activate() */
    inline static auto& m_Activate = methods.get<false, false>(13);
    /* System.Void Deactivate() */
    inline static auto& m_Deactivate = methods.get<false, false>(14);
    /* System.Void Add(ThemeComponent component) */
    inline static auto& m_Add = methods.get<false, false>(15);
    /* System.Void Purchase(System.Int32 id) */
    inline static auto& m_Purchase = methods.get<false, false>(16);
    /* System.Void ThemeReset() */
    inline static auto& m_ThemeReset = methods.get<false, true>(17);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(18);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct UE_RenderSettings {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<0> fields;

    inline static ::Tools::Il2Cpp::Metadata::array_method<12> methods;
    /* System.Void set_fog(System.Boolean value) */
    inline static auto& m_set_fog = methods.get<true, false>(0);
    /* System.Void set_fogStartDistance(System.Single value) */
    inline static auto& m_set_fogStartDistance = methods.get<true, false>(1);
    /* System.Void set_fogEndDistance(System.Single value) */
    inline static auto& m_set_fogEndDistance = methods.get<true, false>(2);
    /* System.Void set_fogMode(UnityEngine.FogMode value) */
    inline static auto& m_set_fogMode = methods.get<true, false>(3);
    /* System.Void set_fogColor(UnityEngine.Color value) */
    inline static auto& m_set_fogColor = methods.get<true, false>(4);
    /* System.Void set_fogDensity(System.Single value) */
    inline static auto& m_set_fogDensity = methods.get<true, false>(5);
    /* System.Void set_ambientIntensity(System.Single value) */
    inline static auto& m_set_ambientIntensity = methods.get<true, false>(6);
    /* UnityEngine.Color get_ambientLight() */
    inline static auto& m_get_ambientLight = methods.get<true, false>(7);
    /* System.Void set_ambientLight(UnityEngine.Color value) */
    inline static auto& m_set_ambientLight = methods.get<true, false>(8);
    /* System.Void set_fogColor_Injected(in UnityEngine.Color value) */
    inline static auto& m_set_fogColor_Injected = methods.get<true, false>(9);
    /* System.Void get_ambientLight_Injected(out UnityEngine.Color ret) */
    inline static auto& m_get_ambientLight_Injected = methods.get<true, false>(10);
    /* System.Void set_ambientLight_Injected(in UnityEngine.Color value) */
    inline static auto& m_set_ambientLight_Injected = methods.get<true, false>(11);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct EditorWorldObjectCreation {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<2> fields;
inline static auto /* ThemeRepository */ &f_themeRepository = fields.get<false>(0), /* EditorStateMachine */ &f_esm = fields.get<false>(1);

    inline static ::Tools::Il2Cpp::Metadata::array_method<13> methods;
    /* System.Void Initialize(EditorStateMachine esm) */
    inline static auto& m_Initialize = methods.get<false, false>(0);
    /* System.Void Clone(MVWorldObjectClient original, System.Boolean cloneToRoot, System.Boolean setAsPreviewItem, System.Boolean goToInsert = False) */
    inline static auto& m_Clone = methods.get<false, true>(1);
    /* System.Void OnAddItemFromInventory(InventoryItem item) */
    inline static auto& m_OnAddItemFromInventory = methods.get<false, true>(2);
    /* KoGaMaPackageClient GetKoGaMaPackageFromItem(InventoryItem item) */
    inline static auto& m_GetKoGaMaPackageFromItem = methods.get<true, false>(3);
    /* System.Void OnAddNewPrototype(System.String name, System.Single scale) */
    inline static auto& m_OnAddNewPrototype = methods.get<false, true>(4);
    /* System.Void CloneWorldObjectTreeResponseHandler(System.Object sender, CloneWorldObjectTreeResponseEventArgs e) */
    inline static auto& m_CloneWorldObjectTreeResponseHandler = methods.get<false, false>(5);
    /* System.Boolean ValidateAddItemFromInventory(KoGaMaPackageClient package) */
    inline static auto& m_ValidateAddItemFromInventory = methods.get<false, false>(6);
    /* System.Boolean IsItemAnAllowedWinningCondition(MVWorldObjectClient worldObject) */
    inline static auto& m_IsItemAnAllowedWinningCondition = methods.get<false, false>(7);
    /* System.Boolean IsWinningConditionPlaceable() */
    inline static auto& m_IsWinningConditionPlaceable = methods.get<false, false>(8);
    /* System.Collections.Generic.List`1<MVWorldObjectClient> GetPlacedWinningConditions() */
    inline static auto& m_GetPlacedWinningConditions = methods.get<false, false>(9);
    /* System.Void WOCM_InitializedGameQueryData(System.Object sender, InitializedGameQueryDataEventArgs e) */
    inline static auto& m_WOCM_InitializedGameQueryData = methods.get<false, false>(10);
    /* System.Void OnChangePrototypeScale(System.Int32 worldId, System.Single scale) */
    inline static auto& m_OnChangePrototypeScale = methods.get<false, true>(11);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(12);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVMaterialRepository {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<8> fields;
inline static auto /* System.Int32 */ &f_DEFAULT_MATERIAL_ID = fields.get<true>(0), /* MVMaterialRepository */ &f_instance = fields.get<true>(1);
inline static auto /* System.Boolean */ &f_allowDestructibleMaterialSelection = fields.get<false>(2), /* System.Collections.Generic.List`1<MVMaterial> */ &f_materials = fields.get<false>(3), /* MVMaterial */ &f_noMaterial = fields.get<false>(4), /* MVMaterial */ &f_inAirMaterial = fields.get<false>(5), /* MV.WorldObject.PhysicalProperties */ &f_physicalPropertiesDefault = fields.get<false>(6), /* System.Boolean */ &f__IsButtonTexturesInitialized_k__BackingField = fields.get<false>(7);

    inline static ::Tools::Il2Cpp::Metadata::array_method<18> methods;
    /* System.Boolean get_AllowDestructibleMaterialSelection() */
    inline static auto& m_get_AllowDestructibleMaterialSelection = methods.get<true, false>(0);
    /* System.Void set_AllowDestructibleMaterialSelection(System.Boolean value) */
    inline static auto& m_set_AllowDestructibleMaterialSelection = methods.get<true, false>(1);
    /* System.Int32 get_MaterialCount() */
    inline static auto& m_get_MaterialCount = methods.get<false, false>(2);
    /* MVMaterial get_InAirMaterial() */
    inline static auto& m_get_InAirMaterial = methods.get<false, false>(3);
    /* System.Boolean get_IsButtonTexturesInitialized() */
    inline static auto& m_get_IsButtonTexturesInitialized = methods.get<false, false>(4);
    /* System.Void set_IsButtonTexturesInitialized(System.Boolean value) */
    inline static auto& m_set_IsButtonTexturesInitialized = methods.get<false, false>(5);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(6);
    /* System.Void InitializeMaterials(System.Collections.Generic.Dictionary`2<System.Object, System.Object> materialList) */
    inline static auto& m_InitializeMaterials = methods.get<false, false>(7);
    /* System.Void Reset() */
    inline static auto& m_Reset = methods.get<false, false>(8);
    /* System.Void SetMaterialPrice(System.Int32 materialID, System.Int32 materialUnlockPriceGold) */
    inline static auto& m_SetMaterialPrice = methods.get<false, false>(9);
    /* System.Void SetMaterialUnlocked(System.Int32 materialId, System.Boolean unlocked) */
    inline static auto& m_SetMaterialUnlocked = methods.get<false, false>(10);
    /* System.Boolean AllMaterialUnlocked() */
    inline static auto& m_AllMaterialUnlocked = methods.get<false, false>(11);
    /* System.Void GenerateMaterialButtonTextures() */
    inline static auto& m_GenerateMaterialButtonTextures = methods.get<false, false>(12);
    /* System.Void AddMaterial(System.String name, System.String description, System.String path, MaterialSound materialSound, AvatarModifierPackageType modifierPackageType, System.Int32 priceGold, System.Boolean isUnlocked, System.Single[] physicalProperties, MaterialButtonTextureGenerator materialButtonTextureGenerator) */
    inline static auto& m_AddMaterial = methods.get<false, false>(13);
    /* MVMaterial GetMaterial(System.Byte materialId) */
    inline static auto& m_GetMaterial = methods.get<false, false>(14);
    /* MV.WorldObject.PhysicalProperties GetMaterialPhysicalProperties(System.Byte materialId) */
    inline static auto& m_GetMaterialPhysicalProperties = methods.get<false, false>(15);
    /* System.Boolean IsMaterialUnlocked(System.Byte[] mats) */
    inline static auto& m0_IsMaterialUnlocked = methods.get<false, false>(16);
    /* System.Boolean IsMaterialUnlocked(System.Byte mat) */
    inline static auto& m1_IsMaterialUnlocked = methods.get<false, false>(17);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MvAvatarMetaDataWoMap {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<1> fields;
inline static auto /* System.Collections.Generic.Dictionary`2<System.Int32, MV.WorldObject.MvAvatarMetaData> */ &f_avatarWOIDAvatarMetaData = fields.get<false>(0);

    inline static ::Tools::Il2Cpp::Metadata::array_method<6> methods;
    /* System.Void .ctor() */
    inline static auto& m0__ctor = methods.get<false, false>(0);
    /* System.Void .ctor(MV.WorldObject.BytePacker bp) */
    inline static auto& m1__ctor = methods.get<false, false>(1);
    /* System.Boolean TryGetValue(System.Int32 woID, out MV.WorldObject.MvAvatarMetaData avatarMetaData) */
    inline static auto& m_TryGetValue = methods.get<false, false>(2);
    /* System.Void Add(System.Int32 woID, MV.WorldObject.MvAvatarMetaData avatarMetaData) */
    inline static auto& m_Add = methods.get<false, false>(3);
    /* System.Void ResetAvatar(System.Int32 prevAvatarWoID, System.Int32 newAvatarWoID) */
    inline static auto& m_ResetAvatar = methods.get<false, false>(4);
    /* System.String ToString() */
    inline static auto& m_ToString = methods.get<false, true>(5);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MvAvatarMetaData {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<5> fields;
inline static auto /* System.Int32 */ &f_avatarID = fields.get<false>(0), /* System.String */ &f_name = fields.get<false>(1), /* System.Int32 */ &f_priceGold = fields.get<false>(2), /* System.Boolean */ &f_isOnMarketPlace = fields.get<false>(3), /* System.Boolean */ &f_canBeSoldOnMarketPlace = fields.get<false>(4);

    inline static ::Tools::Il2Cpp::Metadata::array_method<2> methods;
    /* System.Void .ctor(MV.WorldObject.BytePacker bp) */
    inline static auto& m__ctor = methods.get<false, false>(0);
    /* System.String ToString() */
    inline static auto& m_ToString = methods.get<false, true>(1);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct AvatarSelectionController {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<8> fields;
inline static auto /* AvatarSelectionController */ &f_instance = fields.get<true>(6);
inline static auto /* AvatarSelectionSlot */ &f_avatarSelectionSlotPrefab = fields.get<false>(0), /* UnityEngine.RectTransform */ &f_avatarSelectionContentRoot = fields.get<false>(1), /* SellAvatarController */ &f_sellAvatarPrefab = fields.get<false>(2), /* UnityEngine.GameObject */ &f_publishAvatarGO = fields.get<false>(3), /* System.Int32 */ &f_currSelectedSlot = fields.get<false>(4), /* System.Collections.Generic.Dictionary`2<System.Int32, AvatarSelectionSlot> */ &f_avatarSlots = fields.get<false>(5), /* AvatarEditModeBodyController */ &f_avatarBodyController = fields.get<false>(7);

    inline static ::Tools::Il2Cpp::Metadata::array_method<15> methods;
    /* System.Int32 get_CurrentlySelectedSlotIndex() */
    inline static auto& m_get_CurrentlySelectedSlotIndex = methods.get<true, false>(0);
    /* System.Void set_CurrentlySelectedSlotIndex(System.Int32 value) */
    inline static auto& m_set_CurrentlySelectedSlotIndex = methods.get<true, false>(1);
    /* System.Void Initialize(AvatarEditModeBodyController bodyController, EditorStateMachine esm) */
    inline static auto& m_Initialize = methods.get<false, false>(2);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<false, false>(3);
    /* System.Void ResetCurrentAvatar() */
    inline static auto& m_ResetCurrentAvatar = methods.get<false, false>(4);
    /* System.Void AvatarSlotClicked(System.Int32 slotIndex) */
    inline static auto& m_AvatarSlotClicked = methods.get<false, true>(5);
    /* System.Void SetStateToRoam() */
    inline static auto& m_SetStateToRoam = methods.get<false, false>(6);
    /* System.Void OnPicUpdateForPrevAvatar(System.Int32 index, UnityEngine.Texture2D image) */
    inline static auto& m_OnPicUpdateForPrevAvatar = methods.get<false, false>(7);
    /* System.Void SellCurrentAvatar() */
    inline static auto& m_SellCurrentAvatar = methods.get<false, false>(8);
    /* System.Void TakeScreenshotForProfile() */
    inline static auto& m_TakeScreenshotForProfile = methods.get<false, false>(9);
    /* System.Void SetToNextAnimation() */
    inline static auto& m_SetToNextAnimation = methods.get<false, false>(10);
    /* System.Void OpenAvatarShop() */
    inline static auto& m_OpenAvatarShop = methods.get<false, false>(11);
    /* System.Void OnPictureTakenCallback(System.Int32 index, UnityEngine.Texture2D image) */
    inline static auto& m_OnPictureTakenCallback = methods.get<false, false>(12);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(13);
    /* System.Void <SetStateToRoam>b__15_0(UnityEngine.EventSystems.IAvatarSetBodyGroup x, UnityEngine.EventSystems.BaseEventData y) */
    inline static auto& m__SetStateToRoam_b__15_0 = methods.get<false, false>(14);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVBody {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<16> fields;
inline static auto /* BodyAccessoriesController */ &f_bodyAccessoriesController = fields.get<false>(0), /* BodyAccessoriesController */ &f_previewBodyAccessoriesController = fields.get<false>(1), /* System.Boolean */ &f_collidersEnabled = fields.get<false>(2), /* System.Boolean */ &f_shadowVisible = fields.get<false>(3), /* System.Boolean */ &f_visible = fields.get<false>(4), /* System.Boolean */ &f_forceHidden = fields.get<false>(5), /* MVBodyObject */ &f_bodyObject = fields.get<false>(6), /* System.Collections.Generic.Dictionary`2<System.Int32, IModelingConstraint> */ &f_constraints = fields.get<false>(7), /* System.Collections.Generic.List`1<UnityEngine.Renderer> */ &f_renderers = fields.get<false>(8), /* System.Collections.Generic.List`1<UnityEngine.Collider> */ &f_colliders = fields.get<false>(9), /* System.Collections.Generic.List`1<MVCubeModelInstance> */ &f_attachedPartModels = fields.get<false>(10), /* System.Boolean */ &f_initialized = fields.get<false>(11), /* System.Boolean */ &f_hasAvatarBeenAttached = fields.get<false>(12), /* UnityEngine.Vector3 */ &f_modelScale = fields.get<false>(13), /* System.String */ &f__LayerToSetTo_k__BackingField = fields.get<false>(14), /* BodyClone */ &f_bodyClone = fields.get<false>(15);

    inline static ::Tools::Il2Cpp::Metadata::array_method<62> methods;
    /* System.String get_LayerToSetTo() */
    inline static auto& m_get_LayerToSetTo = methods.get<false, false>(0);
    /* System.Void set_LayerToSetTo(System.String value) */
    inline static auto& m_set_LayerToSetTo = methods.get<false, false>(1);
    /* BoneAnimation get_Animation() */
    inline static auto& m_get_Animation = methods.get<false, false>(2);
    /* System.Boolean get_IsPlayerBody() */
    inline static auto& m_get_IsPlayerBody = methods.get<false, false>(3);
    /* BodyData get_BodyData() */
    inline static auto& m_get_BodyData = methods.get<false, false>(4);
    /* System.Collections.Generic.List`1<MVCubeModelInstance> get_AttachedParts() */
    inline static auto& m_get_AttachedParts = methods.get<false, false>(5);
    /* AvatarBlobShadowController get_BlobShadow() */
    inline static auto& m_get_BlobShadow = methods.get<false, false>(6);
    /* System.Boolean get_Visible() */
    inline static auto& m_get_Visible = methods.get<false, false>(7);
    /* System.Void set_Visible(System.Boolean value) */
    inline static auto& m_set_Visible = methods.get<false, false>(8);
    /* System.Boolean get_ForceHidden() */
    inline static auto& m_get_ForceHidden = methods.get<false, false>(9);
    /* System.Void set_ForceHidden(System.Boolean value) */
    inline static auto& m_set_ForceHidden = methods.get<false, false>(10);
    /* System.Boolean get_ShadowVisible() */
    inline static auto& m_get_ShadowVisible = methods.get<false, false>(11);
    /* System.Void set_ShadowVisible(System.Boolean value) */
    inline static auto& m_set_ShadowVisible = methods.get<false, false>(12);
    /* System.Boolean get_CollidersEnabled() */
    inline static auto& m_get_CollidersEnabled = methods.get<false, false>(13);
    /* System.Void set_CollidersEnabled(System.Boolean value) */
    inline static auto& m_set_CollidersEnabled = methods.get<false, false>(14);
    /* System.Boolean IsAccessorySlotOccupied(MV.Common.AccessorySlotType accessorySlotType) */
    inline static auto& m_IsAccessorySlotOccupied = methods.get<false, false>(15);
    /* System.Single GetAccessoryOffset(MV.Common.AccessorySlotType slot) */
    inline static auto& m_GetAccessoryOffset = methods.get<false, false>(16);
    /* System.Void ApplyAccessoryOffset(System.Single yOffset, MV.Common.AccessorySlotType slot) */
    inline static auto& m_ApplyAccessoryOffset = methods.get<false, false>(17);
    /* System.Single GetAccessoryScale(MV.Common.AccessorySlotType slot) */
    inline static auto& m_GetAccessoryScale = methods.get<false, false>(18);
    /* System.Void ApplyAccessorySize(System.Single size, MV.Common.AccessorySlotType slot) */
    inline static auto& m_ApplyAccessorySize = methods.get<false, false>(19);
    /* System.Boolean IsAccessoryEquipped(System.Int32 streamingAssetId) */
    inline static auto& m_IsAccessoryEquipped = methods.get<false, false>(20);
    /* System.Boolean get_AccessoryMoveOverride() */
    inline static auto& m_get_AccessoryMoveOverride = methods.get<false, false>(21);
    /* System.Void set_AccessoryMoveOverride(System.Boolean value) */
    inline static auto& m_set_AccessoryMoveOverride = methods.get<false, false>(22);
    /* UnityEngine.GameObject CreateClone(System.Boolean enableAllRenderers = False, System.Boolean hideEquippedItem = False) */
    inline static auto& m_CreateClone = methods.get<false, false>(23);
    /* System.Void DestroyClone() */
    inline static auto& m_DestroyClone = methods.get<false, false>(24);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects) */
    inline static auto& m__ctor = methods.get<false, false>(25);
    /* System.Void PreviewAccessory(AccessoryDataClient viewItem) */
    inline static auto& m_PreviewAccessory = methods.get<false, false>(26);
    /* System.Void EndPreviewAccessory() */
    inline static auto& m_EndPreviewAccessory = methods.get<false, false>(27);
    /* System.Void UpdateBodyClone(System.Collections.Generic.Dictionary`2<System.Object, System.Object> accessoryData) */
    inline static auto& m_UpdateBodyClone = methods.get<false, false>(28);
    /* System.Void SyncOffset(MV.Common.AccessorySlotType slot, System.Single offset) */
    inline static auto& m_SyncOffset = methods.get<false, false>(29);
    /* System.Void SyncScale(MV.Common.AccessorySlotType slot, System.Single scale) */
    inline static auto& m_SyncScale = methods.get<false, false>(30);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, true>(31);
    /* System.Void InitializeHealth(System.Single currentHealthAmount) */
    inline static auto& m_InitializeHealth = methods.get<false, false>(32);
    /* System.Void InitializeShield(System.Single currentShieldAmount) */
    inline static auto& m_InitializeShield = methods.get<false, false>(33);
    /* System.Void UpdateBlinking() */
    inline static auto& m_UpdateBlinking = methods.get<false, false>(34);
    /* System.Void InitializeInventory() */
    inline static auto& m_InitializeInventory = methods.get<false, true>(35);
    /* System.Void Destroy() */
    inline static auto& m_Destroy = methods.get<false, true>(36);
    /* System.Void Attach(MVAvatar mvAvatar, System.Boolean isLocal) */
    inline static auto& m_Attach = methods.get<false, false>(37);
    /* System.Void Detach() */
    inline static auto& m_Detach = methods.get<false, false>(38);
    /* System.Void StartBlinking(BlinkType type, System.Single duration) */
    inline static auto& m_StartBlinking = methods.get<false, false>(39);
    /* System.Void StopBlinking(BlinkType type) */
    inline static auto& m_StopBlinking = methods.get<false, false>(40);
    /* System.Void ToggleBlinking(System.Boolean shouldShowBlinking) */
    inline static auto& m_ToggleBlinking = methods.get<false, false>(41);
    /* UnityEngine.GameObject CopyByValue() */
    inline static auto& m_CopyByValue = methods.get<false, false>(42);
    /* System.Void CopyMaterialsByValue(UnityEngine.GameObject bodyCloneGO) */
    inline static auto& m_CopyMaterialsByValue = methods.get<false, false>(43);
    /* System.Void InitializeCommon() */
    inline static auto& m_InitializeCommon = methods.get<false, false>(44);
    /* System.Void RefreshAccessories() */
    inline static auto& m_RefreshAccessories = methods.get<false, false>(45);
    /* System.Collections.Generic.Dictionary`2<System.Object, System.Object> GetAccessoryData() */
    inline static auto& m_GetAccessoryData = methods.get<false, false>(46);
    /* System.Void UpdateVisibility() */
    inline static auto& m_UpdateVisibility = methods.get<false, false>(47);
    /* UnityEngine.Bounds GetLocalBounds(BoundsContext boundsContext) */
    inline static auto& m_GetLocalBounds = methods.get<false, true>(48);
    /* MVWorldObjectClient Clone(System.Int32 ownerActorNumber, System.Int32 cloneGroupId, CloneBookkeeping cloneBookkeeping, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects, System.Collections.Generic.Dictionary`2<System.Int32, RuntimePrototypeCubeModel> prototypes) */
    inline static auto& m_Clone = methods.get<false, true>(49);
    /* IModelingConstraint GetModelConstaint(MVCubeModelInstance cubeModel) */
    inline static auto& m_GetModelConstaint = methods.get<false, true>(50);
    /* System.Void OnDataUpdate() */
    inline static auto& m_OnDataUpdate = methods.get<false, true>(51);
    /* System.Void OnAnimationUpdate(System.Object newAnimationData) */
    inline static auto& m_OnAnimationUpdate = methods.get<false, false>(52);
    /* System.Void OnHealthUpdate(System.Object newHealthData) */
    inline static auto& m_OnHealthUpdate = methods.get<false, false>(53);
    /* System.Void OnShieldUpdate(System.Object newShieldData) */
    inline static auto& m_OnShieldUpdate = methods.get<false, false>(54);
    /* System.Void EnableBodyBlinker() */
    inline static auto& m_EnableBodyBlinker = methods.get<false, false>(55);
    /* System.Void DisableBodyBlinker() */
    inline static auto& m_DisableBodyBlinker = methods.get<false, false>(56);
    /* System.Void StartAnimation(System.String newAnimation) */
    inline static auto& m_StartAnimation = methods.get<false, false>(57);
    /* MVCubeModelInstance GetBodyPart(System.String part) */
    inline static auto& m_GetBodyPart = methods.get<false, false>(58);
    /* System.Void AttachCubes() */
    inline static auto& m_AttachCubes = methods.get<false, false>(59);
    /* System.Void AttachCube(System.String boneName) */
    inline static auto& m_AttachCube = methods.get<false, false>(60);
    /* System.Void AlignModel(System.String boneName, UnityEngine.Transform bone, UnityEngine.GameObject model) */
    inline static auto& m_AlignModel = methods.get<false, false>(61);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct AvatarEditModeBodyController {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<19> fields;
inline static auto /* CloudyThemeBase */ &f_Theme = fields.get<true>(18);
inline static auto /* System.Collections.Generic.List`1<MVBody> */ &f_bodies = fields.get<false>(0), /* MVSpawnPointRed */ &f_bodySpawnPoint = fields.get<false>(1), /* UnityEngine.Vector3 */ &f_displayPos = fields.get<false>(2), /* UnityEngine.Quaternion */ &f_displayRotation = fields.get<false>(3), /* UnityEngine.Vector3 */ &f_hidePos = fields.get<false>(4), /* System.Int32 */ &f_currentBodyIndex = fields.get<false>(5), /* AvatarRepositoryItem */ &f_purchasingItem = fields.get<false>(6), /* System.String */ &f_currentActionSuccessMessage = fields.get<false>(7), /* System.Boolean */ &f_playingPurchaseSoundAfterScreenshot = fields.get<false>(8), /* AvatarPictureTakerUGUI */ &f_pictureTaker = fields.get<false>(9), /* NotificationPopup */ &f_notificationPopup = fields.get<false>(10), /* PleaseWaitPopup */ &f_pleaseWaitPopupPrefab = fields.get<false>(11), /* UploadAvatarScreenshotHandler */ &f_uploadAvatarScreenshotHandler = fields.get<false>(12), /* ResetAvatarHandler */ &f_resetAvatarHandler = fields.get<false>(13), /* System.Collections.Generic.List`1<System.String> */ &f_animations = fields.get<false>(14), /* System.Int32 */ &f_currentAnimationIndex = fields.get<false>(15), /* System.Action`2<System.Int32, UnityEngine.Texture2D> */ &f_Picture2DTakenCallback = fields.get<false>(16), /* UnityEngine.GameObject */ &f_publishAvatarBtn = fields.get<false>(17);

    inline static ::Tools::Il2Cpp::Metadata::array_method<29> methods;
    /* MVBody get_CurrentBody() */
    inline static auto& m_get_CurrentBody = methods.get<false, false>(0);
    /* UnityEngine.Vector3 get_DisplayPos() */
    inline static auto& m_get_DisplayPos = methods.get<false, false>(1);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, false>(2);
    /* System.Void SetPublishAvatarGO(UnityEngine.GameObject publishAvatarGO) */
    inline static auto& m_SetPublishAvatarGO = methods.get<false, false>(3);
    /* System.Void ResetCurrentBody() */
    inline static auto& m_ResetCurrentBody = methods.get<false, false>(4);
    /* System.Void ExecuteReset() */
    inline static auto& m_ExecuteReset = methods.get<false, false>(5);
    /* System.Void ResetCallback(System.Object sender, InitializedGameQueryDataEventArgs e) */
    inline static auto& m_ResetCallback = methods.get<false, false>(6);
    /* System.Void SetCurrentBodyByWoId(System.Int32 woId) */
    inline static auto& m_SetCurrentBodyByWoId = methods.get<false, false>(7);
    /* System.Void SetCurrentBody(System.Int32 index) */
    inline static auto& m_SetCurrentBody = methods.get<false, false>(8);
    /* System.Void SetPublishAvatarButtonActive() */
    inline static auto& m_SetPublishAvatarButtonActive = methods.get<false, false>(9);
    /* System.Void CaptureScreenshotForBody(System.Int32 index, System.Action`2<System.Int32, UnityEngine.Texture2D> OnPictureTaken) */
    inline static auto& m_CaptureScreenshotForBody = methods.get<false, false>(10);
    /* System.Void CaptureScreenshotsForAllAvatars(System.Action`2<System.Int32, UnityEngine.Texture2D> OnPictureTaken) */
    inline static auto& m_CaptureScreenshotsForAllAvatars = methods.get<false, false>(11);
    /* System.Void GenerateIconForBody(System.Int32 index) */
    inline static auto& m_GenerateIconForBody = methods.get<false, false>(12);
    /* System.Void TakeScreenshot() */
    inline static auto& m_TakeScreenshot = methods.get<false, false>(13);
    /* System.Void PurchaseAvatar(AvatarRepositoryItem item) */
    inline static auto& m_PurchaseAvatar = methods.get<false, false>(14);
    /* System.Void OnPurchaseAvatarConfirmation(System.Boolean confirmed, ConfirmationPopup confirmationPopup) */
    inline static auto& m_OnPurchaseAvatarConfirmation = methods.get<false, false>(15);
    /* System.Void OnProductPurchaseAvatarResponse(System.Int32 returnCode, System.Collections.Generic.Dictionary`2<System.Object, System.Object> purchaseResponseData) */
    inline static auto& m_OnProductPurchaseAvatarResponse = methods.get<false, false>(16);
    /* System.Void InitializedPurchasedAvatar(System.Object sender, InitializedGameQueryDataEventArgs e) */
    inline static auto& m_InitializedPurchasedAvatar = methods.get<false, false>(17);
    /* System.Void OnActiveAvatarSetAfterPurchase() */
    inline static auto& m_OnActiveAvatarSetAfterPurchase = methods.get<false, false>(18);
    /* System.Void SellCurrentAvatar(SellAvatarController avatarSeller) */
    inline static auto& m_SellCurrentAvatar = methods.get<false, false>(19);
    /* System.Void ScreenShotCallback(UnityEngine.Texture2D screenshotTex, System.String successMessage) */
    inline static auto& m_ScreenShotCallback = methods.get<false, false>(20);
    /* System.Void UploadedImageData() */
    inline static auto& m_UploadedImageData = methods.get<false, false>(21);
    /* System.Void MVNetworGame_ScreenshotUploadedHandler(System.Object sender, ScreenshotUploadedEventArgs e) */
    inline static auto& m_MVNetworGame_ScreenshotUploadedHandler = methods.get<false, false>(22);
    /* System.Void SetToNextAnimation() */
    inline static auto& m_SetToNextAnimation = methods.get<false, false>(23);
    /* System.Void Set(System.String animation) */
    inline static auto& m_Set = methods.get<false, true>(24);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(25);
    /* System.Void <ResetCallback>b__27_0(UnityEngine.EventSystems.IAvatarSetBodyGroup x, UnityEngine.EventSystems.BaseEventData y) */
    inline static auto& m__ResetCallback_b__27_0 = methods.get<false, false>(26);
    /* System.Void <PurchaseAvatar>b__35_0(UnityEngine.EventSystems.IModalPopupCreator x, UnityEngine.EventSystems.BaseEventData y) */
    inline static auto& m__PurchaseAvatar_b__35_0 = methods.get<false, false>(27);
    /* System.Void <InitializedPurchasedAvatar>b__38_1(UnityEngine.EventSystems.IAvatarSetBodyGroup x, UnityEngine.EventSystems.BaseEventData y) */
    inline static auto& m__InitializedPurchasedAvatar_b__38_1 = methods.get<false, false>(28);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct MVWorldObject {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<18> fields;
inline static auto /* System.Int32 */ &f_id = fields.get<false>(0), /* System.Int32 */ &f_groupId = fields.get<false>(1), /* System.Int32 */ &f_itemId = fields.get<false>(2), /* System.Boolean */ &f_inputState = fields.get<false>(3), /* System.Collections.Generic.List`1<MV.WorldObject.Link> */ &f_outputLinkRefs = fields.get<false>(4), /* System.Collections.Generic.List`1<MV.WorldObject.Link> */ &f_inputLinkRefs = fields.get<false>(5), /* System.Collections.Generic.List`1<MV.WorldObject.ObjectLink> */ &f_objectLinkRefs = fields.get<false>(6), /* System.Int32 */ &f_ownerActorNr = fields.get<false>(7), /* System.Int32 */ &f_previewOwnerProfileId = fields.get<false>(8), /* UnityEngine.Vector3 */ &f_position = fields.get<false>(9), /* UnityEngine.Quaternion */ &f_rotation = fields.get<false>(10), /* UnityEngine.Vector3 */ &f_scale = fields.get<false>(11), /* MV.WorldObject.WorldObjectType */ &f_type = fields.get<false>(12), /* System.Collections.Generic.Dictionary`2<System.Object, System.Object> */ &f_data = fields.get<false>(13), /* System.Collections.Generic.Dictionary`2<System.Object, System.Object> */ &f_runTimeData = fields.get<false>(14), /* System.Int32 */ &f_timestamp = fields.get<false>(15), /* System.Action`1<System.Collections.Generic.List`1<MV.WorldObject.Link>> */ &f_OnInputLinkChanged = fields.get<false>(16), /* System.Action`1<System.Collections.Generic.List`1<MV.WorldObject.Link>> */ &f_OnOutputLinkChanged = fields.get<false>(17);

    inline static ::Tools::Il2Cpp::Metadata::array_method<51> methods;
    /* System.Int32 get_Id() */
    inline static auto& m_get_Id = methods.get<false, false>(0);
    /* System.Int32 get_GroupId() */
    inline static auto& m_get_GroupId = methods.get<false, false>(1);
    /* System.Void set_GroupId(System.Int32 value) */
    inline static auto& m_set_GroupId = methods.get<false, false>(2);
    /* System.Int32 get_ItemId() */
    inline static auto& m_get_ItemId = methods.get<false, false>(3);
    /* System.Void set_ItemId(System.Int32 value) */
    inline static auto& m_set_ItemId = methods.get<false, false>(4);
    /* System.Int32 get_OwnerActorNr() */
    inline static auto& m_get_OwnerActorNr = methods.get<false, false>(5);
    /* System.Void set_OwnerActorNr(System.Int32 value) */
    inline static auto& m_set_OwnerActorNr = methods.get<false, false>(6);
    /* System.Int32 get_PreviewOwnerProfileId() */
    inline static auto& m_get_PreviewOwnerProfileId = methods.get<false, false>(7);
    /* System.Void set_PreviewOwnerProfileId(System.Int32 value) */
    inline static auto& m_set_PreviewOwnerProfileId = methods.get<false, false>(8);
    /* UnityEngine.Vector3 get_Position() */
    inline static auto& m_get_Position = methods.get<false, true>(9);
    /* System.Void set_Position(UnityEngine.Vector3 value) */
    inline static auto& m_set_Position = methods.get<false, true>(10);
    /* UnityEngine.Quaternion get_Rotation() */
    inline static auto& m_get_Rotation = methods.get<false, true>(11);
    /* System.Void set_Rotation(UnityEngine.Quaternion value) */
    inline static auto& m_set_Rotation = methods.get<false, true>(12);
    /* UnityEngine.Vector3 get_Scale() */
    inline static auto& m_get_Scale = methods.get<false, true>(13);
    /* System.Void set_Scale(UnityEngine.Vector3 value) */
    inline static auto& m_set_Scale = methods.get<false, true>(14);
    /* UnityEngine.Vector3 get_WorldPosition() */
    inline static auto& m_get_WorldPosition = methods.get<false, true>(15);
    /* UnityEngine.Quaternion get_WorldRotation() */
    inline static auto& m_get_WorldRotation = methods.get<false, true>(16);
    /* MV.WorldObject.WorldObjectType get_WorldObjectType() */
    inline static auto& m_get_WorldObjectType = methods.get<false, false>(17);
    /* System.Void set_WorldObjectType(MV.WorldObject.WorldObjectType value) */
    inline static auto& m_set_WorldObjectType = methods.get<false, false>(18);
    /* System.Collections.Generic.Dictionary`2<System.Object, System.Object> get_Data() */
    inline static auto& m_get_Data = methods.get<false, false>(19);
    /* System.Void set_Data(System.Collections.Generic.Dictionary`2<System.Object, System.Object> value) */
    inline static auto& m_set_Data = methods.get<false, false>(20);
    /* System.Collections.Generic.Dictionary`2<System.Object, System.Object> get_RunTimeData() */
    inline static auto& m_get_RunTimeData = methods.get<false, true>(21);
    /* System.Void set_RunTimeData(System.Collections.Generic.Dictionary`2<System.Object, System.Object> value) */
    inline static auto& m_set_RunTimeData = methods.get<false, true>(22);
    /* System.Collections.Generic.List`1<MV.WorldObject.Link> get_InputLinkRefs() */
    inline static auto& m_get_InputLinkRefs = methods.get<false, false>(23);
    /* System.Collections.Generic.List`1<MV.WorldObject.Link> get_OutputLinkRefs() */
    inline static auto& m_get_OutputLinkRefs = methods.get<false, false>(24);
    /* System.Collections.Generic.List`1<MV.WorldObject.ObjectLink> get_ObjectLinkRefs() */
    inline static auto& m_get_ObjectLinkRefs = methods.get<false, false>(25);
    /* System.Boolean get_InputState() */
    inline static auto& m_get_InputState = methods.get<false, false>(26);
    /* System.Boolean get_HasOutputConnector() */
    inline static auto& m_get_HasOutputConnector = methods.get<false, true>(27);
    /* System.Boolean get_HasInputConnector() */
    inline static auto& m_get_HasInputConnector = methods.get<false, true>(28);
    /* System.Boolean get_HasObjectConnector() */
    inline static auto& m_get_HasObjectConnector = methods.get<false, true>(29);
    /* System.Void OnInputStateChanged() */
    inline static auto& m_OnInputStateChanged = methods.get<false, true>(30);
    /* System.Void Reset() */
    inline static auto& m_Reset = methods.get<false, true>(31);
    /* System.Void OnObjectLinkChanged(MV.WorldObject.ObjectLinkChangeType changeType, MV.WorldObject.ObjectLink objectLink) */
    inline static auto& m_OnObjectLinkChanged = methods.get<false, true>(32);
    /* System.Boolean IsSingletonObject() */
    inline static auto& m_IsSingletonObject = methods.get<false, true>(33);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(34);
    /* System.Collections.Generic.Dictionary`2<System.Object, System.Object> DeepCopyWorldObjectDataParameters() */
    inline static auto& m_DeepCopyWorldObjectDataParameters = methods.get<false, false>(35);
    /* System.Void GetLinksForClone(System.Collections.Generic.List`1<System.Int32> links) */
    inline static auto& m_GetLinksForClone = methods.get<false, false>(36);
    /* System.Void GetObjectLinksForClone(System.Collections.Generic.List`1<System.Int32> objectLinks) */
    inline static auto& m_GetObjectLinksForClone = methods.get<false, false>(37);
    /* System.Void AddOutputLink(MV.WorldObject.Link link) */
    inline static auto& m_AddOutputLink = methods.get<false, false>(38);
    /* System.Void AddInputLink(MV.WorldObject.Link link) */
    inline static auto& m_AddInputLink = methods.get<false, false>(39);
    /* System.Boolean AddObjectLink(MV.WorldObject.ObjectLink link) */
    inline static auto& m_AddObjectLink = methods.get<false, false>(40);
    /* System.Boolean RemoveOutputLink(MV.WorldObject.Link link) */
    inline static auto& m_RemoveOutputLink = methods.get<false, false>(41);
    /* System.Boolean RemoveInputLink(MV.WorldObject.Link link) */
    inline static auto& m_RemoveInputLink = methods.get<false, false>(42);
    /* System.Boolean RemoveObjectLink(MV.WorldObject.ObjectLink link) */
    inline static auto& m_RemoveObjectLink = methods.get<false, false>(43);
    /* System.Boolean ContainObjectLink(MV.WorldObject.ObjectLink link) */
    inline static auto& m_ContainObjectLink = methods.get<false, false>(44);
    /* System.Int32 GetIndexOfObjectLink(MV.WorldObject.ObjectLink link) */
    inline static auto& m_GetIndexOfObjectLink = methods.get<false, false>(45);
    /* MV.WorldObject.MVWorldObject ShallowCopy() */
    inline static auto& m_ShallowCopy = methods.get<false, true>(46);
    /* MV.WorldObject.MVWorldObject DeepCopy() */
    inline static auto& m_DeepCopy = methods.get<false, true>(47);
    /* System.String ToString() */
    inline static auto& m_ToString = methods.get<false, true>(48);
    /* System.Void PartialUpdateWOData(System.Collections.Generic.Dictionary`2<System.Object, System.Object> newWOData) */
    inline static auto& m_PartialUpdateWOData = methods.get<false, true>(49);
    /* System.Void PartialRemoveFromWOData(System.Collections.Generic.Dictionary`2<System.Object, System.Object> dataToRemove) */
    inline static auto& m_PartialRemoveFromWOData = methods.get<false, true>(50);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct GizmoRotationButtonHolderNg {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<3> fields;
inline static auto /* UGUI.Desktop.Scripts.EditMode.Gizmo.GizmoRotationButtonNg */ &f_leftButton = fields.get<false>(0), /* UGUI.Desktop.Scripts.EditMode.Gizmo.GizmoRotationButtonNg */ &f_rightButton = fields.get<false>(1), /* UGUI.Desktop.Scripts.EditMode.Gizmo.GizmoRotationButtonNg */ &f_flipButton = fields.get<false>(2);

    inline static ::Tools::Il2Cpp::Metadata::array_method<2> methods;
    /* System.Void Setup(System.Boolean canRotate, System.Boolean memberRequired) */
    inline static auto& m_Setup = methods.get<false, false>(0);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(1);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct CheatHandling {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<0> fields;

    inline static ::Tools::Il2Cpp::Metadata::array_method<7> methods;
    /* System.Void Init() */
    inline static auto& m_Init = methods.get<true, false>(0);
    /* System.Void MachineBanDetected() */
    inline static auto& m_MachineBanDetected = methods.get<true, false>(1);
    /* System.Void CheatSoftwareRunningDetected() */
    inline static auto& m_CheatSoftwareRunningDetected = methods.get<true, false>(2);
    /* System.Void TextureHackDetected() */
    inline static auto& m_TextureHackDetected = methods.get<true, false>(3);
    /* System.Void SpeedHackDetected() */
    inline static auto& m_SpeedHackDetected = methods.get<true, false>(4);
    /* System.Void ObscuredCheatingDetected() */
    inline static auto& m_ObscuredCheatingDetected = methods.get<true, false>(5);
    /* System.Void ExecuteBan(MV.Common.CheatType cheatType) */
    inline static auto& m_ExecuteBan = methods.get<true, false>(6);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


}