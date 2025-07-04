﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DA_Glider_Item

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function DA_Glider_Item.DA_Glider_Item_C.ExecuteUbergraph_DA_Glider_Item
// 0x0010 (0x0010 - 0x0000)
struct DA_Glider_Item_C_ExecuteUbergraph_DA_Glider_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortDecoHelper*                        K2Node_Event_FortDecoHelper;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DA_Glider_Item_C_ExecuteUbergraph_DA_Glider_Item) == 0x000008, "Wrong alignment on DA_Glider_Item_C_ExecuteUbergraph_DA_Glider_Item");
static_assert(sizeof(DA_Glider_Item_C_ExecuteUbergraph_DA_Glider_Item) == 0x000010, "Wrong size on DA_Glider_Item_C_ExecuteUbergraph_DA_Glider_Item");
static_assert(offsetof(DA_Glider_Item_C_ExecuteUbergraph_DA_Glider_Item, EntryPoint) == 0x000000, "Member 'DA_Glider_Item_C_ExecuteUbergraph_DA_Glider_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(DA_Glider_Item_C_ExecuteUbergraph_DA_Glider_Item, K2Node_Event_FortDecoHelper) == 0x000008, "Member 'DA_Glider_Item_C_ExecuteUbergraph_DA_Glider_Item::K2Node_Event_FortDecoHelper' has a wrong offset!");

// Function DA_Glider_Item.DA_Glider_Item_C.BPPressTrigger
// 0x0008 (0x0008 - 0x0000)
struct DA_Glider_Item_C_BPPressTrigger final
{
public:
	class AFortDecoHelper*                        FortDecoHelper;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DA_Glider_Item_C_BPPressTrigger) == 0x000008, "Wrong alignment on DA_Glider_Item_C_BPPressTrigger");
static_assert(sizeof(DA_Glider_Item_C_BPPressTrigger) == 0x000008, "Wrong size on DA_Glider_Item_C_BPPressTrigger");
static_assert(offsetof(DA_Glider_Item_C_BPPressTrigger, FortDecoHelper) == 0x000000, "Member 'DA_Glider_Item_C_BPPressTrigger::FortDecoHelper' has a wrong offset!");

// Function DA_Glider_Item.DA_Glider_Item_C.RaiseUsageError
// 0x0038 (0x0038 - 0x0000)
struct DA_Glider_Item_C_RaiseUsageError final
{
public:
	struct FGameplayTagContainer                  FailedReason;                                      // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DA_Glider_Item_C_RaiseUsageError) == 0x000008, "Wrong alignment on DA_Glider_Item_C_RaiseUsageError");
static_assert(sizeof(DA_Glider_Item_C_RaiseUsageError) == 0x000038, "Wrong size on DA_Glider_Item_C_RaiseUsageError");
static_assert(offsetof(DA_Glider_Item_C_RaiseUsageError, FailedReason) == 0x000000, "Member 'DA_Glider_Item_C_RaiseUsageError::FailedReason' has a wrong offset!");
static_assert(offsetof(DA_Glider_Item_C_RaiseUsageError, CallFunc_GetInstigator_ReturnValue) == 0x000020, "Member 'DA_Glider_Item_C_RaiseUsageError::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(DA_Glider_Item_C_RaiseUsageError, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000028, "Member 'DA_Glider_Item_C_RaiseUsageError::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(DA_Glider_Item_C_RaiseUsageError, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'DA_Glider_Item_C_RaiseUsageError::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function DA_Glider_Item.DA_Glider_Item_C.IsOnGround
// 0x0020 (0x0020 - 0x0000)
struct DA_Glider_Item_C_IsOnGround final
{
public:
	bool                                          bOnGround;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DA_Glider_Item_C_IsOnGround) == 0x000008, "Wrong alignment on DA_Glider_Item_C_IsOnGround");
static_assert(sizeof(DA_Glider_Item_C_IsOnGround) == 0x000020, "Wrong size on DA_Glider_Item_C_IsOnGround");
static_assert(offsetof(DA_Glider_Item_C_IsOnGround, bOnGround) == 0x000000, "Member 'DA_Glider_Item_C_IsOnGround::bOnGround' has a wrong offset!");
static_assert(offsetof(DA_Glider_Item_C_IsOnGround, CallFunc_GetInstigator_ReturnValue) == 0x000008, "Member 'DA_Glider_Item_C_IsOnGround::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(DA_Glider_Item_C_IsOnGround, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000010, "Member 'DA_Glider_Item_C_IsOnGround::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(DA_Glider_Item_C_IsOnGround, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'DA_Glider_Item_C_IsOnGround::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DA_Glider_Item_C_IsOnGround, CallFunc_IsFalling_ReturnValue) == 0x000019, "Member 'DA_Glider_Item_C_IsOnGround::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(DA_Glider_Item_C_IsOnGround, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'DA_Glider_Item_C_IsOnGround::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

