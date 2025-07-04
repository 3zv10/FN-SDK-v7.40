﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_IsUsingRemoteControlPawn

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn
// 0x0008 (0x0008 - 0x0000)
struct GCNL_IsUsingRemoteControlPawn_C_ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_IsUsingRemoteControlPawn_C_ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn) == 0x000004, "Wrong alignment on GCNL_IsUsingRemoteControlPawn_C_ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn");
static_assert(sizeof(GCNL_IsUsingRemoteControlPawn_C_ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn) == 0x000008, "Wrong size on GCNL_IsUsingRemoteControlPawn_C_ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn");
static_assert(offsetof(GCNL_IsUsingRemoteControlPawn_C_ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn, EntryPoint) == 0x000000, "Member 'GCNL_IsUsingRemoteControlPawn_C_ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_IsUsingRemoteControlPawn_C_ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn, K2Node_Event_EndPlayReason) == 0x000004, "Member 'GCNL_IsUsingRemoteControlPawn_C_ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct GCNL_IsUsingRemoteControlPawn_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_IsUsingRemoteControlPawn_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on GCNL_IsUsingRemoteControlPawn_C_ReceiveEndPlay");
static_assert(sizeof(GCNL_IsUsingRemoteControlPawn_C_ReceiveEndPlay) == 0x000001, "Wrong size on GCNL_IsUsingRemoteControlPawn_C_ReceiveEndPlay");
static_assert(offsetof(GCNL_IsUsingRemoteControlPawn_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'GCNL_IsUsingRemoteControlPawn_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.OnActive
// 0x00E0 (0x00E0 - 0x0000)
struct GCNL_IsUsingRemoteControlPawn_C_OnActive final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_IsUsingRemoteControlPawn_C_OnActive) == 0x000008, "Wrong alignment on GCNL_IsUsingRemoteControlPawn_C_OnActive");
static_assert(sizeof(GCNL_IsUsingRemoteControlPawn_C_OnActive) == 0x0000E0, "Wrong size on GCNL_IsUsingRemoteControlPawn_C_OnActive");
static_assert(offsetof(GCNL_IsUsingRemoteControlPawn_C_OnActive, MyTarget) == 0x000000, "Member 'GCNL_IsUsingRemoteControlPawn_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_IsUsingRemoteControlPawn_C_OnActive, Parameters) == 0x000008, "Member 'GCNL_IsUsingRemoteControlPawn_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_IsUsingRemoteControlPawn_C_OnActive, ReturnValue) == 0x0000C0, "Member 'GCNL_IsUsingRemoteControlPawn_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_IsUsingRemoteControlPawn_C_OnActive, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0000C8, "Member 'GCNL_IsUsingRemoteControlPawn_C_OnActive::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCNL_IsUsingRemoteControlPawn_C_OnActive, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GCNL_IsUsingRemoteControlPawn_C_OnActive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNL_IsUsingRemoteControlPawn_C_OnActive, CallFunc_IsValid_ReturnValue) == 0x0000D1, "Member 'GCNL_IsUsingRemoteControlPawn_C_OnActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_IsUsingRemoteControlPawn_C_OnActive, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0000D8, "Member 'GCNL_IsUsingRemoteControlPawn_C_OnActive::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");

// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.OnRemove
// 0x00C8 (0x00C8 - 0x0000)
struct GCNL_IsUsingRemoteControlPawn_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCNL_IsUsingRemoteControlPawn_C_OnRemove) == 0x000008, "Wrong alignment on GCNL_IsUsingRemoteControlPawn_C_OnRemove");
static_assert(sizeof(GCNL_IsUsingRemoteControlPawn_C_OnRemove) == 0x0000C8, "Wrong size on GCNL_IsUsingRemoteControlPawn_C_OnRemove");
static_assert(offsetof(GCNL_IsUsingRemoteControlPawn_C_OnRemove, MyTarget) == 0x000000, "Member 'GCNL_IsUsingRemoteControlPawn_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_IsUsingRemoteControlPawn_C_OnRemove, Parameters) == 0x000008, "Member 'GCNL_IsUsingRemoteControlPawn_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_IsUsingRemoteControlPawn_C_OnRemove, ReturnValue) == 0x0000C0, "Member 'GCNL_IsUsingRemoteControlPawn_C_OnRemove::ReturnValue' has a wrong offset!");

}

