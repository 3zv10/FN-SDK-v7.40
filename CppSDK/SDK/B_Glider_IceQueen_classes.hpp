﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Glider_IceQueen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Glider_IceQueen.B_Glider_IceQueen_C
// 0x0030 (0x03F0 - 0x03C0)
class AB_Glider_IceQueen_C final : public AFortPlayerParachute
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Glider_IceQueen_StartSnow;                       // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Glider_IceQueen_Snowflake;                       // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Glider_IceQueen_SnowTrail;                       // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortVehicleAudioVoice*                 FortVehicleAudioVoice;                             // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               TrailParticles2;                                   // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Glider_IceQueen(int32 EntryPoint);
	void OnParachuteTrailUpdated(float MovementLengthSquared, float ForwardDot, float RightDot, float RotationalMovementAcceleration);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Glider_IceQueen_C">();
	}
	static class AB_Glider_IceQueen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Glider_IceQueen_C>();
	}
};
static_assert(alignof(AB_Glider_IceQueen_C) == 0x000008, "Wrong alignment on AB_Glider_IceQueen_C");
static_assert(sizeof(AB_Glider_IceQueen_C) == 0x0003F0, "Wrong size on AB_Glider_IceQueen_C");
static_assert(offsetof(AB_Glider_IceQueen_C, UberGraphFrame) == 0x0003C0, "Member 'AB_Glider_IceQueen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Glider_IceQueen_C, P_Glider_IceQueen_StartSnow) == 0x0003C8, "Member 'AB_Glider_IceQueen_C::P_Glider_IceQueen_StartSnow' has a wrong offset!");
static_assert(offsetof(AB_Glider_IceQueen_C, P_Glider_IceQueen_Snowflake) == 0x0003D0, "Member 'AB_Glider_IceQueen_C::P_Glider_IceQueen_Snowflake' has a wrong offset!");
static_assert(offsetof(AB_Glider_IceQueen_C, P_Glider_IceQueen_SnowTrail) == 0x0003D8, "Member 'AB_Glider_IceQueen_C::P_Glider_IceQueen_SnowTrail' has a wrong offset!");
static_assert(offsetof(AB_Glider_IceQueen_C, FortVehicleAudioVoice) == 0x0003E0, "Member 'AB_Glider_IceQueen_C::FortVehicleAudioVoice' has a wrong offset!");
static_assert(offsetof(AB_Glider_IceQueen_C, TrailParticles2) == 0x0003E8, "Member 'AB_Glider_IceQueen_C::TrailParticles2' has a wrong offset!");

}

