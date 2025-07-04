﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TournamentDateEntry

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function TournamentDateEntry.TournamentDateEntry_C.ExecuteUbergraph_TournamentDateEntry
// 0x0360 (0x0360 - 0x0000)
struct TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetEventEndTime_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetEventTimeAsText_ReturnValue;           // 0x0018(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A[0x2];                                       // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x007C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E[0x2];                                       // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortTournamentDisplayInfo             K2Node_CustomEvent_showdownData;                   // 0x0090(0x0170)(ConstParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0200(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor1;                     // 0x0228(0x0028)()
	EFortShowdownEventState                       CallFunc_GetEventState_ReturnValue;                // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_251[0x3];                                      // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25A[0x2];                                      // 0x025A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable1;                                // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_262[0x6];                                      // 0x0262(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select1_Default;                            // 0x0268(0x0028)()
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_294[0x4];                                      // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable3;                               // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A1[0x3];                                      // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select2_Default;                            // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetEventBeginTime_ReturnValue;            // 0x02A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select3_Default;                            // 0x02B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetEventDateAsText_ReturnValue;           // 0x02C0(0x0018)()
	struct FDateTime                              CallFunc_GetEventBeginTime_ReturnValue1;           // 0x02D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetEventTimeAsText_ReturnValue1;          // 0x02E0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x02F8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0338(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0348(0x0018)()
};
static_assert(alignof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry) == 0x000008, "Wrong alignment on TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry");
static_assert(sizeof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry) == 0x000360, "Wrong size on TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, EntryPoint) == 0x000000, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventEndTime_ReturnValue) == 0x000008, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_bool_Variable) == 0x000010, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventTimeAsText_ReturnValue) == 0x000018, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventTimeAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_byte_Variable) == 0x000030, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_byte_Variable1) == 0x000078, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_bool_Variable1) == 0x000079, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_struct_Variable) == 0x00007C, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_bool_Variable2) == 0x00008C, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Event_IsDesignTime) == 0x00008D, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_CustomEvent_showdownData) == 0x000090, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_CustomEvent_showdownData' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_SlateColor) == 0x000200, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_SlateColor1) == 0x000228, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_SlateColor1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventState_ReturnValue) == 0x000250, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventState_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_int_Variable) == 0x000254, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000258, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_EqualEqual_ByteByte_ReturnValue1) == 0x000259, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_EqualEqual_ByteByte_ReturnValue1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_int_Variable1) == 0x00025C, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_int_Variable1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_BooleanOR_ReturnValue) == 0x000260, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Select_Default) == 0x000261, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Select1_Default) == 0x000268, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_RandomFloatInRange_ReturnValue) == 0x000290, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000298, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, Temp_bool_Variable3) == 0x0002A0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::Temp_bool_Variable3' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Select2_Default) == 0x0002A4, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventBeginTime_ReturnValue) == 0x0002A8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventBeginTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_Select3_Default) == 0x0002B0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_Select3_Default' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventDateAsText_ReturnValue) == 0x0002C0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventDateAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventBeginTime_ReturnValue1) == 0x0002D8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventBeginTime_ReturnValue1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_GetEventTimeAsText_ReturnValue1) == 0x0002E0, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_GetEventTimeAsText_ReturnValue1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeStruct_FormatArgumentData1) == 0x0002F8, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeStruct_FormatArgumentData1' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, K2Node_MakeArray_Array) == 0x000338, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry, CallFunc_Format_ReturnValue) == 0x000348, "Member 'TournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function TournamentDateEntry.TournamentDateEntry_C.EventColor
// 0x0170 (0x0170 - 0x0000)
struct TournamentDateEntry_C_EventColor final
{
public:
	struct FFortTournamentDisplayInfo             showdownData;                                      // 0x0000(0x0170)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(TournamentDateEntry_C_EventColor) == 0x000008, "Wrong alignment on TournamentDateEntry_C_EventColor");
static_assert(sizeof(TournamentDateEntry_C_EventColor) == 0x000170, "Wrong size on TournamentDateEntry_C_EventColor");
static_assert(offsetof(TournamentDateEntry_C_EventColor, showdownData) == 0x000000, "Member 'TournamentDateEntry_C_EventColor::showdownData' has a wrong offset!");

// Function TournamentDateEntry.TournamentDateEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct TournamentDateEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TournamentDateEntry_C_PreConstruct) == 0x000001, "Wrong alignment on TournamentDateEntry_C_PreConstruct");
static_assert(sizeof(TournamentDateEntry_C_PreConstruct) == 0x000001, "Wrong size on TournamentDateEntry_C_PreConstruct");
static_assert(offsetof(TournamentDateEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'TournamentDateEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

