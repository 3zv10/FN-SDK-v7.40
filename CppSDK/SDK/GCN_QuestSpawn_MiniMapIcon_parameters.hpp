﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_QuestSpawn_MiniMapIcon

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon
// 0x0004 (0x0004 - 0x0000)
struct GCN_QuestSpawn_MiniMapIcon_C_ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCN_QuestSpawn_MiniMapIcon_C_ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon) == 0x000004, "Wrong alignment on GCN_QuestSpawn_MiniMapIcon_C_ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon");
static_assert(sizeof(GCN_QuestSpawn_MiniMapIcon_C_ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon) == 0x000004, "Wrong size on GCN_QuestSpawn_MiniMapIcon_C_ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon");
static_assert(offsetof(GCN_QuestSpawn_MiniMapIcon_C_ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon, EntryPoint) == 0x000000, "Member 'GCN_QuestSpawn_MiniMapIcon_C_ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon::EntryPoint' has a wrong offset!");

// Function GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C.OnRemove
// 0x00C8 (0x00C8 - 0x0000)
struct GCN_QuestSpawn_MiniMapIcon_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GCN_QuestSpawn_MiniMapIcon_C_OnRemove) == 0x000008, "Wrong alignment on GCN_QuestSpawn_MiniMapIcon_C_OnRemove");
static_assert(sizeof(GCN_QuestSpawn_MiniMapIcon_C_OnRemove) == 0x0000C8, "Wrong size on GCN_QuestSpawn_MiniMapIcon_C_OnRemove");
static_assert(offsetof(GCN_QuestSpawn_MiniMapIcon_C_OnRemove, MyTarget) == 0x000000, "Member 'GCN_QuestSpawn_MiniMapIcon_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_QuestSpawn_MiniMapIcon_C_OnRemove, Parameters) == 0x000008, "Member 'GCN_QuestSpawn_MiniMapIcon_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_QuestSpawn_MiniMapIcon_C_OnRemove, ReturnValue) == 0x0000C0, "Member 'GCN_QuestSpawn_MiniMapIcon_C_OnRemove::ReturnValue' has a wrong offset!");

}

