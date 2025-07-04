﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_LowGravity

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExecuteUbergraph_GCN_Athena_LowGravity
// 0x0168 (0x0168 - 0x0000)
struct GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             K2Node_Event_EventType;                            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0018(0x00B8)(ConstParm, ContainsInstancedReference)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00D0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_TimeFromJumpApex_ReturnValue;             // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F5[0x3];                                       // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_105[0x3];                                      // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Abs_ReturnValue1;                         // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MapRangeClamped_ReturnValue;              // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue1;                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeSeconds_ReturnValue;               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue1;         // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MapRangeClamped_ReturnValue1;             // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue2;         // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue1;              // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0150(0x0008)(NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity) == 0x000008, "Wrong alignment on GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity");
static_assert(sizeof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity) == 0x000168, "Wrong size on GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, EntryPoint) == 0x000000, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, K2Node_Event_MyTarget) == 0x000008, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, K2Node_Event_EventType) == 0x000010, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::K2Node_Event_EventType' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, K2Node_Event_Parameters) == 0x000018, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, K2Node_CreateDelegate_OutputDelegate) == 0x0000D0, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, K2Node_SwitchEnum_CmpSuccess) == 0x0000E0, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, K2Node_Event_DeltaSeconds) == 0x0000E4, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000E8, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x0000EC, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_TimeFromJumpApex_ReturnValue) == 0x0000F0, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_TimeFromJumpApex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_IsFalling_ReturnValue) == 0x0000F4, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_BreakVector_X) == 0x0000F8, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_BreakVector_Y) == 0x0000FC, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_BreakVector_Z) == 0x000100, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_Not_PreBool_ReturnValue) == 0x000104, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_Abs_ReturnValue) == 0x000108, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00010C, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000110, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_Abs_ReturnValue1) == 0x000114, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_Abs_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_BooleanOR_ReturnValue) == 0x000118, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_MapRangeClamped_ReturnValue) == 0x00011C, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_SelectFloat_ReturnValue) == 0x000120, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_SelectFloat_ReturnValue1) == 0x000124, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_SelectFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_FInterpTo_ReturnValue) == 0x000128, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_GetTimeSeconds_ReturnValue) == 0x00012C, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_Add_FloatFloat_ReturnValue) == 0x000130, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_Subtract_FloatFloat_ReturnValue1) == 0x000134, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_Subtract_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_IsValid_ReturnValue) == 0x000138, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_MapRangeClamped_ReturnValue1) == 0x00013C, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_MapRangeClamped_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_Subtract_FloatFloat_ReturnValue2) == 0x000140, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_Subtract_FloatFloat_ReturnValue2' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_Multiply_FloatFloat_ReturnValue1) == 0x000144, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_Multiply_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_Add_FloatFloat_ReturnValue1) == 0x000148, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_Add_FloatFloat_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000150, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000158, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000160, "Member 'GCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct GCN_Athena_LowGravity_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_LowGravity_C_ReceiveTick) == 0x000004, "Wrong alignment on GCN_Athena_LowGravity_C_ReceiveTick");
static_assert(sizeof(GCN_Athena_LowGravity_C_ReceiveTick) == 0x000004, "Wrong size on GCN_Athena_LowGravity_C_ReceiveTick");
static_assert(offsetof(GCN_Athena_LowGravity_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCN_Athena_LowGravity_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.K2_HandleGameplayCue
// 0x00C8 (0x00C8 - 0x0000)
struct GCN_Athena_LowGravity_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             EventType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCN_Athena_LowGravity_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GCN_Athena_LowGravity_C_K2_HandleGameplayCue");
static_assert(sizeof(GCN_Athena_LowGravity_C_K2_HandleGameplayCue) == 0x0000C8, "Wrong size on GCN_Athena_LowGravity_C_K2_HandleGameplayCue");
static_assert(offsetof(GCN_Athena_LowGravity_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GCN_Athena_LowGravity_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GCN_Athena_LowGravity_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GCN_Athena_LowGravity_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.WhileActive
// 0x00D0 (0x00D0 - 0x0000)
struct GCN_Athena_LowGravity_C_WhileActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_LowGravity_C_WhileActive) == 0x000008, "Wrong alignment on GCN_Athena_LowGravity_C_WhileActive");
static_assert(sizeof(GCN_Athena_LowGravity_C_WhileActive) == 0x0000D0, "Wrong size on GCN_Athena_LowGravity_C_WhileActive");
static_assert(offsetof(GCN_Athena_LowGravity_C_WhileActive, MyTarget) == 0x000000, "Member 'GCN_Athena_LowGravity_C_WhileActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_WhileActive, Parameters) == 0x000008, "Member 'GCN_Athena_LowGravity_C_WhileActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_WhileActive, ReturnValue) == 0x0000C0, "Member 'GCN_Athena_LowGravity_C_WhileActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_WhileActive, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0000C8, "Member 'GCN_Athena_LowGravity_C_WhileActive::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.Activated
// 0x0048 (0x0048 - 0x0000)
struct GCN_Athena_LowGravity_C_Activated final
{
public:
	class AActor*                                 PlayerPawn_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeSeconds_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult1;         // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY1;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum1_CmpSuccess;                     // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_Athena_LowGravity_C_Activated) == 0x000008, "Wrong alignment on GCN_Athena_LowGravity_C_Activated");
static_assert(sizeof(GCN_Athena_LowGravity_C_Activated) == 0x000048, "Wrong size on GCN_Athena_LowGravity_C_Activated");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, PlayerPawn_0) == 0x000000, "Member 'GCN_Athena_LowGravity_C_Activated::PlayerPawn_0' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000008, "Member 'GCN_Athena_LowGravity_C_Activated::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GCN_Athena_LowGravity_C_Activated::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000014, "Member 'GCN_Athena_LowGravity_C_Activated::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, CallFunc_EvaluateCurveTableRow_OutResult) == 0x000018, "Member 'GCN_Athena_LowGravity_C_Activated::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, CallFunc_EvaluateCurveTableRow_OutXY) == 0x00001C, "Member 'GCN_Athena_LowGravity_C_Activated::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, CallFunc_GetTimeSeconds_ReturnValue) == 0x000020, "Member 'GCN_Athena_LowGravity_C_Activated::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, K2Node_SwitchEnum_CmpSuccess) == 0x000024, "Member 'GCN_Athena_LowGravity_C_Activated::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, CallFunc_EvaluateCurveTableRow_OutResult1) == 0x000025, "Member 'GCN_Athena_LowGravity_C_Activated::CallFunc_EvaluateCurveTableRow_OutResult1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, CallFunc_EvaluateCurveTableRow_OutXY1) == 0x000028, "Member 'GCN_Athena_LowGravity_C_Activated::CallFunc_EvaluateCurveTableRow_OutXY1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, K2Node_SwitchEnum1_CmpSuccess) == 0x00002C, "Member 'GCN_Athena_LowGravity_C_Activated::K2Node_SwitchEnum1_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'GCN_Athena_LowGravity_C_Activated::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_Activated, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'GCN_Athena_LowGravity_C_Activated::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.OnRemove
// 0x00C8 (0x00C8 - 0x0000)
struct GCN_Athena_LowGravity_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_Athena_LowGravity_C_OnRemove) == 0x000008, "Wrong alignment on GCN_Athena_LowGravity_C_OnRemove");
static_assert(sizeof(GCN_Athena_LowGravity_C_OnRemove) == 0x0000C8, "Wrong size on GCN_Athena_LowGravity_C_OnRemove");
static_assert(offsetof(GCN_Athena_LowGravity_C_OnRemove, MyTarget) == 0x000000, "Member 'GCN_Athena_LowGravity_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_OnRemove, Parameters) == 0x000008, "Member 'GCN_Athena_LowGravity_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_OnRemove, ReturnValue) == 0x0000C0, "Member 'GCN_Athena_LowGravity_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_LowGravity_C_OnRemove, CallFunc_IsValid_ReturnValue) == 0x0000C1, "Member 'GCN_Athena_LowGravity_C_OnRemove::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

