﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_EventCine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Announce_EventCine.Announce_EventCine_C
// 0x0028 (0x03C8 - 0x03A0)
class AAnnounce_EventCine_C : public AFortClientAnnouncement_Cinematic
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                           EventMediaSource;                                  // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowSkipping;                                     // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EFortUIState                                  StartingState;                                     // 0x03B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3BA[0x6];                                      // 0x03BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortMediaSubtitlesPlayer*              EventSubtitlesPlayer;                              // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Announce_EventCine(int32 EntryPoint);
	void HandleAllowSkip();
	void HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void OnClientAnnouncementStart();
	void OnClientAnnouncementStop();
	void OnPlayerSkippedCutscene();
	void OnStateEntered_132DA3B4468BA1009280CFB4D4C2D0AC();
	void OnStateEntered_2FC6E2894145586A1A4AF69426273130();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announce_EventCine_C">();
	}
	static class AAnnounce_EventCine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnnounce_EventCine_C>();
	}
};
static_assert(alignof(AAnnounce_EventCine_C) == 0x000008, "Wrong alignment on AAnnounce_EventCine_C");
static_assert(sizeof(AAnnounce_EventCine_C) == 0x0003C8, "Wrong size on AAnnounce_EventCine_C");
static_assert(offsetof(AAnnounce_EventCine_C, UberGraphFrame) == 0x0003A0, "Member 'AAnnounce_EventCine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAnnounce_EventCine_C, DefaultSceneRoot) == 0x0003A8, "Member 'AAnnounce_EventCine_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AAnnounce_EventCine_C, EventMediaSource) == 0x0003B0, "Member 'AAnnounce_EventCine_C::EventMediaSource' has a wrong offset!");
static_assert(offsetof(AAnnounce_EventCine_C, AllowSkipping) == 0x0003B8, "Member 'AAnnounce_EventCine_C::AllowSkipping' has a wrong offset!");
static_assert(offsetof(AAnnounce_EventCine_C, StartingState) == 0x0003B9, "Member 'AAnnounce_EventCine_C::StartingState' has a wrong offset!");
static_assert(offsetof(AAnnounce_EventCine_C, EventSubtitlesPlayer) == 0x0003C0, "Member 'AAnnounce_EventCine_C::EventSubtitlesPlayer' has a wrong offset!");

}

