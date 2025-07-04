﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestMiniTile2

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function QuestMiniTile2.QuestMiniTile2_C.ExecuteUbergraph_QuestMiniTile2
// 0x0028 (0x0028 - 0x0000)
struct QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button1;                // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_Selected;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2) == 0x000008, "Wrong alignment on QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2");
static_assert(sizeof(QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2) == 0x000028, "Wrong size on QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2");
static_assert(offsetof(QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2, EntryPoint) == 0x000000, "Member 'QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2, K2Node_Event_IsDesignTime) == 0x000011, "Member 'QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2, K2Node_ComponentBoundEvent_Button1) == 0x000018, "Member 'QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2::K2Node_ComponentBoundEvent_Button1' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2, K2Node_ComponentBoundEvent_Selected) == 0x000020, "Member 'QuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2::K2Node_ComponentBoundEvent_Selected' has a wrong offset!");

// Function QuestMiniTile2.QuestMiniTile2_C.BndEvt__QuestButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function QuestMiniTile2.QuestMiniTile2_C.BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature) == 0x000008, "Wrong alignment on QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature");
static_assert(sizeof(QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature) == 0x000010, "Wrong size on QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature");
static_assert(offsetof(QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature, Button) == 0x000000, "Member 'QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature::Button' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature, Selected) == 0x000008, "Member 'QuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature::Selected' has a wrong offset!");

// Function QuestMiniTile2.QuestMiniTile2_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct QuestMiniTile2_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestMiniTile2_C_PreConstruct) == 0x000001, "Wrong alignment on QuestMiniTile2_C_PreConstruct");
static_assert(sizeof(QuestMiniTile2_C_PreConstruct) == 0x000001, "Wrong size on QuestMiniTile2_C_PreConstruct");
static_assert(offsetof(QuestMiniTile2_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'QuestMiniTile2_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function QuestMiniTile2.QuestMiniTile2_C.Update
// 0x0048 (0x0048 - 0x0000)
struct QuestMiniTile2_C_Update final
{
public:
	bool                                          CallFunc_SetStateAndFindIncompleteQuest_QuestFound; // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetLargePreviewImage_ReturnValue;         // 0x0008(0x0028)(HasGetValueTypeHash)
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0018)()
};
static_assert(alignof(QuestMiniTile2_C_Update) == 0x000008, "Wrong alignment on QuestMiniTile2_C_Update");
static_assert(sizeof(QuestMiniTile2_C_Update) == 0x000048, "Wrong size on QuestMiniTile2_C_Update");
static_assert(offsetof(QuestMiniTile2_C_Update, CallFunc_SetStateAndFindIncompleteQuest_QuestFound) == 0x000000, "Member 'QuestMiniTile2_C_Update::CallFunc_SetStateAndFindIncompleteQuest_QuestFound' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_Update, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'QuestMiniTile2_C_Update::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_Update, CallFunc_GetLargePreviewImage_ReturnValue) == 0x000008, "Member 'QuestMiniTile2_C_Update::CallFunc_GetLargePreviewImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_Update, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'QuestMiniTile2_C_Update::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");

// Function QuestMiniTile2.QuestMiniTile2_C.SetStateAndFindIncompleteQuest
// 0x0068 (0x0068 - 0x0000)
struct QuestMiniTile2_C_SetStateAndFindIncompleteQuest final
{
public:
	bool                                          QuestFound;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortQuestMapNode                      CallFunc_GetQuestNodeData_ReturnValue;             // 0x0018(0x0010)(NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue1;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortQuestMapNodeType                         Temp_byte_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable1;                                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasCompletedQuest_ReturnValue;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortQuestItem*                         CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest) == 0x000008, "Wrong alignment on QuestMiniTile2_C_SetStateAndFindIncompleteQuest");
static_assert(sizeof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest) == 0x000068, "Wrong size on QuestMiniTile2_C_SetStateAndFindIncompleteQuest");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, QuestFound) == 0x000000, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::QuestFound' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, CallFunc_GetQuestManager_ReturnValue) == 0x000010, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, CallFunc_GetQuestNodeData_ReturnValue) == 0x000018, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::CallFunc_GetQuestNodeData_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, CallFunc_PlayAnimationTimeRange_ReturnValue) == 0x000030, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::CallFunc_PlayAnimationTimeRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, CallFunc_PlayAnimationTimeRange_ReturnValue1) == 0x000038, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::CallFunc_PlayAnimationTimeRange_ReturnValue1' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, Temp_byte_Variable) == 0x000040, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, Temp_int_Variable) == 0x000044, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, Temp_int_Variable1) == 0x000048, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::Temp_int_Variable1' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, K2Node_Select_Default) == 0x00004C, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, CallFunc_HasCompletedQuest_ReturnValue) == 0x000051, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::CallFunc_HasCompletedQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, CallFunc_GetQuestWithDefinition_ReturnValue) == 0x000058, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::CallFunc_GetQuestWithDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_SetStateAndFindIncompleteQuest, CallFunc_IsValid_ReturnValue1) == 0x000060, "Member 'QuestMiniTile2_C_SetStateAndFindIncompleteQuest::CallFunc_IsValid_ReturnValue1' has a wrong offset!");

// Function QuestMiniTile2.QuestMiniTile2_C.Init
// 0x0004 (0x0004 - 0x0000)
struct QuestMiniTile2_C_Init final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestMiniTile2_C_Init) == 0x000001, "Wrong alignment on QuestMiniTile2_C_Init");
static_assert(sizeof(QuestMiniTile2_C_Init) == 0x000004, "Wrong size on QuestMiniTile2_C_Init");
static_assert(offsetof(QuestMiniTile2_C_Init, Temp_bool_Variable) == 0x000000, "Member 'QuestMiniTile2_C_Init::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_Init, Temp_byte_Variable) == 0x000001, "Member 'QuestMiniTile2_C_Init::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_Init, Temp_byte_Variable1) == 0x000002, "Member 'QuestMiniTile2_C_Init::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_Init, K2Node_Select_Default) == 0x000003, "Member 'QuestMiniTile2_C_Init::K2Node_Select_Default' has a wrong offset!");

// Function QuestMiniTile2.QuestMiniTile2_C.UpdateQuestData
// 0x0020 (0x0020 - 0x0000)
struct QuestMiniTile2_C_UpdateQuestData final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1;                               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortQuestMapNodeLabelPosition                Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortQuestMapNode                      CallFunc_GetQuestNodeData_ReturnValue;             // 0x0008(0x0010)(NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestMiniTile2_C_UpdateQuestData) == 0x000008, "Wrong alignment on QuestMiniTile2_C_UpdateQuestData");
static_assert(sizeof(QuestMiniTile2_C_UpdateQuestData) == 0x000020, "Wrong size on QuestMiniTile2_C_UpdateQuestData");
static_assert(offsetof(QuestMiniTile2_C_UpdateQuestData, Temp_bool_Variable) == 0x000000, "Member 'QuestMiniTile2_C_UpdateQuestData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_UpdateQuestData, Temp_bool_Variable1) == 0x000001, "Member 'QuestMiniTile2_C_UpdateQuestData::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_UpdateQuestData, Temp_byte_Variable) == 0x000002, "Member 'QuestMiniTile2_C_UpdateQuestData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_UpdateQuestData, CallFunc_GetQuestNodeData_ReturnValue) == 0x000008, "Member 'QuestMiniTile2_C_UpdateQuestData::CallFunc_GetQuestNodeData_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestMiniTile2_C_UpdateQuestData, K2Node_Select_Default) == 0x000018, "Member 'QuestMiniTile2_C_UpdateQuestData::K2Node_Select_Default' has a wrong offset!");

}

