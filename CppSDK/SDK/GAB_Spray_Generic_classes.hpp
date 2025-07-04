﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_Spray_Generic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAB_Emote_Generic_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_Spray_Generic.GAB_Spray_Generic_C
// 0x0070 (0x09F8 - 0x0988)
class UGAB_Spray_Generic_C final : public UGAB_Emote_Generic_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAB_Spray_Generic_C;                // 0x0988(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         DecalSize;                                         // 0x0990(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_994[0x4];                                      // 0x0994(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaSprayItemDefinition*             MySpray;                                           // 0x0998(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DecalTraceDistance;                                // 0x09A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A4[0x4];                                      // 0x09A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UAnimMontage>            DefaultSprayMontage_M;                             // 0x09A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimMontage>            DefaultSprayMontage_F;                             // 0x09D0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_Spray_Generic(int32 EntryPoint);
	void TargetLineTrace(class AFortPawn* ActivatingPawn, bool* HitSomething, struct FVector* Location, struct FVector* Normal);
	void OnMontageStartedPlaying();
	TSoftObjectPtr<class UAnimMontage> GetMontageToPlay(class UFortMontageItemDefinitionBase* EmoteAsset, EFortCustomBodyType BodyType, EFortCustomGender Gender);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_Spray_Generic_C">();
	}
	static class UGAB_Spray_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_Spray_Generic_C>();
	}
};
static_assert(alignof(UGAB_Spray_Generic_C) == 0x000008, "Wrong alignment on UGAB_Spray_Generic_C");
static_assert(sizeof(UGAB_Spray_Generic_C) == 0x0009F8, "Wrong size on UGAB_Spray_Generic_C");
static_assert(offsetof(UGAB_Spray_Generic_C, UberGraphFrame_GAB_Spray_Generic_C) == 0x000988, "Member 'UGAB_Spray_Generic_C::UberGraphFrame_GAB_Spray_Generic_C' has a wrong offset!");
static_assert(offsetof(UGAB_Spray_Generic_C, DecalSize) == 0x000990, "Member 'UGAB_Spray_Generic_C::DecalSize' has a wrong offset!");
static_assert(offsetof(UGAB_Spray_Generic_C, MySpray) == 0x000998, "Member 'UGAB_Spray_Generic_C::MySpray' has a wrong offset!");
static_assert(offsetof(UGAB_Spray_Generic_C, DecalTraceDistance) == 0x0009A0, "Member 'UGAB_Spray_Generic_C::DecalTraceDistance' has a wrong offset!");
static_assert(offsetof(UGAB_Spray_Generic_C, DefaultSprayMontage_M) == 0x0009A8, "Member 'UGAB_Spray_Generic_C::DefaultSprayMontage_M' has a wrong offset!");
static_assert(offsetof(UGAB_Spray_Generic_C, DefaultSprayMontage_F) == 0x0009D0, "Member 'UGAB_Spray_Generic_C::DefaultSprayMontage_F' has a wrong offset!");

}

