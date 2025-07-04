﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProfileStatsAllStatsSubScreen

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function ProfileStatsAllStatsSubScreen.ProfileStatsAllStatsSubScreen_C.ExecuteUbergraph_ProfileStatsAllStatsSubScreen
// 0x0068 (0x0068 - 0x0000)
struct ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0x0028(0x0010)(ZeroConstructor, ReferenceParm)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	class ULargeStatWidget_C*                     CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWrapBoxSlot*                           CallFunc_AddChildWrapBox_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen) == 0x000008, "Wrong alignment on ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen");
static_assert(sizeof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen) == 0x000068, "Wrong size on ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen, EntryPoint) == 0x000000, "Member 'ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen, Temp_int_Array_Index_Variable) == 0x000004, "Member 'ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen, CallFunc_Add_IntInt_ReturnValue1) == 0x000010, "Member 'ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen, CallFunc_BreakGameplayTagContainer_GameplayTags) == 0x000028, "Member 'ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen::CallFunc_BreakGameplayTagContainer_GameplayTags' has a wrong offset!");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen, CallFunc_GetOwningPlayer_ReturnValue) == 0x000038, "Member 'ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen, CallFunc_Array_Get_Item) == 0x000040, "Member 'ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen, CallFunc_Create_ReturnValue) == 0x000048, "Member 'ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen, CallFunc_AddChildWrapBox_ReturnValue) == 0x000058, "Member 'ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen::CallFunc_AddChildWrapBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'ProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ProfileStatsAllStatsSubScreen.ProfileStatsAllStatsSubScreen_C.HandleBack
// 0x0010 (0x0010 - 0x0000)
struct ProfileStatsAllStatsSubScreen_C_HandleBack final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProfileStatsAllStatsSubScreen_C_HandleBack) == 0x000008, "Wrong alignment on ProfileStatsAllStatsSubScreen_C_HandleBack");
static_assert(sizeof(ProfileStatsAllStatsSubScreen_C_HandleBack) == 0x000010, "Wrong size on ProfileStatsAllStatsSubScreen_C_HandleBack");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_HandleBack, PassThrough) == 0x000000, "Member 'ProfileStatsAllStatsSubScreen_C_HandleBack::PassThrough' has a wrong offset!");
static_assert(offsetof(ProfileStatsAllStatsSubScreen_C_HandleBack, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'ProfileStatsAllStatsSubScreen_C_HandleBack::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

}

