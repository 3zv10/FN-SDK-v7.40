﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Enemy_Player_SneakySnowman

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman
// 0x0108 (0x0108 - 0x0000)
struct Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Damage;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;                           // 0x0008(0x0020)(ConstParm)
	struct FVector                                K2Node_Event_Momentum;                             // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitInfo;                              // 0x0034(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            K2Node_Event_InstigatedBy;                         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_DamageCauser;                         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;                        // 0x00D0(0x0018)()
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue1;             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman) == 0x000008, "Wrong alignment on Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman");
static_assert(sizeof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman) == 0x000108, "Wrong size on Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman, EntryPoint) == 0x000000, "Member 'Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman::EntryPoint' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman, K2Node_Event_Damage) == 0x000004, "Member 'Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman, K2Node_Event_DamageTags) == 0x000008, "Member 'Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman, K2Node_Event_Momentum) == 0x000028, "Member 'Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman, K2Node_Event_HitInfo) == 0x000034, "Member 'Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman, K2Node_Event_InstigatedBy) == 0x0000C0, "Member 'Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman, K2Node_Event_DamageCauser) == 0x0000C8, "Member 'Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman, K2Node_Event_EffectContext) == 0x0000D0, "Member 'Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000E8, "Member 'Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman, CallFunc_GetValueAtLevel_ReturnValue) == 0x0000F4, "Member 'Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000F8, "Member 'Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000FC, "Member 'Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman, CallFunc_GetValueAtLevel_ReturnValue1) == 0x000100, "Member 'Athena_Enemy_Player_SneakySnowman_C_ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman::CallFunc_GetValueAtLevel_ReturnValue1' has a wrong offset!");

// Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.OnDamageServer
// 0x00E8 (0x00E8 - 0x0000)
struct Athena_Enemy_Player_SneakySnowman_C_OnDamageServer final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  DamageTags;                                        // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                Momentum;                                          // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitInfo;                                           // 0x0034(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            InstigatedBy;                                      // 0x00C0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x00C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           EffectContext;                                     // 0x00D0(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(Athena_Enemy_Player_SneakySnowman_C_OnDamageServer) == 0x000008, "Wrong alignment on Athena_Enemy_Player_SneakySnowman_C_OnDamageServer");
static_assert(sizeof(Athena_Enemy_Player_SneakySnowman_C_OnDamageServer) == 0x0000E8, "Wrong size on Athena_Enemy_Player_SneakySnowman_C_OnDamageServer");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_OnDamageServer, Damage) == 0x000000, "Member 'Athena_Enemy_Player_SneakySnowman_C_OnDamageServer::Damage' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_OnDamageServer, DamageTags) == 0x000008, "Member 'Athena_Enemy_Player_SneakySnowman_C_OnDamageServer::DamageTags' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_OnDamageServer, Momentum) == 0x000028, "Member 'Athena_Enemy_Player_SneakySnowman_C_OnDamageServer::Momentum' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_OnDamageServer, HitInfo) == 0x000034, "Member 'Athena_Enemy_Player_SneakySnowman_C_OnDamageServer::HitInfo' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_OnDamageServer, InstigatedBy) == 0x0000C0, "Member 'Athena_Enemy_Player_SneakySnowman_C_OnDamageServer::InstigatedBy' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_OnDamageServer, DamageCauser) == 0x0000C8, "Member 'Athena_Enemy_Player_SneakySnowman_C_OnDamageServer::DamageCauser' has a wrong offset!");
static_assert(offsetof(Athena_Enemy_Player_SneakySnowman_C_OnDamageServer, EffectContext) == 0x0000D0, "Member 'Athena_Enemy_Player_SneakySnowman_C_OnDamageServer::EffectContext' has a wrong offset!");

}

