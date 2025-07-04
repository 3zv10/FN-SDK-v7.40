﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DetailLevelMesh

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DetailLevelMesh.BP_DetailLevelMesh_C
// 0x0020 (0x0350 - 0x0330)
class ABP_DetailLevelMesh_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          AlwaysVisible;                                     // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NotVisibleOnSwitch;                                // 0x0349(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_DetailLevelMesh(int32 EntryPoint);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DetailLevelMesh_C">();
	}
	static class ABP_DetailLevelMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DetailLevelMesh_C>();
	}
};
static_assert(alignof(ABP_DetailLevelMesh_C) == 0x000008, "Wrong alignment on ABP_DetailLevelMesh_C");
static_assert(sizeof(ABP_DetailLevelMesh_C) == 0x000350, "Wrong size on ABP_DetailLevelMesh_C");
static_assert(offsetof(ABP_DetailLevelMesh_C, UberGraphFrame) == 0x000330, "Member 'ABP_DetailLevelMesh_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DetailLevelMesh_C, StaticMesh) == 0x000338, "Member 'ABP_DetailLevelMesh_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_DetailLevelMesh_C, DefaultSceneRoot) == 0x000340, "Member 'ABP_DetailLevelMesh_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DetailLevelMesh_C, AlwaysVisible) == 0x000348, "Member 'ABP_DetailLevelMesh_C::AlwaysVisible' has a wrong offset!");
static_assert(offsetof(ABP_DetailLevelMesh_C, NotVisibleOnSwitch) == 0x000349, "Member 'ABP_DetailLevelMesh_C::NotVisibleOnSwitch' has a wrong offset!");

}

