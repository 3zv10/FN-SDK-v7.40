﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_EnemyDeathFX_On

#include "Basic.hpp"


namespace SDK::Params
{

// Function AnimNotify_EnemyDeathFX_On.AnimNotify_EnemyDeathFX_On_C.Received_Notify
// 0x0030 (0x0030 - 0x0000)
struct AnimNotify_EnemyDeathFX_On_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEnemyPawn_Parent_C*                    K2Node_DynamicCast_AsEnemy_Pawn_Parent;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotify_EnemyDeathFX_On_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_EnemyDeathFX_On_C_Received_Notify");
static_assert(sizeof(AnimNotify_EnemyDeathFX_On_C_Received_Notify) == 0x000030, "Wrong size on AnimNotify_EnemyDeathFX_On_C_Received_Notify");
static_assert(offsetof(AnimNotify_EnemyDeathFX_On_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_EnemyDeathFX_On_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_EnemyDeathFX_On_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_EnemyDeathFX_On_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_EnemyDeathFX_On_C_Received_Notify, ReturnValue) == 0x000010, "Member 'AnimNotify_EnemyDeathFX_On_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_EnemyDeathFX_On_C_Received_Notify, CallFunc_IsDedicatedServer_ReturnValue) == 0x000011, "Member 'AnimNotify_EnemyDeathFX_On_C_Received_Notify::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_EnemyDeathFX_On_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AnimNotify_EnemyDeathFX_On_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_EnemyDeathFX_On_C_Received_Notify, K2Node_DynamicCast_AsEnemy_Pawn_Parent) == 0x000020, "Member 'AnimNotify_EnemyDeathFX_On_C_Received_Notify::K2Node_DynamicCast_AsEnemy_Pawn_Parent' has a wrong offset!");
static_assert(offsetof(AnimNotify_EnemyDeathFX_On_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AnimNotify_EnemyDeathFX_On_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

