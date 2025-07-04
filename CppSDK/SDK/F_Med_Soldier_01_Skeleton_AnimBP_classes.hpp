﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_Med_Soldier_01_Skeleton_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C
// 0x07E0 (0x0BB0 - 0x03D0)
class UF_Med_Soldier_01_Skeleton_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                         Pad_3D8[0x8];                                      // 0x03D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_890FCD7B4F0BC2EEEACB239A83BE5515; // 0x03E0(0x0310)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_D20022EC456996650C5FAABD9F94D5EE; // 0x06F0(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4BCC3F7145A9FA4683D5FE9E44B0F767; // 0x0710(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451; // 0x0730(0x0138)(ContainsInstancedReference)
	struct FAnimNode_Root                         AnimGraphNode_Root_731F596B47445FF9472B5097E71E411C; // 0x0868(0x0020)()
	uint8                                         Pad_888[0x8];                                      // 0x0888(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_AnimDynamics                 AnimGraphNode_AnimDynamics_56F62F3B493C77E730A7C0A4F1892259; // 0x0890(0x0310)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x0BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_Med_Soldier_01_Skeleton_AnimBP_C">();
	}
	static class UF_Med_Soldier_01_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_Med_Soldier_01_Skeleton_AnimBP_C>();
	}
};
static_assert(alignof(UF_Med_Soldier_01_Skeleton_AnimBP_C) == 0x000010, "Wrong alignment on UF_Med_Soldier_01_Skeleton_AnimBP_C");
static_assert(sizeof(UF_Med_Soldier_01_Skeleton_AnimBP_C) == 0x000BB0, "Wrong size on UF_Med_Soldier_01_Skeleton_AnimBP_C");
static_assert(offsetof(UF_Med_Soldier_01_Skeleton_AnimBP_C, UberGraphFrame) == 0x0003D0, "Member 'UF_Med_Soldier_01_Skeleton_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_Med_Soldier_01_Skeleton_AnimBP_C, AnimGraphNode_AnimDynamics_890FCD7B4F0BC2EEEACB239A83BE5515) == 0x0003E0, "Member 'UF_Med_Soldier_01_Skeleton_AnimBP_C::AnimGraphNode_AnimDynamics_890FCD7B4F0BC2EEEACB239A83BE5515' has a wrong offset!");
static_assert(offsetof(UF_Med_Soldier_01_Skeleton_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_D20022EC456996650C5FAABD9F94D5EE) == 0x0006F0, "Member 'UF_Med_Soldier_01_Skeleton_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_D20022EC456996650C5FAABD9F94D5EE' has a wrong offset!");
static_assert(offsetof(UF_Med_Soldier_01_Skeleton_AnimBP_C, AnimGraphNode_LocalToComponentSpace_4BCC3F7145A9FA4683D5FE9E44B0F767) == 0x000710, "Member 'UF_Med_Soldier_01_Skeleton_AnimBP_C::AnimGraphNode_LocalToComponentSpace_4BCC3F7145A9FA4683D5FE9E44B0F767' has a wrong offset!");
static_assert(offsetof(UF_Med_Soldier_01_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451) == 0x000730, "Member 'UF_Med_Soldier_01_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_FAD98FF0469710A7BDE0EDBF8A706451' has a wrong offset!");
static_assert(offsetof(UF_Med_Soldier_01_Skeleton_AnimBP_C, AnimGraphNode_Root_731F596B47445FF9472B5097E71E411C) == 0x000868, "Member 'UF_Med_Soldier_01_Skeleton_AnimBP_C::AnimGraphNode_Root_731F596B47445FF9472B5097E71E411C' has a wrong offset!");
static_assert(offsetof(UF_Med_Soldier_01_Skeleton_AnimBP_C, AnimGraphNode_AnimDynamics_56F62F3B493C77E730A7C0A4F1892259) == 0x000890, "Member 'UF_Med_Soldier_01_Skeleton_AnimBP_C::AnimGraphNode_AnimDynamics_56F62F3B493C77E730A7C0A4F1892259' has a wrong offset!");
static_assert(offsetof(UF_Med_Soldier_01_Skeleton_AnimBP_C, MeshToCopy) == 0x000BA0, "Member 'UF_Med_Soldier_01_Skeleton_AnimBP_C::MeshToCopy' has a wrong offset!");

}

