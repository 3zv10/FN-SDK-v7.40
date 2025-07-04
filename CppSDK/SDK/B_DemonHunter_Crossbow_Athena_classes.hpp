﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_DemonHunter_Crossbow_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Ranged_Generic_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_DemonHunter_Crossbow_Athena.B_DemonHunter_Crossbow_Athena_C
// 0x0010 (0x0DF8 - 0x0DE8)
class AB_DemonHunter_Crossbow_Athena_C final : public AB_Ranged_Generic_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_DemonHunter_Crossbow_Athena_C;    // 0x0DE8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_DemonHunter_Crossbow_FireTipFlare;               // 0x0DF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_DemonHunter_Crossbow_Athena(int32 EntryPoint);
	void OnPlayReloadFX(EFortReloadFXState ReloadStage);
	void OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_DemonHunter_Crossbow_Athena_C">();
	}
	static class AB_DemonHunter_Crossbow_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_DemonHunter_Crossbow_Athena_C>();
	}
};
static_assert(alignof(AB_DemonHunter_Crossbow_Athena_C) == 0x000008, "Wrong alignment on AB_DemonHunter_Crossbow_Athena_C");
static_assert(sizeof(AB_DemonHunter_Crossbow_Athena_C) == 0x000DF8, "Wrong size on AB_DemonHunter_Crossbow_Athena_C");
static_assert(offsetof(AB_DemonHunter_Crossbow_Athena_C, UberGraphFrame_B_DemonHunter_Crossbow_Athena_C) == 0x000DE8, "Member 'AB_DemonHunter_Crossbow_Athena_C::UberGraphFrame_B_DemonHunter_Crossbow_Athena_C' has a wrong offset!");
static_assert(offsetof(AB_DemonHunter_Crossbow_Athena_C, P_DemonHunter_Crossbow_FireTipFlare) == 0x000DF0, "Member 'AB_DemonHunter_Crossbow_Athena_C::P_DemonHunter_Crossbow_FireTipFlare' has a wrong offset!");

}

