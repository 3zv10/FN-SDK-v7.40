﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Durrrables_MovementSpeed

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.ExecuteUbergraph_GCNL_Durrrables_MovementSpeed
// 0x0024 (0x0024 - 0x0000)
struct GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed) == 0x000004, "Wrong alignment on GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed");
static_assert(sizeof(GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed) == 0x000024, "Wrong size on GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed, EntryPoint) == 0x000000, "Member 'GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed, CallFunc_IsValid_ReturnValue1) == 0x000009, "Member 'GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed, CallFunc_GetVelocity_ReturnValue) == 0x00000C, "Member 'GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed, CallFunc_VSize_ReturnValue) == 0x000018, "Member 'GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00001C, "Member 'GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed, CallFunc_FClamp_ReturnValue) == 0x000020, "Member 'GCNL_Durrrables_MovementSpeed_C_ExecuteUbergraph_GCNL_Durrrables_MovementSpeed::CallFunc_FClamp_ReturnValue' has a wrong offset!");

// Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct GCNL_Durrrables_MovementSpeed_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_Durrrables_MovementSpeed_C_ReceiveTick) == 0x000004, "Wrong alignment on GCNL_Durrrables_MovementSpeed_C_ReceiveTick");
static_assert(sizeof(GCNL_Durrrables_MovementSpeed_C_ReceiveTick) == 0x000004, "Wrong size on GCNL_Durrrables_MovementSpeed_C_ReceiveTick");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCNL_Durrrables_MovementSpeed_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.WhileActive
// 0x00F8 (0x00F8 - 0x0000)
struct GCNL_Durrrables_MovementSpeed_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        TargetComp;                                        // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_GetTargetComponent_ReturnValue;           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue1;        // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCNL_Durrrables_MovementSpeed_C_WhileActive) == 0x000008, "Wrong alignment on GCNL_Durrrables_MovementSpeed_C_WhileActive");
static_assert(sizeof(GCNL_Durrrables_MovementSpeed_C_WhileActive) == 0x0000F8, "Wrong size on GCNL_Durrrables_MovementSpeed_C_WhileActive");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, MyTarget) == 0x000000, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, Parameters) == 0x000008, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, ReturnValue) == 0x0000C0, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, TargetComp) == 0x0000C8, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::TargetComp' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, CallFunc_GetTargetComponent_ReturnValue) == 0x0000D0, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::CallFunc_GetTargetComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, CallFunc_IsValid_ReturnValue) == 0x0000D8, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0000E0, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, CallFunc_SpawnEmitterAttached_ReturnValue1) == 0x0000E8, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::CallFunc_SpawnEmitterAttached_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_WhileActive, CallFunc_IsValid_ReturnValue1) == 0x0000F0, "Member 'GCNL_Durrrables_MovementSpeed_C_WhileActive::CallFunc_IsValid_ReturnValue1' has a wrong offset!");

// Function GCNL_Durrrables_MovementSpeed.GCNL_Durrrables_MovementSpeed_C.OnRemove
// 0x00C8 (0x00C8 - 0x0000)
struct GCNL_Durrrables_MovementSpeed_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCNL_Durrrables_MovementSpeed_C_OnRemove) == 0x000008, "Wrong alignment on GCNL_Durrrables_MovementSpeed_C_OnRemove");
static_assert(sizeof(GCNL_Durrrables_MovementSpeed_C_OnRemove) == 0x0000C8, "Wrong size on GCNL_Durrrables_MovementSpeed_C_OnRemove");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_OnRemove, MyTarget) == 0x000000, "Member 'GCNL_Durrrables_MovementSpeed_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_OnRemove, Parameters) == 0x000008, "Member 'GCNL_Durrrables_MovementSpeed_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_OnRemove, ReturnValue) == 0x0000C0, "Member 'GCNL_Durrrables_MovementSpeed_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_Durrrables_MovementSpeed_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x0000C1, "Member 'GCNL_Durrrables_MovementSpeed_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

