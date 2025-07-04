﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FullPartyMember

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FullPartyMember.FullPartyMember_C
// 0x02F8 (0x0570 - 0x0278)
class UFullPartyMember_C final : public UFortPlayerTrackerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           CONNECTED;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Connecting;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       FortitudeDisplay;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_233;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Platform;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageEmpty;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LeaderImageOverlay;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MemberStateSwitcher;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMicIndicator_C*                        MicIndicator;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   NormalBangWrapper_0;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OffenseDisplay;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Open;                                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner_118;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PlayerName;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PlayerNameNonParty;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPowerWidget_C*                         PowerWidget;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ResistanceDisplay;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SecondaryFortitudeDisplay;                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SecondaryOffenseDisplay;                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SecondaryResistanceDisplay;                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SecondaryTechDisplay;                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TechDisplay;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    MemberInfo;                                        // 0x0338(0x0200)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector2D                              Dimensions;                                        // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   DeclineAction;                                     // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   LocalPlayerActionsTitle;                           // 0x0548(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bLocalPlayerAlone;                                 // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_561[0x7];                                      // 0x0561(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_LocalPlayerProfileModal_C*          NewLocalPlayerWidget;                              // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FullPartyMember(int32 EntryPoint);
	void OnPlayerAttributesChanged();
	void OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo);
	void Destruct();
	void OnClicked();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void DialogResult_1F64669049EA0B1762273C8ED9CBB619(EFortDialogResult Result, class FName ResultName);
	void UpdateMemberInfo(const struct FFortTeamMemberInfo& NewMemberInfo);
	void ShowOpen();
	void ShowConnecting();
	void ShowConnected();
	void UpdateDimensions(const struct FVector2D& NewDimensions);
	void Initialize();
	class UFullPartyMemberConnected_C* DuplicateConnectedWidget();
	void UpdateLocalPlayerAction();
	void HandleLocalPlayerActionsResult(EFortDialogResult Result, class FName ResultName);
	void MakeLocalPlayerConfirmActions(bool LocalPlayerAlone, TArray<struct FConfirmationDialogAction>* OutConfirmActions);
	void InitializeConnectedWidget(class UFullPartyMemberConnected_C* ConnectedWidget);
	void UpdateStatDisplays();
	void SetStatDisplayStyle(class UClass* InStyle);
	void SetSecondaryStatDisplayVisibility(ESlateVisibility InVisibility);
	void HighlightEmptyBanner(bool BannerIsHighlighted);
	void UpdateBang();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FullPartyMember_C">();
	}
	static class UFullPartyMember_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFullPartyMember_C>();
	}
};
static_assert(alignof(UFullPartyMember_C) == 0x000008, "Wrong alignment on UFullPartyMember_C");
static_assert(sizeof(UFullPartyMember_C) == 0x000570, "Wrong size on UFullPartyMember_C");
static_assert(offsetof(UFullPartyMember_C, UberGraphFrame) == 0x000278, "Member 'UFullPartyMember_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, CONNECTED) == 0x000280, "Member 'UFullPartyMember_C::CONNECTED' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, Connecting) == 0x000288, "Member 'UFullPartyMember_C::Connecting' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, FortitudeDisplay) == 0x000290, "Member 'UFullPartyMember_C::FortitudeDisplay' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, Image_2) == 0x000298, "Member 'UFullPartyMember_C::Image_2' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, Image_233) == 0x0002A0, "Member 'UFullPartyMember_C::Image_233' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, Image_Platform) == 0x0002A8, "Member 'UFullPartyMember_C::Image_Platform' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, ImageEmpty) == 0x0002B0, "Member 'UFullPartyMember_C::ImageEmpty' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, LeaderImageOverlay) == 0x0002B8, "Member 'UFullPartyMember_C::LeaderImageOverlay' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, MemberStateSwitcher) == 0x0002C0, "Member 'UFullPartyMember_C::MemberStateSwitcher' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, MicIndicator) == 0x0002C8, "Member 'UFullPartyMember_C::MicIndicator' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, NormalBangWrapper_0) == 0x0002D0, "Member 'UFullPartyMember_C::NormalBangWrapper_0' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, OffenseDisplay) == 0x0002D8, "Member 'UFullPartyMember_C::OffenseDisplay' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, Open) == 0x0002E0, "Member 'UFullPartyMember_C::Open' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, PlayerBanner_118) == 0x0002E8, "Member 'UFullPartyMember_C::PlayerBanner_118' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, PlayerName) == 0x0002F0, "Member 'UFullPartyMember_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, PlayerNameNonParty) == 0x0002F8, "Member 'UFullPartyMember_C::PlayerNameNonParty' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, PowerWidget) == 0x000300, "Member 'UFullPartyMember_C::PowerWidget' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, ResistanceDisplay) == 0x000308, "Member 'UFullPartyMember_C::ResistanceDisplay' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, SecondaryFortitudeDisplay) == 0x000310, "Member 'UFullPartyMember_C::SecondaryFortitudeDisplay' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, SecondaryOffenseDisplay) == 0x000318, "Member 'UFullPartyMember_C::SecondaryOffenseDisplay' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, SecondaryResistanceDisplay) == 0x000320, "Member 'UFullPartyMember_C::SecondaryResistanceDisplay' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, SecondaryTechDisplay) == 0x000328, "Member 'UFullPartyMember_C::SecondaryTechDisplay' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, TechDisplay) == 0x000330, "Member 'UFullPartyMember_C::TechDisplay' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, MemberInfo) == 0x000338, "Member 'UFullPartyMember_C::MemberInfo' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, Dimensions) == 0x000538, "Member 'UFullPartyMember_C::Dimensions' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, DeclineAction) == 0x000540, "Member 'UFullPartyMember_C::DeclineAction' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, LocalPlayerActionsTitle) == 0x000548, "Member 'UFullPartyMember_C::LocalPlayerActionsTitle' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, bLocalPlayerAlone) == 0x000560, "Member 'UFullPartyMember_C::bLocalPlayerAlone' has a wrong offset!");
static_assert(offsetof(UFullPartyMember_C, NewLocalPlayerWidget) == 0x000568, "Member 'UFullPartyMember_C::NewLocalPlayerWidget' has a wrong offset!");

}

