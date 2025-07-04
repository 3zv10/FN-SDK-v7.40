﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyQuestsPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DailyQuestsPanel.DailyQuestsPanel_C
// 0x0110 (0x0348 - 0x0238)
class UDailyQuestsPanel_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Set_Button;                                        // 0x0240(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ClaimReward;                                       // 0x0248(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                BorderClaimButton;                                 // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Check;                                             // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ClaimButton;                                       // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_ClaimToggle;                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           DailyQuestList;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          DailyQuestSpacer;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EventQuestList;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          EventQuestsLabel;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          EventQuestSpacer;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_145;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OverlayClaimButton;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SeasonChallengesHeader;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          SeasonChallengesSpacer;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SeasonChallengesVB;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          SeasonQuestsLabel;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxChallenges;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SuggestedQuestList;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ClaimingQuestsInProgress;                          // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EFortQuestType                                QuestTypeToClaim;                                  // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FA[0x6];                                      // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    InspectActionButton;                               // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UAthenaLobbyBase*                       ParentPanel;                                       // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UDailyQuestWidget_C*>            CompletedQuests;                                   // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          isInGame;                                          // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortQuestItem*>                 EventQuests;                                       // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          ShowEventQuests;                                   // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          QuestsAreDirty;                                    // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_DailyQuestsPanel(int32 EntryPoint);
	void WidgetAnimationEvt_ClaimReward_K2Node_WidgetAnimationEvent_0();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BindEventListeners();
	void OnQuestsUpdated();
	void CreateQuestWidget(class UFortQuestItem* Quest, class UVerticalBox* QuestList, bool* QuestCompleted);
	void OnQuestsGranted(TArray<class UFortQuestItem*>& NewQuests);
	void OnQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>& Rewards);
	void OnNoQuestRewardsToClaim();
	void ClaimNextQuestReward();
	void ShowModalQuests(bool* bCommitted);
	void ProcessQuestUpdate(class UFortQuestItem* Quest, TArray<class UFortQuestItem*>& QuestArray, class UVerticalBox* QuestList, bool* QuestIsCompleted);
	void SetInputActionHandlers();
	void CreateMultiQuestWidget(TArray<class UFortQuestItem*>& Quests, class UVerticalBox* QuestList, bool* QuestCompleted);
	void NotifyQuestsDirty();
	void Reset_Button_Anim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DailyQuestsPanel_C">();
	}
	static class UDailyQuestsPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDailyQuestsPanel_C>();
	}
};
static_assert(alignof(UDailyQuestsPanel_C) == 0x000008, "Wrong alignment on UDailyQuestsPanel_C");
static_assert(sizeof(UDailyQuestsPanel_C) == 0x000348, "Wrong size on UDailyQuestsPanel_C");
static_assert(offsetof(UDailyQuestsPanel_C, UberGraphFrame) == 0x000238, "Member 'UDailyQuestsPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, Set_Button) == 0x000240, "Member 'UDailyQuestsPanel_C::Set_Button' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, ClaimReward) == 0x000248, "Member 'UDailyQuestsPanel_C::ClaimReward' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, BorderClaimButton) == 0x000250, "Member 'UDailyQuestsPanel_C::BorderClaimButton' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, Check) == 0x000258, "Member 'UDailyQuestsPanel_C::Check' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, ClaimButton) == 0x000260, "Member 'UDailyQuestsPanel_C::ClaimButton' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, CommonWidgetSwitcher_ClaimToggle) == 0x000268, "Member 'UDailyQuestsPanel_C::CommonWidgetSwitcher_ClaimToggle' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, DailyQuestList) == 0x000270, "Member 'UDailyQuestsPanel_C::DailyQuestList' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, DailyQuestSpacer) == 0x000278, "Member 'UDailyQuestsPanel_C::DailyQuestSpacer' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, EventQuestList) == 0x000280, "Member 'UDailyQuestsPanel_C::EventQuestList' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, EventQuestsLabel) == 0x000288, "Member 'UDailyQuestsPanel_C::EventQuestsLabel' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, EventQuestSpacer) == 0x000290, "Member 'UDailyQuestsPanel_C::EventQuestSpacer' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, Image_0) == 0x000298, "Member 'UDailyQuestsPanel_C::Image_0' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, Image_1) == 0x0002A0, "Member 'UDailyQuestsPanel_C::Image_1' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, Image_2) == 0x0002A8, "Member 'UDailyQuestsPanel_C::Image_2' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, Image_3) == 0x0002B0, "Member 'UDailyQuestsPanel_C::Image_3' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, Image_145) == 0x0002B8, "Member 'UDailyQuestsPanel_C::Image_145' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, OverlayClaimButton) == 0x0002C0, "Member 'UDailyQuestsPanel_C::OverlayClaimButton' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, SeasonChallengesHeader) == 0x0002C8, "Member 'UDailyQuestsPanel_C::SeasonChallengesHeader' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, SeasonChallengesSpacer) == 0x0002D0, "Member 'UDailyQuestsPanel_C::SeasonChallengesSpacer' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, SeasonChallengesVB) == 0x0002D8, "Member 'UDailyQuestsPanel_C::SeasonChallengesVB' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, SeasonQuestsLabel) == 0x0002E0, "Member 'UDailyQuestsPanel_C::SeasonQuestsLabel' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, SizeBoxChallenges) == 0x0002E8, "Member 'UDailyQuestsPanel_C::SizeBoxChallenges' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, SuggestedQuestList) == 0x0002F0, "Member 'UDailyQuestsPanel_C::SuggestedQuestList' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, ClaimingQuestsInProgress) == 0x0002F8, "Member 'UDailyQuestsPanel_C::ClaimingQuestsInProgress' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, QuestTypeToClaim) == 0x0002F9, "Member 'UDailyQuestsPanel_C::QuestTypeToClaim' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, InspectActionButton) == 0x000300, "Member 'UDailyQuestsPanel_C::InspectActionButton' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, ParentPanel) == 0x000310, "Member 'UDailyQuestsPanel_C::ParentPanel' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, CompletedQuests) == 0x000318, "Member 'UDailyQuestsPanel_C::CompletedQuests' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, isInGame) == 0x000328, "Member 'UDailyQuestsPanel_C::isInGame' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, EventQuests) == 0x000330, "Member 'UDailyQuestsPanel_C::EventQuests' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, ShowEventQuests) == 0x000340, "Member 'UDailyQuestsPanel_C::ShowEventQuests' has a wrong offset!");
static_assert(offsetof(UDailyQuestsPanel_C, QuestsAreDirty) == 0x000341, "Member 'UDailyQuestsPanel_C::QuestsAreDirty' has a wrong offset!");

}

