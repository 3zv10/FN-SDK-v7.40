﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Beam

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_Beam.B_Beam_C.ExecuteUbergraph_B_Beam
// 0x00B0 (0x00B0 - 0x0000)
struct B_Beam_C_ExecuteUbergraph_B_Beam final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue1;         // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue1;                       // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue2;         // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue3;         // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue1;       // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue4;         // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue2;       // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Beam_C_ExecuteUbergraph_B_Beam) == 0x000008, "Wrong alignment on B_Beam_C_ExecuteUbergraph_B_Beam");
static_assert(sizeof(B_Beam_C_ExecuteUbergraph_B_Beam) == 0x0000B0, "Wrong size on B_Beam_C_ExecuteUbergraph_B_Beam");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, EntryPoint) == 0x000000, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000004, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_VLerp_ReturnValue) == 0x000014, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_K2_GetActorLocation_ReturnValue1) == 0x00002C, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_K2_GetActorLocation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_VLerp_ReturnValue1) == 0x000038, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_VLerp_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000044, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000050, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000060, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_K2_GetActorLocation_ReturnValue2) == 0x000064, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_K2_GetActorLocation_ReturnValue2' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_K2_GetActorLocation_ReturnValue3) == 0x000070, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_K2_GetActorLocation_ReturnValue3' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_Subtract_VectorVector_ReturnValue1) == 0x00007C, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_Subtract_VectorVector_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000088, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000090, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_K2_GetActorLocation_ReturnValue4) == 0x000098, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_K2_GetActorLocation_ReturnValue4' has a wrong offset!");
static_assert(offsetof(B_Beam_C_ExecuteUbergraph_B_Beam, CallFunc_Subtract_VectorVector_ReturnValue2) == 0x0000A4, "Member 'B_Beam_C_ExecuteUbergraph_B_Beam::CallFunc_Subtract_VectorVector_ReturnValue2' has a wrong offset!");

// Function B_Beam.B_Beam_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct B_Beam_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Beam_C_ReceiveTick) == 0x000004, "Wrong alignment on B_Beam_C_ReceiveTick");
static_assert(sizeof(B_Beam_C_ReceiveTick) == 0x000004, "Wrong size on B_Beam_C_ReceiveTick");
static_assert(offsetof(B_Beam_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'B_Beam_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function B_Beam.B_Beam_C.UserConstructionScript
// 0x0020 (0x0020 - 0x0000)
struct B_Beam_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue1; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue2; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Beam_C_UserConstructionScript) == 0x000008, "Wrong alignment on B_Beam_C_UserConstructionScript");
static_assert(sizeof(B_Beam_C_UserConstructionScript) == 0x000020, "Wrong size on B_Beam_C_UserConstructionScript");
static_assert(offsetof(B_Beam_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'B_Beam_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue1) == 0x000008, "Member 'B_Beam_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue1' has a wrong offset!");
static_assert(offsetof(B_Beam_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue2) == 0x000010, "Member 'B_Beam_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue2' has a wrong offset!");
static_assert(offsetof(B_Beam_C_UserConstructionScript, CallFunc_GetDistanceTo_ReturnValue) == 0x000018, "Member 'B_Beam_C_UserConstructionScript::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");

// Function B_Beam.B_Beam_C.UpdateBeamPosAndRot
// 0x00E0 (0x00E0 - 0x0000)
struct B_Beam_C_UpdateBeamPosAndRot final
{
public:
	const class AActor*                           AimTarget;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SimulateOffset;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetDirectionActorToActor_ReturnValue;     // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0054(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Beam_C_UpdateBeamPosAndRot) == 0x000008, "Wrong alignment on B_Beam_C_UpdateBeamPosAndRot");
static_assert(sizeof(B_Beam_C_UpdateBeamPosAndRot) == 0x0000E0, "Wrong size on B_Beam_C_UpdateBeamPosAndRot");
static_assert(offsetof(B_Beam_C_UpdateBeamPosAndRot, AimTarget) == 0x000000, "Member 'B_Beam_C_UpdateBeamPosAndRot::AimTarget' has a wrong offset!");
static_assert(offsetof(B_Beam_C_UpdateBeamPosAndRot, SimulateOffset) == 0x000008, "Member 'B_Beam_C_UpdateBeamPosAndRot::SimulateOffset' has a wrong offset!");
static_assert(offsetof(B_Beam_C_UpdateBeamPosAndRot, CallFunc_GetDistanceTo_ReturnValue) == 0x000018, "Member 'B_Beam_C_UpdateBeamPosAndRot::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_UpdateBeamPosAndRot, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00001C, "Member 'B_Beam_C_UpdateBeamPosAndRot::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_UpdateBeamPosAndRot, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000028, "Member 'B_Beam_C_UpdateBeamPosAndRot::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_UpdateBeamPosAndRot, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x00002C, "Member 'B_Beam_C_UpdateBeamPosAndRot::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_UpdateBeamPosAndRot, CallFunc_MakeVector_ReturnValue) == 0x00003C, "Member 'B_Beam_C_UpdateBeamPosAndRot::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_UpdateBeamPosAndRot, CallFunc_GetDirectionActorToActor_ReturnValue) == 0x000048, "Member 'B_Beam_C_UpdateBeamPosAndRot::CallFunc_GetDirectionActorToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Beam_C_UpdateBeamPosAndRot, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000054, "Member 'B_Beam_C_UpdateBeamPosAndRot::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

}

