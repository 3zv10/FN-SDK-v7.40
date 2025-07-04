﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TopWeaponStatRowEntry

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function TopWeaponStatRowEntry.TopWeaponStatRowEntry_C.ExecuteUbergraph_TopWeaponStatRowEntry
// 0x0004 (0x0004 - 0x0000)
struct TopWeaponStatRowEntry_C_ExecuteUbergraph_TopWeaponStatRowEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TopWeaponStatRowEntry_C_ExecuteUbergraph_TopWeaponStatRowEntry) == 0x000004, "Wrong alignment on TopWeaponStatRowEntry_C_ExecuteUbergraph_TopWeaponStatRowEntry");
static_assert(sizeof(TopWeaponStatRowEntry_C_ExecuteUbergraph_TopWeaponStatRowEntry) == 0x000004, "Wrong size on TopWeaponStatRowEntry_C_ExecuteUbergraph_TopWeaponStatRowEntry");
static_assert(offsetof(TopWeaponStatRowEntry_C_ExecuteUbergraph_TopWeaponStatRowEntry, EntryPoint) == 0x000000, "Member 'TopWeaponStatRowEntry_C_ExecuteUbergraph_TopWeaponStatRowEntry::EntryPoint' has a wrong offset!");

// Function TopWeaponStatRowEntry.TopWeaponStatRowEntry_C.Update
// 0x00F0 (0x00F0 - 0x0000)
struct TopWeaponStatRowEntry_C_Update final
{
public:
	class UAthenaBaseStatView*                    CallFunc_GetBaseStatView_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUIStatStyle                       CallFunc_GetStatStyle_ReturnValue;                 // 0x0008(0x00C0)(ConstParm)
	float                                         CallFunc_GetStat_ReturnValue;                      // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaWeaponStatView*                  K2Node_DynamicCast_AsAthena_Weapon_Stat_View;      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortWeaponItemDefinition*              CallFunc_GetWeaponDefinition_ReturnValue;          // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TopWeaponStatRowEntry_C_Update) == 0x000008, "Wrong alignment on TopWeaponStatRowEntry_C_Update");
static_assert(sizeof(TopWeaponStatRowEntry_C_Update) == 0x0000F0, "Wrong size on TopWeaponStatRowEntry_C_Update");
static_assert(offsetof(TopWeaponStatRowEntry_C_Update, CallFunc_GetBaseStatView_ReturnValue) == 0x000000, "Member 'TopWeaponStatRowEntry_C_Update::CallFunc_GetBaseStatView_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRowEntry_C_Update, CallFunc_GetStatStyle_ReturnValue) == 0x000008, "Member 'TopWeaponStatRowEntry_C_Update::CallFunc_GetStatStyle_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRowEntry_C_Update, CallFunc_GetStat_ReturnValue) == 0x0000C8, "Member 'TopWeaponStatRowEntry_C_Update::CallFunc_GetStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRowEntry_C_Update, K2Node_DynamicCast_AsAthena_Weapon_Stat_View) == 0x0000D0, "Member 'TopWeaponStatRowEntry_C_Update::K2Node_DynamicCast_AsAthena_Weapon_Stat_View' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRowEntry_C_Update, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'TopWeaponStatRowEntry_C_Update::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRowEntry_C_Update, CallFunc_GetWeaponDefinition_ReturnValue) == 0x0000E0, "Member 'TopWeaponStatRowEntry_C_Update::CallFunc_GetWeaponDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(TopWeaponStatRowEntry_C_Update, CallFunc_CreateTemporaryItemInstanceBP_ReturnValue) == 0x0000E8, "Member 'TopWeaponStatRowEntry_C_Update::CallFunc_CreateTemporaryItemInstanceBP_ReturnValue' has a wrong offset!");

}

