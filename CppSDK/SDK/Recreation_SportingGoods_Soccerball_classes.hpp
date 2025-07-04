﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Recreation_SportingGoods_Soccerball

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PhysicsBall_Master_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C
// 0x0010 (0x0888 - 0x0878)
class ARecreation_SportingGoods_Soccerball_C final : public APhysicsBall_Master_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Recreation_SportingGoods_Soccerball_C; // 0x0878(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                             Ball_Hit_Sound;                                    // 0x0880(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Recreation_SportingGoods_Soccerball(int32 EntryPoint);
	void BndEvt__SphereCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Reset_Ball_Hit_Sound();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Recreation_SportingGoods_Soccerball_C">();
	}
	static class ARecreation_SportingGoods_Soccerball_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARecreation_SportingGoods_Soccerball_C>();
	}
};
static_assert(alignof(ARecreation_SportingGoods_Soccerball_C) == 0x000008, "Wrong alignment on ARecreation_SportingGoods_Soccerball_C");
static_assert(sizeof(ARecreation_SportingGoods_Soccerball_C) == 0x000888, "Wrong size on ARecreation_SportingGoods_Soccerball_C");
static_assert(offsetof(ARecreation_SportingGoods_Soccerball_C, UberGraphFrame_Recreation_SportingGoods_Soccerball_C) == 0x000878, "Member 'ARecreation_SportingGoods_Soccerball_C::UberGraphFrame_Recreation_SportingGoods_Soccerball_C' has a wrong offset!");
static_assert(offsetof(ARecreation_SportingGoods_Soccerball_C, Ball_Hit_Sound) == 0x000880, "Member 'ARecreation_SportingGoods_Soccerball_C::Ball_Hit_Sound' has a wrong offset!");

}

