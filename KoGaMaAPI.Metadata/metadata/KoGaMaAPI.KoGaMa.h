
#pragma once

#include "Tools.Il2Cpp.Lib.h"
#include "Il2CppUtils.h"
#include "Il2CppMetadata.h"
using namespace Tools::Il2Cpp;
namespace KoGaMaAPI::KoGaMa {
void Init(::Tools::Il2Cpp::Metadata::MetadataInfo metadata);
struct PaintCubes {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<false> /* PaintCursor */  f_paintCursor;

	/*System.Void Enter(CubeModelingStateMachine e)*/ inline static Utils::MethodInfo<false,true> m_Enter;
/*System.Void Execute(CubeModelingStateMachine e)*/ inline static Utils::MethodInfo<false,true> m_Execute;
/*System.Void Exit(CubeModelingStateMachine e)*/ inline static Utils::MethodInfo<false,true> m_Exit;
/*System.Void HideCursor()*/ inline static Utils::MethodInfo<false,true> m_HideCursor;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct CubeModelTool {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* EditCubeChange */ f_cubeChange,/* System.Int32 */ f_cubeCount,/* System.Action`2<System.Int32, EditCubeChange> */ f_OnEditCubeChange;
inline static Utils::FieldInfo<false> /* System.Boolean */  f_waitForMouseUp,/* CubeModelingEvent */  f_StateType_k_BackingField;

	/*CubeModelingEvent get_StateType()*/ inline static Utils::MethodInfo<false,false> m_get_StateType;
/*System.Void set_StateType(CubeModelingEvent value)*/ inline static Utils::MethodInfo<false,false> m_set_StateType;
/*System.Void SendCubeEvent(System.Int32 cubeCount, EditCubeChange cubeChange)*/ inline static Utils::MethodInfo<true,false> m_SendCubeEvent;
/*System.Boolean get_CursorVisible()*/ inline static Utils::MethodInfo<false,true> m_get_CursorVisible;
/*System.Void set_CursorVisible(System.Boolean value)*/ inline static Utils::MethodInfo<false,true> m_set_CursorVisible;
/*System.Void SetStateType(CubeModelingEvent stateTypeEvent)*/ inline static Utils::MethodInfo<false,false> m_SetStateType;
/*System.Void Enter(CubeModelingStateMachine esm)*/ inline static Utils::MethodInfo<false,true> m0_Enter;
/*System.Void Enter(FSMEntity e)*/ inline static Utils::MethodInfo<false,true> m1_Enter;
/*System.Void Execute(CubeModelingStateMachine e)*/ inline static Utils::MethodInfo<false,true> m0_Execute;
/*System.Void Execute(FSMEntity e)*/ inline static Utils::MethodInfo<false,true> m1_Execute;
/*System.Void Exit(CubeModelingStateMachine esm)*/ inline static Utils::MethodInfo<false,true> m0_Exit;
/*System.Void Exit(FSMEntity e)*/ inline static Utils::MethodInfo<false,true> m1_Exit;
/*System.Void HideCursor()*/ inline static Utils::MethodInfo<false,true> m_HideCursor;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct MVInputWrapper {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* System.Single */ f_mouseSensitivtyModifier,/* MVInputWrapper+InputSuppression */ f_isInputAllSuppressed,/* MVInputWrapper+InputSuppression */ f_isShortcutKeysSuppressed,/* MVInputWrapper+InputSuppression */ f_isInGameInputSuppressed,/* IKogamaInputMap */ f_inputMap;

	/*System.Single get_MouseSensitivityModifier()*/ inline static Utils::MethodInfo<true,false> m_get_MouseSensitivityModifier;
/*System.Void set_MouseSensitivityModifier(System.Single value)*/ inline static Utils::MethodInfo<true,false> m_set_MouseSensitivityModifier;
/*System.Boolean get_IsAllInputSuppressed()*/ inline static Utils::MethodInfo<true,false> m_get_IsAllInputSuppressed;
/*System.Void SuppressAllInput()*/ inline static Utils::MethodInfo<true,false> m_SuppressAllInput;
/*System.Boolean get_IsShortcutKeysSuppressed()*/ inline static Utils::MethodInfo<true,false> m_get_IsShortcutKeysSuppressed;
/*System.Void SuppressShortcutKeys()*/ inline static Utils::MethodInfo<true,false> m_SuppressShortcutKeys;
/*System.Boolean get_IsInGameInputSuppressed()*/ inline static Utils::MethodInfo<true,false> m_get_IsInGameInputSuppressed;
/*System.Void SuppressInGameInput()*/ inline static Utils::MethodInfo<true,false> m_SuppressInGameInput;
/*System.Void SetInputMap(IKogamaInputMap inputMap)*/ inline static Utils::MethodInfo<true,false> m_SetInputMap;
/*System.Boolean GetBooleanControl(KogamaControls control)*/ inline static Utils::MethodInfo<true,false> m0_GetBooleanControl;
/*System.Boolean GetBooleanControl(KogamaControls control, KeyState keyState)*/ inline static Utils::MethodInfo<true,false> m1_GetBooleanControl;
/*System.Boolean GetBooleanControlDown(KogamaControls control)*/ inline static Utils::MethodInfo<true,false> m_GetBooleanControlDown;
/*System.Boolean GetBooleanControlUp(KogamaControls control)*/ inline static Utils::MethodInfo<true,false> m_GetBooleanControlUp;
/*UnityEngine.Vector3 GetPointerPosition()*/ inline static Utils::MethodInfo<true,false> m_GetPointerPosition;
/*System.Single GetAxis(System.String axis)*/ inline static Utils::MethodInfo<true,false> m_GetAxis;
/*System.Single GetAxisWithoutSensitivity(System.String axis)*/ inline static Utils::MethodInfo<true,false> m_GetAxisWithoutSensitivity;
/*System.Single GetAxisRaw(System.String axis)*/ inline static Utils::MethodInfo<true,false> m_GetAxisRaw;
/*System.Single GetAxisRawWithoutSensitivity(System.String axis)*/ inline static Utils::MethodInfo<true,false> m_GetAxisRawWithoutSensitivity;
/*System.Void ResetInput()*/ inline static Utils::MethodInfo<true,false> m_ResetInput;
/*System.Boolean GetBooleanControlDeviceDependent(KogamaControls kogamaControls)*/ inline static Utils::MethodInfo<true,false> m_GetBooleanControlDeviceDependent;
/*System.Boolean DebugGetKeyDown(UnityEngine.KeyCode key)*/ inline static Utils::MethodInfo<true,false> m0_DebugGetKeyDown;
/*System.Boolean DebugGetKeyDown(System.String st)*/ inline static Utils::MethodInfo<true,false> m1_DebugGetKeyDown;
/*System.Boolean DebugGetKey(UnityEngine.KeyCode key)*/ inline static Utils::MethodInfo<true,false> m0_DebugGetKey;
/*System.Boolean DebugGetKey(System.String st)*/ inline static Utils::MethodInfo<true,false> m1_DebugGetKey;
/*System.Boolean DebugGetKeyUp(UnityEngine.KeyCode key)*/ inline static Utils::MethodInfo<true,false> m0_DebugGetKeyUp;
/*System.Boolean DebugGetKeyUp(System.String st)*/ inline static Utils::MethodInfo<true,false> m1_DebugGetKeyUp;
/*System.Boolean InputCharActive(UnityEngine.KeyCode key)*/ inline static Utils::MethodInfo<true,false> m_InputCharActive;
/*System.Boolean InputCharActiveDown(UnityEngine.KeyCode key)*/ inline static Utils::MethodInfo<true,false> m_InputCharActiveDown;
/*System.String GetStringInput()*/ inline static Utils::MethodInfo<true,false> m_GetStringInput;
/*System.Void .cctor()*/ inline static Utils::MethodInfo<true,false> m_cctor;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct KogamaControls {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* KogamaControls */ f_MoveForward,/* KogamaControls */ f_MoveLeft,/* KogamaControls */ f_MoveRight,/* KogamaControls */ f_MoveBackwards,/* KogamaControls */ f_AlternateCameraControls,/* KogamaControls */ f_PointerSelect,/* KogamaControls */ f_PointerSelectAlt,/* KogamaControls */ f_EnterObject,/* KogamaControls */ f_DeleteObject,/* KogamaControls */ f_LeaveObject,/* KogamaControls */ f_AddToSelection,/* KogamaControls */ f_MoveDrawPlaneUp,/* KogamaControls */ f_MoveDrawPlaneDown,/* KogamaControls */ f_EmbedChangeGame,/* KogamaControls */ f_ToggleFullScreen,/* KogamaControls */ f_ShowChat,/* KogamaControls */ f_Respawn,/* KogamaControls */ f_TogglePlayerParticles,/* KogamaControls */ f_ShowPlayerWindow,/* KogamaControls */ f_DropCurrentItem,/* KogamaControls */ f_Use,/* KogamaControls */ f_FocusOnSelectedModel,/* KogamaControls */ f_TogglePlayInEditor,/* KogamaControls */ f_ToggleLogicRendering,/* KogamaControls */ f_ToggleGripdSnapSize,/* KogamaControls */ f_ActivateEditCubeTool,/* KogamaControls */ f_ActivateDeleteCubeTool,/* KogamaControls */ f_ActivatePaintCubeTool,/* KogamaControls */ f_ChangeMaterial,/* KogamaControls */ f_OpenInventory,/* KogamaControls */ f_CreateNewModel,/* KogamaControls */ f_ToggleDrawPlane,/* KogamaControls */ f_Fire,/* KogamaControls */ f_Jump,/* KogamaControls */ f_DrawAudioBox,/* KogamaControls */ f_ChatSendLine,/* KogamaControls */ f_ChatShiftLineUp,/* KogamaControls */ f_ChatShiftLineDown,/* KogamaControls */ f_ChangeFocus,/* KogamaControls */ f_ChangeChangeFocusDirection,/* KogamaControls */ f_Deprecated_ToggleHD,/* KogamaControls */ f_PauseMenu,/* KogamaControls */ f_Escape,/* KogamaControls */ f_Holster,/* KogamaControls */ f_EditMoveUp,/* KogamaControls */ f_EditMoveDown,/* KogamaControls */ f_EditMoveForward,/* KogamaControls */ f_EditMoveLeft,/* KogamaControls */ f_EditMoveRight,/* KogamaControls */ f_EditMoveBackwards,/* KogamaControls */ f_EditMoveFast,/* KogamaControls */ f_NotificationAcceptFriendshipRequest,/* KogamaControls */ f_ToggleCameraEffects,/* KogamaControls */ f_ActivatePickColorTool,/* KogamaControls */ f_Size;
inline static Utils::FieldInfo<false> /* System.Int32 */  f_value;

	
    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct CubeModelingStateMachine {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<false> /* System.Boolean */  f_useLasers,/* CubeModelingStateMachine+OnCurrentMaterialChangeDelegate */  f_OnCurrentMaterialChange,/* CodeStage.AntiCheat.ObscuredTypes.ObscuredByte */  f_currentMaterialId,/* IModelingConstraint */  f_constraint,/* UnityEngine.GameObject */  f_gameObject,/* UnityEngine.Camera */  f_mainCamera,/* CubePickingInfo */  f_SelectedCube_k_BackingField,/* MVCubeModelBase */  f_TargetCubeModel_k_BackingField;

	/*CubePickingInfo get_SelectedCube()*/ inline static Utils::MethodInfo<false,false> m_get_SelectedCube;
/*System.Void set_SelectedCube(CubePickingInfo value)*/ inline static Utils::MethodInfo<false,false> m_set_SelectedCube;
/*MVCubeModelBase get_TargetCubeModel()*/ inline static Utils::MethodInfo<false,false> m_get_TargetCubeModel;
/*System.Void set_TargetCubeModel(MVCubeModelBase value)*/ inline static Utils::MethodInfo<false,false> m_set_TargetCubeModel;
/*UnityEngine.Vector3[] get_CubeCorners()*/ inline static Utils::MethodInfo<false,false> m_get_CubeCorners;
/*System.Byte[] get_ByteCubeCorners()*/ inline static Utils::MethodInfo<false,false> m_get_ByteCubeCorners;
/*UnityEngine.Material get_CurrentMaterial()*/ inline static Utils::MethodInfo<false,false> m_get_CurrentMaterial;
/*System.Byte get_CurrentMaterialId()*/ inline static Utils::MethodInfo<false,false> m_get_CurrentMaterialId;
/*System.Void set_CurrentMaterialId(System.Byte value)*/ inline static Utils::MethodInfo<false,false> m_set_CurrentMaterialId;
/*System.Boolean get_CursorVisible()*/ inline static Utils::MethodInfo<false,false> m_get_CursorVisible;
/*System.Void set_CursorVisible(System.Boolean value)*/ inline static Utils::MethodInfo<false,false> m_set_CursorVisible;
/*System.Void .ctor(UnityEngine.GameObject gameObject)*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Void StartEdit(MVCubeModelBase targetCubeModel, IModelingConstraint constraint = null)*/ inline static Utils::MethodInfo<false,false> m_StartEdit;
/*System.Void SetConstraint(IModelingConstraint constraint)*/ inline static Utils::MethodInfo<false,false> m_SetConstraint;
/*System.Void EndEdit()*/ inline static Utils::MethodInfo<false,false> m_EndEdit;
/*System.Void Update()*/ inline static Utils::MethodInfo<false,true> m_Update;
/*CubeModelingStateMachine+HoverType CurrentlyHovered()*/ inline static Utils::MethodInfo<false,false> m_CurrentlyHovered;
/*CubePickingInfo DoPicking()*/ inline static Utils::MethodInfo<false,false> m_DoPicking;
/*System.Void RemoveCursors()*/ inline static Utils::MethodInfo<false,false> m_RemoveCursors;
/*System.Void HandleAudio(MV.WorldObject.IntVector pos, AudioActions action)*/ inline static Utils::MethodInfo<false,false> m_HandleAudio;
/*EditCubeChange AddCube()*/ inline static Utils::MethodInfo<false,false> m_AddCube;
/*CanPerformCubeActionResult CanAddCubeAt(MV.WorldObject.IntVector requestedCubePos, CubePickingInfo requestedCube)*/ inline static Utils::MethodInfo<false,false> m0_CanAddCubeAt;
/*CanPerformCubeActionResult CanAddCubeAt(MV.WorldObject.IntVector requestedCubePos)*/ inline static Utils::MethodInfo<false,false> m1_CanAddCubeAt;
/*CanPerformCubeActionResult CanRemoveCubeAt(CubePickingInfo requestedCube)*/ inline static Utils::MethodInfo<false,false> m_CanRemoveCubeAt;
/*System.Boolean CanEditCubeAt(MV.WorldObject.IntVector requestedCubePos)*/ inline static Utils::MethodInfo<false,false> m_CanEditCubeAt;
/*CanPerformCubeActionResult CanReplaceCube(CubePickingInfo requestedCube, System.Byte materialId)*/ inline static Utils::MethodInfo<false,false> m_CanReplaceCube;
/*System.Void <set_CurrentMaterialId>b__23_0(UnityEngine.EventSystems.IHandleMaterial x, UnityEngine.EventSystems.BaseEventData y)*/ inline static Utils::MethodInfo<false,false> m_set_CurrentMaterialId_b_23_0;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct MVCubeModelBase {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* System.Int32 */ f_TransparencyShaderProperty;
inline static Utils::FieldInfo<false> /* RuntimePrototypeCubeModel */  f_prototypeCubeModel,/* ChunkInstances */  f_chunkInstances,/* System.Func`1<IModelingConstraint> */  f_ModelingConstraintBuilder_k_BackingField,/* System.Boolean */  f_beingEdited,/* System.Collections.Generic.Queue`1<CubeModelChangedEventArgs> */  f_changedEventArgsQueue,/* System.Action`1<CubeModelChangedEventArgs> */  f_Changed,/* System.Action`1<System.Collections.Generic.HashSet`1<MV.WorldObject.IntVector>> */  f_ChunksChanged,/* System.EventHandler`1<EditStateEventArgs> */  f_BeingEditedChanged;

	/*ChunkInstances get_ChunkInstances()*/ inline static Utils::MethodInfo<false,true> m_get_ChunkInstances;
/*RuntimePrototypeCubeModel get_PrototypeCubeModel()*/ inline static Utils::MethodInfo<false,true> m_get_PrototypeCubeModel;
/*System.Void set_PrototypeCubeModel(RuntimePrototypeCubeModel value)*/ inline static Utils::MethodInfo<false,false> m_set_PrototypeCubeModel;
/*System.Int32 get_Pid()*/ inline static Utils::MethodInfo<false,false> m_get_Pid;
/*System.Func`1<IModelingConstraint> get_ModelingConstraintBuilder()*/ inline static Utils::MethodInfo<false,false> m_get_ModelingConstraintBuilder;
/*System.Void set_ModelingConstraintBuilder(System.Func`1<IModelingConstraint> value)*/ inline static Utils::MethodInfo<false,false> m_set_ModelingConstraintBuilder;
/*System.Boolean get_BeingEdited()*/ inline static Utils::MethodInfo<false,false> m_get_BeingEdited;
/*System.Void set_BeingEdited(System.Boolean value)*/ inline static Utils::MethodInfo<false,false> m_set_BeingEdited;
/*System.Boolean get_ContainsCubes()*/ inline static Utils::MethodInfo<false,false> m_get_ContainsCubes;
/*System.Int32 get_CubeCount()*/ inline static Utils::MethodInfo<false,false> m_get_CubeCount;
/*System.Void add_BeingEditedChanged(System.EventHandler`1<EditStateEventArgs> value)*/ inline static Utils::MethodInfo<false,false> m_add_BeingEditedChanged;
/*System.Void remove_BeingEditedChanged(System.EventHandler`1<EditStateEventArgs> value)*/ inline static Utils::MethodInfo<false,false> m_remove_BeingEditedChanged;
/*System.Void .ctor(System.Collections.Generic.Dictionary`2<System.Object, System.Object> data, System.Collections.Generic.Dictionary`2<System.Int32, MVWorldObjectClient> worldObjects, System.Collections.Generic.Dictionary`2<System.Int32, RuntimePrototypeCubeModel> prototypes)*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Void Initialize()*/ inline static Utils::MethodInfo<false,true> m_Initialize;
/*System.String ToString()*/ inline static Utils::MethodInfo<false,true> m_ToString;
/*System.Single get_PrototypeScale()*/ inline static Utils::MethodInfo<false,false> m_get_PrototypeScale;
/*System.Void HandleDelta()*/ inline static Utils::MethodInfo<false,false> m_HandleDelta;
/*MV.WorldObject.CubeBase GetCubeBase(MV.WorldObject.IntVector pos)*/ inline static Utils::MethodInfo<false,true> m_GetCubeBase;
/*Cube GetCube(MV.WorldObject.IntVector pos)*/ inline static Utils::MethodInfo<false,true> m_GetCube;
/*System.Boolean ContainsCube(MV.WorldObject.IntVector pos)*/ inline static Utils::MethodInfo<false,true> m_ContainsCube;
/*System.Void MakeUnique()*/ inline static Utils::MethodInfo<false,false> m_MakeUnique;
/*System.Boolean HasInstances()*/ inline static Utils::MethodInfo<false,false> m_HasInstances;
/*System.Void RemoveCube(MV.WorldObject.IntVector pos)*/ inline static Utils::MethodInfo<false,true> m_RemoveCube;
/*System.Void AddCube(MV.WorldObject.IntVector pos, MV.WorldObject.CubeBase cube)*/ inline static Utils::MethodInfo<false,true> m_AddCube;
/*System.Void SetMaterial(MV.WorldObject.IntVector iVector, MV.WorldObject.Face face, System.Byte material)*/ inline static Utils::MethodInfo<false,false> m_SetMaterial;
/*System.Void ReplaceCube(MV.WorldObject.IntVector iVector, System.Byte materialId)*/ inline static Utils::MethodInfo<false,false> m_ReplaceCube;
/*System.Void CornersChangedDone(MV.WorldObject.IntVector iVector, Cube cube)*/ inline static Utils::MethodInfo<false,false> m_CornersChangedDone;
/*System.Void CornersChanged(MV.WorldObject.IntVector iVector, Cube cube)*/ inline static Utils::MethodInfo<false,false> m_CornersChanged;
/*System.Void UnIndentCubeFace(MV.WorldObject.IntVector localPos, MV.WorldObject.Face face, Cube cube)*/ inline static Utils::MethodInfo<false,false> m_UnIndentCubeFace;
/*System.Void RemoveCubeNetworkUpdate(MV.WorldObject.IntVector pos)*/ inline static Utils::MethodInfo<false,true> m_RemoveCubeNetworkUpdate;
/*System.Void AddCubeNetworkUpdate(MV.WorldObject.IntVector pos, MV.WorldObject.CubeBase cube)*/ inline static Utils::MethodInfo<false,true> m_AddCubeNetworkUpdate;
/*System.Void CubePosToChunkPos(ref MV.WorldObject.IntVector pos)*/ inline static Utils::MethodInfo<false,true> m_CubePosToChunkPos;
/*UnityEngine.MeshFilter[] get_MeshFilters()*/ inline static Utils::MethodInfo<false,false> m_get_MeshFilters;
/*UnityEngine.Vector3 get_WorldPivot()*/ inline static Utils::MethodInfo<false,true> m_get_WorldPivot;
/*UnityEngine.Bounds GetWorldBounds()*/ inline static Utils::MethodInfo<false,false> m_GetWorldBounds;
/*UnityEngine.Bounds GetBounds()*/ inline static Utils::MethodInfo<false,false> m_GetBounds;
/*UnityEngine.Bounds GetLocalBounds(BoundsContext boundsContext)*/ inline static Utils::MethodInfo<false,true> m_GetLocalBounds;
/*UnityEngine.Vector3 GetWorldCenterPos()*/ inline static Utils::MethodInfo<false,false> m_GetWorldCenterPos;
/*System.Void OnObjectLinkChanged(MV.WorldObject.ObjectLinkChangeType changeType, MV.WorldObject.ObjectLink objectLink)*/ inline static Utils::MethodInfo<false,true> m_OnObjectLinkChanged;
/*System.Void ObjectLinkChanged(System.Boolean visible)*/ inline static Utils::MethodInfo<false,false> m_ObjectLinkChanged;
/*System.Void ObjectLinkTransparency()*/ inline static Utils::MethodInfo<false,false> m_ObjectLinkTransparency;
/*MVCubeModelBase+CurrentTransparencySettings CalculateCurrentTransparencySettings()*/ inline static Utils::MethodInfo<false,false> m_CalculateCurrentTransparencySettings;
/*System.Void DirtyChunksRegeneratedHandler(System.Collections.Generic.HashSet`1<MV.WorldObject.IntVector> chunksChanged)*/ inline static Utils::MethodInfo<false,true> m_DirtyChunksRegeneratedHandler;
/*System.Void Destroy()*/ inline static Utils::MethodInfo<false,true> m_Destroy;
/*System.Void UpdatePrototypeScale(System.Single scale)*/ inline static Utils::MethodInfo<false,false> m_UpdatePrototypeScale;
/*System.Void AddToChunkInstances(MV.WorldObject.IntVector chunkPos, ChunkInstances+ChunkInstanceVariables civ)*/ inline static Utils::MethodInfo<false,false> m_AddToChunkInstances;
/*System.Void .cctor()*/ inline static Utils::MethodInfo<true,false> m_cctor;
/*System.Int32 ICubeModelCollider.get_Id()*/ inline static Utils::MethodInfo<false,true> m_ICubeModelCollider_get_Id;
/*IModelingConstraint <.ctor>b__28_0()*/ inline static Utils::MethodInfo<false,false> m_ctor_b_28_0;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct CubePickingInfo {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<false> /* Cube */  f_cube,/* MV.WorldObject.Face */  f_pickedFace,/* Edge */  f_pickedEdge,/* System.Boolean */  f_pickedEdgeIndex0,/* System.Boolean */  f_pickedEdgeIndex1,/* UnityEngine.Vector3 */  f_normal,/* UnityEngine.Vector3 */  f_point,/* MV.WorldObject.IntVector */  f_iLocalPos;

	/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m0_ctor;
/*System.Void .ctor(CubePickingInfo cubePickingInfo)*/ inline static Utils::MethodInfo<false,false> m1_ctor;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct EditCubeChange {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* EditCubeChange */ f_None,/* EditCubeChange */ f_VertexMoved,/* EditCubeChange */ f_EdgeMoved,/* EditCubeChange */ f_FaceMoved,/* EditCubeChange */ f_CubeUnindented,/* EditCubeChange */ f_CubeAdded,/* EditCubeChange */ f_CubePainted,/* EditCubeChange */ f_CubeDeleted;
inline static Utils::FieldInfo<false> /* System.Int32 */  f_value;

	
    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct PaintCursor {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<false> /* CellCursor */  f_paintCursor,/* System.Boolean */  f_flashing,/* System.Single */  f_flashingTime;

	/*System.Void .ctor(UnityEngine.Vector3[] cubeCorners)*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Void UpdateCursor(CubePickingInfo selectedCube, MVCubeModelBase targetCubeModel, System.Boolean isPainting)*/ inline static Utils::MethodInfo<false,false> m_UpdateCursor;
/*System.Void Remove()*/ inline static Utils::MethodInfo<false,false> m_Remove;
/*System.Void UnlockMaterialToRemove()*/ inline static Utils::MethodInfo<false,false> m_UnlockMaterialToRemove;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct AudioActions {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* AudioActions */ f_CubeAdded,/* AudioActions */ f_CubeRemoved,/* AudioActions */ f_FaceMoved,/* AudioActions */ f_EdgeMoved,/* AudioActions */ f_VertexMoved,/* AudioActions */ f_CubePainted;
inline static Utils::FieldInfo<false> /* System.Int32 */  f_value;

	
    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct ConstraintVisualizer {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<false> /* IModelingConstraint */  f_constraint;

	/*System.Void Init(MVCubeModelBase targetCubeModel, IModelingConstraint constraint, System.String layer = UIItems)*/ inline static Utils::MethodInfo<false,false> m_Init;
/*System.Void OnDestroy()*/ inline static Utils::MethodInfo<false,false> m_OnDestroy;
/*System.Void Constraint_BoxChanged(System.Object sender, ConstraintBoxChangedEventArgs e)*/ inline static Utils::MethodInfo<false,false> m_Constraint_BoxChanged;
/*System.Void CreateInsideOutCube()*/ inline static Utils::MethodInfo<false,false> m_CreateInsideOutCube;
/*System.Void BuildMesh(UnityEngine.Vector3[] vertices)*/ inline static Utils::MethodInfo<false,false> m_BuildMesh;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct ModelingDynamicBoxConstraint {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<false> /* MVCubeModelBase */  f_cubeModel,/* ObscuredIntVector */  f_Size_k_BackingField;

	/*ObscuredIntVector get_Size()*/ inline static Utils::MethodInfo<false,false> m_get_Size;
/*System.Void set_Size(ObscuredIntVector value)*/ inline static Utils::MethodInfo<false,false> m_set_Size;
/*System.Void .ctor(MVCubeModelBase cubeModel, MV.WorldObject.IntVector constraintSize)*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Void DetachFromCubeModel()*/ inline static Utils::MethodInfo<false,false> m_DetachFromCubeModel;
/*System.Boolean CanAddCubeAt(MV.WorldObject.IntVector pos)*/ inline static Utils::MethodInfo<false,true> m_CanAddCubeAt;
/*System.Boolean CanRemoveCubeAt(MV.WorldObject.IntVector pos)*/ inline static Utils::MethodInfo<false,true> m_CanRemoveCubeAt;
/*System.Boolean CanEditCubeAt(MV.WorldObject.IntVector pos)*/ inline static Utils::MethodInfo<false,true> m_CanEditCubeAt;
/*System.Void CubeModel_Changed(CubeModelChangedEventArgs e)*/ inline static Utils::MethodInfo<false,false> m_CubeModel_Changed;
/*UnityEngine.Vector3 CalcConstraintBoxCenter(MVCubeModelBase model)*/ inline static Utils::MethodInfo<false,false> m_CalcConstraintBoxCenter;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct ModelingBoxCountConstraint {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<false> /* MVCubeModelBase */  f_cubeModel,/* System.Int32 */  f_minCubesCount;

	/*System.Void .ctor(MVCubeModelBase cubeModel, MV.WorldObject.IntVector minCorner, MV.WorldObject.IntVector maxCorner, System.Int32 minCubeCount)*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Boolean CanAddCubeAt(MV.WorldObject.IntVector pos)*/ inline static Utils::MethodInfo<false,true> m_CanAddCubeAt;
/*System.Boolean CanRemoveCubeAt(MV.WorldObject.IntVector pos)*/ inline static Utils::MethodInfo<false,true> m_CanRemoveCubeAt;
/*System.Boolean CanEditCubeAt(MV.WorldObject.IntVector pos)*/ inline static Utils::MethodInfo<false,true> m_CanEditCubeAt;
/*System.Void CubeModel_Changed(System.Object sender, CubeModelChangedEventArgs e)*/ inline static Utils::MethodInfo<false,false> m_CubeModel_Changed;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct MainCameraManager {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* System.Action`1<System.Boolean> */ f_OnMuteChange,/* System.Action`1<System.Boolean> */ f_OnCameraEffectsChange,/* System.Action */ f_OnCameraSettingAdded,/* System.Action`1<System.Boolean> */ f_OnCameraCubeAddedRemoved,/* System.Action`1<System.Boolean> */ f_OnGameCameraEffectsChange,/* System.Single */ f_DistanceToAvatarBase,/* CameraType */ f_DefaultCameraType,/* System.Boolean */ f_IsCameraForcedFirstPerson,/* ICameraSettings */ f_cameraSettings,/* System.Single */ f_baseVolume,/* System.Boolean */ f_isMuted,/* System.Boolean */ f_isTemporarilyMuted,/* System.Boolean */ f_storedMuteValue;
inline static Utils::FieldInfo<false> /* UnityEngine.Camera */  f_mainCamera,/* UnityEngine.Transform */  f_secondaryCamera,/* UnityEngine.Transform */  f_tertiaryCamera,/* TransitionCamera */  f_transitionCamera,/* UnityEngine.AudioSource */  f_plingSound,/* GrayscaleEffect */  f_greyScaleEffect,/* UnityEngine.Skybox */  f_skybox,/* UnityEngine.AudioListener */  f_audioListener,/* LineDrawManager */  f_lineDrawManager,/* ScreenSizeOptimizer */  f_screenSizeOptimizer,/* UnityEngine.Shader */  f_transparentMultiplyColor,/* System.EventHandler`1<OnIgnoreInputTypesArgs> */  f_OnIgnoreInputTypes,/* PostProcessingManager */  f_postProcessingManager,/* MVCameraController */  f_cameraController,/* ProtectedTransform */  f_protectedTransform,/* System.Boolean */  f_isLogicRendered,/* System.Boolean */  f_blueModeEnabled,/* System.Int32 */  f_cullingMask,/* MaskMode */  f_maskMode;

	/*System.Void add_OnIgnoreInputTypes(System.EventHandler`1<OnIgnoreInputTypesArgs> value)*/ inline static Utils::MethodInfo<false,false> m_add_OnIgnoreInputTypes;
/*System.Void remove_OnIgnoreInputTypes(System.EventHandler`1<OnIgnoreInputTypesArgs> value)*/ inline static Utils::MethodInfo<false,false> m_remove_OnIgnoreInputTypes;
/*UnityEngine.Skybox get_Skybox()*/ inline static Utils::MethodInfo<false,false> m_get_Skybox;
/*LineDrawManager get_LineDrawManager()*/ inline static Utils::MethodInfo<false,false> m_get_LineDrawManager;
/*System.Single get_FieldOfView()*/ inline static Utils::MethodInfo<false,false> m_get_FieldOfView;
/*System.Void set_FieldOfView(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_FieldOfView;
/*UnityEngine.Camera get_MainCamera()*/ inline static Utils::MethodInfo<false,false> m_get_MainCamera;
/*UnityEngine.Camera get_TertiaryCamera()*/ inline static Utils::MethodInfo<false,false> m_get_TertiaryCamera;
/*UnityEngine.Camera get_SecondaryCamera()*/ inline static Utils::MethodInfo<false,false> m_get_SecondaryCamera;
/*MVCameraBase get_CurrentCamera()*/ inline static Utils::MethodInfo<false,false> m_get_CurrentCamera;
/*ProtectedTransform get_ProtectedTransform()*/ inline static Utils::MethodInfo<false,false> m_get_ProtectedTransform;
/*UnityEngine.Vector3 get_FireDirection()*/ inline static Utils::MethodInfo<false,false> m_get_FireDirection;
/*UnityEngine.Vector3 get_FireOrigin()*/ inline static Utils::MethodInfo<false,false> m_get_FireOrigin;
/*PostProcessingManager get_PostProcessingManager()*/ inline static Utils::MethodInfo<false,false> m_get_PostProcessingManager;
/*System.Boolean get_BlueModeEnabled()*/ inline static Utils::MethodInfo<false,false> m_get_BlueModeEnabled;
/*System.Void set_BlueModeEnabled(System.Boolean value)*/ inline static Utils::MethodInfo<false,false> m_set_BlueModeEnabled;
/*System.Boolean get_Mute()*/ inline static Utils::MethodInfo<true,false> m_get_Mute;
/*System.Void set_Mute(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_Mute;
/*MaskMode get_CamMaskMode()*/ inline static Utils::MethodInfo<false,false> m_get_CamMaskMode;
/*System.Void set_CamMaskMode(MaskMode value)*/ inline static Utils::MethodInfo<false,false> m_set_CamMaskMode;
/*System.Boolean get_TertiaryCameraActive()*/ inline static Utils::MethodInfo<false,false> m_get_TertiaryCameraActive;
/*System.Void set_TertiaryCameraActive(System.Boolean value)*/ inline static Utils::MethodInfo<false,false> m_set_TertiaryCameraActive;
/*System.Boolean get_IsLogicRendered()*/ inline static Utils::MethodInfo<false,false> m_get_IsLogicRendered;
/*System.Void set_IsLogicRendered(System.Boolean value)*/ inline static Utils::MethodInfo<false,false> m_set_IsLogicRendered;
/*System.Void Awake()*/ inline static Utils::MethodInfo<false,false> m_Awake;
/*System.Void Init()*/ inline static Utils::MethodInfo<false,false> m_Init;
/*System.Void EnableScreenOptimizer()*/ inline static Utils::MethodInfo<false,false> m_EnableScreenOptimizer;
/*System.Void PlayPlingSound()*/ inline static Utils::MethodInfo<false,false> m_PlayPlingSound;
/*System.Void SetCameraController(MVCameraController camController)*/ inline static Utils::MethodInfo<false,false> m_SetCameraController;
/*System.Void UpdateAudioListener()*/ inline static Utils::MethodInfo<false,false> m_UpdateAudioListener;
/*System.Boolean IsCameraControllerSet()*/ inline static Utils::MethodInfo<false,false> m_IsCameraControllerSet;
/*System.Void IgnoreInputTypes(IgnoreInputTypes inputTypes)*/ inline static Utils::MethodInfo<false,false> m_IgnoreInputTypes;
/*System.Void UpdateCamera()*/ inline static Utils::MethodInfo<false,false> m_UpdateCamera;
/*System.Void StartTransitionCam(System.Single transitionTime = 2, System.Boolean soft = False)*/ inline static Utils::MethodInfo<false,false> m_StartTransitionCam;
/*System.Void CancelTransitionCam()*/ inline static Utils::MethodInfo<false,false> m_CancelTransitionCam;
/*System.Void RenderLogic(System.Boolean renderLogic)*/ inline static Utils::MethodInfo<false,false> m_RenderLogic;
/*System.Void OnDestroy()*/ inline static Utils::MethodInfo<false,false> m_OnDestroy;
/*System.Void TemporaryMute(System.Boolean muteTemporarily)*/ inline static Utils::MethodInfo<true,false> m_TemporaryMute;
/*System.Void RegisterCameraWithSettings(ICameraSettings camSettings)*/ inline static Utils::MethodInfo<true,false> m_RegisterCameraWithSettings;
/*System.Void UnRegisterCameraWithSettings()*/ inline static Utils::MethodInfo<true,false> m_UnRegisterCameraWithSettings;
/*ICameraSettings GetSettings()*/ inline static Utils::MethodInfo<true,false> m_GetSettings;
/*System.Boolean HasSetting()*/ inline static Utils::MethodInfo<true,false> m_HasSetting;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Void .cctor()*/ inline static Utils::MethodInfo<true,false> m_cctor;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct MVMaterial {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<false> /* System.Int32 */  f_unlockPriceGold,/* System.Boolean */  f_isUnlocked,/* UnityEngine.Mesh */  f_Mesh_k_BackingField,/* System.String */  f_Name_k_BackingField,/* System.String */  f_Description_k_BackingField,/* MV.WorldObject.PhysicalProperties */  f_PhysicalProperties_k_BackingField,/* AvatarModifierPackageType */  f_ModifierPackageType_k_BackingField,/* UnityEngine.Texture2D */  f_ButtonTexture_k_BackingField;

	/*UnityEngine.Mesh get_Mesh()*/ inline static Utils::MethodInfo<false,false> m_get_Mesh;
/*System.Void set_Mesh(UnityEngine.Mesh value)*/ inline static Utils::MethodInfo<false,false> m_set_Mesh;
/*System.String get_Name()*/ inline static Utils::MethodInfo<false,false> m_get_Name;
/*System.Void set_Name(System.String value)*/ inline static Utils::MethodInfo<false,false> m_set_Name;
/*System.String get_Description()*/ inline static Utils::MethodInfo<false,false> m_get_Description;
/*System.Void set_Description(System.String value)*/ inline static Utils::MethodInfo<false,false> m_set_Description;
/*MV.WorldObject.PhysicalProperties get_PhysicalProperties()*/ inline static Utils::MethodInfo<false,false> m_get_PhysicalProperties;
/*System.Void set_PhysicalProperties(MV.WorldObject.PhysicalProperties value)*/ inline static Utils::MethodInfo<false,false> m_set_PhysicalProperties;
/*AvatarModifierPackageType get_ModifierPackageType()*/ inline static Utils::MethodInfo<false,false> m_get_ModifierPackageType;
/*System.Void set_ModifierPackageType(AvatarModifierPackageType value)*/ inline static Utils::MethodInfo<false,false> m_set_ModifierPackageType;
/*UnityEngine.Texture2D get_ButtonTexture()*/ inline static Utils::MethodInfo<false,false> m_get_ButtonTexture;
/*System.Void set_ButtonTexture(UnityEngine.Texture2D value)*/ inline static Utils::MethodInfo<false,false> m_set_ButtonTexture;
/*System.Boolean get_IsAvailable()*/ inline static Utils::MethodInfo<false,false> m_get_IsAvailable;
/*System.Boolean get_IsDestructible()*/ inline static Utils::MethodInfo<false,false> m_get_IsDestructible;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m0_ctor;
/*System.Void .ctor(MV.WorldObject.PhysicalProperties physicalProperties, MaterialSound materialSound, AvatarModifierPackageType modifierPackageType)*/ inline static Utils::MethodInfo<false,false> m1_ctor;
/*System.Void .ctor(System.String name, System.String description, MV.WorldObject.PhysicalProperties physicalProperties, MaterialSound materialSound, AvatarModifierPackageType modifierPackageType, System.Int32 unlockPriceGold, System.Boolean isUnlocked)*/ inline static Utils::MethodInfo<false,false> m2_ctor;
/*System.Void .ctor(System.Int32 materialId, System.String name, System.String description, MV.WorldObject.PhysicalProperties physicalProperties, MaterialSound materialSound, AvatarModifierPackageType modifierPackageType, System.Int32 unlockPriceGold, System.Boolean isUnlocked, MaterialButtonTextureGenerator materialButtonTextureGenerator = null)*/ inline static Utils::MethodInfo<false,false> m3_ctor;
/*System.Void RegenerateButtonTexture(MaterialButtonTextureGenerator materialButtonTextureGenerator)*/ inline static Utils::MethodInfo<false,false> m_RegenerateButtonTexture;
/*System.Void GenerateCube(System.Int32 materialID)*/ inline static Utils::MethodInfo<false,false> m_GenerateCube;
/*System.Void AddVertices(System.Int32 direction)*/ inline static Utils::MethodInfo<false,false> m_AddVertices;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct ESTranslate {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* System.String */ f_TranslateModeType,/* System.String */ f_MoveWithAvatar,/* System.Single */ f_mouseSensitivity;
inline static Utils::FieldInfo<false> /* System.Single */  f_gridSize,/* System.Single */  f_stickyModifier,/* System.Single */  f_completelyStuckLimit,/* System.Boolean */  f_recalcLocalDirCamToObjects,/* System.Collections.Generic.List`1<TranslateData> */  f_translateDatas,/* System.Collections.Generic.List`1<MVWorldObjectClient> */  f_targets,/* System.Single */  f_initialDistance,/* UnityEngine.Vector3 */  f_originPrevFrame,/* System.Boolean */  f_playTranslateSounds,/* System.Single */  f_scrollMoveDistance,/* TranslateMode */  f_translateMode,/* System.Collections.Generic.HashSet`1<System.Int32> */  f_woIds,/* System.Boolean */  f_fixedToYPlane,/* System.Boolean */  f_moveWithAvatar,/* System.Boolean */  f_enteredStateWithPointerSelectReleased;

	/*System.Void Enter(EditorStateMachine e)*/ inline static Utils::MethodInfo<false,true> m_Enter;
/*System.Void Execute(EditorStateMachine e)*/ inline static Utils::MethodInfo<false,true> m_Execute;
/*System.Boolean IsValid()*/ inline static Utils::MethodInfo<false,false> m_IsValid;
/*System.Void UpdateLaserPosition(System.Collections.Generic.List`1<MVWorldObjectClient> wos)*/ inline static Utils::MethodInfo<false,false> m_UpdateLaserPosition;
/*System.Void Exit(EditorStateMachine e)*/ inline static Utils::MethodInfo<false,true> m_Exit;
/*System.Boolean GetInitialAvatarMoveObjectHitDistance(EditorStateMachine e, ref System.Single hitDistance)*/ inline static Utils::MethodInfo<false,false> m_GetInitialAvatarMoveObjectHitDistance;
/*System.Single GetInitialAvatarMoveObjectDistance(EditorStateMachine e)*/ inline static Utils::MethodInfo<false,false> m_GetInitialAvatarMoveObjectDistance;
/*System.Void RotateWithCamera(EditorStateMachine e, System.Int32 targetIndex)*/ inline static Utils::MethodInfo<false,false> m_RotateWithCamera;
/*UnityEngine.Vector3 GetDeltaMouse(EditorStateMachine e)*/ inline static Utils::MethodInfo<false,false> m_GetDeltaMouse;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct SharedCubeFunctions {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* MV.WorldObject.IntVector */ f_constraint,/* System.Single */ f_LowestCubeSize,/* System.Single */ f_CubeSegmentSize,/* System.Single */ f_Gridsize,/* System.Single */ f_NoneGridSize,/* System.Single */ f_forceEdgeDistance,/* System.Int32[][] */ f_FaceIndexToVertexIndexes,/* System.Collections.Generic.Dictionary`2<System.Int32, System.Int32>[] */ f_VertexIndexToFaceIndexes,/* MV.WorldObject.IntVector[][] */ f_LightTestOffsets,/* MV.WorldObject.Face[][] */ f_LightTestNormalTargetFaces,/* MV.WorldObject.Face[] */ f_LightTestNormalSecondaryTargetFaces,/* System.Int32[][] */ f_LightTestOppositeFaceCorners,/* System.Int32[][] */ f_LightTestSameFaceCorners,/* MV.WorldObject.IntVector[] */ f_LightTestInwardsOffset,/* System.Int32[] */ f_FaceHeightAxis,/* System.Int32[] */ f_FaceDirectionScalar;

	/*MV.WorldObject.IntVector get_CubeConstraint()*/ inline static Utils::MethodInfo<true,false> m_get_CubeConstraint;
/*UnityEngine.Vector3 get_CubeConstraintVector3()*/ inline static Utils::MethodInfo<true,false> m_get_CubeConstraintVector3;
/*System.Void AddCubeMeshCubeLines(UnityEngine.Mesh mesh, UnityEngine.Vector3[] corners, System.Single diagonalWidth)*/ inline static Utils::MethodInfo<true,false> m_AddCubeMeshCubeLines;
/*System.Void AddCubeLine(UnityEngine.Mesh mesh, UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, System.Single diagonalWidth)*/ inline static Utils::MethodInfo<true,false> m_AddCubeLine;
/*System.Void AddCubeMesh(UnityEngine.Mesh mesh, UnityEngine.Vector3[] corners, System.Boolean insideOut)*/ inline static Utils::MethodInfo<true,false> m_AddCubeMesh;
/*UnityEngine.Vector3[] GetCorners()*/ inline static Utils::MethodInfo<true,false> m0_GetCorners;
/*UnityEngine.Vector3[] GetCorners(UnityEngine.Bounds bounds)*/ inline static Utils::MethodInfo<true,false> m1_GetCorners;
/*UnityEngine.Vector3[] GetCorners(UnityEngine.Vector3 min, UnityEngine.Vector3 max)*/ inline static Utils::MethodInfo<true,false> m2_GetCorners;
/*UnityEngine.Vector3[] GetVertices()*/ inline static Utils::MethodInfo<true,false> m0_GetVertices;
/*UnityEngine.Vector3[] GetVertices(UnityEngine.Vector3[] corners)*/ inline static Utils::MethodInfo<true,false> m1_GetVertices;
/*System.Void GetVertices(CubePickingInfo info, UnityEngine.GameObject gameObject)*/ inline static Utils::MethodInfo<true,false> m2_GetVertices;
/*UnityEngine.Vector3 GetClosestGridPoint(UnityEngine.Vector3 worldPosition, UnityEngine.Quaternion rotation, System.Single gridSize, UnityEngine.Vector3 scale)*/ inline static Utils::MethodInfo<true,false> m_GetClosestGridPoint;
/*MV.WorldObject.IntVector WorldToLocal(UnityEngine.GameObject gameObject, UnityEngine.Vector3 point, System.Boolean floor = False)*/ inline static Utils::MethodInfo<true,false> m_WorldToLocal;
/*UnityEngine.Vector3 WorldPosToValidGridPos(UnityEngine.GameObject gameObject, UnityEngine.Vector3 worldPos, System.Int32 cubeSegments)*/ inline static Utils::MethodInfo<true,false> m_WorldPosToValidGridPos;
/*UnityEngine.Vector3 LocalToWorld(UnityEngine.GameObject gameObject, MV.WorldObject.IntVector iVector)*/ inline static Utils::MethodInfo<true,false> m_LocalToWorld;
/*System.Collections.Generic.Dictionary`2<MV.WorldObject.IntVector, Cube> CreateFromBytePackage(MV.WorldObject.BytePacker bp)*/ inline static Utils::MethodInfo<true,false> m_CreateFromBytePackage;
/*System.Nullable`1<UnityEngine.Bounds> GetAxisAlignedBoundsRecursively(UnityEngine.Transform transform)*/ inline static Utils::MethodInfo<true,false> m0_GetAxisAlignedBoundsRecursively;
/*System.Nullable`1<UnityEngine.Bounds> GetAxisAlignedBoundsRecursively(System.Collections.Generic.List`1<MVWorldObjectClient> wos)*/ inline static Utils::MethodInfo<true,false> m1_GetAxisAlignedBoundsRecursively;
/*System.Nullable`1<UnityEngine.Bounds> GetAxisAlignedBoundsRecursively(System.Collections.Generic.List`1<UnityEngine.Transform> transforms)*/ inline static Utils::MethodInfo<true,false> m2_GetAxisAlignedBoundsRecursively;
/*UnityEngine.Vector3[] GetTriangleVertices(System.Int32 triangleIndex, UnityEngine.GameObject gameObject)*/ inline static Utils::MethodInfo<true,false> m_GetTriangleVertices;
/*System.Single ScaleFactor(UnityEngine.GameObject gameObject)*/ inline static Utils::MethodInfo<true,false> m0_ScaleFactor;
/*System.Single ScaleFactor(UnityEngine.GameObject gameObject, MV.WorldObject.Face face)*/ inline static Utils::MethodInfo<true,false> m1_ScaleFactor;
/*CubeOutOfBoundState MoveEdge(MVCubeModelBase cmb, CubePickingInfo info, UnityEngine.Vector3 mousePositionDelta, ref System.Single delta, ref System.Single deltaAccum, System.Single mouseSensitivity, ref System.Boolean edgeMoved, System.Boolean edgeIndex0, System.Boolean edgeIndex1, ref EditCubeChange editCubeChange)*/ inline static Utils::MethodInfo<true,false> m_MoveEdge;
/*UnityEngine.Vector3 GetWorldCenter(System.Collections.Generic.List`1<UnityEngine.Transform> transforms)*/ inline static Utils::MethodInfo<true,false> m0_GetWorldCenter;
/*UnityEngine.Vector3 GetWorldCenter(UnityEngine.Transform transform)*/ inline static Utils::MethodInfo<true,false> m1_GetWorldCenter;
/*System.Void SetLayerRecursively(UnityEngine.Transform t, System.Boolean select)*/ inline static Utils::MethodInfo<true,false> m_SetLayerRecursively;
/*MV.WorldObject.IntVector CubePosToChunk(MV.WorldObject.IntVector cubePos, System.Int32 chunkSize)*/ inline static Utils::MethodInfo<true,false> m_CubePosToChunk;
/*System.Void .cctor()*/ inline static Utils::MethodInfo<true,false> m_cctor;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct MVBuildModeAvatarLocal_EditMode {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* System.Single */ f_pitchSensitivity,/* System.Single */ f_yawSensitivity,/* System.Single */ f_basePitch,/* System.Single */ f_minimumY,/* System.Single */ f_maximumY,/* System.Single */ f_moveSlowDownPoint;
inline static Utils::FieldInfo<false> /* MVBuildModeAvatarLocal+AvatarBuildModes */  f_avatarBuildModeRuntimeState,/* System.Single */  f_maxSpeed,/* System.Single */  f_speedModifier,/* UnityEngine.Vector3 */  f_jetPackTargetDeltaPos,/* System.Single */  f_targetSpeed,/* System.Single */  f_speed,/* System.Single */  f_speedSmoothingTime,/* System.Boolean */  f_moveConstraintSet,/* UnityEngine.Vector3 */  f_moveConstraintCenter,/* System.Single */  f_moveConstraintRadius,/* System.Single */  f_YMovementSpeedScale_k_BackingField,/* System.Single */  f_XZMovementSpeedScale_k_BackingField,/* DoubleTapMovementChecker */  f_doubleTap,/* UnityEngine.Camera */  f_mainCamera,/* System.Single */  f_keyVelocity,/* System.Single */  f_keyAcceleration,/* System.Single */  f_keyDamping,/* System.Single */  f_heightAdjustSpeed;

	/*System.Void .ctor(MVBuildModeAvatarLocal buildModeAvatar)*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Void Activate(MVBuildModeAvatarLocal+AvatarBuildModes fromMode)*/ inline static Utils::MethodInfo<false,true> m_Activate;
/*System.Void SetCamera(CameraType cameraType)*/ inline static Utils::MethodInfo<false,false> m_SetCamera;
/*MVBuildModeAvatarLocal+AvatarBuildModes get_AvatarBuildModeRuntimeState()*/ inline static Utils::MethodInfo<false,true> m_get_AvatarBuildModeRuntimeState;
/*System.Single get_YMovementSpeedScale()*/ inline static Utils::MethodInfo<false,false> m_get_YMovementSpeedScale;
/*System.Void set_YMovementSpeedScale(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_YMovementSpeedScale;
/*System.Single get_XZMovementSpeedScale()*/ inline static Utils::MethodInfo<false,false> m_get_XZMovementSpeedScale;
/*System.Void set_XZMovementSpeedScale(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_XZMovementSpeedScale;
/*System.Boolean get_MovementConstrained()*/ inline static Utils::MethodInfo<false,false> m_get_MovementConstrained;
/*System.Void set_MovementConstrained(System.Boolean value)*/ inline static Utils::MethodInfo<false,false> m_set_MovementConstrained;
/*System.Void AvatarCommandsBuildModeOnOnSetSpawn(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)*/ inline static Utils::MethodInfo<false,false> m_AvatarCommandsBuildModeOnOnSetSpawn;
/*System.Void DeActivate(MVBuildModeAvatarLocal+AvatarBuildModes toMode)*/ inline static Utils::MethodInfo<false,true> m_DeActivate;
/*System.Void ModifySpeed(System.Single xz, System.Single y)*/ inline static Utils::MethodInfo<false,false> m_ModifySpeed;
/*System.Void FrameUpdate(InputToInGameAction interactionMap)*/ inline static Utils::MethodInfo<false,true> m_FrameUpdate;
/*System.Void FixedUpdate(IInputToPlayerMovement movementMap)*/ inline static Utils::MethodInfo<false,true> m_FixedUpdate;
/*System.Void SetMoveConstraint(UnityEngine.Vector3 center, System.Single radius)*/ inline static Utils::MethodInfo<false,false> m_SetMoveConstraint;
/*System.Void TouchRotationToCamera()*/ inline static Utils::MethodInfo<false,false> m_TouchRotationToCamera;
/*System.Void UpdateRotationToCamera()*/ inline static Utils::MethodInfo<false,false> m_UpdateRotationToCamera;
/*System.Void SetToEditMode()*/ inline static Utils::MethodInfo<false,false> m_SetToEditMode;
/*System.Void MoveCharacter(UnityEngine.Vector3 moveDelta)*/ inline static Utils::MethodInfo<false,false> m_MoveCharacter;
/*UnityEngine.Vector3 GetElevationVelocity()*/ inline static Utils::MethodInfo<false,false> m_GetElevationVelocity;
/*System.Void Move(UnityEngine.Vector3 velocity)*/ inline static Utils::MethodInfo<false,false> m_Move;
/*UnityEngine.Vector3 GetDirection(System.Boolean freeFlight)*/ inline static Utils::MethodInfo<false,false> m_GetDirection;
/*UnityEngine.Vector3 GetTouchInputDirection()*/ inline static Utils::MethodInfo<true,false> m_GetTouchInputDirection;
/*UnityEngine.Vector3 GetInputDirection()*/ inline static Utils::MethodInfo<true,false> m_GetInputDirection;
/*UnityEngine.Vector3 GetMovementVelocity()*/ inline static Utils::MethodInfo<false,false> m_GetMovementVelocity;
/*System.Void AvatarCommandsBuildModeOnEnterBuildStateEvent(EditorEvent editorEvent, System.Object data)*/ inline static Utils::MethodInfo<false,false> m_AvatarCommandsBuildModeOnEnterBuildStateEvent;
/*System.Void ESLeaveCubeTutorialSetup()*/ inline static Utils::MethodInfo<false,false> m_ESLeaveCubeTutorialSetup;
/*System.Void FocusOnPosition()*/ inline static Utils::MethodInfo<false,false> m_FocusOnPosition;
/*System.Void ESEditCubeTutorialSetup(MVBuildModeAvatarLocal+EditMode+ESEditCubeTutorialData data)*/ inline static Utils::MethodInfo<false,false> m_ESEditCubeTutorialSetup;
/*System.Void AvatarCommandsBuildModeOnExitBuildStateEvent(EditorEvent editorEvent, System.Object data)*/ inline static Utils::MethodInfo<false,false> m_AvatarCommandsBuildModeOnExitBuildStateEvent;
/*System.Void EditCubesExitSetup()*/ inline static Utils::MethodInfo<false,false> m_EditCubesExitSetup;
/*System.Void ESEditCubeTutorialExitSetup()*/ inline static Utils::MethodInfo<false,false> m_ESEditCubeTutorialExitSetup;
/*System.Void CERoamUUIExitSetup()*/ inline static Utils::MethodInfo<false,false> m_CERoamUUIExitSetup;
/*System.Void CEEditBodyUUIExitSetup()*/ inline static Utils::MethodInfo<false,false> m_CEEditBodyUUIExitSetup;
/*System.Void CEEditBodyUUIEnterSetup(MVBuildModeAvatarLocal+EditMode+CEEditBodyUUIData data)*/ inline static Utils::MethodInfo<false,false> m_CEEditBodyUUIEnterSetup;
/*System.Void CERoamUUIEnterSetup(MVBuildModeAvatarLocal+EditMode+CERoamUUISetupData data)*/ inline static Utils::MethodInfo<false,false> m_CERoamUUIEnterSetup;
/*System.Void EditCubesDataEnterSetup(MVBuildModeAvatarLocal+EditMode+EditCubesSetupData data)*/ inline static Utils::MethodInfo<false,false> m_EditCubesDataEnterSetup;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct RotationHelper {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<false> /* EditorStateMachine */  f_editorStateMachine;

	/*System.Void .ctor(EditorStateMachine editorStateMachine)*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Void ResetRotation()*/ inline static Utils::MethodInfo<false,false> m_ResetRotation;
/*System.Void RotateStep(RotationMode rotationMode, System.Single rotationSpeed)*/ inline static Utils::MethodInfo<false,false> m_RotateStep;
/*System.Boolean IsRotationInvalid()*/ inline static Utils::MethodInfo<false,false> m_IsRotationInvalid;
/*UnityEngine.Vector3 GetPivot(System.Collections.Generic.List`1<WorldObjectClientRef> targets, System.Collections.Generic.List`1<UnityEngine.Transform> targetTransforms)*/ inline static Utils::MethodInfo<true,false> m_GetPivot;
/*System.Void DoGridSnapping(System.Collections.Generic.List`1<WorldObjectClientRef> targets)*/ inline static Utils::MethodInfo<true,false> m_DoGridSnapping;
/*System.Boolean ValidateTargets(System.Collections.Generic.List`1<WorldObjectClientRef> targets)*/ inline static Utils::MethodInfo<true,false> m_ValidateTargets;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct SettingsSlider {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<false> /* UnityEngine.UI.Slider */  f_slider,/* System.Single */  f_interval,/* System.Boolean */  f_round,/* System.String */  f_key;

	/*System.Single get_Value()*/ inline static Utils::MethodInfo<false,false> m_get_Value;
/*System.Void Initialize(System.String key, System.Single value, System.Single minValue, System.Single maxValue)*/ inline static Utils::MethodInfo<false,false> m0_Initialize;
/*System.Void Initialize(System.String key, System.Int32 value, System.Int32 minValue, System.Int32 maxValue)*/ inline static Utils::MethodInfo<false,false> m1_Initialize;
/*System.Void ValueChanged()*/ inline static Utils::MethodInfo<false,false> m_ValueChanged;
/*System.Void Reset()*/ inline static Utils::MethodInfo<false,false> m_Reset;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct MVGameControllerBase {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* System.Boolean */ f_LevelingTestMode,/* System.Boolean */ f_ClientShopInsideInventory,/* System.Boolean */ f_IsInitialized_k_BackingField,/* System.Boolean */ f_DisconnectIsOk_k_BackingField,/* IPlayModeUI */ f_PlayModeUI_k_BackingField,/* IEditModeUI */ f_EditModeUI_k_BackingField,/* MVGameControllerBase+OnReceivedGameMsgDelegate */ f_OnReceivedGameMsg,/* MVGameControllerBase+OnReceivedNotificationEventDelegate */ f_OnReceivedNotification,/* MVGameControllerBase+OnPostGameInitDelegate */ f_OnPostGameInit,/* MVGameControllerBase */ f_instance,/* System.Boolean */ f_WebPlayAsTouch_k_BackingField,/* System.Boolean */ f_PortalUI_k_BackingField,/* System.Boolean */ f_WebPlayAsTouchInitialized_k_BackingField,/* GameSessionData */ f_GameSessionData_k_BackingField,/* System.Boolean */ f_SeekAdConsent_k_BackingField,/* System.Boolean */ f_Quitting_k_BackingField,/* System.Boolean */ f_LeavingEditPlayMode_k_BackingField;
inline static Utils::FieldInfo<false> /* RegionConfigManager */  f_regionConfigManager,/* DebugLogHandler */  f_debugLogHandler,/* MainCameraManager */  f_mainCameraManager,/* Styles */  f_styles,/* MaterialLoader */  f_materialLoader,/* PrefabPool */  f_prefabPool,/* AntiHack.TextureIntegrityChecker */  f_textureIntegrityChecker,/* ThemeRepository */  f_themeRepository,/* StreamingAssetManager */  f_streamingAssetManager,/* EmbeddedPlayerConfig */  f_embeddedPlayerConfig,/* MVNetworkGame */  f_game,/* AudioManager */  f_audioManager,/* BrowserComm */  f_browserComm,/* LevelLoader */  f_levelLoader,/* SkinnedMeshOptimizeManager */  f_skinnedMeshOptimizeManager,/* FlagDebriefingControl */  f_flagDebriefingControl,/* GoldRewardManager */  f_goldRewardManager,/* JoystickControllerStack */  f_joystickControllerStack,/* System.Boolean */  f_quitHasBeenCalled,/* TimeReward */  f_timeReward,/* OverrideMaterials */  f_overrideMaterials,/* LoadStats */  f_loadStats,/* MVJoinState */  f_joinState,/* FirstFrameUpdateActorReady */  f_firstFrameUpdateActorReady,/* System.Int32 */  f_reAuthTestTries,/* ModeControllerBase */  f_modeController,/* System.Boolean */  f_ShuttingDown_k_BackingField,/* System.Action`1<MVJoinState> */  f_onJoinStateChanged,/* AudioBuild */  f_audioBuild,/* WaterPlaneManager */  f_waterPlaneManagerPrefab,/* WaterPlaneManager */  f_waterPlaneManager,/* SkyboxManager */  f_skyboxManager,/* Assets.Scripts.Subscription.SubscriberCooldownsManager */  f_subscriberCooldownsManager;

	/*Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.Mediator.SpawnRoleDataMediator get_SpawnRoleDataMediatorLocal()*/ inline static Utils::MethodInfo<true,false> m_get_SpawnRoleDataMediatorLocal;
/*MVLocalPlayer get_LocalPlayer()*/ inline static Utils::MethodInfo<true,false> m_get_LocalPlayer;
/*GameEventManager get_GameEventManager()*/ inline static Utils::MethodInfo<true,false> m_get_GameEventManager;
/*System.Boolean IsInCorrectInventory(System.Boolean insidePlayerInventory)*/ inline static Utils::MethodInfo<true,false> m_IsInCorrectInventory;
/*System.Boolean get_IsInitialized()*/ inline static Utils::MethodInfo<true,false> m_get_IsInitialized;
/*System.Void set_IsInitialized(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_IsInitialized;
/*System.Boolean get_DisconnectIsOk()*/ inline static Utils::MethodInfo<true,false> m_get_DisconnectIsOk;
/*System.Void set_DisconnectIsOk(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_DisconnectIsOk;
/*IPlayModeUI get_PlayModeUI()*/ inline static Utils::MethodInfo<true,false> m_get_PlayModeUI;
/*System.Void set_PlayModeUI(IPlayModeUI value)*/ inline static Utils::MethodInfo<true,false> m_set_PlayModeUI;
/*IEditModeUI get_EditModeUI()*/ inline static Utils::MethodInfo<true,false> m_get_EditModeUI;
/*System.Void set_EditModeUI(IEditModeUI value)*/ inline static Utils::MethodInfo<true,false> m_set_EditModeUI;
/*System.Boolean get_IsAlive()*/ inline static Utils::MethodInfo<true,false> m_get_IsAlive;
/*MVNetworkGame get_Game()*/ inline static Utils::MethodInfo<true,false> m_get_Game;
/*AudioManager get_AudioManager()*/ inline static Utils::MethodInfo<true,false> m_get_AudioManager;
/*BrowserComm get_BrowserComm()*/ inline static Utils::MethodInfo<true,false> m_get_BrowserComm;
/*LevelLoader get_LevelLoader()*/ inline static Utils::MethodInfo<true,false> m_get_LevelLoader;
/*SkinnedMeshOptimizeManager get_SkinnedMeshOptimizeManager()*/ inline static Utils::MethodInfo<true,false> m_get_SkinnedMeshOptimizeManager;
/*FlagDebriefingControl get_FlagDebriefingControl()*/ inline static Utils::MethodInfo<true,false> m_get_FlagDebriefingControl;
/*GoldRewardManager get_GoldRewardManager()*/ inline static Utils::MethodInfo<true,false> m_get_GoldRewardManager;
/*AntiHack.TextureIntegrityChecker get_TextureIntegrityChecker()*/ inline static Utils::MethodInfo<true,false> m_get_TextureIntegrityChecker;
/*StreamingAssetManager get_StreamingAssetManager()*/ inline static Utils::MethodInfo<true,false> m_get_StreamingAssetManager;
/*EmbeddedPlayerConfig get_EmbeddedPlayerConfig()*/ inline static Utils::MethodInfo<false,false> m_get_EmbeddedPlayerConfig;
/*RegionConfig get_RegionConfig()*/ inline static Utils::MethodInfo<false,false> m_get_RegionConfig;
/*StaticAssetsConfig get_StaticAssetsConfig()*/ inline static Utils::MethodInfo<true,false> m_get_StaticAssetsConfig;
/*System.Boolean get_WebPlayAsTouch()*/ inline static Utils::MethodInfo<true,false> m_get_WebPlayAsTouch;
/*System.Void set_WebPlayAsTouch(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_WebPlayAsTouch;
/*System.Boolean get_PortalUI()*/ inline static Utils::MethodInfo<true,false> m_get_PortalUI;
/*System.Void set_PortalUI(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_PortalUI;
/*System.Boolean get_ShuttingDown()*/ inline static Utils::MethodInfo<false,false> m_get_ShuttingDown;
/*System.Void set_ShuttingDown(System.Boolean value)*/ inline static Utils::MethodInfo<false,false> m_set_ShuttingDown;
/*System.Boolean get_WebPlayAsTouchInitialized()*/ inline static Utils::MethodInfo<true,false> m_get_WebPlayAsTouchInitialized;
/*System.Void set_WebPlayAsTouchInitialized(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_WebPlayAsTouchInitialized;
/*GameSessionData get_GameSessionData()*/ inline static Utils::MethodInfo<true,false> m_get_GameSessionData;
/*System.Void set_GameSessionData(GameSessionData value)*/ inline static Utils::MethodInfo<true,false> m_set_GameSessionData;
/*MV.Common.BuildTarget get_BuildTarget()*/ inline static Utils::MethodInfo<true,false> m_get_BuildTarget;
/*System.Action get_OnFirstFrameUpdateActorReady()*/ inline static Utils::MethodInfo<true,false> m_get_OnFirstFrameUpdateActorReady;
/*System.Void set_OnFirstFrameUpdateActorReady(System.Action value)*/ inline static Utils::MethodInfo<true,false> m_set_OnFirstFrameUpdateActorReady;
/*System.Boolean get_OkToReAuth()*/ inline static Utils::MethodInfo<true,false> m_get_OkToReAuth;
/*System.Int32 get_ReAuthTries()*/ inline static Utils::MethodInfo<true,false> m_get_ReAuthTries;
/*System.Boolean get_UsingDevSessionData()*/ inline static Utils::MethodInfo<true,false> m_get_UsingDevSessionData;
/*MVNetworkGame+OperationRequests get_OperationRequests()*/ inline static Utils::MethodInfo<true,false> m_get_OperationRequests;
/*LoadStats get_LoadStats()*/ inline static Utils::MethodInfo<true,false> m_get_LoadStats;
/*MV.Common.MVGameMode get_GameMode()*/ inline static Utils::MethodInfo<true,false> m_get_GameMode;
/*MVWorldObjectClientManager get_WOCM()*/ inline static Utils::MethodInfo<true,false> m_get_WOCM;
/*TimeReward get_TimeReward()*/ inline static Utils::MethodInfo<true,false> m_get_TimeReward;
/*System.Boolean get_IsTouristSession()*/ inline static Utils::MethodInfo<true,false> m_get_IsTouristSession;
/*Assets.Scripts.AdIntegration.IAdManager get_AdManager()*/ inline static Utils::MethodInfo<true,false> m_get_AdManager;
/*Assets.Scripts.AdIntegration.IAdManager get_GetAdManager()*/ inline static Utils::MethodInfo<false,true> m_get_GetAdManager;
/*System.Boolean get_SeekAdConsent()*/ inline static Utils::MethodInfo<true,false> m_get_SeekAdConsent;
/*System.Void set_SeekAdConsent(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_SeekAdConsent;
/*MVJoinState get_JoinState()*/ inline static Utils::MethodInfo<true,false> m_get_JoinState;
/*System.Void set_JoinState(MVJoinState value)*/ inline static Utils::MethodInfo<true,false> m_set_JoinState;
/*System.Action`1<MVJoinState> get_OnJoinStateChanged()*/ inline static Utils::MethodInfo<true,false> m_get_OnJoinStateChanged;
/*System.Void set_OnJoinStateChanged(System.Action`1<MVJoinState> value)*/ inline static Utils::MethodInfo<true,false> m_set_OnJoinStateChanged;
/*System.Boolean get_IsPlayingInternal()*/ inline static Utils::MethodInfo<false,true> m_get_IsPlayingInternal;
/*System.Boolean get_IsPlaying()*/ inline static Utils::MethodInfo<true,false> m_get_IsPlaying;
/*MaterialLoader get_MaterialLoader()*/ inline static Utils::MethodInfo<true,false> m_get_MaterialLoader;
/*MainCameraManager get_MainCameraManager()*/ inline static Utils::MethodInfo<true,false> m_get_MainCameraManager;
/*WaterPlaneManager get_WaterPlaneManager()*/ inline static Utils::MethodInfo<true,false> m_get_WaterPlaneManager;
/*SkyboxManager get_SkyboxManager()*/ inline static Utils::MethodInfo<true,false> m_get_SkyboxManager;
/*Assets.Scripts.Subscription.SubscriberCooldownsManager get_SubscriberCooldownsManager()*/ inline static Utils::MethodInfo<true,false> m_get_SubscriberCooldownsManager;
/*System.Void Awake()*/ inline static Utils::MethodInfo<false,true> m_Awake;
/*System.Collections.IEnumerator InitRegionDependent()*/ inline static Utils::MethodInfo<false,false> m_InitRegionDependent;
/*System.Void Start()*/ inline static Utils::MethodInfo<false,true> m_Start;
/*System.Void OnDestroy()*/ inline static Utils::MethodInfo<false,true> m_OnDestroy;
/*System.Void UnregisterPlayModeController()*/ inline static Utils::MethodInfo<true,false> m_UnregisterPlayModeController;
/*System.Void Update()*/ inline static Utils::MethodInfo<false,false> m_Update;
/*System.Void FixedUpdate()*/ inline static Utils::MethodInfo<false,false> m_FixedUpdate;
/*System.Void LateUpdate()*/ inline static Utils::MethodInfo<false,true> m_LateUpdate;
/*System.Void OnDrawGizmos()*/ inline static Utils::MethodInfo<false,false> m_OnDrawGizmos;
/*System.Void OnRTGAppInitialize()*/ inline static Utils::MethodInfo<false,false> m_OnRTGAppInitialize;
/*System.Void RegisterPlayModeController(ModeControllerBase playModeController)*/ inline static Utils::MethodInfo<true,false> m_RegisterPlayModeController;
/*System.Void PostGameMsg(MV.Common.MVGameMsgType gameMsgType, System.Collections.Generic.Dictionary`2<System.Object, System.Object> gameMsgData)*/ inline static Utils::MethodInfo<true,false> m0_PostGameMsg;
/*System.Void PostGameMsg(MV.Common.MVGameMsgType gameMsgType, System.String message)*/ inline static Utils::MethodInfo<true,false> m1_PostGameMsg;
/*System.Void PostDestroyCleanup()*/ inline static Utils::MethodInfo<true,false> m_PostDestroyCleanup;
/*System.Void UpdateControllerUpdate()*/ inline static Utils::MethodInfo<false,true> m_UpdateControllerUpdate;
/*System.Void RegisterJoystickControllerStack(JoystickControllerStack joystickControllerStack)*/ inline static Utils::MethodInfo<true,false> m_RegisterJoystickControllerStack;
/*System.Void PushJoystick(ControlType joystickType)*/ inline static Utils::MethodInfo<true,false> m_PushJoystick;
/*System.Void PopJoystick()*/ inline static Utils::MethodInfo<true,false> m_PopJoystick;
/*System.Void SetGameSessionData(GameSessionData gameSessionData)*/ inline static Utils::MethodInfo<true,false> m_SetGameSessionData;
/*System.Boolean TryReauth()*/ inline static Utils::MethodInfo<true,false> m_TryReauth;
/*System.Void ApplicationQuit(QuitBaseCallback applicationQuitObject)*/ inline static Utils::MethodInfo<true,false> m_ApplicationQuit;
/*System.Void RegisterOverrideMaterials()*/ inline static Utils::MethodInfo<true,false> m_RegisterOverrideMaterials;
/*System.Boolean SetWindowPos(System.IntPtr hwnd, System.Int32 hWndInsertAfter, System.Int32 x, System.Int32 Y, System.Int32 cx, System.Int32 cy, System.Int32 wFlags)*/ inline static Utils::MethodInfo<true,false> m_SetWindowPos;
/*System.IntPtr FindWindow(System.String className, System.String windowName)*/ inline static Utils::MethodInfo<true,false> m_FindWindow;
/*System.Void SetPosition(System.Int32 x, System.Int32 y, System.Int32 resX = 0, System.Int32 resY = 0)*/ inline static Utils::MethodInfo<true,false> m_SetPosition;
/*System.Boolean get_Quitting()*/ inline static Utils::MethodInfo<true,false> m_get_Quitting;
/*System.Void set_Quitting(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_Quitting;
/*System.Boolean get_LeavingEditPlayMode()*/ inline static Utils::MethodInfo<true,false> m_get_LeavingEditPlayMode;
/*System.Void set_LeavingEditPlayMode(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_LeavingEditPlayMode;
/*System.Void OnApplicationQuit()*/ inline static Utils::MethodInfo<false,false> m_OnApplicationQuit;
/*System.Void ShutDown()*/ inline static Utils::MethodInfo<false,false> m_ShutDown;
/*System.Void HandleApplicationQuit(QuitBaseCallback quitBaseCallback)*/ inline static Utils::MethodInfo<false,true> m_HandleApplicationQuit;
/*System.Void CleanUp()*/ inline static Utils::MethodInfo<false,true> m_CleanUp;
/*System.Void CleanUpPortal()*/ inline static Utils::MethodInfo<false,false> m_CleanUpPortal;
/*System.Void HandleQuitDisconnect()*/ inline static Utils::MethodInfo<false,false> m_HandleQuitDisconnect;
/*System.Void AlternatePortTest()*/ inline static Utils::MethodInfo<false,false> m_AlternatePortTest;
/*System.Void StartGame()*/ inline static Utils::MethodInfo<false,true> m_StartGame;
/*System.Void InitWebGL(System.Boolean developmentMode)*/ inline static Utils::MethodInfo<false,true> m_InitWebGL;
/*System.Void InitStandAlone(System.Boolean developmentMode)*/ inline static Utils::MethodInfo<false,true> m_InitStandAlone;
/*System.Void OnReceivedReAuthWebParametersFromHttpRequest(UnityEngine.Networking.UnityWebRequest www)*/ inline static Utils::MethodInfo<false,false> m_OnReceivedReAuthWebParametersFromHttpRequest;
/*System.Void OnReceivedSessionData(UnityEngine.Networking.UnityWebRequest www)*/ inline static Utils::MethodInfo<false,false> m_OnReceivedSessionData;
/*System.Void UpdateInternal()*/ inline static Utils::MethodInfo<false,true> m_UpdateInternal;
/*System.Void Initialize()*/ inline static Utils::MethodInfo<false,false> m_Initialize;
/*System.Void HandleDebugShortCuts()*/ inline static Utils::MethodInfo<false,false> m_HandleDebugShortCuts;
/*System.Void StartGameWithSessionData(System.Boolean ok, System.String sessionDataJson)*/ inline static Utils::MethodInfo<false,false> m_StartGameWithSessionData;
/*System.Void ReceivedLoadStatsCallback(System.Boolean ok, System.String data)*/ inline static Utils::MethodInfo<false,false> m_ReceivedLoadStatsCallback;
/*System.Void UpdateGame()*/ inline static Utils::MethodInfo<false,false> m_UpdateGame;
/*System.Void DeleteScreenPlayerPrefs()*/ inline static Utils::MethodInfo<true,false> m_DeleteScreenPlayerPrefs;
/*System.Void UpdateControllerLateUpdate()*/ inline static Utils::MethodInfo<false,false> m_UpdateControllerLateUpdate;
/*System.Void ForceEmbedSite(System.String url)*/ inline static Utils::MethodInfo<true,false> m_ForceEmbedSite;
/*System.Void TogglePlayerIndicators()*/ inline static Utils::MethodInfo<true,false> m_TogglePlayerIndicators;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct AwayMonitor {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* AwayMonitor */ f_instance,/* System.String */ f_mouseX,/* System.String */ f_mouseY,/* System.String */ f_scroll,/* System.String */ f_platformerLeft,/* System.String */ f_platformerRight,/* System.Boolean */ f_allAxisAvailable,/* System.Boolean */ f_allPlatformerButtonsAvailable;
inline static Utils::FieldInfo<false> /* System.DateTime */  f_latestResetAFKTime,/* System.TimeSpan */  f_awayCheckFrequency,/* AwayMonitor+IdleKickTimes */  f_idleKickTimes,/* AwayMonitor+State */  f_state,/* System.Boolean */  f_idleKickEnabled,/* System.DateTime */  f_latestMouseMoveTime;

	/*System.Boolean get_IdleKickEnabled()*/ inline static Utils::MethodInfo<true,false> m_get_IdleKickEnabled;
/*System.Void set_IdleKickEnabled(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_IdleKickEnabled;
/*System.DateTime get_LatestMouseMoveTime()*/ inline static Utils::MethodInfo<false,false> m_get_LatestMouseMoveTime;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Void Initialize(MV.Common.MVGameMode mode)*/ inline static Utils::MethodInfo<true,false> m_Initialize;
/*System.Void Destroy()*/ inline static Utils::MethodInfo<true,false> m_Destroy;
/*System.Void UpdateMobile()*/ inline static Utils::MethodInfo<true,false> m_UpdateMobile;
/*System.Void BackgroundUpdate()*/ inline static Utils::MethodInfo<true,false> m_BackgroundUpdate;
/*System.Void InternalUpdate()*/ inline static Utils::MethodInfo<true,false> m_InternalUpdate;
/*System.Void UpdateButtons()*/ inline static Utils::MethodInfo<false,false> m_UpdateButtons;
/*System.Void Update()*/ inline static Utils::MethodInfo<true,false> m_Update;
/*System.Void UpdateIdleAction()*/ inline static Utils::MethodInfo<true,false> m_UpdateIdleAction;
/*System.Void UpdateIdle()*/ inline static Utils::MethodInfo<false,false> m_UpdateIdle;
/*System.Void UpdateMouse()*/ inline static Utils::MethodInfo<false,false> m_UpdateMouse;
/*System.Void HandleIdle(System.Boolean fromBackgroundUpdate)*/ inline static Utils::MethodInfo<false,false> m_HandleIdle;
/*System.Void CheckAndResolvePendingKick()*/ inline static Utils::MethodInfo<false,false> m_CheckAndResolvePendingKick;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct CrossHair {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<false> /* UnityEngine.UI.Image */  f_crossHair,/* UnityEngine.GameObject */  f_ammoRoot,/* UnityEngine.UI.Text */  f_ammoCount,/* UnityEngine.UI.Image */  f_chargeFill,/* System.Single */  f_toggleInterval,/* UnityEngine.UI.Image */  f_hitIndicatorImage,/* UnityEngine.AnimationCurve */  f_fadeCurve,/* System.Single */  f_timeSinceLastToggle,/* System.Boolean */  f_isFillOn;

	/*System.Boolean get_Visible()*/ inline static Utils::MethodInfo<false,true> m_get_Visible;
/*System.Void set_Visible(System.Boolean value)*/ inline static Utils::MethodInfo<false,true> m_set_Visible;
/*System.Void ShowHasHitEffect()*/ inline static Utils::MethodInfo<false,true> m_ShowHasHitEffect;
/*System.Collections.IEnumerator HitIndicatorAnimation()*/ inline static Utils::MethodInfo<false,false> m_HitIndicatorAnimation;
/*System.Void UpdateCrossHair(PickupItem pickupItem)*/ inline static Utils::MethodInfo<false,true> m_UpdateCrossHair;
/*System.Void UpdateAmmoCount(PickupItem pickupItem)*/ inline static Utils::MethodInfo<false,false> m_UpdateAmmoCount;
/*System.Void UpdateChargeState(PickupItem pickupItem)*/ inline static Utils::MethodInfo<false,false> m_UpdateChargeState;
/*System.Void UpdateCrosshairColor(PickupItem pickupItem)*/ inline static Utils::MethodInfo<false,false> m_UpdateCrosshairColor;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct UI_Graphic {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* UnityEngine.Material */ f_s_DefaultUI,/* UnityEngine.Texture2D */ f_s_WhiteTexture,/* UnityEngine.Mesh */ f_s_Mesh,/* UnityEngine.UI.VertexHelper */ f_s_VertexHelper;
inline static Utils::FieldInfo<false> /* UnityEngine.Material */  f_m_Material,/* UnityEngine.Color */  f_m_Color,/* System.Boolean */  f_m_SkipLayoutUpdate,/* System.Boolean */  f_m_SkipMaterialUpdate,/* System.Boolean */  f_m_RaycastTarget,/* System.Boolean */  f_m_RaycastTargetCache,/* UnityEngine.Vector4 */  f_m_RaycastPadding,/* UnityEngine.RectTransform */  f_m_RectTransform,/* UnityEngine.CanvasRenderer */  f_m_CanvasRenderer,/* UnityEngine.Canvas */  f_m_Canvas,/* System.Boolean */  f_m_VertsDirty,/* System.Boolean */  f_m_MaterialDirty,/* UnityEngine.Events.UnityAction */  f_m_OnDirtyLayoutCallback,/* UnityEngine.Events.UnityAction */  f_m_OnDirtyVertsCallback,/* UnityEngine.Events.UnityAction */  f_m_OnDirtyMaterialCallback,/* UnityEngine.Mesh */  f_m_CachedMesh,/* UnityEngine.Vector2[] */  f_m_CachedUvs,/* UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> */  f_m_ColorTweenRunner,/* System.Boolean */  f_useLegacyMeshGeneration_k_BackingField;

	/*UnityEngine.Material get_defaultGraphicMaterial()*/ inline static Utils::MethodInfo<true,false> m_get_defaultGraphicMaterial;
/*UnityEngine.Color get_color()*/ inline static Utils::MethodInfo<false,true> m_get_color;
/*System.Void set_color(UnityEngine.Color value)*/ inline static Utils::MethodInfo<false,true> m_set_color;
/*System.Boolean get_raycastTarget()*/ inline static Utils::MethodInfo<false,true> m_get_raycastTarget;
/*System.Void set_raycastTarget(System.Boolean value)*/ inline static Utils::MethodInfo<false,true> m_set_raycastTarget;
/*UnityEngine.Vector4 get_raycastPadding()*/ inline static Utils::MethodInfo<false,false> m_get_raycastPadding;
/*System.Void set_raycastPadding(UnityEngine.Vector4 value)*/ inline static Utils::MethodInfo<false,false> m_set_raycastPadding;
/*System.Boolean get_useLegacyMeshGeneration()*/ inline static Utils::MethodInfo<false,false> m_get_useLegacyMeshGeneration;
/*System.Void set_useLegacyMeshGeneration(System.Boolean value)*/ inline static Utils::MethodInfo<false,false> m_set_useLegacyMeshGeneration;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Void SetAllDirty()*/ inline static Utils::MethodInfo<false,true> m_SetAllDirty;
/*System.Void SetLayoutDirty()*/ inline static Utils::MethodInfo<false,true> m_SetLayoutDirty;
/*System.Void SetVerticesDirty()*/ inline static Utils::MethodInfo<false,true> m_SetVerticesDirty;
/*System.Void SetMaterialDirty()*/ inline static Utils::MethodInfo<false,true> m_SetMaterialDirty;
/*System.Void SetRaycastDirty()*/ inline static Utils::MethodInfo<false,false> m_SetRaycastDirty;
/*System.Void OnRectTransformDimensionsChange()*/ inline static Utils::MethodInfo<false,true> m_OnRectTransformDimensionsChange;
/*System.Void OnBeforeTransformParentChanged()*/ inline static Utils::MethodInfo<false,true> m_OnBeforeTransformParentChanged;
/*System.Void OnTransformParentChanged()*/ inline static Utils::MethodInfo<false,true> m_OnTransformParentChanged;
/*System.Int32 get_depth()*/ inline static Utils::MethodInfo<false,false> m_get_depth;
/*UnityEngine.RectTransform get_rectTransform()*/ inline static Utils::MethodInfo<false,true> m_get_rectTransform;
/*UnityEngine.Canvas get_canvas()*/ inline static Utils::MethodInfo<false,false> m_get_canvas;
/*System.Void CacheCanvas()*/ inline static Utils::MethodInfo<false,false> m_CacheCanvas;
/*UnityEngine.CanvasRenderer get_canvasRenderer()*/ inline static Utils::MethodInfo<false,false> m_get_canvasRenderer;
/*UnityEngine.Material get_defaultMaterial()*/ inline static Utils::MethodInfo<false,true> m_get_defaultMaterial;
/*UnityEngine.Material get_material()*/ inline static Utils::MethodInfo<false,true> m_get_material;
/*System.Void set_material(UnityEngine.Material value)*/ inline static Utils::MethodInfo<false,true> m_set_material;
/*UnityEngine.Material get_materialForRendering()*/ inline static Utils::MethodInfo<false,true> m_get_materialForRendering;
/*UnityEngine.Texture get_mainTexture()*/ inline static Utils::MethodInfo<false,true> m_get_mainTexture;
/*System.Void OnEnable()*/ inline static Utils::MethodInfo<false,true> m_OnEnable;
/*System.Void OnDisable()*/ inline static Utils::MethodInfo<false,true> m_OnDisable;
/*System.Void OnDestroy()*/ inline static Utils::MethodInfo<false,true> m_OnDestroy;
/*System.Void OnCanvasHierarchyChanged()*/ inline static Utils::MethodInfo<false,true> m_OnCanvasHierarchyChanged;
/*System.Void OnCullingChanged()*/ inline static Utils::MethodInfo<false,true> m_OnCullingChanged;
/*System.Void Rebuild(UnityEngine.UI.CanvasUpdate update)*/ inline static Utils::MethodInfo<false,true> m_Rebuild;
/*System.Void LayoutComplete()*/ inline static Utils::MethodInfo<false,true> m_LayoutComplete;
/*System.Void GraphicUpdateComplete()*/ inline static Utils::MethodInfo<false,true> m_GraphicUpdateComplete;
/*System.Void UpdateMaterial()*/ inline static Utils::MethodInfo<false,true> m_UpdateMaterial;
/*System.Void UpdateGeometry()*/ inline static Utils::MethodInfo<false,true> m_UpdateGeometry;
/*System.Void DoMeshGeneration()*/ inline static Utils::MethodInfo<false,false> m_DoMeshGeneration;
/*System.Void DoLegacyMeshGeneration()*/ inline static Utils::MethodInfo<false,false> m_DoLegacyMeshGeneration;
/*UnityEngine.Mesh get_workerMesh()*/ inline static Utils::MethodInfo<true,false> m_get_workerMesh;
/*System.Void OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex> vbo)*/ inline static Utils::MethodInfo<false,true> m_OnFillVBO;
/*System.Void OnPopulateMesh(UnityEngine.Mesh m)*/ inline static Utils::MethodInfo<false,true> m0_OnPopulateMesh;
/*System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh)*/ inline static Utils::MethodInfo<false,true> m1_OnPopulateMesh;
/*System.Void OnDidApplyAnimationProperties()*/ inline static Utils::MethodInfo<false,true> m_OnDidApplyAnimationProperties;
/*System.Void SetNativeSize()*/ inline static Utils::MethodInfo<false,true> m_SetNativeSize;
/*System.Boolean Raycast(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)*/ inline static Utils::MethodInfo<false,true> m0_Raycast;
/*System.Boolean Raycast(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera, System.Boolean ignoreMasks)*/ inline static Utils::MethodInfo<false,false> m1_Raycast;
/*UnityEngine.Vector2 PixelAdjustPoint(UnityEngine.Vector2 point)*/ inline static Utils::MethodInfo<false,false> m_PixelAdjustPoint;
/*UnityEngine.Rect GetPixelAdjustedRect()*/ inline static Utils::MethodInfo<false,false> m_GetPixelAdjustedRect;
/*System.Void CrossFadeColor(UnityEngine.Color targetColor, System.Single duration, System.Boolean ignoreTimeScale, System.Boolean useAlpha)*/ inline static Utils::MethodInfo<false,true> m0_CrossFadeColor;
/*System.Void CrossFadeColor(UnityEngine.Color targetColor, System.Single duration, System.Boolean ignoreTimeScale, System.Boolean useAlpha, System.Boolean useRGB)*/ inline static Utils::MethodInfo<false,true> m1_CrossFadeColor;
/*UnityEngine.Color CreateColorFromAlpha(System.Single alpha)*/ inline static Utils::MethodInfo<true,false> m_CreateColorFromAlpha;
/*System.Void CrossFadeAlpha(System.Single alpha, System.Single duration, System.Boolean ignoreTimeScale)*/ inline static Utils::MethodInfo<false,true> m_CrossFadeAlpha;
/*System.Void RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction action)*/ inline static Utils::MethodInfo<false,false> m_RegisterDirtyLayoutCallback;
/*System.Void UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction action)*/ inline static Utils::MethodInfo<false,false> m_UnregisterDirtyLayoutCallback;
/*System.Void RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction action)*/ inline static Utils::MethodInfo<false,false> m_RegisterDirtyVerticesCallback;
/*System.Void UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction action)*/ inline static Utils::MethodInfo<false,false> m_UnregisterDirtyVerticesCallback;
/*System.Void RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction action)*/ inline static Utils::MethodInfo<false,false> m_RegisterDirtyMaterialCallback;
/*System.Void UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction action)*/ inline static Utils::MethodInfo<false,false> m_UnregisterDirtyMaterialCallback;
/*System.Void .cctor()*/ inline static Utils::MethodInfo<true,false> m_cctor;
/*UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()*/ inline static Utils::MethodInfo<false,true> m_UnityEngine_UI_ICanvasElement_get_transform;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct PlayButton {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<false> /* TimedPlayReward */  f_timedPlayReward,/* UnityEngine.UI.Button */  f_button,/* System.Boolean */  f_shouldConfirmPlay,/* ContinueButtonLockCursor */  f_continueButtonPrefab,/* EmbeddedPlayerConfig */  f_embeddedPlayerConfig,/* System.Boolean */  f_isMouseOver,/* System.Action */  f_OnPlayButtonPressed;

	/*System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)*/ inline static Utils::MethodInfo<false,true> m_OnPointerUp;
/*System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)*/ inline static Utils::MethodInfo<false,false> m_OnPointerDown;
/*System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)*/ inline static Utils::MethodInfo<false,true> m_OnPointerEnter;
/*System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)*/ inline static Utils::MethodInfo<false,true> m_OnPointerExit;
/*System.Void Play()*/ inline static Utils::MethodInfo<false,false> m_Play;
/*System.Void OnPromotionShown(System.Boolean promotionShown, System.Boolean withAd)*/ inline static Utils::MethodInfo<false,false> m_OnPromotionShown;
/*System.Void OnContinuePressed()*/ inline static Utils::MethodInfo<false,false> m_OnContinuePressed;
/*System.Void HandlePlayPress()*/ inline static Utils::MethodInfo<false,false> m_HandlePlayPress;
/*System.Void ConfirmPlay()*/ inline static Utils::MethodInfo<false,false> m_ConfirmPlay;
/*System.Void Update()*/ inline static Utils::MethodInfo<false,false> m_Update;
/*System.Void OnEnable()*/ inline static Utils::MethodInfo<false,false> m_OnEnable;
/*System.Boolean HandlePlayAvailable()*/ inline static Utils::MethodInfo<false,true> m_HandlePlayAvailable;
/*System.Void OnCountDownEnd()*/ inline static Utils::MethodInfo<false,true> m_OnCountDownEnd;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Void <Play>b__11_0(IDeathPromotionSelector x, UnityEngine.EventSystems.BaseEventData y)*/ inline static Utils::MethodInfo<false,false> m_Play_b_11_0;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct DeathUIBoostMenuController {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<false> /* UnityEngine.UI.Text */  f_restartText,/* NotificationFade */  f_fader,/* NotificationFade */  f_buttonFader,/* NotificationFade */  f_resetButtonFader,/* NotificationFade */  f_boostFader,/* NotificationFade */  f_menuButtonFader,/* UnityEngine.UI.Image */  f_readyToPlayTimerFill,/* PointerDownController */  f_respawnButton,/* PointerDownController */  f_resetButton,/* BoostMenuController */  f_boostMenu,/* ContinueTierBoostPopup */  f_continueTierBoostPopupPrefab,/* ContinueButtonLockCursor */  f_continueButtonLockCursor,/* UnityEngine.UI.Image */  f_adIcon,/* EmbeddedPlayerConfig */  f_embeddedPlayerConfig,/* System.Single */  f_startTime,/* System.Single */  f_timeUntilGhostMode,/* System.Boolean */  f_shouldPop,/* System.Boolean */  f_wantsToPlay,/* System.Boolean */  f_isGhost;

	/*System.Void Initialize()*/ inline static Utils::MethodInfo<false,false> m_Initialize;
/*System.Void OpenMenu()*/ inline static Utils::MethodInfo<false,false> m_OpenMenu;
/*System.Void OnDestroy()*/ inline static Utils::MethodInfo<false,false> m_OnDestroy;
/*System.Void Update()*/ inline static Utils::MethodInfo<false,false> m_Update;
/*System.Void OnEnable()*/ inline static Utils::MethodInfo<false,false> m_OnEnable;
/*System.Void OnResetToSpawnPoint()*/ inline static Utils::MethodInfo<false,false> m_OnResetToSpawnPoint;
/*System.Void OnRespawn()*/ inline static Utils::MethodInfo<false,false> m_OnRespawn;
/*System.Void ReadyToSpawn(System.Boolean promotionPushedToStack, System.Boolean withAd)*/ inline static Utils::MethodInfo<false,false> m_ReadyToSpawn;
/*System.Void LockCursorAndPop()*/ inline static Utils::MethodInfo<false,false> m_LockCursorAndPop;
/*System.Void OnAvatarStateChanged(MV.Common.SpawnRoleModeType mode)*/ inline static Utils::MethodInfo<false,false> m_OnAvatarStateChanged;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Void <OnRespawn>b__25_0(IDeathPromotionSelector x, UnityEngine.EventSystems.BaseEventData y)*/ inline static Utils::MethodInfo<false,false> m_OnRespawn_b_25_0;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct ImageConversion {
	inline static Il2CppClass klass;
    
	/*System.Byte[] EncodeToPNG(UnityEngine.Texture2D tex)*/ inline static Utils::MethodInfo<true,false> m_EncodeToPNG;
/*System.Boolean LoadImage(UnityEngine.Texture2D tex, System.ReadOnlySpan`1<System.Byte> data, System.Boolean markNonReadable)*/ inline static Utils::MethodInfo<true,false> m0_LoadImage;
/*System.Boolean LoadImage(UnityEngine.Texture2D tex, System.Byte[] data)*/ inline static Utils::MethodInfo<true,false> m1_LoadImage;
/*System.Void EncodeToPNG_Injected(System.IntPtr tex, out UnityEngine.Bindings.BlittableArrayWrapper ret)*/ inline static Utils::MethodInfo<true,false> m_EncodeToPNG_Injected;
/*System.Boolean LoadImage_Injected(System.IntPtr tex, ref UnityEngine.Bindings.ManagedSpanWrapper data, System.Boolean markNonReadable)*/ inline static Utils::MethodInfo<true,false> m_LoadImage_Injected;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct Texture2D {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* System.Int32 */ f_streamingMipmapsPriorityMin,/* System.Int32 */ f_streamingMipmapsPriorityMax;

	/*UnityEngine.TextureFormat get_format()*/ inline static Utils::MethodInfo<false,false> m_get_format;
/*UnityEngine.Texture2D get_whiteTexture()*/ inline static Utils::MethodInfo<true,false> m_get_whiteTexture;
/*System.Boolean Internal_CreateEmptyImpl(UnityEngine.Texture2D mono)*/ inline static Utils::MethodInfo<true,false> m_Internal_CreateEmptyImpl;
/*System.Boolean Internal_CreateImpl(UnityEngine.Texture2D mono, System.Int32 w, System.Int32 h, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.TextureColorSpace colorSpace, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.IntPtr nativeTex, System.Boolean ignoreMipmapLimit, System.String mipmapLimitGroupName)*/ inline static Utils::MethodInfo<true,false> m_Internal_CreateImpl;
/*System.Void Internal_Create(UnityEngine.Texture2D mono, System.Int32 w, System.Int32 h, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.TextureColorSpace colorSpace, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.IntPtr nativeTex, System.Boolean ignoreMipmapLimit, System.String mipmapLimitGroupName)*/ inline static Utils::MethodInfo<true,false> m_Internal_Create;
/*System.Boolean get_isReadable()*/ inline static Utils::MethodInfo<false,true> m_get_isReadable;
/*System.Void ApplyImpl(System.Boolean updateMipmaps, System.Boolean makeNoLongerReadable)*/ inline static Utils::MethodInfo<false,false> m_ApplyImpl;
/*System.Boolean ReinitializeImpl(System.Int32 width, System.Int32 height)*/ inline static Utils::MethodInfo<false,false> m_ReinitializeImpl;
/*System.Void SetPixelImpl(System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y, UnityEngine.Color color)*/ inline static Utils::MethodInfo<false,false> m_SetPixelImpl;
/*UnityEngine.Color GetPixelImpl(System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y)*/ inline static Utils::MethodInfo<false,false> m_GetPixelImpl;
/*UnityEngine.Color GetPixelBilinearImpl(System.Int32 image, System.Int32 mip, System.Single u, System.Single v)*/ inline static Utils::MethodInfo<false,false> m_GetPixelBilinearImpl;
/*System.Boolean ReinitializeWithTextureFormatImpl(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Boolean hasMipMap)*/ inline static Utils::MethodInfo<false,false> m_ReinitializeWithTextureFormatImpl;
/*System.Void ReadPixelsImpl(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps)*/ inline static Utils::MethodInfo<false,false> m_ReadPixelsImpl;
/*System.IntPtr GetWritableImageData(System.Int32 frame)*/ inline static Utils::MethodInfo<false,false> m_GetWritableImageData;
/*System.UInt64 GetImageDataSize()*/ inline static Utils::MethodInfo<false,false> m_GetImageDataSize;
/*System.Void SetAllPixels32(UnityEngine.Color32[] colors, System.Int32 miplevel)*/ inline static Utils::MethodInfo<false,false> m_SetAllPixels32;
/*UnityEngine.Color[] GetPixels(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, System.Int32 miplevel)*/ inline static Utils::MethodInfo<false,false> m0_GetPixels;
/*UnityEngine.Color[] GetPixels(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight)*/ inline static Utils::MethodInfo<false,false> m1_GetPixels;
/*UnityEngine.Color32[] GetPixels32(System.Int32 miplevel)*/ inline static Utils::MethodInfo<false,false> m0_GetPixels32;
/*UnityEngine.Color32[] GetPixels32()*/ inline static Utils::MethodInfo<false,false> m1_GetPixels32;
/*System.Boolean ValidateFormat(UnityEngine.TextureFormat format, System.Int32 width, System.Int32 height)*/ inline static Utils::MethodInfo<false,false> m_ValidateFormat;
/*System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Int32 mipCount, System.Boolean linear, System.IntPtr nativeTex, System.Boolean createUninitialized, UnityEngine.MipmapLimitDescriptor mipmapLimitDescriptor)*/ inline static Utils::MethodInfo<false,false> m0_ctor;
/*System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Int32 mipCount, System.Boolean linear)*/ inline static Utils::MethodInfo<false,false> m1_ctor;
/*System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain)*/ inline static Utils::MethodInfo<false,false> m2_ctor;
/*System.Void .ctor(System.Int32 width, System.Int32 height)*/ inline static Utils::MethodInfo<false,false> m3_ctor;
/*System.Void SetPixel(System.Int32 x, System.Int32 y, UnityEngine.Color color)*/ inline static Utils::MethodInfo<false,false> m_SetPixel;
/*UnityEngine.Color GetPixel(System.Int32 x, System.Int32 y)*/ inline static Utils::MethodInfo<false,false> m_GetPixel;
/*UnityEngine.Color GetPixelBilinear(System.Single u, System.Single v)*/ inline static Utils::MethodInfo<false,false> m_GetPixelBilinear;
/*Unity.Collections.NativeArray`1<T> GetRawTextureData()*/ inline static Utils::MethodInfo<false,false> m_GetRawTextureData;
/*System.Void Apply(System.Boolean updateMipmaps, System.Boolean makeNoLongerReadable)*/ inline static Utils::MethodInfo<false,false> m0_Apply;
/*System.Void Apply()*/ inline static Utils::MethodInfo<false,false> m1_Apply;
/*System.Boolean Reinitialize(System.Int32 width, System.Int32 height)*/ inline static Utils::MethodInfo<false,false> m0_Reinitialize;
/*System.Boolean Reinitialize(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat format, System.Boolean hasMipMap)*/ inline static Utils::MethodInfo<false,false> m1_Reinitialize;
/*System.Void ReadPixels(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps)*/ inline static Utils::MethodInfo<false,false> m0_ReadPixels;
/*System.Void ReadPixels(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY)*/ inline static Utils::MethodInfo<false,false> m1_ReadPixels;
/*System.Void SetPixels32(UnityEngine.Color32[] colors, System.Int32 miplevel)*/ inline static Utils::MethodInfo<false,false> m0_SetPixels32;
/*System.Void SetPixels32(UnityEngine.Color32[] colors)*/ inline static Utils::MethodInfo<false,false> m1_SetPixels32;
/*UnityEngine.TextureFormat get_format_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_get_format_Injected;
/*System.IntPtr get_whiteTexture_Injected()*/ inline static Utils::MethodInfo<true,false> m_get_whiteTexture_Injected;
/*System.Boolean Internal_CreateImpl_Injected(UnityEngine.Texture2D mono, System.Int32 w, System.Int32 h, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.TextureColorSpace colorSpace, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.IntPtr nativeTex, System.Boolean ignoreMipmapLimit, ref UnityEngine.Bindings.ManagedSpanWrapper mipmapLimitGroupName)*/ inline static Utils::MethodInfo<true,false> m_Internal_CreateImpl_Injected;
/*System.Boolean get_isReadable_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_get_isReadable_Injected;
/*System.Void ApplyImpl_Injected(System.IntPtr _unity_self, System.Boolean updateMipmaps, System.Boolean makeNoLongerReadable)*/ inline static Utils::MethodInfo<true,false> m_ApplyImpl_Injected;
/*System.Boolean ReinitializeImpl_Injected(System.IntPtr _unity_self, System.Int32 width, System.Int32 height)*/ inline static Utils::MethodInfo<true,false> m_ReinitializeImpl_Injected;
/*System.Void SetPixelImpl_Injected(System.IntPtr _unity_self, System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y, in UnityEngine.Color color)*/ inline static Utils::MethodInfo<true,false> m_SetPixelImpl_Injected;
/*System.Void GetPixelImpl_Injected(System.IntPtr _unity_self, System.Int32 image, System.Int32 mip, System.Int32 x, System.Int32 y, out UnityEngine.Color ret)*/ inline static Utils::MethodInfo<true,false> m_GetPixelImpl_Injected;
/*System.Void GetPixelBilinearImpl_Injected(System.IntPtr _unity_self, System.Int32 image, System.Int32 mip, System.Single u, System.Single v, out UnityEngine.Color ret)*/ inline static Utils::MethodInfo<true,false> m_GetPixelBilinearImpl_Injected;
/*System.Boolean ReinitializeWithTextureFormatImpl_Injected(System.IntPtr _unity_self, System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Boolean hasMipMap)*/ inline static Utils::MethodInfo<true,false> m_ReinitializeWithTextureFormatImpl_Injected;
/*System.Void ReadPixelsImpl_Injected(System.IntPtr _unity_self, in UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps)*/ inline static Utils::MethodInfo<true,false> m_ReadPixelsImpl_Injected;
/*System.IntPtr GetWritableImageData_Injected(System.IntPtr _unity_self, System.Int32 frame)*/ inline static Utils::MethodInfo<true,false> m_GetWritableImageData_Injected;
/*System.UInt64 GetImageDataSize_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_GetImageDataSize_Injected;
/*System.Void SetAllPixels32_Injected(System.IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper colors, System.Int32 miplevel)*/ inline static Utils::MethodInfo<true,false> m_SetAllPixels32_Injected;
/*UnityEngine.Color[] GetPixels_Injected(System.IntPtr _unity_self, System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, System.Int32 miplevel)*/ inline static Utils::MethodInfo<true,false> m_GetPixels_Injected;
/*UnityEngine.Color32[] GetPixels32_Injected(System.IntPtr _unity_self, System.Int32 miplevel)*/ inline static Utils::MethodInfo<true,false> m_GetPixels32_Injected;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct IPlayModeUI {
	inline static Il2CppClass klass;
    
	/*System.Void ShowEUseIcon(ShowUseOption option, System.Int32 woId = 0)*/ inline static Utils::MethodInfo<false,true> m_ShowEUseIcon;
/*System.Void HideEUseIcon()*/ inline static Utils::MethodInfo<false,true> m_HideEUseIcon;
/*IGUICrossHair GetCrossHair()*/ inline static Utils::MethodInfo<false,true> m_GetCrossHair;
/*System.Action`1<System.Boolean> get_IsPausedStateChange()*/ inline static Utils::MethodInfo<false,true> m_get_IsPausedStateChange;
/*System.Void set_IsPausedStateChange(System.Action`1<System.Boolean> value)*/ inline static Utils::MethodInfo<false,true> m_set_IsPausedStateChange;
/*System.Action`1<ChatConsoleMode> get_IsChatConsoleStateChange()*/ inline static Utils::MethodInfo<false,true> m_get_IsChatConsoleStateChange;
/*System.Void set_IsChatConsoleStateChange(System.Action`1<ChatConsoleMode> value)*/ inline static Utils::MethodInfo<false,true> m_set_IsChatConsoleStateChange;
/*System.Boolean get_IsInPauseMenu()*/ inline static Utils::MethodInfo<false,true> m_get_IsInPauseMenu;
/*System.Void set_IsInPauseMenu(System.Boolean value)*/ inline static Utils::MethodInfo<false,true> m_set_IsInPauseMenu;
/*System.Boolean get_IsInLobby()*/ inline static Utils::MethodInfo<false,true> m_get_IsInLobby;
/*System.Void set_IsInLobby(System.Boolean value)*/ inline static Utils::MethodInfo<false,true> m_set_IsInLobby;
/*System.Boolean get_IsDying()*/ inline static Utils::MethodInfo<false,true> m_get_IsDying;
/*System.Void set_IsDying(System.Boolean value)*/ inline static Utils::MethodInfo<false,true> m_set_IsDying;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct Image {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* UnityEngine.Material */ f_s_ETC1DefaultUI,/* UnityEngine.SecondarySpriteTexture[] */ f_s_TempNewSecondaryTextures,/* UnityEngine.Vector2[] */ f_s_VertScratch,/* UnityEngine.Vector2[] */ f_s_UVScratch,/* UnityEngine.Vector3[] */ f_s_Xy,/* UnityEngine.Vector3[] */ f_s_Uv,/* System.Collections.Generic.List`1<UnityEngine.UI.Image> */ f_m_TrackedTexturelessImages,/* System.Boolean */ f_s_Initialized;
inline static Utils::FieldInfo<false> /* UnityEngine.Sprite */  f_m_Sprite,/* UnityEngine.Sprite */  f_m_OverrideSprite,/* UnityEngine.UI.Image+Type */  f_m_Type,/* System.Boolean */  f_m_PreserveAspect,/* System.Boolean */  f_m_FillCenter,/* UnityEngine.UI.Image+FillMethod */  f_m_FillMethod,/* System.Single */  f_m_FillAmount,/* System.Boolean */  f_m_FillClockwise,/* System.Int32 */  f_m_FillOrigin,/* System.Single */  f_m_AlphaHitTestMinimumThreshold,/* System.Boolean */  f_m_Tracked,/* System.Boolean */  f_m_UseSpriteMesh,/* System.Single */  f_m_PixelsPerUnitMultiplier,/* System.Single */  f_m_CachedReferencePixelsPerUnit,/* UnityEngine.SecondarySpriteTexture[] */  f_m_SecondaryTextures;

	/*UnityEngine.Sprite get_sprite()*/ inline static Utils::MethodInfo<false,false> m_get_sprite;
/*System.Void set_sprite(UnityEngine.Sprite value)*/ inline static Utils::MethodInfo<false,false> m_set_sprite;
/*System.Void DisableSpriteOptimizations()*/ inline static Utils::MethodInfo<false,false> m_DisableSpriteOptimizations;
/*UnityEngine.Sprite get_overrideSprite()*/ inline static Utils::MethodInfo<false,false> m_get_overrideSprite;
/*System.Void set_overrideSprite(UnityEngine.Sprite value)*/ inline static Utils::MethodInfo<false,false> m_set_overrideSprite;
/*UnityEngine.Sprite get_activeSprite()*/ inline static Utils::MethodInfo<false,false> m_get_activeSprite;
/*UnityEngine.UI.Image+Type get_type()*/ inline static Utils::MethodInfo<false,false> m_get_type;
/*System.Void set_type(UnityEngine.UI.Image+Type value)*/ inline static Utils::MethodInfo<false,false> m_set_type;
/*System.Boolean get_preserveAspect()*/ inline static Utils::MethodInfo<false,false> m_get_preserveAspect;
/*System.Void set_preserveAspect(System.Boolean value)*/ inline static Utils::MethodInfo<false,false> m_set_preserveAspect;
/*System.Boolean get_fillCenter()*/ inline static Utils::MethodInfo<false,false> m_get_fillCenter;
/*System.Void set_fillCenter(System.Boolean value)*/ inline static Utils::MethodInfo<false,false> m_set_fillCenter;
/*UnityEngine.UI.Image+FillMethod get_fillMethod()*/ inline static Utils::MethodInfo<false,false> m_get_fillMethod;
/*System.Void set_fillMethod(UnityEngine.UI.Image+FillMethod value)*/ inline static Utils::MethodInfo<false,false> m_set_fillMethod;
/*System.Single get_fillAmount()*/ inline static Utils::MethodInfo<false,false> m_get_fillAmount;
/*System.Void set_fillAmount(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_fillAmount;
/*System.Boolean get_fillClockwise()*/ inline static Utils::MethodInfo<false,false> m_get_fillClockwise;
/*System.Void set_fillClockwise(System.Boolean value)*/ inline static Utils::MethodInfo<false,false> m_set_fillClockwise;
/*System.Int32 get_fillOrigin()*/ inline static Utils::MethodInfo<false,false> m_get_fillOrigin;
/*System.Void set_fillOrigin(System.Int32 value)*/ inline static Utils::MethodInfo<false,false> m_set_fillOrigin;
/*System.Single get_eventAlphaThreshold()*/ inline static Utils::MethodInfo<false,false> m_get_eventAlphaThreshold;
/*System.Void set_eventAlphaThreshold(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_eventAlphaThreshold;
/*System.Single get_alphaHitTestMinimumThreshold()*/ inline static Utils::MethodInfo<false,false> m_get_alphaHitTestMinimumThreshold;
/*System.Void set_alphaHitTestMinimumThreshold(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_alphaHitTestMinimumThreshold;
/*System.Boolean get_useSpriteMesh()*/ inline static Utils::MethodInfo<false,false> m_get_useSpriteMesh;
/*System.Void set_useSpriteMesh(System.Boolean value)*/ inline static Utils::MethodInfo<false,false> m_set_useSpriteMesh;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*UnityEngine.Material get_defaultETC1GraphicMaterial()*/ inline static Utils::MethodInfo<true,false> m_get_defaultETC1GraphicMaterial;
/*UnityEngine.Texture get_mainTexture()*/ inline static Utils::MethodInfo<false,true> m_get_mainTexture;
/*System.Boolean get_hasBorder()*/ inline static Utils::MethodInfo<false,false> m_get_hasBorder;
/*System.Single get_pixelsPerUnitMultiplier()*/ inline static Utils::MethodInfo<false,false> m_get_pixelsPerUnitMultiplier;
/*System.Void set_pixelsPerUnitMultiplier(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_pixelsPerUnitMultiplier;
/*System.Single get_pixelsPerUnit()*/ inline static Utils::MethodInfo<false,false> m_get_pixelsPerUnit;
/*System.Single get_multipliedPixelsPerUnit()*/ inline static Utils::MethodInfo<false,false> m_get_multipliedPixelsPerUnit;
/*UnityEngine.Material get_material()*/ inline static Utils::MethodInfo<false,true> m_get_material;
/*System.Void set_material(UnityEngine.Material value)*/ inline static Utils::MethodInfo<false,true> m_set_material;
/*System.Void OnBeforeSerialize()*/ inline static Utils::MethodInfo<false,true> m_OnBeforeSerialize;
/*System.Void OnAfterDeserialize()*/ inline static Utils::MethodInfo<false,true> m_OnAfterDeserialize;
/*System.Void PreserveSpriteAspectRatio(ref UnityEngine.Rect rect, UnityEngine.Vector2 spriteSize)*/ inline static Utils::MethodInfo<false,false> m_PreserveSpriteAspectRatio;
/*UnityEngine.Vector4 GetDrawingDimensions(System.Boolean shouldPreserveAspect)*/ inline static Utils::MethodInfo<false,false> m_GetDrawingDimensions;
/*System.Void SetNativeSize()*/ inline static Utils::MethodInfo<false,true> m_SetNativeSize;
/*System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)*/ inline static Utils::MethodInfo<false,true> m_OnPopulateMesh;
/*System.Void TrackSprite()*/ inline static Utils::MethodInfo<false,false> m_TrackSprite;
/*System.Void OnEnable()*/ inline static Utils::MethodInfo<false,true> m_OnEnable;
/*System.Void OnDisable()*/ inline static Utils::MethodInfo<false,true> m_OnDisable;
/*UnityEngine.SecondarySpriteTexture[] get_secondaryTextures()*/ inline static Utils::MethodInfo<false,false> m_get_secondaryTextures;
/*System.Void ClearArray(ref UnityEngine.SecondarySpriteTexture[] array)*/ inline static Utils::MethodInfo<true,false> m_ClearArray;
/*System.Boolean CheckSecondaryTexturesChanged(UnityEngine.Sprite sprite)*/ inline static Utils::MethodInfo<false,false> m0_CheckSecondaryTexturesChanged;
/*System.Boolean CheckSecondaryTexturesChanged(UnityEngine.Sprite sprite, ref UnityEngine.SecondarySpriteTexture[] newSecondaryTextures)*/ inline static Utils::MethodInfo<false,false> m1_CheckSecondaryTexturesChanged;
/*System.Void SetSecondaryTextures(UnityEngine.CanvasRenderer renderer)*/ inline static Utils::MethodInfo<false,false> m_SetSecondaryTextures;
/*System.Void UpdateMaterial()*/ inline static Utils::MethodInfo<false,true> m_UpdateMaterial;
/*System.Void OnCanvasHierarchyChanged()*/ inline static Utils::MethodInfo<false,true> m_OnCanvasHierarchyChanged;
/*System.Void GenerateSimpleSprite(UnityEngine.UI.VertexHelper vh, System.Boolean lPreserveAspect)*/ inline static Utils::MethodInfo<false,false> m_GenerateSimpleSprite;
/*System.Void GenerateSprite(UnityEngine.UI.VertexHelper vh, System.Boolean lPreserveAspect)*/ inline static Utils::MethodInfo<false,false> m_GenerateSprite;
/*System.Void GenerateSlicedSprite(UnityEngine.UI.VertexHelper toFill)*/ inline static Utils::MethodInfo<false,false> m_GenerateSlicedSprite;
/*System.Void GenerateTiledSprite(UnityEngine.UI.VertexHelper toFill)*/ inline static Utils::MethodInfo<false,false> m_GenerateTiledSprite;
/*System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector3[] quadPositions, UnityEngine.Color32 color, UnityEngine.Vector3[] quadUVs)*/ inline static Utils::MethodInfo<true,false> m0_AddQuad;
/*System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color, UnityEngine.Vector2 uvMin, UnityEngine.Vector2 uvMax)*/ inline static Utils::MethodInfo<true,false> m1_AddQuad;
/*UnityEngine.Vector4 GetAdjustedBorders(UnityEngine.Vector4 border, UnityEngine.Rect adjustedRect)*/ inline static Utils::MethodInfo<false,false> m_GetAdjustedBorders;
/*System.Void GenerateFilledSprite(UnityEngine.UI.VertexHelper toFill, System.Boolean preserveAspect)*/ inline static Utils::MethodInfo<false,false> m_GenerateFilledSprite;
/*System.Boolean RadialCut(UnityEngine.Vector3[] xy, UnityEngine.Vector3[] uv, System.Single fill, System.Boolean invert, System.Int32 corner)*/ inline static Utils::MethodInfo<true,false> m0_RadialCut;
/*System.Void RadialCut(UnityEngine.Vector3[] xy, System.Single cos, System.Single sin, System.Boolean invert, System.Int32 corner)*/ inline static Utils::MethodInfo<true,false> m1_RadialCut;
/*System.Void CalculateLayoutInputHorizontal()*/ inline static Utils::MethodInfo<false,true> m_CalculateLayoutInputHorizontal;
/*System.Void CalculateLayoutInputVertical()*/ inline static Utils::MethodInfo<false,true> m_CalculateLayoutInputVertical;
/*System.Single get_minWidth()*/ inline static Utils::MethodInfo<false,true> m_get_minWidth;
/*System.Single get_preferredWidth()*/ inline static Utils::MethodInfo<false,true> m_get_preferredWidth;
/*System.Single get_flexibleWidth()*/ inline static Utils::MethodInfo<false,true> m_get_flexibleWidth;
/*System.Single get_minHeight()*/ inline static Utils::MethodInfo<false,true> m_get_minHeight;
/*System.Single get_preferredHeight()*/ inline static Utils::MethodInfo<false,true> m_get_preferredHeight;
/*System.Single get_flexibleHeight()*/ inline static Utils::MethodInfo<false,true> m_get_flexibleHeight;
/*System.Int32 get_layoutPriority()*/ inline static Utils::MethodInfo<false,true> m_get_layoutPriority;
/*System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 screenPoint, UnityEngine.Camera eventCamera)*/ inline static Utils::MethodInfo<false,true> m_IsRaycastLocationValid;
/*UnityEngine.Vector2 MapCoordinate(UnityEngine.Vector2 local, UnityEngine.Rect rect)*/ inline static Utils::MethodInfo<false,false> m_MapCoordinate;
/*System.Void RebuildImage(UnityEngine.U2D.SpriteAtlas spriteAtlas)*/ inline static Utils::MethodInfo<true,false> m_RebuildImage;
/*System.Void TrackImage(UnityEngine.UI.Image g)*/ inline static Utils::MethodInfo<true,false> m_TrackImage;
/*System.Void UnTrackImage(UnityEngine.UI.Image g)*/ inline static Utils::MethodInfo<true,false> m_UnTrackImage;
/*System.Void OnDidApplyAnimationProperties()*/ inline static Utils::MethodInfo<false,true> m_OnDidApplyAnimationProperties;
/*System.Void .cctor()*/ inline static Utils::MethodInfo<true,false> m_cctor;
/*System.Void <set_sprite>g__ResetAlphaHitThresholdIfNeeded|11_0()*/ inline static Utils::MethodInfo<false,false> m_set_sprite_g_ResetAlphaHitThresholdIfNeeded_11_0;
/*System.Boolean <set_sprite>g__SpriteSupportsAlphaHitTest|11_1()*/ inline static Utils::MethodInfo<false,false> m_set_sprite_g_SpriteSupportsAlphaHitTest_11_1;
/*System.Boolean <CheckSecondaryTexturesChanged>g__Compare|93_0(UnityEngine.SecondarySpriteTexture[] array1, UnityEngine.SecondarySpriteTexture[] array2)*/ inline static Utils::MethodInfo<true,false> m_CheckSecondaryTexturesChanged_g_Compare_93_0;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct Sprite {
	inline static Il2CppClass klass;
    
	/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Int32 GetPackingRotation()*/ inline static Utils::MethodInfo<false,false> m_GetPackingRotation;
/*System.Int32 GetPacked()*/ inline static Utils::MethodInfo<false,false> m_GetPacked;
/*UnityEngine.Vector2 GetTextureRectOffset()*/ inline static Utils::MethodInfo<false,false> m_GetTextureRectOffset;
/*UnityEngine.Vector4 GetInnerUVs()*/ inline static Utils::MethodInfo<false,false> m_GetInnerUVs;
/*UnityEngine.Vector4 GetOuterUVs()*/ inline static Utils::MethodInfo<false,false> m_GetOuterUVs;
/*UnityEngine.Vector4 GetPadding()*/ inline static Utils::MethodInfo<false,false> m_GetPadding;
/*UnityEngine.Sprite CreateSprite(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape, UnityEngine.SecondarySpriteTexture[] secondaryTexture)*/ inline static Utils::MethodInfo<true,false> m_CreateSprite;
/*UnityEngine.Bounds get_bounds()*/ inline static Utils::MethodInfo<false,false> m_get_bounds;
/*UnityEngine.Rect get_rect()*/ inline static Utils::MethodInfo<false,false> m_get_rect;
/*UnityEngine.Vector4 get_border()*/ inline static Utils::MethodInfo<false,false> m_get_border;
/*UnityEngine.Texture2D get_texture()*/ inline static Utils::MethodInfo<false,false> m_get_texture;
/*System.Int32 GetSecondaryTextureCount()*/ inline static Utils::MethodInfo<false,false> m_GetSecondaryTextureCount;
/*System.Int32 GetSecondaryTextures(UnityEngine.SecondarySpriteTexture[] secondaryTexture)*/ inline static Utils::MethodInfo<false,false> m_GetSecondaryTextures;
/*System.Single get_pixelsPerUnit()*/ inline static Utils::MethodInfo<false,false> m_get_pixelsPerUnit;
/*UnityEngine.Texture2D get_associatedAlphaSplitTexture()*/ inline static Utils::MethodInfo<false,false> m_get_associatedAlphaSplitTexture;
/*UnityEngine.Vector2 get_pivot()*/ inline static Utils::MethodInfo<false,false> m_get_pivot;
/*System.Boolean get_packed()*/ inline static Utils::MethodInfo<false,false> m_get_packed;
/*UnityEngine.SpritePackingRotation get_packingRotation()*/ inline static Utils::MethodInfo<false,false> m_get_packingRotation;
/*UnityEngine.Vector2 get_textureRectOffset()*/ inline static Utils::MethodInfo<false,false> m_get_textureRectOffset;
/*UnityEngine.Vector2[] get_vertices()*/ inline static Utils::MethodInfo<false,false> m_get_vertices;
/*System.UInt16[] get_triangles()*/ inline static Utils::MethodInfo<false,false> m_get_triangles;
/*UnityEngine.Vector2[] get_uv()*/ inline static Utils::MethodInfo<false,false> m_get_uv;
/*UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)*/ inline static Utils::MethodInfo<true,false> m0_Create;
/*UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape, UnityEngine.SecondarySpriteTexture[] secondaryTextures)*/ inline static Utils::MethodInfo<true,false> m1_Create;
/*UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border)*/ inline static Utils::MethodInfo<true,false> m2_Create;
/*UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType)*/ inline static Utils::MethodInfo<true,false> m3_Create;
/*UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude)*/ inline static Utils::MethodInfo<true,false> m4_Create;
/*UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit)*/ inline static Utils::MethodInfo<true,false> m5_Create;
/*UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot)*/ inline static Utils::MethodInfo<true,false> m6_Create;
/*System.Int32 GetPackingRotation_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_GetPackingRotation_Injected;
/*System.Int32 GetPacked_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_GetPacked_Injected;
/*System.Void GetTextureRectOffset_Injected(System.IntPtr _unity_self, out UnityEngine.Vector2 ret)*/ inline static Utils::MethodInfo<true,false> m_GetTextureRectOffset_Injected;
/*System.Void GetInnerUVs_Injected(System.IntPtr _unity_self, out UnityEngine.Vector4 ret)*/ inline static Utils::MethodInfo<true,false> m_GetInnerUVs_Injected;
/*System.Void GetOuterUVs_Injected(System.IntPtr _unity_self, out UnityEngine.Vector4 ret)*/ inline static Utils::MethodInfo<true,false> m_GetOuterUVs_Injected;
/*System.Void GetPadding_Injected(System.IntPtr _unity_self, out UnityEngine.Vector4 ret)*/ inline static Utils::MethodInfo<true,false> m_GetPadding_Injected;
/*System.IntPtr CreateSprite_Injected(System.IntPtr texture, in UnityEngine.Rect rect, in UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, in UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape, UnityEngine.SecondarySpriteTexture[] secondaryTexture)*/ inline static Utils::MethodInfo<true,false> m_CreateSprite_Injected;
/*System.Void get_bounds_Injected(System.IntPtr _unity_self, out UnityEngine.Bounds ret)*/ inline static Utils::MethodInfo<true,false> m_get_bounds_Injected;
/*System.Void get_rect_Injected(System.IntPtr _unity_self, out UnityEngine.Rect ret)*/ inline static Utils::MethodInfo<true,false> m_get_rect_Injected;
/*System.Void get_border_Injected(System.IntPtr _unity_self, out UnityEngine.Vector4 ret)*/ inline static Utils::MethodInfo<true,false> m_get_border_Injected;
/*System.IntPtr get_texture_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_get_texture_Injected;
/*System.Int32 GetSecondaryTextureCount_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_GetSecondaryTextureCount_Injected;
/*System.Int32 GetSecondaryTextures_Injected(System.IntPtr _unity_self, UnityEngine.SecondarySpriteTexture[] secondaryTexture)*/ inline static Utils::MethodInfo<true,false> m_GetSecondaryTextures_Injected;
/*System.Single get_pixelsPerUnit_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_get_pixelsPerUnit_Injected;
/*System.IntPtr get_associatedAlphaSplitTexture_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_get_associatedAlphaSplitTexture_Injected;
/*System.Void get_pivot_Injected(System.IntPtr _unity_self, out UnityEngine.Vector2 ret)*/ inline static Utils::MethodInfo<true,false> m_get_pivot_Injected;
/*UnityEngine.Vector2[] get_vertices_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_get_vertices_Injected;
/*System.UInt16[] get_triangles_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_get_triangles_Injected;
/*UnityEngine.Vector2[] get_uv_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_get_uv_Injected;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct Vector2 {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* UnityEngine.Vector2 */ f_zeroVector,/* UnityEngine.Vector2 */ f_oneVector,/* UnityEngine.Vector2 */ f_upVector,/* UnityEngine.Vector2 */ f_downVector,/* UnityEngine.Vector2 */ f_leftVector,/* UnityEngine.Vector2 */ f_rightVector,/* UnityEngine.Vector2 */ f_positiveInfinityVector,/* UnityEngine.Vector2 */ f_negativeInfinityVector,/* System.Single */ f_kEpsilon,/* System.Single */ f_kEpsilonNormalSqrt;
inline static Utils::FieldInfo<false> /* System.Single */  f_x,/* System.Single */  f_y;

	/*System.Single get_Item(System.Int32 index)*/ inline static Utils::MethodInfo<false,false> m_get_Item;
/*System.Void set_Item(System.Int32 index, System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_Item;
/*System.Void .ctor(System.Single x, System.Single y)*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Void Set(System.Single newX, System.Single newY)*/ inline static Utils::MethodInfo<false,false> m_Set;
/*UnityEngine.Vector2 Lerp(UnityEngine.Vector2 a, UnityEngine.Vector2 b, System.Single t)*/ inline static Utils::MethodInfo<true,false> m_Lerp;
/*UnityEngine.Vector2 LerpUnclamped(UnityEngine.Vector2 a, UnityEngine.Vector2 b, System.Single t)*/ inline static Utils::MethodInfo<true,false> m_LerpUnclamped;
/*UnityEngine.Vector2 Scale(UnityEngine.Vector2 a, UnityEngine.Vector2 b)*/ inline static Utils::MethodInfo<true,false> m_Scale;
/*System.Void Normalize()*/ inline static Utils::MethodInfo<false,false> m_Normalize;
/*UnityEngine.Vector2 get_normalized()*/ inline static Utils::MethodInfo<false,false> m_get_normalized;
/*System.String ToString()*/ inline static Utils::MethodInfo<false,true> m0_ToString;
/*System.String ToString(System.String format)*/ inline static Utils::MethodInfo<false,false> m1_ToString;
/*System.String ToString(System.String format, System.IFormatProvider formatProvider)*/ inline static Utils::MethodInfo<false,true> m2_ToString;
/*System.Int32 GetHashCode()*/ inline static Utils::MethodInfo<false,true> m_GetHashCode;
/*System.Boolean Equals(System.Object other)*/ inline static Utils::MethodInfo<false,true> m0_Equals;
/*System.Boolean Equals(UnityEngine.Vector2 other)*/ inline static Utils::MethodInfo<false,true> m1_Equals;
/*System.Single Dot(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs)*/ inline static Utils::MethodInfo<true,false> m_Dot;
/*System.Single get_magnitude()*/ inline static Utils::MethodInfo<false,false> m_get_magnitude;
/*System.Single get_sqrMagnitude()*/ inline static Utils::MethodInfo<false,false> m_get_sqrMagnitude;
/*System.Single Angle(UnityEngine.Vector2 from, UnityEngine.Vector2 to)*/ inline static Utils::MethodInfo<true,false> m_Angle;
/*System.Single Distance(UnityEngine.Vector2 a, UnityEngine.Vector2 b)*/ inline static Utils::MethodInfo<true,false> m_Distance;
/*System.Single SqrMagnitude()*/ inline static Utils::MethodInfo<false,false> m_SqrMagnitude;
/*UnityEngine.Vector2 Min(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs)*/ inline static Utils::MethodInfo<true,false> m_Min;
/*UnityEngine.Vector2 Max(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs)*/ inline static Utils::MethodInfo<true,false> m_Max;
/*UnityEngine.Vector2 op_Addition(UnityEngine.Vector2 a, UnityEngine.Vector2 b)*/ inline static Utils::MethodInfo<true,false> m_op_Addition;
/*UnityEngine.Vector2 op_Subtraction(UnityEngine.Vector2 a, UnityEngine.Vector2 b)*/ inline static Utils::MethodInfo<true,false> m_op_Subtraction;
/*UnityEngine.Vector2 op_Multiply(UnityEngine.Vector2 a, UnityEngine.Vector2 b)*/ inline static Utils::MethodInfo<true,false> m0_op_Multiply;
/*UnityEngine.Vector2 op_Multiply(UnityEngine.Vector2 a, System.Single d)*/ inline static Utils::MethodInfo<true,false> m1_op_Multiply;
/*UnityEngine.Vector2 op_Multiply(System.Single d, UnityEngine.Vector2 a)*/ inline static Utils::MethodInfo<true,false> m2_op_Multiply;
/*UnityEngine.Vector2 op_Division(UnityEngine.Vector2 a, UnityEngine.Vector2 b)*/ inline static Utils::MethodInfo<true,false> m0_op_Division;
/*UnityEngine.Vector2 op_Division(UnityEngine.Vector2 a, System.Single d)*/ inline static Utils::MethodInfo<true,false> m1_op_Division;
/*UnityEngine.Vector2 op_UnaryNegation(UnityEngine.Vector2 a)*/ inline static Utils::MethodInfo<true,false> m_op_UnaryNegation;
/*System.Boolean op_Equality(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs)*/ inline static Utils::MethodInfo<true,false> m_op_Equality;
/*System.Boolean op_Inequality(UnityEngine.Vector2 lhs, UnityEngine.Vector2 rhs)*/ inline static Utils::MethodInfo<true,false> m_op_Inequality;
/*UnityEngine.Vector2 op_Implicit(UnityEngine.Vector3 v)*/ inline static Utils::MethodInfo<true,false> m0_op_Implicit;
/*UnityEngine.Vector3 op_Implicit(UnityEngine.Vector2 v)*/ inline static Utils::MethodInfo<true,false> m1_op_Implicit;
/*UnityEngine.Vector2 get_zero()*/ inline static Utils::MethodInfo<true,false> m_get_zero;
/*UnityEngine.Vector2 get_one()*/ inline static Utils::MethodInfo<true,false> m_get_one;
/*UnityEngine.Vector2 get_up()*/ inline static Utils::MethodInfo<true,false> m_get_up;
/*UnityEngine.Vector2 get_down()*/ inline static Utils::MethodInfo<true,false> m_get_down;
/*UnityEngine.Vector2 get_left()*/ inline static Utils::MethodInfo<true,false> m_get_left;
/*UnityEngine.Vector2 get_right()*/ inline static Utils::MethodInfo<true,false> m_get_right;
/*UnityEngine.Vector2 get_negativeInfinity()*/ inline static Utils::MethodInfo<true,false> m_get_negativeInfinity;
/*System.Void .cctor()*/ inline static Utils::MethodInfo<true,false> m_cctor;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct Rect {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<false> /* System.Single */  f_m_XMin,/* System.Single */  f_m_YMin,/* System.Single */  f_m_Width,/* System.Single */  f_m_Height;

	/*System.Void .ctor(System.Single x, System.Single y, System.Single width, System.Single height)*/ inline static Utils::MethodInfo<false,false> m0_ctor;
/*System.Void .ctor(UnityEngine.Vector2 position, UnityEngine.Vector2 size)*/ inline static Utils::MethodInfo<false,false> m1_ctor;
/*System.Void .ctor(UnityEngine.Rect source)*/ inline static Utils::MethodInfo<false,false> m2_ctor;
/*UnityEngine.Rect get_zero()*/ inline static Utils::MethodInfo<true,false> m_get_zero;
/*UnityEngine.Rect MinMaxRect(System.Single xmin, System.Single ymin, System.Single xmax, System.Single ymax)*/ inline static Utils::MethodInfo<true,false> m_MinMaxRect;
/*System.Single get_x()*/ inline static Utils::MethodInfo<false,false> m_get_x;
/*System.Void set_x(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_x;
/*System.Single get_y()*/ inline static Utils::MethodInfo<false,false> m_get_y;
/*System.Void set_y(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_y;
/*UnityEngine.Vector2 get_position()*/ inline static Utils::MethodInfo<false,false> m_get_position;
/*System.Void set_position(UnityEngine.Vector2 value)*/ inline static Utils::MethodInfo<false,false> m_set_position;
/*UnityEngine.Vector2 get_center()*/ inline static Utils::MethodInfo<false,false> m_get_center;
/*UnityEngine.Vector2 get_min()*/ inline static Utils::MethodInfo<false,false> m_get_min;
/*System.Void set_min(UnityEngine.Vector2 value)*/ inline static Utils::MethodInfo<false,false> m_set_min;
/*UnityEngine.Vector2 get_max()*/ inline static Utils::MethodInfo<false,false> m_get_max;
/*System.Void set_max(UnityEngine.Vector2 value)*/ inline static Utils::MethodInfo<false,false> m_set_max;
/*System.Single get_width()*/ inline static Utils::MethodInfo<false,false> m_get_width;
/*System.Void set_width(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_width;
/*System.Single get_height()*/ inline static Utils::MethodInfo<false,false> m_get_height;
/*System.Void set_height(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_height;
/*UnityEngine.Vector2 get_size()*/ inline static Utils::MethodInfo<false,false> m_get_size;
/*System.Void set_size(UnityEngine.Vector2 value)*/ inline static Utils::MethodInfo<false,false> m_set_size;
/*System.Single get_xMin()*/ inline static Utils::MethodInfo<false,false> m_get_xMin;
/*System.Void set_xMin(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_xMin;
/*System.Single get_yMin()*/ inline static Utils::MethodInfo<false,false> m_get_yMin;
/*System.Void set_yMin(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_yMin;
/*System.Single get_xMax()*/ inline static Utils::MethodInfo<false,false> m_get_xMax;
/*System.Void set_xMax(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_xMax;
/*System.Single get_yMax()*/ inline static Utils::MethodInfo<false,false> m_get_yMax;
/*System.Void set_yMax(System.Single value)*/ inline static Utils::MethodInfo<false,false> m_set_yMax;
/*System.Boolean Contains(UnityEngine.Vector2 point)*/ inline static Utils::MethodInfo<false,false> m0_Contains;
/*System.Boolean Contains(UnityEngine.Vector3 point)*/ inline static Utils::MethodInfo<false,false> m1_Contains;
/*System.Boolean Contains(UnityEngine.Vector3 point, System.Boolean allowInverse)*/ inline static Utils::MethodInfo<false,false> m2_Contains;
/*UnityEngine.Rect OrderMinMax(UnityEngine.Rect rect)*/ inline static Utils::MethodInfo<true,false> m_OrderMinMax;
/*System.Boolean Overlaps(UnityEngine.Rect other)*/ inline static Utils::MethodInfo<false,false> m0_Overlaps;
/*System.Boolean Overlaps(UnityEngine.Rect other, System.Boolean allowInverse)*/ inline static Utils::MethodInfo<false,false> m1_Overlaps;
/*System.Boolean op_Inequality(UnityEngine.Rect lhs, UnityEngine.Rect rhs)*/ inline static Utils::MethodInfo<true,false> m_op_Inequality;
/*System.Boolean op_Equality(UnityEngine.Rect lhs, UnityEngine.Rect rhs)*/ inline static Utils::MethodInfo<true,false> m_op_Equality;
/*System.Int32 GetHashCode()*/ inline static Utils::MethodInfo<false,true> m_GetHashCode;
/*System.Boolean Equals(System.Object other)*/ inline static Utils::MethodInfo<false,true> m0_Equals;
/*System.Boolean Equals(UnityEngine.Rect other)*/ inline static Utils::MethodInfo<false,true> m1_Equals;
/*System.String ToString()*/ inline static Utils::MethodInfo<false,true> m0_ToString;
/*System.String ToString(System.String format, System.IFormatProvider formatProvider)*/ inline static Utils::MethodInfo<false,true> m1_ToString;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct Texture {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* System.Int32 */ f_GenerateAllMips;

	/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;
/*System.Int32 GetDataWidth()*/ inline static Utils::MethodInfo<false,false> m_GetDataWidth;
/*System.Int32 GetDataHeight()*/ inline static Utils::MethodInfo<false,false> m_GetDataHeight;
/*System.Int32 get_width()*/ inline static Utils::MethodInfo<false,true> m_get_width;
/*System.Void set_width(System.Int32 value)*/ inline static Utils::MethodInfo<false,true> m_set_width;
/*System.Int32 get_height()*/ inline static Utils::MethodInfo<false,true> m_get_height;
/*System.Void set_height(System.Int32 value)*/ inline static Utils::MethodInfo<false,true> m_set_height;
/*System.Boolean get_isReadable()*/ inline static Utils::MethodInfo<false,true> m_get_isReadable;
/*UnityEngine.TextureWrapMode get_wrapMode()*/ inline static Utils::MethodInfo<false,false> m_get_wrapMode;
/*System.Void set_wrapMode(UnityEngine.TextureWrapMode value)*/ inline static Utils::MethodInfo<false,false> m_set_wrapMode;
/*UnityEngine.FilterMode get_filterMode()*/ inline static Utils::MethodInfo<false,false> m_get_filterMode;
/*System.Void set_filterMode(UnityEngine.FilterMode value)*/ inline static Utils::MethodInfo<false,false> m_set_filterMode;
/*System.Int32 get_anisoLevel()*/ inline static Utils::MethodInfo<false,false> m_get_anisoLevel;
/*System.Void set_anisoLevel(System.Int32 value)*/ inline static Utils::MethodInfo<false,false> m_set_anisoLevel;
/*UnityEngine.Vector2 get_texelSize()*/ inline static Utils::MethodInfo<false,false> m_get_texelSize;
/*System.Int32 Internal_GetActiveTextureColorSpace()*/ inline static Utils::MethodInfo<false,false> m_Internal_GetActiveTextureColorSpace;
/*UnityEngine.ColorSpace get_activeTextureColorSpace()*/ inline static Utils::MethodInfo<false,false> m_get_activeTextureColorSpace;
/*UnityEngine.TextureColorSpace GetTextureColorSpace(System.Boolean linear)*/ inline static Utils::MethodInfo<false,false> m0_GetTextureColorSpace;
/*UnityEngine.TextureColorSpace GetTextureColorSpace(UnityEngine.Experimental.Rendering.GraphicsFormat format)*/ inline static Utils::MethodInfo<false,false> m1_GetTextureColorSpace;
/*System.Boolean ValidateFormat(UnityEngine.TextureFormat format)*/ inline static Utils::MethodInfo<false,false> m0_ValidateFormat;
/*System.Boolean ValidateFormat(UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.GraphicsFormatUsage usage)*/ inline static Utils::MethodInfo<false,false> m1_ValidateFormat;
/*UnityEngine.UnityException CreateNonReadableException(UnityEngine.Texture t)*/ inline static Utils::MethodInfo<false,false> m_CreateNonReadableException;
/*UnityEngine.UnityException CreateNativeArrayLengthOverflowException()*/ inline static Utils::MethodInfo<false,false> m_CreateNativeArrayLengthOverflowException;
/*System.Void .cctor()*/ inline static Utils::MethodInfo<true,false> m_cctor;
/*System.Int32 GetDataWidth_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_GetDataWidth_Injected;
/*System.Int32 GetDataHeight_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_GetDataHeight_Injected;
/*System.Boolean get_isReadable_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_get_isReadable_Injected;
/*UnityEngine.TextureWrapMode get_wrapMode_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_get_wrapMode_Injected;
/*System.Void set_wrapMode_Injected(System.IntPtr _unity_self, UnityEngine.TextureWrapMode value)*/ inline static Utils::MethodInfo<true,false> m_set_wrapMode_Injected;
/*UnityEngine.FilterMode get_filterMode_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_get_filterMode_Injected;
/*System.Void set_filterMode_Injected(System.IntPtr _unity_self, UnityEngine.FilterMode value)*/ inline static Utils::MethodInfo<true,false> m_set_filterMode_Injected;
/*System.Int32 get_anisoLevel_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_get_anisoLevel_Injected;
/*System.Void set_anisoLevel_Injected(System.IntPtr _unity_self, System.Int32 value)*/ inline static Utils::MethodInfo<true,false> m_set_anisoLevel_Injected;
/*System.Void get_texelSize_Injected(System.IntPtr _unity_self, out UnityEngine.Vector2 ret)*/ inline static Utils::MethodInfo<true,false> m_get_texelSize_Injected;
/*System.Int32 Internal_GetActiveTextureColorSpace_Injected(System.IntPtr _unity_self)*/ inline static Utils::MethodInfo<true,false> m_Internal_GetActiveTextureColorSpace_Injected;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};

}
