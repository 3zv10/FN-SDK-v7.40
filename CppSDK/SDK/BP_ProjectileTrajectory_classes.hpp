﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProjectileTrajectory

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ProjectileTrajectory.BP_ProjectileTrajectory_C
// 0x0058 (0x0388 - 0x0330)
class ABP_ProjectileTrajectory_C : public AFortProjectileTrajectory
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Target;                                            // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxMeshCount;                                      // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_354[0x4];                                      // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USplineMeshComponent*>           SplineMeshComponents;                              // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               SplineMID;                                         // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SplineFadeDistance;                                // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SplineFadeStartDistance;                           // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Trajectory_Owner;                                  // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Update_Timer_Handle;                               // 0x0380(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ProjectileTrajectory(int32 EntryPoint);
	void SetTrajectoryFromNative(const TArray<struct FVector>& SplinePoints, const TArray<struct FVector>& SplineTangents);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetTrajectorySpline(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents);
	void UpdateFromTrajectoryOwner();
	void SetShouldUpdateFromOwner(bool ShouldUpdate, class UObject* Owner_0, float Interval);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ProjectileTrajectory_C">();
	}
	static class ABP_ProjectileTrajectory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ProjectileTrajectory_C>();
	}
};
static_assert(alignof(ABP_ProjectileTrajectory_C) == 0x000008, "Wrong alignment on ABP_ProjectileTrajectory_C");
static_assert(sizeof(ABP_ProjectileTrajectory_C) == 0x000388, "Wrong size on ABP_ProjectileTrajectory_C");
static_assert(offsetof(ABP_ProjectileTrajectory_C, UberGraphFrame) == 0x000330, "Member 'ABP_ProjectileTrajectory_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, Target) == 0x000338, "Member 'ABP_ProjectileTrajectory_C::Target' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, Spline) == 0x000340, "Member 'ABP_ProjectileTrajectory_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, DefaultSceneRoot) == 0x000348, "Member 'ABP_ProjectileTrajectory_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, MaxMeshCount) == 0x000350, "Member 'ABP_ProjectileTrajectory_C::MaxMeshCount' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, SplineMeshComponents) == 0x000358, "Member 'ABP_ProjectileTrajectory_C::SplineMeshComponents' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, SplineMID) == 0x000368, "Member 'ABP_ProjectileTrajectory_C::SplineMID' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, SplineFadeDistance) == 0x000370, "Member 'ABP_ProjectileTrajectory_C::SplineFadeDistance' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, SplineFadeStartDistance) == 0x000374, "Member 'ABP_ProjectileTrajectory_C::SplineFadeStartDistance' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, Trajectory_Owner) == 0x000378, "Member 'ABP_ProjectileTrajectory_C::Trajectory_Owner' has a wrong offset!");
static_assert(offsetof(ABP_ProjectileTrajectory_C, Update_Timer_Handle) == 0x000380, "Member 'ABP_ProjectileTrajectory_C::Update_Timer_Handle' has a wrong offset!");

}

