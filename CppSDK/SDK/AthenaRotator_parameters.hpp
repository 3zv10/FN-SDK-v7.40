﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaRotator

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function AthenaRotator.AthenaRotator_C.ExecuteUbergraph_AthenaRotator
// 0x00B0 (0x00B0 - 0x0000)
struct AthenaRotator_C_ExecuteUbergraph_AthenaRotator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue1;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue1;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button1;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0030(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;                 // 0x006C(0x001C)(NoDestructor)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform1;                // 0x0088(0x001C)(NoDestructor)
	bool                                          CallFunc_IsInteractionEnabled_ReturnValue;         // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInteractionEnabled_ReturnValue1;        // 0x00A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue1;                   // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator) == 0x000008, "Wrong alignment on AthenaRotator_C_ExecuteUbergraph_AthenaRotator");
static_assert(sizeof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator) == 0x0000B0, "Wrong size on AthenaRotator_C_ExecuteUbergraph_AthenaRotator");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, EntryPoint) == 0x000000, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_IsMobileGame_ReturnValue) == 0x000004, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_GetContext_ReturnValue1) == 0x000010, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_GetCurrentInputType_ReturnValue) == 0x000018, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_GetCurrentInputType_ReturnValue1) == 0x000019, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_GetCurrentInputType_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_EqualEqual_ByteByte_ReturnValue1) == 0x00001B, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_EqualEqual_ByteByte_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_BooleanOR_ReturnValue) == 0x00001C, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_ComponentBoundEvent_Button1) == 0x000020, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_ComponentBoundEvent_Button1' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_ComponentBoundEvent_Button) == 0x000028, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_Event_MyGeometry) == 0x000030, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_Event_InDeltaTime) == 0x000068, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_MakeStruct_WidgetTransform) == 0x00006C, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_MakeStruct_WidgetTransform' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_MakeStruct_WidgetTransform1) == 0x000088, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_MakeStruct_WidgetTransform1' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_IsInteractionEnabled_ReturnValue) == 0x0000A4, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_IsInteractionEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_Event_IsDesignTime) == 0x0000A5, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_IsInteractionEnabled_ReturnValue1) == 0x0000A6, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_IsInteractionEnabled_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_BooleanAND_ReturnValue) == 0x0000A7, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_Not_PreBool_ReturnValue) == 0x0000A8, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_IsHovered_ReturnValue) == 0x0000A9, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, CallFunc_BooleanOR_ReturnValue1) == 0x0000AA, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::CallFunc_BooleanOR_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, Temp_byte_Variable) == 0x0000AB, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, Temp_byte_Variable1) == 0x0000AC, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, Temp_bool_Variable) == 0x0000AD, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ExecuteUbergraph_AthenaRotator, K2Node_Select_Default) == 0x0000AE, "Member 'AthenaRotator_C_ExecuteUbergraph_AthenaRotator::K2Node_Select_Default' has a wrong offset!");

// Function AthenaRotator.AthenaRotator_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AthenaRotator_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaRotator_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaRotator_C_PreConstruct");
static_assert(sizeof(AthenaRotator_C_PreConstruct) == 0x000001, "Wrong size on AthenaRotator_C_PreConstruct");
static_assert(offsetof(AthenaRotator_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaRotator_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function AthenaRotator.AthenaRotator_C.Tick
// 0x003C (0x003C - 0x0000)
struct AthenaRotator_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaRotator_C_Tick) == 0x000004, "Wrong alignment on AthenaRotator_C_Tick");
static_assert(sizeof(AthenaRotator_C_Tick) == 0x00003C, "Wrong size on AthenaRotator_C_Tick");
static_assert(offsetof(AthenaRotator_C_Tick, MyGeometry) == 0x000000, "Member 'AthenaRotator_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_Tick, InDeltaTime) == 0x000038, "Member 'AthenaRotator_C_Tick::InDeltaTime' has a wrong offset!");

// Function AthenaRotator.AthenaRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function AthenaRotator.AthenaRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct AthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function AthenaRotator.AthenaRotator_C.ChangeDirection
// 0x0002 (0x0002 - 0x0000)
struct AthenaRotator_C_ChangeDirection final
{
public:
	bool                                          bDirection;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInteractionEnabled_ReturnValue;         // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaRotator_C_ChangeDirection) == 0x000001, "Wrong alignment on AthenaRotator_C_ChangeDirection");
static_assert(sizeof(AthenaRotator_C_ChangeDirection) == 0x000002, "Wrong size on AthenaRotator_C_ChangeDirection");
static_assert(offsetof(AthenaRotator_C_ChangeDirection, bDirection) == 0x000000, "Member 'AthenaRotator_C_ChangeDirection::bDirection' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ChangeDirection, CallFunc_IsInteractionEnabled_ReturnValue) == 0x000001, "Member 'AthenaRotator_C_ChangeDirection::CallFunc_IsInteractionEnabled_ReturnValue' has a wrong offset!");

// Function AthenaRotator.AthenaRotator_C.ConfigureForOneDirectionMode
// 0x0090 (0x0090 - 0x0000)
struct AthenaRotator_C_ConfigureForOneDirectionMode final
{
public:
	bool                                          UseOneDirectionalMode;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_NoResourceBrush_ReturnValue;              // 0x0008(0x0088)()
};
static_assert(alignof(AthenaRotator_C_ConfigureForOneDirectionMode) == 0x000008, "Wrong alignment on AthenaRotator_C_ConfigureForOneDirectionMode");
static_assert(sizeof(AthenaRotator_C_ConfigureForOneDirectionMode) == 0x000090, "Wrong size on AthenaRotator_C_ConfigureForOneDirectionMode");
static_assert(offsetof(AthenaRotator_C_ConfigureForOneDirectionMode, UseOneDirectionalMode) == 0x000000, "Member 'AthenaRotator_C_ConfigureForOneDirectionMode::UseOneDirectionalMode' has a wrong offset!");
static_assert(offsetof(AthenaRotator_C_ConfigureForOneDirectionMode, CallFunc_NoResourceBrush_ReturnValue) == 0x000008, "Member 'AthenaRotator_C_ConfigureForOneDirectionMode::CallFunc_NoResourceBrush_ReturnValue' has a wrong offset!");

}

