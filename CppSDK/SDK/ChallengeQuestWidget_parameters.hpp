﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeQuestWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.SetQuestItem
// 0x0138 (0x0138 - 0x0000)
struct ChallengeQuestWidget_C_SetQuestItem final
{
public:
	class UFortQuestItem*                         Quest_0;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*               QuestDefinition_0;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortChallengeBundleInfo*               Bundle;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRewardInfo                        CallFunc_GetChallengeChainRewardInfo_ReturnValue;  // 0x0020(0x0030)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRewardInfo                        CallFunc_GetRewardInfo_BP_ReturnValue;             // 0x0058(0x0030)()
	bool                                          CallFunc_HasAnyAssociatedSecretQuestsAndAllAreComplete_ReturnValue; // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IsQuestDefALinearChain_ChainLength;       // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_IsQuestDefALinearChain_CurrentChainIndex; // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsQuestDefALinearChain_ReturnValue;       // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRewardInfo                        CallFunc_GetRewardInfo_ReturnValue;                // 0x0098(0x0030)()
	float                                         Temp_float_Variable;                               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_IsLinearChainQuest_ChainLength;           // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_IsLinearChainQuest_CurrentChainIndex;     // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLinearChainQuest_ReturnValue;           // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_IsLinearChainQuest_ChainLength1;          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_IsLinearChainQuest_CurrentChainIndex1;    // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLinearChainQuest_ReturnValue1;          // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortChallengeBundleInfoLockedReason   CallFunc_IsUnlocked_LockedReason;                  // 0x00E8(0x0028)()
	bool                                          CallFunc_IsUnlocked_ReturnValue;                   // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_ContainsReward_ReturnValue;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable1;                              // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortQuestState                               CallFunc_GetQuestState_ReturnValue;                // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Select1_Default;                            // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeQuestWidget_C_SetQuestItem) == 0x000008, "Wrong alignment on ChallengeQuestWidget_C_SetQuestItem");
static_assert(sizeof(ChallengeQuestWidget_C_SetQuestItem) == 0x000138, "Wrong size on ChallengeQuestWidget_C_SetQuestItem");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, Quest_0) == 0x000000, "Member 'ChallengeQuestWidget_C_SetQuestItem::Quest_0' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, QuestDefinition_0) == 0x000008, "Member 'ChallengeQuestWidget_C_SetQuestItem::QuestDefinition_0' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, Bundle) == 0x000010, "Member 'ChallengeQuestWidget_C_SetQuestItem::Bundle' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, Temp_bool_Variable) == 0x000018, "Member 'ChallengeQuestWidget_C_SetQuestItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, Temp_byte_Variable) == 0x000019, "Member 'ChallengeQuestWidget_C_SetQuestItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, Temp_byte_Variable1) == 0x00001A, "Member 'ChallengeQuestWidget_C_SetQuestItem::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_GetChallengeChainRewardInfo_ReturnValue) == 0x000020, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_GetChallengeChainRewardInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_GetRewardInfo_BP_ReturnValue) == 0x000058, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_GetRewardInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_HasAnyAssociatedSecretQuestsAndAllAreComplete_ReturnValue) == 0x000088, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_HasAnyAssociatedSecretQuestsAndAllAreComplete_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_IsQuestDefALinearChain_ChainLength) == 0x00008C, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_IsQuestDefALinearChain_ChainLength' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_IsQuestDefALinearChain_CurrentChainIndex) == 0x000090, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_IsQuestDefALinearChain_CurrentChainIndex' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_IsQuestDefALinearChain_ReturnValue) == 0x000094, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_IsQuestDefALinearChain_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_GetRewardInfo_ReturnValue) == 0x000098, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_GetRewardInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, Temp_float_Variable) == 0x0000C8, "Member 'ChallengeQuestWidget_C_SetQuestItem::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_IsLinearChainQuest_ChainLength) == 0x0000CC, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_IsLinearChainQuest_ChainLength' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_IsLinearChainQuest_CurrentChainIndex) == 0x0000D0, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_IsLinearChainQuest_CurrentChainIndex' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_IsLinearChainQuest_ReturnValue) == 0x0000D4, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_IsLinearChainQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_IsLinearChainQuest_ChainLength1) == 0x0000D8, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_IsLinearChainQuest_ChainLength1' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_IsLinearChainQuest_CurrentChainIndex1) == 0x0000DC, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_IsLinearChainQuest_CurrentChainIndex1' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_IsLinearChainQuest_ReturnValue1) == 0x0000E0, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_IsLinearChainQuest_ReturnValue1' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_IsUnlocked_LockedReason) == 0x0000E8, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_IsUnlocked_LockedReason' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_IsUnlocked_ReturnValue) == 0x000110, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_IsUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_MakeLiteralString_ReturnValue) == 0x000118, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_ContainsReward_ReturnValue) == 0x000128, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_ContainsReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, Temp_float_Variable1) == 0x00012C, "Member 'ChallengeQuestWidget_C_SetQuestItem::Temp_float_Variable1' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, K2Node_Select_Default) == 0x000130, "Member 'ChallengeQuestWidget_C_SetQuestItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, CallFunc_GetQuestState_ReturnValue) == 0x000131, "Member 'ChallengeQuestWidget_C_SetQuestItem::CallFunc_GetQuestState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, Temp_bool_Variable1) == 0x000132, "Member 'ChallengeQuestWidget_C_SetQuestItem::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, K2Node_SwitchEnum_CmpSuccess) == 0x000133, "Member 'ChallengeQuestWidget_C_SetQuestItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_SetQuestItem, K2Node_Select1_Default) == 0x000134, "Member 'ChallengeQuestWidget_C_SetQuestItem::K2Node_Select1_Default' has a wrong offset!");

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateProgress
// 0x0118 (0x0118 - 0x0000)
struct ChallengeQuestWidget_C_UpdateProgress final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortQuestState                               CallFunc_GetQuestState_ReturnValue;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestVisualStyle                             CallFunc_GetVisualStyle_ReturnValue;               // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetAchievedCount_OutTotalAchievedCount;   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAchievedCount_OutTotalRequiredCount;   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestVisualStyle                             Temp_byte_Variable4;                               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0040)(HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x0078(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x0090(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E0(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x00F8(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select1_Default;                            // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeQuestWidget_C_UpdateProgress) == 0x000008, "Wrong alignment on ChallengeQuestWidget_C_UpdateProgress");
static_assert(sizeof(ChallengeQuestWidget_C_UpdateProgress) == 0x000118, "Wrong size on ChallengeQuestWidget_C_UpdateProgress");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, Temp_byte_Variable) == 0x000000, "Member 'ChallengeQuestWidget_C_UpdateProgress::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, Temp_byte_Variable1) == 0x000001, "Member 'ChallengeQuestWidget_C_UpdateProgress::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, Temp_bool_Variable) == 0x000002, "Member 'ChallengeQuestWidget_C_UpdateProgress::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, Temp_byte_Variable2) == 0x000003, "Member 'ChallengeQuestWidget_C_UpdateProgress::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, Temp_byte_Variable3) == 0x000004, "Member 'ChallengeQuestWidget_C_UpdateProgress::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_GetQuestState_ReturnValue) == 0x000005, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_GetQuestState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_GetVisualStyle_ReturnValue) == 0x000006, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_GetVisualStyle_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, K2Node_SwitchEnum_CmpSuccess) == 0x000007, "Member 'ChallengeQuestWidget_C_UpdateProgress::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_GetAchievedCount_OutTotalAchievedCount) == 0x000008, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_GetAchievedCount_OutTotalAchievedCount' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_GetAchievedCount_OutTotalRequiredCount) == 0x00000C, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_GetAchievedCount_OutTotalRequiredCount' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, Temp_byte_Variable4) == 0x000010, "Member 'ChallengeQuestWidget_C_UpdateProgress::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'ChallengeQuestWidget_C_UpdateProgress::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, K2Node_Select_Default) == 0x000070, "Member 'ChallengeQuestWidget_C_UpdateProgress::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_Conv_IntToText_ReturnValue1) == 0x000078, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_Conv_IntToText_ReturnValue1' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, K2Node_MakeStruct_FormatArgumentData1) == 0x000090, "Member 'ChallengeQuestWidget_C_UpdateProgress::K2Node_MakeStruct_FormatArgumentData1' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, K2Node_MakeArray_Array) == 0x0000D0, "Member 'ChallengeQuestWidget_C_UpdateProgress::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_Format_ReturnValue) == 0x0000E0, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_GetText_ReturnValue) == 0x0000F8, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, CallFunc_TextIsEmpty_ReturnValue) == 0x000110, "Member 'ChallengeQuestWidget_C_UpdateProgress::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateProgress, K2Node_Select1_Default) == 0x000111, "Member 'ChallengeQuestWidget_C_UpdateProgress::K2Node_Select1_Default' has a wrong offset!");

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetQuestState
// 0x0002 (0x0002 - 0x0000)
struct ChallengeQuestWidget_C_GetQuestState final
{
public:
	EFortQuestState                               ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengeQuestWidget_C_GetQuestState) == 0x000001, "Wrong alignment on ChallengeQuestWidget_C_GetQuestState");
static_assert(sizeof(ChallengeQuestWidget_C_GetQuestState) == 0x000002, "Wrong size on ChallengeQuestWidget_C_GetQuestState");
static_assert(offsetof(ChallengeQuestWidget_C_GetQuestState, ReturnValue) == 0x000000, "Member 'ChallengeQuestWidget_C_GetQuestState::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetQuestState, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'ChallengeQuestWidget_C_GetQuestState::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetAchievedCount
// 0x0038 (0x0038 - 0x0000)
struct ChallengeQuestWidget_C_GetAchievedCount final
{
public:
	int32                                         OutTotalAchievedCount;                             // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutTotalRequiredCount;                             // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnCount;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFortMcpQuestObjectiveInfo>     CallFunc_GetObjectives_BP_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_GetObjectiveNeededToComplete_ReturnValue; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAchievedCount_OutTotalAchievedCount;   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAchievedCount_OutTotalRequiredCount;   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeQuestWidget_C_GetAchievedCount) == 0x000008, "Wrong alignment on ChallengeQuestWidget_C_GetAchievedCount");
static_assert(sizeof(ChallengeQuestWidget_C_GetAchievedCount) == 0x000038, "Wrong size on ChallengeQuestWidget_C_GetAchievedCount");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, OutTotalAchievedCount) == 0x000000, "Member 'ChallengeQuestWidget_C_GetAchievedCount::OutTotalAchievedCount' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, OutTotalRequiredCount) == 0x000004, "Member 'ChallengeQuestWidget_C_GetAchievedCount::OutTotalRequiredCount' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, ReturnCount) == 0x000008, "Member 'ChallengeQuestWidget_C_GetAchievedCount::ReturnCount' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, CallFunc_GetObjectives_BP_ReturnValue) == 0x000010, "Member 'ChallengeQuestWidget_C_GetAchievedCount::CallFunc_GetObjectives_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, CallFunc_GetObjectiveNeededToComplete_ReturnValue) == 0x000020, "Member 'ChallengeQuestWidget_C_GetAchievedCount::CallFunc_GetObjectiveNeededToComplete_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, CallFunc_Greater_IntInt_ReturnValue) == 0x000024, "Member 'ChallengeQuestWidget_C_GetAchievedCount::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, CallFunc_GetAchievedCount_OutTotalAchievedCount) == 0x000028, "Member 'ChallengeQuestWidget_C_GetAchievedCount::CallFunc_GetAchievedCount_OutTotalAchievedCount' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, CallFunc_GetAchievedCount_OutTotalRequiredCount) == 0x00002C, "Member 'ChallengeQuestWidget_C_GetAchievedCount::CallFunc_GetAchievedCount_OutTotalRequiredCount' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'ChallengeQuestWidget_C_GetAchievedCount::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetAchievedCount, CallFunc_Min_ReturnValue) == 0x000034, "Member 'ChallengeQuestWidget_C_GetAchievedCount::CallFunc_Min_ReturnValue' has a wrong offset!");

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateName
// 0x0038 (0x0038 - 0x0000)
struct ChallengeQuestWidget_C_UpdateName final
{
public:
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortTooltipContext*                    CallFunc_SpawnTooltipContext_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCombinedDescription_OutDescription;    // 0x0018(0x0018)()
	bool                                          CallFunc_GetCombinedDescription_ReturnValue;       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengeQuestWidget_C_UpdateName) == 0x000008, "Wrong alignment on ChallengeQuestWidget_C_UpdateName");
static_assert(sizeof(ChallengeQuestWidget_C_UpdateName) == 0x000038, "Wrong size on ChallengeQuestWidget_C_UpdateName");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateName, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'ChallengeQuestWidget_C_UpdateName::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateName, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ChallengeQuestWidget_C_UpdateName::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateName, CallFunc_SpawnTooltipContext_ReturnValue) == 0x000010, "Member 'ChallengeQuestWidget_C_UpdateName::CallFunc_SpawnTooltipContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateName, CallFunc_GetCombinedDescription_OutDescription) == 0x000018, "Member 'ChallengeQuestWidget_C_UpdateName::CallFunc_GetCombinedDescription_OutDescription' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_UpdateName, CallFunc_GetCombinedDescription_ReturnValue) == 0x000030, "Member 'ChallengeQuestWidget_C_UpdateName::CallFunc_GetCombinedDescription_ReturnValue' has a wrong offset!");

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsLocked
// 0x0060 (0x0060 - 0x0000)
struct ChallengeQuestWidget_C_StyleAsLocked final
{
public:
	class FText                                   LockedText;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortChallengeBundleInfo*               BundleInfo;                                        // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                         QuestItem;                                         // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*               QuestDef;                                          // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortChallengeBundleInfoLockedReason   CallFunc_IsQuestUnlocked_LockedReason;             // 0x0030(0x0028)()
	bool                                          CallFunc_IsQuestUnlocked_ReturnValue;              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengeQuestWidget_C_StyleAsLocked) == 0x000008, "Wrong alignment on ChallengeQuestWidget_C_StyleAsLocked");
static_assert(sizeof(ChallengeQuestWidget_C_StyleAsLocked) == 0x000060, "Wrong size on ChallengeQuestWidget_C_StyleAsLocked");
static_assert(offsetof(ChallengeQuestWidget_C_StyleAsLocked, LockedText) == 0x000000, "Member 'ChallengeQuestWidget_C_StyleAsLocked::LockedText' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_StyleAsLocked, BundleInfo) == 0x000018, "Member 'ChallengeQuestWidget_C_StyleAsLocked::BundleInfo' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_StyleAsLocked, QuestItem) == 0x000020, "Member 'ChallengeQuestWidget_C_StyleAsLocked::QuestItem' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_StyleAsLocked, QuestDef) == 0x000028, "Member 'ChallengeQuestWidget_C_StyleAsLocked::QuestDef' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_StyleAsLocked, CallFunc_IsQuestUnlocked_LockedReason) == 0x000030, "Member 'ChallengeQuestWidget_C_StyleAsLocked::CallFunc_IsQuestUnlocked_LockedReason' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_StyleAsLocked, CallFunc_IsQuestUnlocked_ReturnValue) == 0x000058, "Member 'ChallengeQuestWidget_C_StyleAsLocked::CallFunc_IsQuestUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_StyleAsLocked, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'ChallengeQuestWidget_C_StyleAsLocked::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_StyleAsLocked, CallFunc_IsValid_ReturnValue1) == 0x00005A, "Member 'ChallengeQuestWidget_C_StyleAsLocked::CallFunc_IsValid_ReturnValue1' has a wrong offset!");

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsLinearChain
// 0x0038 (0x0038 - 0x0000)
struct ChallengeQuestWidget_C_StyleAsLinearChain final
{
public:
	int32                                         ChainLength_0;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChainIndex_0;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x0020(0x0018)()
};
static_assert(alignof(ChallengeQuestWidget_C_StyleAsLinearChain) == 0x000008, "Wrong alignment on ChallengeQuestWidget_C_StyleAsLinearChain");
static_assert(sizeof(ChallengeQuestWidget_C_StyleAsLinearChain) == 0x000038, "Wrong size on ChallengeQuestWidget_C_StyleAsLinearChain");
static_assert(offsetof(ChallengeQuestWidget_C_StyleAsLinearChain, ChainLength_0) == 0x000000, "Member 'ChallengeQuestWidget_C_StyleAsLinearChain::ChainLength_0' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_StyleAsLinearChain, ChainIndex_0) == 0x000004, "Member 'ChallengeQuestWidget_C_StyleAsLinearChain::ChainIndex_0' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_StyleAsLinearChain, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'ChallengeQuestWidget_C_StyleAsLinearChain::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_StyleAsLinearChain, CallFunc_Conv_IntToText_ReturnValue1) == 0x000020, "Member 'ChallengeQuestWidget_C_StyleAsLinearChain::CallFunc_Conv_IntToText_ReturnValue1' has a wrong offset!");

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetTimeSpanValue
// 0x0020 (0x0020 - 0x0000)
struct ChallengeQuestWidget_C_GetTimeSpanValue final
{
public:
	struct FTimespan                              OutTimeSpan;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_GetValue_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengeQuestWidget_C_GetTimeSpanValue) == 0x000008, "Wrong alignment on ChallengeQuestWidget_C_GetTimeSpanValue");
static_assert(sizeof(ChallengeQuestWidget_C_GetTimeSpanValue) == 0x000020, "Wrong size on ChallengeQuestWidget_C_GetTimeSpanValue");
static_assert(offsetof(ChallengeQuestWidget_C_GetTimeSpanValue, OutTimeSpan) == 0x000000, "Member 'ChallengeQuestWidget_C_GetTimeSpanValue::OutTimeSpan' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetTimeSpanValue, CallFunc_GetValue_ReturnValue) == 0x000008, "Member 'ChallengeQuestWidget_C_GetTimeSpanValue::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetTimeSpanValue, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000010, "Member 'ChallengeQuestWidget_C_GetTimeSpanValue::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeQuestWidget_C_GetTimeSpanValue, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'ChallengeQuestWidget_C_GetTimeSpanValue::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

