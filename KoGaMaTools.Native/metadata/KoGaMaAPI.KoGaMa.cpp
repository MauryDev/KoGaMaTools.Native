
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


}

