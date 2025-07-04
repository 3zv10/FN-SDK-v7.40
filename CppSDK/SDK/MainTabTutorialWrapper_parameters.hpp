﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainTabTutorialWrapper

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.ExecuteUbergraph_MainTabTutorialWrapper
// 0x0018 (0x0018 - 0x0000)
struct MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bEnabled;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_Event_Count;                                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_TutorialObjectiveName;                // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETutorialType                                 K2Node_Event_TutorialType;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper) == 0x000004, "Wrong alignment on MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper");
static_assert(sizeof(MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper) == 0x000018, "Wrong size on MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper");
static_assert(offsetof(MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper, EntryPoint) == 0x000000, "Member 'MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper::EntryPoint' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper, Temp_bool_Variable) == 0x000004, "Member 'MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper, Temp_byte_Variable) == 0x000005, "Member 'MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper, Temp_byte_Variable1) == 0x000006, "Member 'MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper, K2Node_Event_bEnabled) == 0x000007, "Member 'MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper::K2Node_Event_bEnabled' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper, K2Node_Event_Count) == 0x000008, "Member 'MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper::K2Node_Event_Count' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper, K2Node_Event_TutorialObjectiveName) == 0x00000C, "Member 'MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper::K2Node_Event_TutorialObjectiveName' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper, K2Node_Event_TutorialType) == 0x000014, "Member 'MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper::K2Node_Event_TutorialType' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper, K2Node_Select_Default) == 0x000015, "Member 'MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper::K2Node_Select_Default' has a wrong offset!");

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnStartCallout
// 0x000C (0x000C - 0x0000)
struct MainTabTutorialWrapper_C_OnStartCallout final
{
public:
	class FName                                   TutorialObjectiveName;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETutorialType                                 TutorialType;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainTabTutorialWrapper_C_OnStartCallout) == 0x000004, "Wrong alignment on MainTabTutorialWrapper_C_OnStartCallout");
static_assert(sizeof(MainTabTutorialWrapper_C_OnStartCallout) == 0x00000C, "Wrong size on MainTabTutorialWrapper_C_OnStartCallout");
static_assert(offsetof(MainTabTutorialWrapper_C_OnStartCallout, TutorialObjectiveName) == 0x000000, "Member 'MainTabTutorialWrapper_C_OnStartCallout::TutorialObjectiveName' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_OnStartCallout, TutorialType) == 0x000008, "Member 'MainTabTutorialWrapper_C_OnStartCallout::TutorialType' has a wrong offset!");

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnBangStateChanged
// 0x0008 (0x0008 - 0x0000)
struct MainTabTutorialWrapper_C_OnBangStateChanged final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Count;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainTabTutorialWrapper_C_OnBangStateChanged) == 0x000004, "Wrong alignment on MainTabTutorialWrapper_C_OnBangStateChanged");
static_assert(sizeof(MainTabTutorialWrapper_C_OnBangStateChanged) == 0x000008, "Wrong size on MainTabTutorialWrapper_C_OnBangStateChanged");
static_assert(offsetof(MainTabTutorialWrapper_C_OnBangStateChanged, bEnabled) == 0x000000, "Member 'MainTabTutorialWrapper_C_OnBangStateChanged::bEnabled' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_OnBangStateChanged, Count) == 0x000004, "Member 'MainTabTutorialWrapper_C_OnBangStateChanged::Count' has a wrong offset!");

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.CheckFinishTutorialWrapper
// 0x0010 (0x0010 - 0x0000)
struct MainTabTutorialWrapper_C_CheckFinishTutorialWrapper final
{
public:
	class UFortTutorialContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTutorialCalloutVisible_ReturnValue;     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MainTabTutorialWrapper_C_CheckFinishTutorialWrapper) == 0x000008, "Wrong alignment on MainTabTutorialWrapper_C_CheckFinishTutorialWrapper");
static_assert(sizeof(MainTabTutorialWrapper_C_CheckFinishTutorialWrapper) == 0x000010, "Wrong size on MainTabTutorialWrapper_C_CheckFinishTutorialWrapper");
static_assert(offsetof(MainTabTutorialWrapper_C_CheckFinishTutorialWrapper, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'MainTabTutorialWrapper_C_CheckFinishTutorialWrapper::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_CheckFinishTutorialWrapper, CallFunc_IsTutorialCalloutVisible_ReturnValue) == 0x000008, "Member 'MainTabTutorialWrapper_C_CheckFinishTutorialWrapper::CallFunc_IsTutorialCalloutVisible_ReturnValue' has a wrong offset!");

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HandleTutorialCallout
// 0x0140 (0x0140 - 0x0000)
struct MainTabTutorialWrapper_C_HandleTutorialCallout final
{
public:
	class FName                                   TutorialObjectiveName;                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETutorialType                                 TutorialType;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortUITutorialData                    TutorialData;                                      // 0x0010(0x0058)(Edit, BlueprintVisible)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortTutorialContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortUITutorialData                    CallFunc_GetTutorialData_OutTutorialData;          // 0x0080(0x0058)()
	bool                                          CallFunc_GetTutorialData_ReturnValue;              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasValidData_Result;                      // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortToastDisplayInfo                  CallFunc_GetTutorialCalloutData_FortToastDisplayInfo; // 0x00E0(0x0060)()
};
static_assert(alignof(MainTabTutorialWrapper_C_HandleTutorialCallout) == 0x000008, "Wrong alignment on MainTabTutorialWrapper_C_HandleTutorialCallout");
static_assert(sizeof(MainTabTutorialWrapper_C_HandleTutorialCallout) == 0x000140, "Wrong size on MainTabTutorialWrapper_C_HandleTutorialCallout");
static_assert(offsetof(MainTabTutorialWrapper_C_HandleTutorialCallout, TutorialObjectiveName) == 0x000000, "Member 'MainTabTutorialWrapper_C_HandleTutorialCallout::TutorialObjectiveName' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HandleTutorialCallout, TutorialType) == 0x000008, "Member 'MainTabTutorialWrapper_C_HandleTutorialCallout::TutorialType' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HandleTutorialCallout, TutorialData) == 0x000010, "Member 'MainTabTutorialWrapper_C_HandleTutorialCallout::TutorialData' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HandleTutorialCallout, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000068, "Member 'MainTabTutorialWrapper_C_HandleTutorialCallout::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HandleTutorialCallout, CallFunc_GetSelected_ReturnValue) == 0x000069, "Member 'MainTabTutorialWrapper_C_HandleTutorialCallout::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HandleTutorialCallout, CallFunc_GetContext_ReturnValue) == 0x000070, "Member 'MainTabTutorialWrapper_C_HandleTutorialCallout::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HandleTutorialCallout, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'MainTabTutorialWrapper_C_HandleTutorialCallout::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HandleTutorialCallout, CallFunc_GetTutorialData_OutTutorialData) == 0x000080, "Member 'MainTabTutorialWrapper_C_HandleTutorialCallout::CallFunc_GetTutorialData_OutTutorialData' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HandleTutorialCallout, CallFunc_GetTutorialData_ReturnValue) == 0x0000D8, "Member 'MainTabTutorialWrapper_C_HandleTutorialCallout::CallFunc_GetTutorialData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HandleTutorialCallout, CallFunc_HasValidData_Result) == 0x0000D9, "Member 'MainTabTutorialWrapper_C_HandleTutorialCallout::CallFunc_HasValidData_Result' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HandleTutorialCallout, CallFunc_GetTutorialCalloutData_FortToastDisplayInfo) == 0x0000E0, "Member 'MainTabTutorialWrapper_C_HandleTutorialCallout::CallFunc_GetTutorialCalloutData_FortToastDisplayInfo' has a wrong offset!");

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HasValidData
// 0x0068 (0x0068 - 0x0000)
struct MainTabTutorialWrapper_C_HasValidData final
{
public:
	struct FFortUITutorialData                    FortUITutorialData;                                // 0x0000(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Result;                                            // 0x0058(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue1;              // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MainTabTutorialWrapper_C_HasValidData) == 0x000008, "Wrong alignment on MainTabTutorialWrapper_C_HasValidData");
static_assert(sizeof(MainTabTutorialWrapper_C_HasValidData) == 0x000068, "Wrong size on MainTabTutorialWrapper_C_HasValidData");
static_assert(offsetof(MainTabTutorialWrapper_C_HasValidData, FortUITutorialData) == 0x000000, "Member 'MainTabTutorialWrapper_C_HasValidData::FortUITutorialData' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HasValidData, Result) == 0x000058, "Member 'MainTabTutorialWrapper_C_HasValidData::Result' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HasValidData, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'MainTabTutorialWrapper_C_HasValidData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HasValidData, CallFunc_Array_Length_ReturnValue1) == 0x000060, "Member 'MainTabTutorialWrapper_C_HasValidData::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HasValidData, CallFunc_Greater_IntInt_ReturnValue) == 0x000064, "Member 'MainTabTutorialWrapper_C_HasValidData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HasValidData, CallFunc_Greater_IntInt_ReturnValue1) == 0x000065, "Member 'MainTabTutorialWrapper_C_HasValidData::CallFunc_Greater_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_HasValidData, CallFunc_BooleanAND_ReturnValue) == 0x000066, "Member 'MainTabTutorialWrapper_C_HasValidData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.GetTutorialCalloutData
// 0x0158 (0x0158 - 0x0000)
struct MainTabTutorialWrapper_C_GetTutorialCalloutData final
{
public:
	struct FFortUITutorialData                    TutorialData;                                      // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortToastDisplayInfo                  FortToastDisplayInfo;                              // 0x0058(0x0060)(Parm, OutParm)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x00B8(0x0018)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_Array_Get_Item1;                          // 0x00D0(0x0028)(HasGetValueTypeHash)
	struct FFortToastDisplayInfo                  K2Node_MakeStruct_FortToastDisplayInfo;            // 0x00F8(0x0060)()
};
static_assert(alignof(MainTabTutorialWrapper_C_GetTutorialCalloutData) == 0x000008, "Wrong alignment on MainTabTutorialWrapper_C_GetTutorialCalloutData");
static_assert(sizeof(MainTabTutorialWrapper_C_GetTutorialCalloutData) == 0x000158, "Wrong size on MainTabTutorialWrapper_C_GetTutorialCalloutData");
static_assert(offsetof(MainTabTutorialWrapper_C_GetTutorialCalloutData, TutorialData) == 0x000000, "Member 'MainTabTutorialWrapper_C_GetTutorialCalloutData::TutorialData' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_GetTutorialCalloutData, FortToastDisplayInfo) == 0x000058, "Member 'MainTabTutorialWrapper_C_GetTutorialCalloutData::FortToastDisplayInfo' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_GetTutorialCalloutData, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'MainTabTutorialWrapper_C_GetTutorialCalloutData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_GetTutorialCalloutData, CallFunc_Array_Get_Item1) == 0x0000D0, "Member 'MainTabTutorialWrapper_C_GetTutorialCalloutData::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(MainTabTutorialWrapper_C_GetTutorialCalloutData, K2Node_MakeStruct_FortToastDisplayInfo) == 0x0000F8, "Member 'MainTabTutorialWrapper_C_GetTutorialCalloutData::K2Node_MakeStruct_FortToastDisplayInfo' has a wrong offset!");

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.SetParentButton
// 0x0008 (0x0008 - 0x0000)
struct MainTabTutorialWrapper_C_SetParentButton final
{
public:
	class UCommonButton*                          ParentButton_0;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MainTabTutorialWrapper_C_SetParentButton) == 0x000008, "Wrong alignment on MainTabTutorialWrapper_C_SetParentButton");
static_assert(sizeof(MainTabTutorialWrapper_C_SetParentButton) == 0x000008, "Wrong size on MainTabTutorialWrapper_C_SetParentButton");
static_assert(offsetof(MainTabTutorialWrapper_C_SetParentButton, ParentButton_0) == 0x000000, "Member 'MainTabTutorialWrapper_C_SetParentButton::ParentButton_0' has a wrong offset!");

}

