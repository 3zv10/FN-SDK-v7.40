﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMatchmakingPlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMatchmakingPlay.AthenaMatchmakingPlay_C
// 0x00A8 (0x04D8 - 0x0430)
class UAthenaMatchmakingPlay_C final : public UFortAthenaMatchmakingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewModeViolation;                                  // 0x0438(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaGenericLobbyViolator_C*          AthenaGenericLobbyViolator;                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      DebugCreativeServerSelect;                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MatchmakingSpinner;                                // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          NewModeBorder;                                     // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownLobbyViolator_C*               ShowdownLobbyViolator;                             // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ViolatorContent;                                   // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ViolatorSwitcher;                                  // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   PlaylistsUpdated;                                  // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           ShowNewPlaylistTimer;                              // 0x0488(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnPlaylistChanged;                                 // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                             MatchmakingSucceededSound;                         // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   CreativeOptionsSoftClass;                          // 0x04A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                 CreativeOptionsClass;                              // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaMatchmakingPlay(int32 EntryPoint);
	void OpenCreativeOptions_NativizeMe();
	void OnMatchmakingFinishedBlueprint(bool bSuccess);
	void Animate();
	void UpdateCustomViolatorText(const class FText& ModeName, const class FText& SubText);
	void OnNewModeViolatorUpdated(bool bShouldShow);
	void SetSquadFillText(bool InCurrentSquadFill);
	void BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PlaylistChanged(const struct FPlaylistFrontEndData& NewPlaylist, const class FText& PlaylistCMSOverrideName, EFortLobbyType LobbyType);
	void OnSetCancelButtonText(const class FText& CancelButtonText);
	void OnSetPlayButtonText(const class FText& PlayButtonText);
	void OnAvailablePlaylistsUpdated();
	void Construct();
	void OnLoaded_624287AB42851447B4164286AAD2D464(class UClass* Loaded);
	void OpenPlayOptions();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMatchmakingPlay_C">();
	}
	static class UAthenaMatchmakingPlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMatchmakingPlay_C>();
	}
};
static_assert(alignof(UAthenaMatchmakingPlay_C) == 0x000008, "Wrong alignment on UAthenaMatchmakingPlay_C");
static_assert(sizeof(UAthenaMatchmakingPlay_C) == 0x0004D8, "Wrong size on UAthenaMatchmakingPlay_C");
static_assert(offsetof(UAthenaMatchmakingPlay_C, UberGraphFrame) == 0x000430, "Member 'UAthenaMatchmakingPlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, NewModeViolation) == 0x000438, "Member 'UAthenaMatchmakingPlay_C::NewModeViolation' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, AthenaGenericLobbyViolator) == 0x000440, "Member 'UAthenaMatchmakingPlay_C::AthenaGenericLobbyViolator' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, DebugCreativeServerSelect) == 0x000448, "Member 'UAthenaMatchmakingPlay_C::DebugCreativeServerSelect' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, MatchmakingSpinner) == 0x000450, "Member 'UAthenaMatchmakingPlay_C::MatchmakingSpinner' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, NewModeBorder) == 0x000458, "Member 'UAthenaMatchmakingPlay_C::NewModeBorder' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, ShowdownLobbyViolator) == 0x000460, "Member 'UAthenaMatchmakingPlay_C::ShowdownLobbyViolator' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, ViolatorContent) == 0x000468, "Member 'UAthenaMatchmakingPlay_C::ViolatorContent' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, ViolatorSwitcher) == 0x000470, "Member 'UAthenaMatchmakingPlay_C::ViolatorSwitcher' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, PlaylistsUpdated) == 0x000478, "Member 'UAthenaMatchmakingPlay_C::PlaylistsUpdated' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, ShowNewPlaylistTimer) == 0x000488, "Member 'UAthenaMatchmakingPlay_C::ShowNewPlaylistTimer' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, OnPlaylistChanged) == 0x000490, "Member 'UAthenaMatchmakingPlay_C::OnPlaylistChanged' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, MatchmakingSucceededSound) == 0x0004A0, "Member 'UAthenaMatchmakingPlay_C::MatchmakingSucceededSound' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, CreativeOptionsSoftClass) == 0x0004A8, "Member 'UAthenaMatchmakingPlay_C::CreativeOptionsSoftClass' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, CreativeOptionsClass) == 0x0004D0, "Member 'UAthenaMatchmakingPlay_C::CreativeOptionsClass' has a wrong offset!");

}

