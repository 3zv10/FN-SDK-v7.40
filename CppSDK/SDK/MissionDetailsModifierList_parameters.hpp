﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionDetailsModifierList

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MissionDetailsModifierList.MissionDetailsModifierList_C.PopulateModifiers
// 0x02C8 (0x02C8 - 0x0000)
struct MissionDetailsModifierList_C_PopulateModifiers final
{
public:
	bool                                          UseTrunctatedList;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 NameTextStyle;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 DescriptionTextStyle;                              // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show_Descriptions;                                 // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortGameplayModifierItemDefinition*> ModifierItems;                                // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                          UseSmallIcons;                                     // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrIndex;                                         // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionDetailsModifierRow_C*           CurrRow;                                           // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DisplayMoreThreshold;                              // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56[0x2];                                       // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue2;                // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue2;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue3;                  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetLargePreviewImage_ReturnValue;         // 0x0078(0x0028)(HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_GetSmallPreviewImageBrush_ReturnValue;    // 0x00A0(0x0088)()
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue;  // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_132[0x6];                                      // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue3;                // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue4;                  // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGameplayModifierItemDefinition*    CallFunc_Array_Get_Item1;                          // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetLargePreviewImage_ReturnValue1;        // 0x0158(0x0028)(HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetSmallPreviewImageBrush_ReturnValue1;   // 0x0188(0x0088)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetBrushResourceAsTexture2D_ReturnValue1; // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetShortDescription_ReturnValue;          // 0x0220(0x0018)()
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0238(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue1;                 // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_252[0x2];                                      // 0x0252(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable1;                                // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0258(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionDetailsModifierRow_C*           K2Node_DynamicCast_AsMission_Details_Modifier_Row; // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue1;            // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26A[0x2];                                      // 0x026A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue5;                  // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue2;                 // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_272[0x6];                                      // 0x0272(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue1;                  // 0x0278(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMissionDetailsModifierRow_C*           K2Node_DynamicCast_AsMission_Details_Modifier_Row1; // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_289[0x3];                                      // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable2;                                // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue1;            // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue1;             // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable3;                                // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue2;            // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A1[0x3];                                      // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable4;                                // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable1;                              // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable5;                                // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x02B4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MissionDetailsModifierList_C_PopulateModifiers) == 0x000008, "Wrong alignment on MissionDetailsModifierList_C_PopulateModifiers");
static_assert(sizeof(MissionDetailsModifierList_C_PopulateModifiers) == 0x0002C8, "Wrong size on MissionDetailsModifierList_C_PopulateModifiers");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, UseTrunctatedList) == 0x000000, "Member 'MissionDetailsModifierList_C_PopulateModifiers::UseTrunctatedList' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, NameTextStyle) == 0x000008, "Member 'MissionDetailsModifierList_C_PopulateModifiers::NameTextStyle' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, DescriptionTextStyle) == 0x000010, "Member 'MissionDetailsModifierList_C_PopulateModifiers::DescriptionTextStyle' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Show_Descriptions) == 0x000018, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Show_Descriptions' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, ModifierItems) == 0x000020, "Member 'MissionDetailsModifierList_C_PopulateModifiers::ModifierItems' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, UseSmallIcons) == 0x000030, "Member 'MissionDetailsModifierList_C_PopulateModifiers::UseSmallIcons' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CurrIndex) == 0x000034, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CurrIndex' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CurrRow) == 0x000038, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CurrRow' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, DisplayMoreThreshold) == 0x000040, "Member 'MissionDetailsModifierList_C_PopulateModifiers::DisplayMoreThreshold' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Add_IntInt_ReturnValue1) == 0x000048, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Array_Length_ReturnValue1) == 0x000050, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Greater_IntInt_ReturnValue) == 0x000054, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000055, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Array_Length_ReturnValue2) == 0x000058, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Array_Length_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Add_IntInt_ReturnValue2) == 0x00005C, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Add_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_int_Variable) == 0x000064, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Array_Get_Item) == 0x000068, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Add_IntInt_ReturnValue3) == 0x000070, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Add_IntInt_ReturnValue3' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetLargePreviewImage_ReturnValue) == 0x000078, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetLargePreviewImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetSmallPreviewImageBrush_ReturnValue) == 0x0000A0, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetSmallPreviewImageBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetBrushResourceAsTexture2D_ReturnValue) == 0x000128, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetBrushResourceAsTexture2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Not_PreBool_ReturnValue) == 0x000130, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_bool_Variable) == 0x000131, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000138, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Array_Length_ReturnValue3) == 0x000140, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Array_Length_ReturnValue3' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Add_IntInt_ReturnValue4) == 0x000144, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Add_IntInt_ReturnValue4' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Less_IntInt_ReturnValue1) == 0x000148, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Array_Get_Item1) == 0x000150, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetLargePreviewImage_ReturnValue1) == 0x000158, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetLargePreviewImage_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetChildrenCount_ReturnValue) == 0x000180, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetSmallPreviewImageBrush_ReturnValue1) == 0x000188, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetSmallPreviewImageBrush_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Subtract_IntInt_ReturnValue) == 0x000210, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetBrushResourceAsTexture2D_ReturnValue1) == 0x000218, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetBrushResourceAsTexture2D_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetShortDescription_ReturnValue) == 0x000220, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetShortDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetDisplayName_ReturnValue) == 0x000238, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Not_PreBool_ReturnValue1) == 0x000250, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Not_PreBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_BooleanAND_ReturnValue) == 0x000251, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_int_Variable1) == 0x000254, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_int_Variable1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetChildAt_ReturnValue) == 0x000258, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, K2Node_DynamicCast_AsMission_Details_Modifier_Row) == 0x000260, "Member 'MissionDetailsModifierList_C_PopulateModifiers::K2Node_DynamicCast_AsMission_Details_Modifier_Row' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, K2Node_DynamicCast_bSuccess) == 0x000268, "Member 'MissionDetailsModifierList_C_PopulateModifiers::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_LessEqual_IntInt_ReturnValue1) == 0x000269, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_LessEqual_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Add_IntInt_ReturnValue5) == 0x00026C, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Add_IntInt_ReturnValue5' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Not_PreBool_ReturnValue2) == 0x000270, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Not_PreBool_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_BooleanOR_ReturnValue) == 0x000271, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetChildAt_ReturnValue1) == 0x000278, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetChildAt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, K2Node_DynamicCast_AsMission_Details_Modifier_Row1) == 0x000280, "Member 'MissionDetailsModifierList_C_PopulateModifiers::K2Node_DynamicCast_AsMission_Details_Modifier_Row1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, K2Node_DynamicCast_bSuccess1) == 0x000288, "Member 'MissionDetailsModifierList_C_PopulateModifiers::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_int_Variable2) == 0x00028C, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_int_Variable2' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_float_Variable) == 0x000290, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_GetChildrenCount_ReturnValue1) == 0x000294, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_GetChildrenCount_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_Subtract_IntInt_ReturnValue1) == 0x000298, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_Subtract_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_int_Variable3) == 0x00029C, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_int_Variable3' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, CallFunc_LessEqual_IntInt_ReturnValue2) == 0x0002A0, "Member 'MissionDetailsModifierList_C_PopulateModifiers::CallFunc_LessEqual_IntInt_ReturnValue2' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_int_Variable4) == 0x0002A4, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_int_Variable4' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_float_Variable1) == 0x0002A8, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_float_Variable1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, K2Node_Select_Default) == 0x0002AC, "Member 'MissionDetailsModifierList_C_PopulateModifiers::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, Temp_int_Variable5) == 0x0002B0, "Member 'MissionDetailsModifierList_C_PopulateModifiers::Temp_int_Variable5' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_PopulateModifiers, K2Node_MakeStruct_Margin) == 0x0002B4, "Member 'MissionDetailsModifierList_C_PopulateModifiers::K2Node_MakeStruct_Margin' has a wrong offset!");

// Function MissionDetailsModifierList.MissionDetailsModifierList_C.CreateDebugModifiers
// 0x0078 (0x0078 - 0x0000)
struct MissionDetailsModifierList_C_CreateDebugModifiers final
{
public:
	TArray<class UFortGameplayModifierItemDefinition*> Modifiers;                                    // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor)
	class UFortGameplayModifierItemDefinition*    DebugMod8;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    DebugMod7;                                         // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    DebugMod6;                                         // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    DebugMod5;                                         // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    DebugMod4;                                         // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    DebugMod3;                                         // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    DebugMod2;                                         // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayModifierItemDefinition*    DebugMod1;                                         // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable1;                                // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortGameplayModifierItemDefinition* K2Node_Select_Default;                          // 0x0060(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue1;        // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MissionDetailsModifierList_C_CreateDebugModifiers) == 0x000008, "Wrong alignment on MissionDetailsModifierList_C_CreateDebugModifiers");
static_assert(sizeof(MissionDetailsModifierList_C_CreateDebugModifiers) == 0x000078, "Wrong size on MissionDetailsModifierList_C_CreateDebugModifiers");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, Modifiers) == 0x000000, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::Modifiers' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod8) == 0x000010, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod8' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod7) == 0x000018, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod7' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod6) == 0x000020, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod6' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod5) == 0x000028, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod5' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod4) == 0x000030, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod4' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod3) == 0x000038, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod3' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod2) == 0x000040, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod2' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, DebugMod1) == 0x000048, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::DebugMod1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, Temp_int_Variable) == 0x000050, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, Temp_int_Variable1) == 0x000054, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::Temp_int_Variable1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, CallFunc_RandomIntegerInRange_ReturnValue) == 0x00005C, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, K2Node_Select_Default) == 0x000060, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, CallFunc_Array_Add_ReturnValue) == 0x000068, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, CallFunc_RandomIntegerInRange_ReturnValue1) == 0x00006C, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::CallFunc_RandomIntegerInRange_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MissionDetailsModifierList_C_CreateDebugModifiers, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000070, "Member 'MissionDetailsModifierList_C_CreateDebugModifiers::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

