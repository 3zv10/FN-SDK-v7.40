﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBattlePassAnimatedLogo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C
// 0x0058 (0x0290 - 0x0238)
class UAthenaBattlePassAnimatedLogo_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x0240(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Idle;                                              // 0x0248(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0250(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BPImage;                                           // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SeasonNumber;                                      // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortHelpItem*>                  TopLevelHelpItems;                                 // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FText                                   Header_Display_Text;                               // 0x0278(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_AthenaBattlePassAnimatedLogo(int32 EntryPoint);
	void Construct();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayIntroAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaBattlePassAnimatedLogo_C">();
	}
	static class UAthenaBattlePassAnimatedLogo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaBattlePassAnimatedLogo_C>();
	}
};
static_assert(alignof(UAthenaBattlePassAnimatedLogo_C) == 0x000008, "Wrong alignment on UAthenaBattlePassAnimatedLogo_C");
static_assert(sizeof(UAthenaBattlePassAnimatedLogo_C) == 0x000290, "Wrong size on UAthenaBattlePassAnimatedLogo_C");
static_assert(offsetof(UAthenaBattlePassAnimatedLogo_C, UberGraphFrame) == 0x000238, "Member 'UAthenaBattlePassAnimatedLogo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassAnimatedLogo_C, Outro) == 0x000240, "Member 'UAthenaBattlePassAnimatedLogo_C::Outro' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassAnimatedLogo_C, Idle) == 0x000248, "Member 'UAthenaBattlePassAnimatedLogo_C::Idle' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassAnimatedLogo_C, Intro) == 0x000250, "Member 'UAthenaBattlePassAnimatedLogo_C::Intro' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassAnimatedLogo_C, BPImage) == 0x000258, "Member 'UAthenaBattlePassAnimatedLogo_C::BPImage' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassAnimatedLogo_C, SeasonNumber) == 0x000260, "Member 'UAthenaBattlePassAnimatedLogo_C::SeasonNumber' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassAnimatedLogo_C, TopLevelHelpItems) == 0x000268, "Member 'UAthenaBattlePassAnimatedLogo_C::TopLevelHelpItems' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassAnimatedLogo_C, Header_Display_Text) == 0x000278, "Member 'UAthenaBattlePassAnimatedLogo_C::Header_Display_Text' has a wrong offset!");

}

