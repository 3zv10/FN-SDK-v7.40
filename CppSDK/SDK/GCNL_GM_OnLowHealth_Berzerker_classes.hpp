﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_OnLowHealth_Berzerker

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_GM_OnLowHealth_Berzerker.GCNL_GM_OnLowHealth_Berzerker_C
// 0x0068 (0x0490 - 0x0428)
class AGCNL_GM_OnLowHealth_Berzerker_C final : public AFortGameplayCueNotify_Looping
{
public:
	class UParticleSystemComponent*               P_Husk_Berzerker_Activate_01;                      // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Husk_Berzerker_Bodysmoke_01;                     // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BodyMistFX;                                        // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FLinearColor>        Berserker_Map;                                     // 0x0440(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void UserConstructionScript();
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_GM_OnLowHealth_Berzerker_C">();
	}
	static class AGCNL_GM_OnLowHealth_Berzerker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_GM_OnLowHealth_Berzerker_C>();
	}
};
static_assert(alignof(AGCNL_GM_OnLowHealth_Berzerker_C) == 0x000008, "Wrong alignment on AGCNL_GM_OnLowHealth_Berzerker_C");
static_assert(sizeof(AGCNL_GM_OnLowHealth_Berzerker_C) == 0x000490, "Wrong size on AGCNL_GM_OnLowHealth_Berzerker_C");
static_assert(offsetof(AGCNL_GM_OnLowHealth_Berzerker_C, P_Husk_Berzerker_Activate_01) == 0x000428, "Member 'AGCNL_GM_OnLowHealth_Berzerker_C::P_Husk_Berzerker_Activate_01' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_OnLowHealth_Berzerker_C, P_Husk_Berzerker_Bodysmoke_01) == 0x000430, "Member 'AGCNL_GM_OnLowHealth_Berzerker_C::P_Husk_Berzerker_Bodysmoke_01' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_OnLowHealth_Berzerker_C, BodyMistFX) == 0x000438, "Member 'AGCNL_GM_OnLowHealth_Berzerker_C::BodyMistFX' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_OnLowHealth_Berzerker_C, Berserker_Map) == 0x000440, "Member 'AGCNL_GM_OnLowHealth_Berzerker_C::Berserker_Map' has a wrong offset!");

}

