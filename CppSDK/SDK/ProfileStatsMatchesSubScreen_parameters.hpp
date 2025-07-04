﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProfileStatsMatchesSubScreen

#include "Basic.hpp"


namespace SDK::Params
{

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.ExecuteUbergraph_ProfileStatsMatchesSubScreen
// 0x0098 (0x0098 - 0x0000)
struct ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_ComponentBoundEvent_Item;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsSelected;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaMatchStatView*                   K2Node_DynamicCast_AsAthena_Match_Stat_View;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UAthenaBaseStatView* StatView)> K2Node_CreateDelegate_OutputDelegate;       // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate1;             // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaBaseStatView*                    K2Node_CustomEvent_StatView;                       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMatchSetStatView*                K2Node_DynamicCast_AsAthena_Match_Set_Stat_View;   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAthenaMatchStatView*>           CallFunc_GetBestMatchViews_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, ReferenceParm)
	class UObject*                                CallFunc_GetItemAt_ReturnValue;                    // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMatchStatView*                   K2Node_DynamicCast_AsAthena_Match_Stat_View1;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_ComponentBoundEvent_Item1;                  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsHovered;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen) == 0x000008, "Wrong alignment on ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen");
static_assert(sizeof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen) == 0x000098, "Wrong size on ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, EntryPoint) == 0x000000, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, K2Node_ComponentBoundEvent_Item) == 0x000008, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::K2Node_ComponentBoundEvent_Item' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, K2Node_ComponentBoundEvent_bIsSelected) == 0x000010, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::K2Node_ComponentBoundEvent_bIsSelected' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, K2Node_DynamicCast_AsAthena_Match_Stat_View) == 0x000018, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::K2Node_DynamicCast_AsAthena_Match_Stat_View' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, K2Node_CreateDelegate_OutputDelegate1) == 0x000034, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, K2Node_CustomEvent_StatView) == 0x000048, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::K2Node_CustomEvent_StatView' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, K2Node_DynamicCast_AsAthena_Match_Set_Stat_View) == 0x000050, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::K2Node_DynamicCast_AsAthena_Match_Set_Stat_View' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, K2Node_DynamicCast_bSuccess1) == 0x000058, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, CallFunc_GetBestMatchViews_ReturnValue) == 0x000060, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::CallFunc_GetBestMatchViews_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, CallFunc_GetItemAt_ReturnValue) == 0x000070, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::CallFunc_GetItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, K2Node_DynamicCast_AsAthena_Match_Stat_View1) == 0x000078, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::K2Node_DynamicCast_AsAthena_Match_Stat_View1' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, K2Node_DynamicCast_bSuccess2) == 0x000080, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::K2Node_DynamicCast_bSuccess2' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, K2Node_ComponentBoundEvent_Item1) == 0x000088, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::K2Node_ComponentBoundEvent_Item1' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen, K2Node_ComponentBoundEvent_bIsHovered) == 0x000090, "Member 'ProfileStatsMatchesSubScreen_C_ExecuteUbergraph_ProfileStatsMatchesSubScreen::K2Node_ComponentBoundEvent_bIsHovered' has a wrong offset!");

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.BndEvt__MatchList_K2Node_ComponentBoundEvent_326_OnListItemSelectionChangedDynamic__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_326_OnListItemSelectionChangedDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSelected;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_326_OnListItemSelectionChangedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_326_OnListItemSelectionChangedDynamic__DelegateSignature");
static_assert(sizeof(ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_326_OnListItemSelectionChangedDynamic__DelegateSignature) == 0x000010, "Wrong size on ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_326_OnListItemSelectionChangedDynamic__DelegateSignature");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_326_OnListItemSelectionChangedDynamic__DelegateSignature, Item) == 0x000000, "Member 'ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_326_OnListItemSelectionChangedDynamic__DelegateSignature::Item' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_326_OnListItemSelectionChangedDynamic__DelegateSignature, bIsSelected) == 0x000008, "Member 'ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_326_OnListItemSelectionChangedDynamic__DelegateSignature::bIsSelected' has a wrong offset!");

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.BndEvt__MatchList_K2Node_ComponentBoundEvent_47_OnListViewItemClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_47_OnListViewItemClicked__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsHovered;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_47_OnListViewItemClicked__DelegateSignature) == 0x000008, "Wrong alignment on ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_47_OnListViewItemClicked__DelegateSignature");
static_assert(sizeof(ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_47_OnListViewItemClicked__DelegateSignature) == 0x000010, "Wrong size on ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_47_OnListViewItemClicked__DelegateSignature");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_47_OnListViewItemClicked__DelegateSignature, Item) == 0x000000, "Member 'ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_47_OnListViewItemClicked__DelegateSignature::Item' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_47_OnListViewItemClicked__DelegateSignature, bIsHovered) == 0x000008, "Member 'ProfileStatsMatchesSubScreen_C_BndEvt__MatchList_K2Node_ComponentBoundEvent_47_OnListViewItemClicked__DelegateSignature::bIsHovered' has a wrong offset!");

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.HandleStatViewChanged
// 0x0008 (0x0008 - 0x0000)
struct ProfileStatsMatchesSubScreen_C_HandleStatViewChanged final
{
public:
	class UAthenaBaseStatView*                    StatView;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProfileStatsMatchesSubScreen_C_HandleStatViewChanged) == 0x000008, "Wrong alignment on ProfileStatsMatchesSubScreen_C_HandleStatViewChanged");
static_assert(sizeof(ProfileStatsMatchesSubScreen_C_HandleStatViewChanged) == 0x000008, "Wrong size on ProfileStatsMatchesSubScreen_C_HandleStatViewChanged");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_HandleStatViewChanged, StatView) == 0x000000, "Member 'ProfileStatsMatchesSubScreen_C_HandleStatViewChanged::StatView' has a wrong offset!");

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.HandleBack
// 0x0010 (0x0010 - 0x0000)
struct ProfileStatsMatchesSubScreen_C_HandleBack final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProfileStatsMatchesSubScreen_C_HandleBack) == 0x000008, "Wrong alignment on ProfileStatsMatchesSubScreen_C_HandleBack");
static_assert(sizeof(ProfileStatsMatchesSubScreen_C_HandleBack) == 0x000010, "Wrong size on ProfileStatsMatchesSubScreen_C_HandleBack");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_HandleBack, PassThrough) == 0x000000, "Member 'ProfileStatsMatchesSubScreen_C_HandleBack::PassThrough' has a wrong offset!");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_HandleBack, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'ProfileStatsMatchesSubScreen_C_HandleBack::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

// Function ProfileStatsMatchesSubScreen.ProfileStatsMatchesSubScreen_C.SetMatches
// 0x0010 (0x0010 - 0x0000)
struct ProfileStatsMatchesSubScreen_C_SetMatches final
{
public:
	TArray<class UObject*>                        InDataProvider;                                    // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(ProfileStatsMatchesSubScreen_C_SetMatches) == 0x000008, "Wrong alignment on ProfileStatsMatchesSubScreen_C_SetMatches");
static_assert(sizeof(ProfileStatsMatchesSubScreen_C_SetMatches) == 0x000010, "Wrong size on ProfileStatsMatchesSubScreen_C_SetMatches");
static_assert(offsetof(ProfileStatsMatchesSubScreen_C_SetMatches, InDataProvider) == 0x000000, "Member 'ProfileStatsMatchesSubScreen_C_SetMatches::InDataProvider' has a wrong offset!");

}

