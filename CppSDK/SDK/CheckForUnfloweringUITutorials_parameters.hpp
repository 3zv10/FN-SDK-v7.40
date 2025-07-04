﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckForUnfloweringUITutorials

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.ExecuteUbergraph_CheckForUnfloweringUITutorials
// 0x0040 (0x0040 - 0x0000)
struct CheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortScriptedActionParams              K2Node_Event_Params;                               // 0x0008(0x0030)(ConstParm, NoDestructor)
	bool                                          CallFunc_CanRunTutorialQuests_Result;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials) == 0x000008, "Wrong alignment on CheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials");
static_assert(sizeof(CheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials) == 0x000040, "Wrong size on CheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials, EntryPoint) == 0x000000, "Member 'CheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials::EntryPoint' has a wrong offset!");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials, K2Node_Event_Params) == 0x000008, "Member 'CheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials::K2Node_Event_Params' has a wrong offset!");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials, CallFunc_CanRunTutorialQuests_Result) == 0x000038, "Member 'CheckForUnfloweringUITutorials_C_ExecuteUbergraph_CheckForUnfloweringUITutorials::CallFunc_CanRunTutorialQuests_Result' has a wrong offset!");

// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.Execute
// 0x0030 (0x0030 - 0x0000)
struct CheckForUnfloweringUITutorials_C_Execute final
{
public:
	struct FFortScriptedActionParams              Params_0;                                          // 0x0000(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(CheckForUnfloweringUITutorials_C_Execute) == 0x000008, "Wrong alignment on CheckForUnfloweringUITutorials_C_Execute");
static_assert(sizeof(CheckForUnfloweringUITutorials_C_Execute) == 0x000030, "Wrong size on CheckForUnfloweringUITutorials_C_Execute");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_Execute, Params_0) == 0x000000, "Member 'CheckForUnfloweringUITutorials_C_Execute::Params_0' has a wrong offset!");

// Function CheckForUnfloweringUITutorials.CheckForUnfloweringUITutorials_C.CanRunTutorialQuests
// 0x0038 (0x0038 - 0x0000)
struct CheckForUnfloweringUITutorials_C_CanRunTutorialQuests final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetCachedWidget_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDailyRewards_C*                        K2Node_DynamicCast_AsDaily_Rewards;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AreTutorialQuestsActive_ReturnValue;      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCurrentlyRunning_Result;                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CheckForUnfloweringUITutorials_C_CanRunTutorialQuests) == 0x000008, "Wrong alignment on CheckForUnfloweringUITutorials_C_CanRunTutorialQuests");
static_assert(sizeof(CheckForUnfloweringUITutorials_C_CanRunTutorialQuests) == 0x000038, "Wrong size on CheckForUnfloweringUITutorials_C_CanRunTutorialQuests");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_CanRunTutorialQuests, Result) == 0x000000, "Member 'CheckForUnfloweringUITutorials_C_CanRunTutorialQuests::Result' has a wrong offset!");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_CanRunTutorialQuests, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'CheckForUnfloweringUITutorials_C_CanRunTutorialQuests::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_CanRunTutorialQuests, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'CheckForUnfloweringUITutorials_C_CanRunTutorialQuests::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_CanRunTutorialQuests, CallFunc_GetCachedWidget_ReturnValue) == 0x000018, "Member 'CheckForUnfloweringUITutorials_C_CanRunTutorialQuests::CallFunc_GetCachedWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_CanRunTutorialQuests, CallFunc_GetQuestManager_ReturnValue) == 0x000020, "Member 'CheckForUnfloweringUITutorials_C_CanRunTutorialQuests::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_CanRunTutorialQuests, K2Node_DynamicCast_AsDaily_Rewards) == 0x000028, "Member 'CheckForUnfloweringUITutorials_C_CanRunTutorialQuests::K2Node_DynamicCast_AsDaily_Rewards' has a wrong offset!");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_CanRunTutorialQuests, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'CheckForUnfloweringUITutorials_C_CanRunTutorialQuests::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_CanRunTutorialQuests, CallFunc_AreTutorialQuestsActive_ReturnValue) == 0x000031, "Member 'CheckForUnfloweringUITutorials_C_CanRunTutorialQuests::CallFunc_AreTutorialQuestsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_CanRunTutorialQuests, CallFunc_IsCurrentlyRunning_Result) == 0x000032, "Member 'CheckForUnfloweringUITutorials_C_CanRunTutorialQuests::CallFunc_IsCurrentlyRunning_Result' has a wrong offset!");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_CanRunTutorialQuests, CallFunc_Not_PreBool_ReturnValue) == 0x000033, "Member 'CheckForUnfloweringUITutorials_C_CanRunTutorialQuests::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CheckForUnfloweringUITutorials_C_CanRunTutorialQuests, CallFunc_BooleanAND_ReturnValue) == 0x000034, "Member 'CheckForUnfloweringUITutorials_C_CanRunTutorialQuests::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

