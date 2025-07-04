﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP.SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C.ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP
// 0x00B0 (0x00B0 - 0x0000)
struct SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP) == 0x000010, "Wrong alignment on SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP");
static_assert(sizeof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP) == 0x0000B0, "Wrong size on SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, EntryPoint) == 0x000000, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, Temp_bool_Has_Been_Initd_Variable) == 0x000008, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, Temp_bool_IsClosed_Variable) == 0x000009, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, CallFunc_K2_GetActorRotation_ReturnValue) == 0x00000C, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, CallFunc_GetOwningActor_ReturnValue) == 0x000018, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, CallFunc_GetAttachParentActor_ReturnValue) == 0x000020, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000028, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x000038, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, CallFunc_GetSocketTransform_ReturnValue) == 0x000040, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, CallFunc_BreakTransform_Location) == 0x000070, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, CallFunc_BreakTransform_Rotation) == 0x00007C, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, CallFunc_BreakTransform_Scale) == 0x000088, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, CallFunc_Add_VectorVector_ReturnValue) == 0x000094, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP, CallFunc_ComposeRotators_ReturnValue) == 0x0000A0, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");

// Function SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP.SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'SK_Weapon_Floatation_Balloon_BackKnot_Dyn_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

}

