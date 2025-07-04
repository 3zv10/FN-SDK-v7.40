﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AthenaMapMarkerBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.ExecuteUbergraph_B_AthenaMapMarkerBase
// 0x0128 (0x0128 - 0x0000)
struct B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0040(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerMarkerData                      K2Node_Event_MarkerData;                           // 0x00D8(0x0020)(ConstParm, NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue1;     // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue1;    // 0x010C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue1; // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase) == 0x000008, "Wrong alignment on B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase");
static_assert(sizeof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase) == 0x000128, "Wrong size on B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, EntryPoint) == 0x000000, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000004, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000010, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000020, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, K2Node_ComponentBoundEvent_OtherActor) == 0x000028, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, K2Node_ComponentBoundEvent_OtherComp) == 0x000030, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000038, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, K2Node_ComponentBoundEvent_bFromSweep) == 0x00003C, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, K2Node_ComponentBoundEvent_SweepResult) == 0x000040, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, CallFunc_GetPlayerPawn_ReturnValue) == 0x0000C8, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000D0, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, K2Node_Event_MarkerData) == 0x0000D8, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::K2Node_Event_MarkerData' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000F8, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, CallFunc_K2_GetComponentLocation_ReturnValue1) == 0x000100, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::CallFunc_K2_GetComponentLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, CallFunc_Conv_VectorToLinearColor_ReturnValue1) == 0x00010C, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::CallFunc_Conv_VectorToLinearColor_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase, CallFunc_CreateDynamicMaterialInstance_ReturnValue1) == 0x000120, "Member 'B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase::CallFunc_CreateDynamicMaterialInstance_ReturnValue1' has a wrong offset!");

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnSetupMarker
// 0x0020 (0x0020 - 0x0000)
struct B_AthenaMapMarkerBase_C_OnSetupMarker final
{
public:
	struct FPlayerMarkerData                      MarkerData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(B_AthenaMapMarkerBase_C_OnSetupMarker) == 0x000008, "Wrong alignment on B_AthenaMapMarkerBase_C_OnSetupMarker");
static_assert(sizeof(B_AthenaMapMarkerBase_C_OnSetupMarker) == 0x000020, "Wrong size on B_AthenaMapMarkerBase_C_OnSetupMarker");
static_assert(offsetof(B_AthenaMapMarkerBase_C_OnSetupMarker, MarkerData) == 0x000000, "Member 'B_AthenaMapMarkerBase_C_OnSetupMarker::MarkerData' has a wrong offset!");

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'B_AthenaMapMarkerBase_C_BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

}

