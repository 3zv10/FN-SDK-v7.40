﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UpgradeMonitor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UpgradeMonitor.UpgradeMonitor_C
// 0x0030 (0x0360 - 0x0330)
class AUpgradeMonitor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Monitor;                                        // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         IconTransition_NoiseTrack_91F32E2D4993BD4F612A23BFAFACADE0; // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            IconTransition__Direction_91F32E2D4993BD4F612A23BFAFACADE0; // 0x034C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34D[0x3];                                      // 0x034D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     IconTransition;                                    // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_MonitorScreen;                                 // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UpgradeMonitor(int32 EntryPoint);
	void Activate_Gadgets();
	void Activate_Utilities();
	void Activation_Distortion();
	void IconTransition__FinishedFunc();
	void IconTransition__UpdateFunc();
	void SetMonitorDistort();
	void SetUtilities_Icon(class UTexture2D* Active_Icon);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UpgradeMonitor_C">();
	}
	static class AUpgradeMonitor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUpgradeMonitor_C>();
	}
};
static_assert(alignof(AUpgradeMonitor_C) == 0x000008, "Wrong alignment on AUpgradeMonitor_C");
static_assert(sizeof(AUpgradeMonitor_C) == 0x000360, "Wrong size on AUpgradeMonitor_C");
static_assert(offsetof(AUpgradeMonitor_C, UberGraphFrame) == 0x000330, "Member 'AUpgradeMonitor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AUpgradeMonitor_C, SM_Monitor) == 0x000338, "Member 'AUpgradeMonitor_C::SM_Monitor' has a wrong offset!");
static_assert(offsetof(AUpgradeMonitor_C, DefaultSceneRoot) == 0x000340, "Member 'AUpgradeMonitor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AUpgradeMonitor_C, IconTransition_NoiseTrack_91F32E2D4993BD4F612A23BFAFACADE0) == 0x000348, "Member 'AUpgradeMonitor_C::IconTransition_NoiseTrack_91F32E2D4993BD4F612A23BFAFACADE0' has a wrong offset!");
static_assert(offsetof(AUpgradeMonitor_C, IconTransition__Direction_91F32E2D4993BD4F612A23BFAFACADE0) == 0x00034C, "Member 'AUpgradeMonitor_C::IconTransition__Direction_91F32E2D4993BD4F612A23BFAFACADE0' has a wrong offset!");
static_assert(offsetof(AUpgradeMonitor_C, IconTransition) == 0x000350, "Member 'AUpgradeMonitor_C::IconTransition' has a wrong offset!");
static_assert(offsetof(AUpgradeMonitor_C, MID_MonitorScreen) == 0x000358, "Member 'AUpgradeMonitor_C::MID_MonitorScreen' has a wrong offset!");

}

