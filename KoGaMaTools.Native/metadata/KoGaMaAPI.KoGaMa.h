
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

}
