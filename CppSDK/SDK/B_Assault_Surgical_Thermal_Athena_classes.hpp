﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Assault_Surgical_Thermal_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Assault_Generic_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Assault_Surgical_Thermal_Athena.B_Assault_Surgical_Thermal_Athena_C
// 0x0028 (0x0E10 - 0x0DE8)
class AB_Assault_Surgical_Thermal_Athena_C final : public AB_Assault_Generic_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Assault_Surgical_Thermal_Athena_C; // 0x0DE8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         ScalePlayerThermal_NewTrack_0_53EEC0934805CD1ABD5237ADD42E83EE; // 0x0DF0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ScalePlayerThermal__Direction_53EEC0934805CD1ABD5237ADD42E83EE; // 0x0DF4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DF5[0x3];                                      // 0x0DF5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ScalePlayerThermal;                                // 0x0DF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ScalePlayerVisibility;                             // 0x0E00(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         BlendInTime;                                       // 0x0E08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Assault_Surgical_Thermal_Athena(int32 EntryPoint);
	void ForceScopeBackImmediatly();
	void ReverseScopePP();
	void PlayScopePP();
	void OnSetTargeting(bool bNewIsTargeting);
	void ScalePlayerThermal__FinishedFunc();
	void ScalePlayerThermal__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Assault_Surgical_Thermal_Athena_C">();
	}
	static class AB_Assault_Surgical_Thermal_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Assault_Surgical_Thermal_Athena_C>();
	}
};
static_assert(alignof(AB_Assault_Surgical_Thermal_Athena_C) == 0x000008, "Wrong alignment on AB_Assault_Surgical_Thermal_Athena_C");
static_assert(sizeof(AB_Assault_Surgical_Thermal_Athena_C) == 0x000E10, "Wrong size on AB_Assault_Surgical_Thermal_Athena_C");
static_assert(offsetof(AB_Assault_Surgical_Thermal_Athena_C, UberGraphFrame_B_Assault_Surgical_Thermal_Athena_C) == 0x000DE8, "Member 'AB_Assault_Surgical_Thermal_Athena_C::UberGraphFrame_B_Assault_Surgical_Thermal_Athena_C' has a wrong offset!");
static_assert(offsetof(AB_Assault_Surgical_Thermal_Athena_C, ScalePlayerThermal_NewTrack_0_53EEC0934805CD1ABD5237ADD42E83EE) == 0x000DF0, "Member 'AB_Assault_Surgical_Thermal_Athena_C::ScalePlayerThermal_NewTrack_0_53EEC0934805CD1ABD5237ADD42E83EE' has a wrong offset!");
static_assert(offsetof(AB_Assault_Surgical_Thermal_Athena_C, ScalePlayerThermal__Direction_53EEC0934805CD1ABD5237ADD42E83EE) == 0x000DF4, "Member 'AB_Assault_Surgical_Thermal_Athena_C::ScalePlayerThermal__Direction_53EEC0934805CD1ABD5237ADD42E83EE' has a wrong offset!");
static_assert(offsetof(AB_Assault_Surgical_Thermal_Athena_C, ScalePlayerThermal) == 0x000DF8, "Member 'AB_Assault_Surgical_Thermal_Athena_C::ScalePlayerThermal' has a wrong offset!");
static_assert(offsetof(AB_Assault_Surgical_Thermal_Athena_C, ScalePlayerVisibility) == 0x000E00, "Member 'AB_Assault_Surgical_Thermal_Athena_C::ScalePlayerVisibility' has a wrong offset!");
static_assert(offsetof(AB_Assault_Surgical_Thermal_Athena_C, BlendInTime) == 0x000E08, "Member 'AB_Assault_Surgical_Thermal_Athena_C::BlendInTime' has a wrong offset!");

}

