
#include "KoGaMaAPI.KoGaMa.h"
#include <iostream>
using namespace Tools::Il2Cpp;
namespace KoGaMaAPI::KoGaMa {
    void Init(::Tools::Il2Cpp::Metadata::MetadataInfo metadata) {
		auto klassData = metadata.klasses.Data;

        PaintCubes::Init(klassData[0]);
CubeModelTool::Init(klassData[1]);
MVInputWrapper::Init(klassData[2]);
KogamaControls::Init(klassData[3]);
CubeModelingStateMachine::Init(klassData[4]);
MVCubeModelBase::Init(klassData[5]);
CubePickingInfo::Init(klassData[6]);
EditCubeChange::Init(klassData[7]);
PaintCursor::Init(klassData[8]);
AudioActions::Init(klassData[9]);
ConstraintVisualizer::Init(klassData[10]);
ModelingDynamicBoxConstraint::Init(klassData[11]);
ModelingBoxCountConstraint::Init(klassData[12]);
MainCameraManager::Init(klassData[13]);
MVMaterial::Init(klassData[14]);
ESTranslate::Init(klassData[15]);
SharedCubeFunctions::Init(klassData[16]);
MVBuildModeAvatarLocal_EditMode::Init(klassData[17]);
RotationHelper::Init(klassData[18]);
SettingsSlider::Init(klassData[19]);
MVGameControllerBase::Init(klassData[20]);
AwayMonitor::Init(klassData[21]);
CrossHair::Init(klassData[22]);
UI_Graphic::Init(klassData[23]);


        ::Tools::Il2Cpp::Metadata::Free(metadata);        
    }
    
    void PaintCubes::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "PaintCubes");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(paintCursor,paintCursor);

		getM(Enter,0);
getM(Execute,1);
getM(Exit,2);
getM(HideCursor,3);
getM(ctor,4);

#undef getF
#undef getM
#undef getMi
    }

    void CubeModelTool::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "CubeModelTool");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(waitForMouseUp,waitForMouseUp);
getF(cubeChange,cubeChange);
getF(cubeCount,cubeCount);
getF(OnEditCubeChange,OnEditCubeChange);
getF(StateType_k_BackingField,<StateType>k__BackingField);

		getM(get_StateType,0);
getM(set_StateType,1);
getM(SendCubeEvent,2);
getM(get_CursorVisible,3);
getM(set_CursorVisible,4);
getM(SetStateType,5);
getMi(Enter,0,6);
getMi(Enter,1,7);
getMi(Execute,0,8);
getMi(Execute,1,9);
getMi(Exit,0,10);
getMi(Exit,1,11);
getM(HideCursor,12);
getM(ctor,13);

#undef getF
#undef getM
#undef getMi
    }

    void MVInputWrapper::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "MVInputWrapper");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(mouseSensitivtyModifier,mouseSensitivtyModifier);
getF(isInputAllSuppressed,isInputAllSuppressed);
getF(isShortcutKeysSuppressed,isShortcutKeysSuppressed);
getF(isInGameInputSuppressed,isInGameInputSuppressed);
getF(inputMap,inputMap);

		getM(get_MouseSensitivityModifier,0);
getM(set_MouseSensitivityModifier,1);
getM(get_IsAllInputSuppressed,2);
getM(SuppressAllInput,3);
getM(get_IsShortcutKeysSuppressed,4);
getM(SuppressShortcutKeys,5);
getM(get_IsInGameInputSuppressed,6);
getM(SuppressInGameInput,7);
getM(SetInputMap,8);
getMi(GetBooleanControl,0,9);
getMi(GetBooleanControl,1,10);
getM(GetBooleanControlDown,11);
getM(GetBooleanControlUp,12);
getM(GetPointerPosition,13);
getM(GetAxis,14);
getM(GetAxisWithoutSensitivity,15);
getM(GetAxisRaw,16);
getM(GetAxisRawWithoutSensitivity,17);
getM(ResetInput,18);
getM(GetBooleanControlDeviceDependent,19);
getMi(DebugGetKeyDown,0,20);
getMi(DebugGetKeyDown,1,21);
getMi(DebugGetKey,0,22);
getMi(DebugGetKey,1,23);
getMi(DebugGetKeyUp,0,24);
getMi(DebugGetKeyUp,1,25);
getM(InputCharActive,26);
getM(InputCharActiveDown,27);
getM(GetStringInput,28);
getM(cctor,29);

#undef getF
#undef getM
#undef getMi
    }

    void KogamaControls::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "KogamaControls");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(value,value__);
getF(MoveForward,MoveForward);
getF(MoveLeft,MoveLeft);
getF(MoveRight,MoveRight);
getF(MoveBackwards,MoveBackwards);
getF(AlternateCameraControls,AlternateCameraControls);
getF(PointerSelect,PointerSelect);
getF(PointerSelectAlt,PointerSelectAlt);
getF(EnterObject,EnterObject);
getF(DeleteObject,DeleteObject);
getF(LeaveObject,LeaveObject);
getF(AddToSelection,AddToSelection);
getF(MoveDrawPlaneUp,MoveDrawPlaneUp);
getF(MoveDrawPlaneDown,MoveDrawPlaneDown);
getF(EmbedChangeGame,EmbedChangeGame);
getF(ToggleFullScreen,ToggleFullScreen);
getF(ShowChat,ShowChat);
getF(Respawn,Respawn);
getF(TogglePlayerParticles,TogglePlayerParticles);
getF(ShowPlayerWindow,ShowPlayerWindow);
getF(DropCurrentItem,DropCurrentItem);
getF(Use,Use);
getF(FocusOnSelectedModel,FocusOnSelectedModel);
getF(TogglePlayInEditor,TogglePlayInEditor);
getF(ToggleLogicRendering,ToggleLogicRendering);
getF(ToggleGripdSnapSize,ToggleGripdSnapSize);
getF(ActivateEditCubeTool,ActivateEditCubeTool);
getF(ActivateDeleteCubeTool,ActivateDeleteCubeTool);
getF(ActivatePaintCubeTool,ActivatePaintCubeTool);
getF(ChangeMaterial,ChangeMaterial);
getF(OpenInventory,OpenInventory);
getF(CreateNewModel,CreateNewModel);
getF(ToggleDrawPlane,ToggleDrawPlane);
getF(Fire,Fire);
getF(Jump,Jump);
getF(DrawAudioBox,DrawAudioBox);
getF(ChatSendLine,ChatSendLine);
getF(ChatShiftLineUp,ChatShiftLineUp);
getF(ChatShiftLineDown,ChatShiftLineDown);
getF(ChangeFocus,ChangeFocus);
getF(ChangeChangeFocusDirection,ChangeChangeFocusDirection);
getF(Deprecated_ToggleHD,Deprecated_ToggleHD);
getF(PauseMenu,PauseMenu);
getF(Escape,Escape);
getF(Holster,Holster);
getF(EditMoveUp,EditMoveUp);
getF(EditMoveDown,EditMoveDown);
getF(EditMoveForward,EditMoveForward);
getF(EditMoveLeft,EditMoveLeft);
getF(EditMoveRight,EditMoveRight);
getF(EditMoveBackwards,EditMoveBackwards);
getF(EditMoveFast,EditMoveFast);
getF(NotificationAcceptFriendshipRequest,NotificationAcceptFriendshipRequest);
getF(ToggleCameraEffects,ToggleCameraEffects);
getF(ActivatePickColorTool,ActivatePickColorTool);
getF(Size,Size);

		
#undef getF
#undef getM
#undef getMi
    }

    void CubeModelingStateMachine::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "CubeModelingStateMachine");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(useLasers,useLasers);
getF(OnCurrentMaterialChange,OnCurrentMaterialChange);
getF(currentMaterialId,currentMaterialId);
getF(constraint,constraint);
getF(gameObject,gameObject);
getF(mainCamera,mainCamera);
getF(SelectedCube_k_BackingField,<SelectedCube>k__BackingField);
getF(TargetCubeModel_k_BackingField,<TargetCubeModel>k__BackingField);

		getM(get_SelectedCube,0);
getM(set_SelectedCube,1);
getM(get_TargetCubeModel,2);
getM(set_TargetCubeModel,3);
getM(get_CubeCorners,4);
getM(get_ByteCubeCorners,5);
getM(get_CurrentMaterial,6);
getM(get_CurrentMaterialId,7);
getM(set_CurrentMaterialId,8);
getM(get_CursorVisible,9);
getM(set_CursorVisible,10);
getM(ctor,11);
getM(StartEdit,12);
getM(SetConstraint,13);
getM(EndEdit,14);
getM(Update,15);
getM(CurrentlyHovered,16);
getM(DoPicking,17);
getM(RemoveCursors,18);
getM(HandleAudio,19);
getM(AddCube,20);
getMi(CanAddCubeAt,0,21);
getMi(CanAddCubeAt,1,22);
getM(CanRemoveCubeAt,23);
getM(CanEditCubeAt,24);
getM(CanReplaceCube,25);
getM(set_CurrentMaterialId_b_23_0,26);

#undef getF
#undef getM
#undef getMi
    }

    void MVCubeModelBase::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "MVCubeModelBase");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(TransparencyShaderProperty,TransparencyShaderProperty);
getF(prototypeCubeModel,prototypeCubeModel);
getF(chunkInstances,chunkInstances);
getF(ModelingConstraintBuilder_k_BackingField,<ModelingConstraintBuilder>k__BackingField);
getF(beingEdited,beingEdited);
getF(changedEventArgsQueue,changedEventArgsQueue);
getF(Changed,Changed);
getF(ChunksChanged,ChunksChanged);
getF(BeingEditedChanged,BeingEditedChanged);

		getM(get_ChunkInstances,0);
getM(get_PrototypeCubeModel,1);
getM(set_PrototypeCubeModel,2);
getM(get_Pid,3);
getM(get_ModelingConstraintBuilder,4);
getM(set_ModelingConstraintBuilder,5);
getM(get_BeingEdited,6);
getM(set_BeingEdited,7);
getM(get_ContainsCubes,8);
getM(get_CubeCount,9);
getM(add_BeingEditedChanged,10);
getM(remove_BeingEditedChanged,11);
getM(ctor,12);
getM(Initialize,13);
getM(ToString,14);
getM(get_PrototypeScale,15);
getM(HandleDelta,16);
getM(GetCubeBase,17);
getM(GetCube,18);
getM(ContainsCube,19);
getM(MakeUnique,20);
getM(HasInstances,21);
getM(RemoveCube,22);
getM(AddCube,23);
getM(SetMaterial,24);
getM(ReplaceCube,25);
getM(CornersChangedDone,26);
getM(CornersChanged,27);
getM(UnIndentCubeFace,28);
getM(RemoveCubeNetworkUpdate,29);
getM(AddCubeNetworkUpdate,30);
getM(CubePosToChunkPos,31);
getM(get_MeshFilters,32);
getM(get_WorldPivot,33);
getM(GetWorldBounds,34);
getM(GetBounds,35);
getM(GetLocalBounds,36);
getM(GetWorldCenterPos,37);
getM(OnObjectLinkChanged,38);
getM(ObjectLinkChanged,39);
getM(ObjectLinkTransparency,40);
getM(CalculateCurrentTransparencySettings,41);
getM(DirtyChunksRegeneratedHandler,42);
getM(Destroy,43);
getM(UpdatePrototypeScale,44);
getM(AddToChunkInstances,45);
getM(cctor,46);
getM(ICubeModelCollider_get_Id,47);
getM(ctor_b_28_0,48);

#undef getF
#undef getM
#undef getMi
    }

    void CubePickingInfo::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "CubePickingInfo");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(cube,cube);
getF(pickedFace,pickedFace);
getF(pickedEdge,pickedEdge);
getF(pickedEdgeIndex0,pickedEdgeIndex0);
getF(pickedEdgeIndex1,pickedEdgeIndex1);
getF(normal,normal);
getF(point,point);
getF(iLocalPos,iLocalPos);

		getMi(ctor,0,0);
getMi(ctor,1,1);

#undef getF
#undef getM
#undef getMi
    }

    void EditCubeChange::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "EditCubeChange");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(value,value__);
getF(None,None);
getF(VertexMoved,VertexMoved);
getF(EdgeMoved,EdgeMoved);
getF(FaceMoved,FaceMoved);
getF(CubeUnindented,CubeUnindented);
getF(CubeAdded,CubeAdded);
getF(CubePainted,CubePainted);
getF(CubeDeleted,CubeDeleted);

		
#undef getF
#undef getM
#undef getMi
    }

    void PaintCursor::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "PaintCursor");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(paintCursor,paintCursor);
getF(flashing,flashing);
getF(flashingTime,flashingTime);

		getM(ctor,0);
getM(UpdateCursor,1);
getM(Remove,2);
getM(UnlockMaterialToRemove,3);

#undef getF
#undef getM
#undef getMi
    }

    void AudioActions::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "AudioActions");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(value,value__);
getF(CubeAdded,CubeAdded);
getF(CubeRemoved,CubeRemoved);
getF(FaceMoved,FaceMoved);
getF(EdgeMoved,EdgeMoved);
getF(VertexMoved,VertexMoved);
getF(CubePainted,CubePainted);

		
#undef getF
#undef getM
#undef getMi
    }

    void ConstraintVisualizer::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "ConstraintVisualizer");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(constraint,constraint);

		getM(Init,0);
getM(OnDestroy,1);
getM(Constraint_BoxChanged,2);
getM(CreateInsideOutCube,3);
getM(BuildMesh,4);
getM(ctor,5);

#undef getF
#undef getM
#undef getMi
    }

    void ModelingDynamicBoxConstraint::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "ModelingDynamicBoxConstraint");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(cubeModel,cubeModel);
getF(Size_k_BackingField,<Size>k__BackingField);

		getM(get_Size,0);
getM(set_Size,1);
getM(ctor,2);
getM(DetachFromCubeModel,3);
getM(CanAddCubeAt,4);
getM(CanRemoveCubeAt,5);
getM(CanEditCubeAt,6);
getM(CubeModel_Changed,7);
getM(CalcConstraintBoxCenter,8);

#undef getF
#undef getM
#undef getMi
    }

    void ModelingBoxCountConstraint::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "ModelingBoxCountConstraint");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(cubeModel,cubeModel);
getF(minCubesCount,minCubesCount);

		getM(ctor,0);
getM(CanAddCubeAt,1);
getM(CanRemoveCubeAt,2);
getM(CanEditCubeAt,3);
getM(CubeModel_Changed,4);

#undef getF
#undef getM
#undef getMi
    }

    void MainCameraManager::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "MainCameraManager");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(OnMuteChange,OnMuteChange);
getF(OnCameraEffectsChange,OnCameraEffectsChange);
getF(OnCameraSettingAdded,OnCameraSettingAdded);
getF(OnCameraCubeAddedRemoved,OnCameraCubeAddedRemoved);
getF(OnGameCameraEffectsChange,OnGameCameraEffectsChange);
getF(DistanceToAvatarBase,DistanceToAvatarBase);
getF(DefaultCameraType,DefaultCameraType);
getF(IsCameraForcedFirstPerson,IsCameraForcedFirstPerson);
getF(cameraSettings,cameraSettings);
getF(baseVolume,baseVolume);
getF(isMuted,isMuted);
getF(isTemporarilyMuted,isTemporarilyMuted);
getF(storedMuteValue,storedMuteValue);
getF(mainCamera,mainCamera);
getF(secondaryCamera,secondaryCamera);
getF(tertiaryCamera,tertiaryCamera);
getF(transitionCamera,transitionCamera);
getF(plingSound,plingSound);
getF(greyScaleEffect,greyScaleEffect);
getF(skybox,skybox);
getF(audioListener,audioListener);
getF(lineDrawManager,lineDrawManager);
getF(screenSizeOptimizer,screenSizeOptimizer);
getF(transparentMultiplyColor,transparentMultiplyColor);
getF(OnIgnoreInputTypes,OnIgnoreInputTypes);
getF(postProcessingManager,postProcessingManager);
getF(cameraController,cameraController);
getF(protectedTransform,protectedTransform);
getF(isLogicRendered,isLogicRendered);
getF(blueModeEnabled,blueModeEnabled);
getF(cullingMask,cullingMask);
getF(maskMode,maskMode);

		getM(add_OnIgnoreInputTypes,0);
getM(remove_OnIgnoreInputTypes,1);
getM(get_Skybox,2);
getM(get_LineDrawManager,3);
getM(get_FieldOfView,4);
getM(set_FieldOfView,5);
getM(get_MainCamera,6);
getM(get_TertiaryCamera,7);
getM(get_SecondaryCamera,8);
getM(get_CurrentCamera,9);
getM(get_ProtectedTransform,10);
getM(get_FireDirection,11);
getM(get_FireOrigin,12);
getM(get_PostProcessingManager,13);
getM(get_BlueModeEnabled,14);
getM(set_BlueModeEnabled,15);
getM(get_Mute,16);
getM(set_Mute,17);
getM(get_CamMaskMode,18);
getM(set_CamMaskMode,19);
getM(get_TertiaryCameraActive,20);
getM(set_TertiaryCameraActive,21);
getM(get_IsLogicRendered,22);
getM(set_IsLogicRendered,23);
getM(Awake,24);
getM(Init,25);
getM(EnableScreenOptimizer,26);
getM(PlayPlingSound,27);
getM(SetCameraController,28);
getM(UpdateAudioListener,29);
getM(IsCameraControllerSet,30);
getM(IgnoreInputTypes,31);
getM(UpdateCamera,32);
getM(StartTransitionCam,33);
getM(CancelTransitionCam,34);
getM(RenderLogic,35);
getM(OnDestroy,36);
getM(TemporaryMute,37);
getM(RegisterCameraWithSettings,38);
getM(UnRegisterCameraWithSettings,39);
getM(GetSettings,40);
getM(HasSetting,41);
getM(ctor,42);
getM(cctor,43);

#undef getF
#undef getM
#undef getMi
    }

    void MVMaterial::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "MVMaterial");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(unlockPriceGold,unlockPriceGold);
getF(isUnlocked,isUnlocked);
getF(Mesh_k_BackingField,<Mesh>k__BackingField);
getF(Name_k_BackingField,<Name>k__BackingField);
getF(Description_k_BackingField,<Description>k__BackingField);
getF(PhysicalProperties_k_BackingField,<PhysicalProperties>k__BackingField);
getF(ModifierPackageType_k_BackingField,<ModifierPackageType>k__BackingField);
getF(ButtonTexture_k_BackingField,<ButtonTexture>k__BackingField);

		getM(get_Mesh,0);
getM(set_Mesh,1);
getM(get_Name,2);
getM(set_Name,3);
getM(get_Description,4);
getM(set_Description,5);
getM(get_PhysicalProperties,6);
getM(set_PhysicalProperties,7);
getM(get_ModifierPackageType,8);
getM(set_ModifierPackageType,9);
getM(get_ButtonTexture,10);
getM(set_ButtonTexture,11);
getM(get_IsAvailable,12);
getM(get_IsDestructible,13);
getMi(ctor,0,14);
getMi(ctor,1,15);
getMi(ctor,2,16);
getMi(ctor,3,17);
getM(RegenerateButtonTexture,18);
getM(GenerateCube,19);
getM(AddVertices,20);

#undef getF
#undef getM
#undef getMi
    }

    void ESTranslate::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "ESTranslate");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(TranslateModeType,TranslateModeType);
getF(MoveWithAvatar,MoveWithAvatar);
getF(gridSize,gridSize);
getF(stickyModifier,stickyModifier);
getF(completelyStuckLimit,completelyStuckLimit);
getF(recalcLocalDirCamToObjects,recalcLocalDirCamToObjects);
getF(translateDatas,translateDatas);
getF(targets,targets);
getF(mouseSensitivity,_mouseSensitivity);
getF(initialDistance,initialDistance);
getF(originPrevFrame,originPrevFrame);
getF(playTranslateSounds,playTranslateSounds);
getF(scrollMoveDistance,scrollMoveDistance);
getF(translateMode,translateMode);
getF(woIds,woIds);
getF(fixedToYPlane,fixedToYPlane);
getF(moveWithAvatar,moveWithAvatar);
getF(enteredStateWithPointerSelectReleased,enteredStateWithPointerSelectReleased);

		getM(Enter,0);
getM(Execute,1);
getM(IsValid,2);
getM(UpdateLaserPosition,3);
getM(Exit,4);
getM(GetInitialAvatarMoveObjectHitDistance,5);
getM(GetInitialAvatarMoveObjectDistance,6);
getM(RotateWithCamera,7);
getM(GetDeltaMouse,8);
getM(ctor,9);

#undef getF
#undef getM
#undef getMi
    }

    void SharedCubeFunctions::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "SharedCubeFunctions");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(constraint,constraint);
getF(LowestCubeSize,LowestCubeSize);
getF(CubeSegmentSize,CubeSegmentSize);
getF(Gridsize,Gridsize);
getF(NoneGridSize,NoneGridSize);
getF(forceEdgeDistance,forceEdgeDistance);
getF(FaceIndexToVertexIndexes,FaceIndexToVertexIndexes);
getF(VertexIndexToFaceIndexes,VertexIndexToFaceIndexes);
getF(LightTestOffsets,LightTestOffsets);
getF(LightTestNormalTargetFaces,LightTestNormalTargetFaces);
getF(LightTestNormalSecondaryTargetFaces,LightTestNormalSecondaryTargetFaces);
getF(LightTestOppositeFaceCorners,LightTestOppositeFaceCorners);
getF(LightTestSameFaceCorners,LightTestSameFaceCorners);
getF(LightTestInwardsOffset,LightTestInwardsOffset);
getF(FaceHeightAxis,FaceHeightAxis);
getF(FaceDirectionScalar,FaceDirectionScalar);

		getM(get_CubeConstraint,0);
getM(get_CubeConstraintVector3,1);
getM(AddCubeMeshCubeLines,2);
getM(AddCubeLine,3);
getM(AddCubeMesh,4);
getMi(GetCorners,0,5);
getMi(GetCorners,1,6);
getMi(GetCorners,2,7);
getMi(GetVertices,0,8);
getMi(GetVertices,1,9);
getMi(GetVertices,2,10);
getM(GetClosestGridPoint,11);
getM(WorldToLocal,12);
getM(WorldPosToValidGridPos,13);
getM(LocalToWorld,14);
getM(CreateFromBytePackage,15);
getMi(GetAxisAlignedBoundsRecursively,0,16);
getMi(GetAxisAlignedBoundsRecursively,1,17);
getMi(GetAxisAlignedBoundsRecursively,2,18);
getM(GetTriangleVertices,19);
getMi(ScaleFactor,0,20);
getMi(ScaleFactor,1,21);
getM(MoveEdge,22);
getMi(GetWorldCenter,0,23);
getMi(GetWorldCenter,1,24);
getM(SetLayerRecursively,25);
getM(CubePosToChunk,26);
getM(cctor,27);

#undef getF
#undef getM
#undef getMi
    }

    void MVBuildModeAvatarLocal_EditMode::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "MVBuildModeAvatarLocal");
klass = klass.getNestedTypeByName("EditMode");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(avatarBuildModeRuntimeState,_avatarBuildModeRuntimeState);
getF(pitchSensitivity,pitchSensitivity);
getF(yawSensitivity,yawSensitivity);
getF(basePitch,basePitch);
getF(minimumY,minimumY);
getF(maximumY,maximumY);
getF(maxSpeed,maxSpeed);
getF(speedModifier,speedModifier);
getF(jetPackTargetDeltaPos,jetPackTargetDeltaPos);
getF(targetSpeed,targetSpeed);
getF(speed,speed);
getF(speedSmoothingTime,speedSmoothingTime);
getF(moveConstraintSet,moveConstraintSet);
getF(moveConstraintCenter,moveConstraintCenter);
getF(moveConstraintRadius,moveConstraintRadius);
getF(moveSlowDownPoint,moveSlowDownPoint);
getF(YMovementSpeedScale_k_BackingField,<YMovementSpeedScale>k__BackingField);
getF(XZMovementSpeedScale_k_BackingField,<XZMovementSpeedScale>k__BackingField);
getF(doubleTap,doubleTap);
getF(mainCamera,mainCamera);
getF(keyVelocity,keyVelocity);
getF(keyAcceleration,keyAcceleration);
getF(keyDamping,keyDamping);
getF(heightAdjustSpeed,heightAdjustSpeed);

		getM(ctor,0);
getM(Activate,1);
getM(SetCamera,2);
getM(get_AvatarBuildModeRuntimeState,3);
getM(get_YMovementSpeedScale,4);
getM(set_YMovementSpeedScale,5);
getM(get_XZMovementSpeedScale,6);
getM(set_XZMovementSpeedScale,7);
getM(get_MovementConstrained,8);
getM(set_MovementConstrained,9);
getM(AvatarCommandsBuildModeOnOnSetSpawn,10);
getM(DeActivate,11);
getM(ModifySpeed,12);
getM(FrameUpdate,13);
getM(FixedUpdate,14);
getM(SetMoveConstraint,15);
getM(TouchRotationToCamera,16);
getM(UpdateRotationToCamera,17);
getM(SetToEditMode,18);
getM(MoveCharacter,19);
getM(GetElevationVelocity,20);
getM(Move,21);
getM(GetDirection,22);
getM(GetTouchInputDirection,23);
getM(GetInputDirection,24);
getM(GetMovementVelocity,25);
getM(AvatarCommandsBuildModeOnEnterBuildStateEvent,26);
getM(ESLeaveCubeTutorialSetup,27);
getM(FocusOnPosition,28);
getM(ESEditCubeTutorialSetup,29);
getM(AvatarCommandsBuildModeOnExitBuildStateEvent,30);
getM(EditCubesExitSetup,31);
getM(ESEditCubeTutorialExitSetup,32);
getM(CERoamUUIExitSetup,33);
getM(CEEditBodyUUIExitSetup,34);
getM(CEEditBodyUUIEnterSetup,35);
getM(CERoamUUIEnterSetup,36);
getM(EditCubesDataEnterSetup,37);

#undef getF
#undef getM
#undef getMi
    }

    void RotationHelper::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "UGUI.Desktop.Scripts.EditMode.Gizmo", "RotationHelper");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(editorStateMachine,editorStateMachine);

		getM(ctor,0);
getM(ResetRotation,1);
getM(RotateStep,2);
getM(IsRotationInvalid,3);
getM(GetPivot,4);
getM(DoGridSnapping,5);
getM(ValidateTargets,6);

#undef getF
#undef getM
#undef getMi
    }

    void SettingsSlider::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "SettingsSlider");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(slider,slider);
getF(interval,interval);
getF(round,round);
getF(key,key);

		getM(get_Value,0);
getMi(Initialize,0,1);
getMi(Initialize,1,2);
getM(ValueChanged,3);
getM(Reset,4);
getM(ctor,5);

#undef getF
#undef getM
#undef getMi
    }

    void MVGameControllerBase::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "MVGameControllerBase");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(LevelingTestMode,LevelingTestMode);
getF(ClientShopInsideInventory,ClientShopInsideInventory);
getF(regionConfigManager,regionConfigManager);
getF(debugLogHandler,debugLogHandler);
getF(mainCameraManager,mainCameraManager);
getF(styles,styles);
getF(materialLoader,materialLoader);
getF(prefabPool,prefabPool);
getF(textureIntegrityChecker,textureIntegrityChecker);
getF(themeRepository,themeRepository);
getF(streamingAssetManager,streamingAssetManager);
getF(embeddedPlayerConfig,embeddedPlayerConfig);
getF(IsInitialized_k_BackingField,<IsInitialized>k__BackingField);
getF(DisconnectIsOk_k_BackingField,<DisconnectIsOk>k__BackingField);
getF(PlayModeUI_k_BackingField,<PlayModeUI>k__BackingField);
getF(EditModeUI_k_BackingField,<EditModeUI>k__BackingField);
getF(OnReceivedGameMsg,OnReceivedGameMsg);
getF(OnReceivedNotification,OnReceivedNotification);
getF(OnPostGameInit,OnPostGameInit);
getF(instance,instance);
getF(game,game);
getF(audioManager,audioManager);
getF(browserComm,browserComm);
getF(levelLoader,levelLoader);
getF(skinnedMeshOptimizeManager,skinnedMeshOptimizeManager);
getF(flagDebriefingControl,flagDebriefingControl);
getF(goldRewardManager,goldRewardManager);
getF(joystickControllerStack,joystickControllerStack);
getF(quitHasBeenCalled,quitHasBeenCalled);
getF(timeReward,timeReward);
getF(overrideMaterials,overrideMaterials);
getF(loadStats,loadStats);
getF(joinState,_joinState);
getF(firstFrameUpdateActorReady,firstFrameUpdateActorReady);
getF(reAuthTestTries,reAuthTestTries);
getF(modeController,modeController);
getF(WebPlayAsTouch_k_BackingField,<WebPlayAsTouch>k__BackingField);
getF(PortalUI_k_BackingField,<PortalUI>k__BackingField);
getF(ShuttingDown_k_BackingField,<ShuttingDown>k__BackingField);
getF(WebPlayAsTouchInitialized_k_BackingField,<WebPlayAsTouchInitialized>k__BackingField);
getF(GameSessionData_k_BackingField,<GameSessionData>k__BackingField);
getF(onJoinStateChanged,onJoinStateChanged);
getF(SeekAdConsent_k_BackingField,<SeekAdConsent>k__BackingField);
getF(audioBuild,audioBuild);
getF(waterPlaneManagerPrefab,waterPlaneManagerPrefab);
getF(waterPlaneManager,waterPlaneManager);
getF(skyboxManager,skyboxManager);
getF(subscriberCooldownsManager,subscriberCooldownsManager);
getF(Quitting_k_BackingField,<Quitting>k__BackingField);
getF(LeavingEditPlayMode_k_BackingField,<LeavingEditPlayMode>k__BackingField);

		getM(get_SpawnRoleDataMediatorLocal,0);
getM(get_LocalPlayer,1);
getM(get_GameEventManager,2);
getM(IsInCorrectInventory,3);
getM(get_IsInitialized,4);
getM(set_IsInitialized,5);
getM(get_DisconnectIsOk,6);
getM(set_DisconnectIsOk,7);
getM(get_PlayModeUI,8);
getM(set_PlayModeUI,9);
getM(get_EditModeUI,10);
getM(set_EditModeUI,11);
getM(get_IsAlive,12);
getM(get_Game,13);
getM(get_AudioManager,14);
getM(get_BrowserComm,15);
getM(get_LevelLoader,16);
getM(get_SkinnedMeshOptimizeManager,17);
getM(get_FlagDebriefingControl,18);
getM(get_GoldRewardManager,19);
getM(get_TextureIntegrityChecker,20);
getM(get_StreamingAssetManager,21);
getM(get_EmbeddedPlayerConfig,22);
getM(get_RegionConfig,23);
getM(get_StaticAssetsConfig,24);
getM(get_WebPlayAsTouch,25);
getM(set_WebPlayAsTouch,26);
getM(get_PortalUI,27);
getM(set_PortalUI,28);
getM(get_ShuttingDown,29);
getM(set_ShuttingDown,30);
getM(get_WebPlayAsTouchInitialized,31);
getM(set_WebPlayAsTouchInitialized,32);
getM(get_GameSessionData,33);
getM(set_GameSessionData,34);
getM(get_BuildTarget,35);
getM(get_OnFirstFrameUpdateActorReady,36);
getM(set_OnFirstFrameUpdateActorReady,37);
getM(get_OkToReAuth,38);
getM(get_ReAuthTries,39);
getM(get_UsingDevSessionData,40);
getM(get_OperationRequests,41);
getM(get_LoadStats,42);
getM(get_GameMode,43);
getM(get_WOCM,44);
getM(get_TimeReward,45);
getM(get_IsTouristSession,46);
getM(get_AdManager,47);
getM(get_GetAdManager,48);
getM(get_SeekAdConsent,49);
getM(set_SeekAdConsent,50);
getM(get_JoinState,51);
getM(set_JoinState,52);
getM(get_OnJoinStateChanged,53);
getM(set_OnJoinStateChanged,54);
getM(get_IsPlayingInternal,55);
getM(get_IsPlaying,56);
getM(get_MaterialLoader,57);
getM(get_MainCameraManager,58);
getM(get_WaterPlaneManager,59);
getM(get_SkyboxManager,60);
getM(get_SubscriberCooldownsManager,61);
getM(Awake,62);
getM(InitRegionDependent,63);
getM(Start,64);
getM(OnDestroy,65);
getM(UnregisterPlayModeController,66);
getM(Update,67);
getM(FixedUpdate,68);
getM(LateUpdate,69);
getM(OnDrawGizmos,70);
getM(OnRTGAppInitialize,71);
getM(RegisterPlayModeController,72);
getMi(PostGameMsg,0,73);
getMi(PostGameMsg,1,74);
getM(PostDestroyCleanup,75);
getM(UpdateControllerUpdate,76);
getM(RegisterJoystickControllerStack,77);
getM(PushJoystick,78);
getM(PopJoystick,79);
getM(SetGameSessionData,80);
getM(TryReauth,81);
getM(ApplicationQuit,82);
getM(RegisterOverrideMaterials,83);
getM(SetWindowPos,84);
getM(FindWindow,85);
getM(SetPosition,86);
getM(get_Quitting,87);
getM(set_Quitting,88);
getM(get_LeavingEditPlayMode,89);
getM(set_LeavingEditPlayMode,90);
getM(OnApplicationQuit,91);
getM(ShutDown,92);
getM(HandleApplicationQuit,93);
getM(CleanUp,94);
getM(CleanUpPortal,95);
getM(HandleQuitDisconnect,96);
getM(AlternatePortTest,97);
getM(StartGame,98);
getM(InitWebGL,99);
getM(InitStandAlone,100);
getM(OnReceivedReAuthWebParametersFromHttpRequest,101);
getM(OnReceivedSessionData,102);
getM(UpdateInternal,103);
getM(Initialize,104);
getM(HandleDebugShortCuts,105);
getM(StartGameWithSessionData,106);
getM(ReceivedLoadStatsCallback,107);
getM(UpdateGame,108);
getM(DeleteScreenPlayerPrefs,109);
getM(UpdateControllerLateUpdate,110);
getM(ForceEmbedSite,111);
getM(TogglePlayerIndicators,112);
getM(ctor,113);

#undef getF
#undef getM
#undef getMi
    }

    void AwayMonitor::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "AwayMonitor");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(instance,instance);
getF(latestResetAFKTime,latestResetAFKTime);
getF(awayCheckFrequency,awayCheckFrequency);
getF(idleKickTimes,idleKickTimes);
getF(state,state);
getF(idleKickEnabled,idleKickEnabled);
getF(latestMouseMoveTime,latestMouseMoveTime);
getF(mouseX,mouseX);
getF(mouseY,mouseY);
getF(scroll,scroll);
getF(platformerLeft,platformerLeft);
getF(platformerRight,platformerRight);
getF(allAxisAvailable,allAxisAvailable);
getF(allPlatformerButtonsAvailable,allPlatformerButtonsAvailable);

		getM(get_IdleKickEnabled,0);
getM(set_IdleKickEnabled,1);
getM(get_LatestMouseMoveTime,2);
getM(ctor,3);
getM(Initialize,4);
getM(Destroy,5);
getM(UpdateMobile,6);
getM(BackgroundUpdate,7);
getM(InternalUpdate,8);
getM(UpdateButtons,9);
getM(Update,10);
getM(UpdateIdleAction,11);
getM(UpdateIdle,12);
getM(UpdateMouse,13);
getM(HandleIdle,14);
getM(CheckAndResolvePendingKick,15);

#undef getF
#undef getM
#undef getMi
    }

    void CrossHair::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "CrossHair");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(crossHair,crossHair);
getF(ammoRoot,ammoRoot);
getF(ammoCount,ammoCount);
getF(chargeFill,chargeFill);
getF(toggleInterval,toggleInterval);
getF(hitIndicatorImage,hitIndicatorImage);
getF(fadeCurve,fadeCurve);
getF(timeSinceLastToggle,timeSinceLastToggle);
getF(isFillOn,isFillOn);

		getM(get_Visible,0);
getM(set_Visible,1);
getM(ShowHasHitEffect,2);
getM(HitIndicatorAnimation,3);
getM(UpdateCrossHair,4);
getM(UpdateAmmoCount,5);
getM(UpdateChargeState,6);
getM(UpdateCrosshairColor,7);
getM(ctor,8);

#undef getF
#undef getM
#undef getMi
    }

    void UI_Graphic::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("UnityEngine.UI.dll", "UnityEngine.UI", "Graphic");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(s_DefaultUI,s_DefaultUI);
getF(s_WhiteTexture,s_WhiteTexture);
getF(m_Material,m_Material);
getF(m_Color,m_Color);
getF(m_SkipLayoutUpdate,m_SkipLayoutUpdate);
getF(m_SkipMaterialUpdate,m_SkipMaterialUpdate);
getF(m_RaycastTarget,m_RaycastTarget);
getF(m_RaycastTargetCache,m_RaycastTargetCache);
getF(m_RaycastPadding,m_RaycastPadding);
getF(m_RectTransform,m_RectTransform);
getF(m_CanvasRenderer,m_CanvasRenderer);
getF(m_Canvas,m_Canvas);
getF(m_VertsDirty,m_VertsDirty);
getF(m_MaterialDirty,m_MaterialDirty);
getF(m_OnDirtyLayoutCallback,m_OnDirtyLayoutCallback);
getF(m_OnDirtyVertsCallback,m_OnDirtyVertsCallback);
getF(m_OnDirtyMaterialCallback,m_OnDirtyMaterialCallback);
getF(s_Mesh,s_Mesh);
getF(s_VertexHelper,s_VertexHelper);
getF(m_CachedMesh,m_CachedMesh);
getF(m_CachedUvs,m_CachedUvs);
getF(m_ColorTweenRunner,m_ColorTweenRunner);
getF(useLegacyMeshGeneration_k_BackingField,<useLegacyMeshGeneration>k__BackingField);

		getM(get_defaultGraphicMaterial,0);
getM(get_color,1);
getM(set_color,2);
getM(get_raycastTarget,3);
getM(set_raycastTarget,4);
getM(get_raycastPadding,5);
getM(set_raycastPadding,6);
getM(get_useLegacyMeshGeneration,7);
getM(set_useLegacyMeshGeneration,8);
getM(ctor,9);
getM(SetAllDirty,10);
getM(SetLayoutDirty,11);
getM(SetVerticesDirty,12);
getM(SetMaterialDirty,13);
getM(SetRaycastDirty,14);
getM(OnRectTransformDimensionsChange,15);
getM(OnBeforeTransformParentChanged,16);
getM(OnTransformParentChanged,17);
getM(get_depth,18);
getM(get_rectTransform,19);
getM(get_canvas,20);
getM(CacheCanvas,21);
getM(get_canvasRenderer,22);
getM(get_defaultMaterial,23);
getM(get_material,24);
getM(set_material,25);
getM(get_materialForRendering,26);
getM(get_mainTexture,27);
getM(OnEnable,28);
getM(OnDisable,29);
getM(OnDestroy,30);
getM(OnCanvasHierarchyChanged,31);
getM(OnCullingChanged,32);
getM(Rebuild,33);
getM(LayoutComplete,34);
getM(GraphicUpdateComplete,35);
getM(UpdateMaterial,36);
getM(UpdateGeometry,37);
getM(DoMeshGeneration,38);
getM(DoLegacyMeshGeneration,39);
getM(get_workerMesh,40);
getM(OnFillVBO,41);
getMi(OnPopulateMesh,0,42);
getMi(OnPopulateMesh,1,43);
getM(OnDidApplyAnimationProperties,44);
getM(SetNativeSize,45);
getMi(Raycast,0,46);
getMi(Raycast,1,47);
getM(PixelAdjustPoint,48);
getM(GetPixelAdjustedRect,49);
getMi(CrossFadeColor,0,50);
getMi(CrossFadeColor,1,51);
getM(CreateColorFromAlpha,52);
getM(CrossFadeAlpha,53);
getM(RegisterDirtyLayoutCallback,54);
getM(UnregisterDirtyLayoutCallback,55);
getM(RegisterDirtyVerticesCallback,56);
getM(UnregisterDirtyVerticesCallback,57);
getM(RegisterDirtyMaterialCallback,58);
getM(UnregisterDirtyMaterialCallback,59);
getM(cctor,60);
getM(UnityEngine_UI_ICanvasElement_get_transform,61);

#undef getF
#undef getM
#undef getMi
    }


}

