﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroLoadoutActiveAbilityDetailColumn

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn
// 0x0008 (0x0008 - 0x0000)
struct HeroLoadoutActiveAbilityDetailColumn_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HeroLoadoutActiveAbilityDetailColumn_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn) == 0x000004, "Wrong alignment on HeroLoadoutActiveAbilityDetailColumn_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn");
static_assert(sizeof(HeroLoadoutActiveAbilityDetailColumn_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn) == 0x000008, "Wrong size on HeroLoadoutActiveAbilityDetailColumn_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn, EntryPoint) == 0x000000, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn::EntryPoint' has a wrong offset!");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn, K2Node_Event_IsDesignTime) == 0x000004, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HeroLoadoutActiveAbilityDetailColumn_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HeroLoadoutActiveAbilityDetailColumn_C_PreConstruct) == 0x000001, "Wrong alignment on HeroLoadoutActiveAbilityDetailColumn_C_PreConstruct");
static_assert(sizeof(HeroLoadoutActiveAbilityDetailColumn_C_PreConstruct) == 0x000001, "Wrong size on HeroLoadoutActiveAbilityDetailColumn_C_PreConstruct");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.UpdateFromStyle
// 0x0010 (0x0010 - 0x0000)
struct HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle final
{
public:
	struct FVector2D                              CallFunc_GetStandardBrushSize_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle) == 0x000004, "Wrong alignment on HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle");
static_assert(sizeof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle) == 0x000010, "Wrong size on HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle, CallFunc_GetStandardBrushSize_ReturnValue) == 0x000000, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle::CallFunc_GetStandardBrushSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle, CallFunc_BreakVector2D_X) == 0x000008, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle, CallFunc_BreakVector2D_Y) == 0x00000C, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromStyle::CallFunc_BreakVector2D_Y' has a wrong offset!");

// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.UpdateFromState
// 0x01B8 (0x01B8 - 0x0000)
struct HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState final
{
public:
	bool                                          CallFunc_IsAbilityUnlocked_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityKit*                        CallFunc_GetAbilityKit_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_NoResourceBrush_ReturnValue;              // 0x0018(0x0088)()
	struct FSlateBrush                            CallFunc_ResizeBrush_ResizedBrush;                 // 0x00A0(0x0088)()
	struct FSlateBrush                            CallFunc_ResizeBrush_ResizedBrush1;                // 0x0128(0x0088)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState) == 0x000008, "Wrong alignment on HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState");
static_assert(sizeof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState) == 0x0001B8, "Wrong size on HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState, CallFunc_IsAbilityUnlocked_ReturnValue) == 0x000000, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState::CallFunc_IsAbilityUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState, CallFunc_GetAbilityKit_ReturnValue) == 0x000008, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState::CallFunc_GetAbilityKit_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState, CallFunc_NoResourceBrush_ReturnValue) == 0x000018, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState::CallFunc_NoResourceBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState, CallFunc_ResizeBrush_ResizedBrush) == 0x0000A0, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState::CallFunc_ResizeBrush_ResizedBrush' has a wrong offset!");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState, CallFunc_ResizeBrush_ResizedBrush1) == 0x000128, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState::CallFunc_ResizeBrush_ResizedBrush1' has a wrong offset!");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState, Temp_byte_Variable) == 0x0001B0, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState, Temp_byte_Variable1) == 0x0001B1, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState, Temp_bool_Variable) == 0x0001B2, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState, K2Node_Select_Default) == 0x0001B3, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_UpdateFromState::K2Node_Select_Default' has a wrong offset!");

// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.SetHero
// 0x0008 (0x0008 - 0x0000)
struct HeroLoadoutActiveAbilityDetailColumn_C_SetHero final
{
public:
	class UFortHero*                              Hero;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeroLoadoutActiveAbilityDetailColumn_C_SetHero) == 0x000008, "Wrong alignment on HeroLoadoutActiveAbilityDetailColumn_C_SetHero");
static_assert(sizeof(HeroLoadoutActiveAbilityDetailColumn_C_SetHero) == 0x000008, "Wrong size on HeroLoadoutActiveAbilityDetailColumn_C_SetHero");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_SetHero, Hero) == 0x000000, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_SetHero::Hero' has a wrong offset!");

// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.GetAbilityKit
// 0x0008 (0x0008 - 0x0000)
struct HeroLoadoutActiveAbilityDetailColumn_C_GetAbilityKit final
{
public:
	class UFortAbilityKit*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeroLoadoutActiveAbilityDetailColumn_C_GetAbilityKit) == 0x000008, "Wrong alignment on HeroLoadoutActiveAbilityDetailColumn_C_GetAbilityKit");
static_assert(sizeof(HeroLoadoutActiveAbilityDetailColumn_C_GetAbilityKit) == 0x000008, "Wrong size on HeroLoadoutActiveAbilityDetailColumn_C_GetAbilityKit");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_GetAbilityKit, ReturnValue) == 0x000000, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_GetAbilityKit::ReturnValue' has a wrong offset!");

// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.IsAbilityUnlocked
// 0x0001 (0x0001 - 0x0000)
struct HeroLoadoutActiveAbilityDetailColumn_C_IsAbilityUnlocked final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HeroLoadoutActiveAbilityDetailColumn_C_IsAbilityUnlocked) == 0x000001, "Wrong alignment on HeroLoadoutActiveAbilityDetailColumn_C_IsAbilityUnlocked");
static_assert(sizeof(HeroLoadoutActiveAbilityDetailColumn_C_IsAbilityUnlocked) == 0x000001, "Wrong size on HeroLoadoutActiveAbilityDetailColumn_C_IsAbilityUnlocked");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_IsAbilityUnlocked, ReturnValue) == 0x000000, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_IsAbilityUnlocked::ReturnValue' has a wrong offset!");

// Function HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C.SetAbilityKit
// 0x0008 (0x0008 - 0x0000)
struct HeroLoadoutActiveAbilityDetailColumn_C_SetAbilityKit final
{
public:
	class UFortAbilityKit*                        AbilityKit_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeroLoadoutActiveAbilityDetailColumn_C_SetAbilityKit) == 0x000008, "Wrong alignment on HeroLoadoutActiveAbilityDetailColumn_C_SetAbilityKit");
static_assert(sizeof(HeroLoadoutActiveAbilityDetailColumn_C_SetAbilityKit) == 0x000008, "Wrong size on HeroLoadoutActiveAbilityDetailColumn_C_SetAbilityKit");
static_assert(offsetof(HeroLoadoutActiveAbilityDetailColumn_C_SetAbilityKit, AbilityKit_0) == 0x000000, "Member 'HeroLoadoutActiveAbilityDetailColumn_C_SetAbilityKit::AbilityKit_0' has a wrong offset!");

}

