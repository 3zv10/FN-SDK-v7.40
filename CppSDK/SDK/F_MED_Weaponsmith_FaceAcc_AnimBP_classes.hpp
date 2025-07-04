﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_Weaponsmith_FaceAcc_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_Weaponsmith_FaceAcc_AnimBP.F_MED_Weaponsmith_FaceAcc_AnimBP_C
// 0x06F0 (0x0AC0 - 0x03D0)
class UF_MED_Weaponsmith_FaceAcc_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_6ADB1E924A69A9B47261728A57C90322; // 0x03D8(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_B668EC764724C9E704DB9882F844B344; // 0x03F8(0x0138)(ContainsInstancedReference)
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_00F0BAAF4611AD82C8B7BCBF6571CD1D; // 0x0530(0x0550)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_88458D474A312ACB930E6A9E91A193D7; // 0x0A80(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_39E082974576B23B2FC63890B520AFA1; // 0x0AA0(0x0020)()

public:
	void ExecuteUbergraph_F_MED_Weaponsmith_FaceAcc_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_Weaponsmith_FaceAcc_AnimBP_C">();
	}
	static class UF_MED_Weaponsmith_FaceAcc_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_Weaponsmith_FaceAcc_AnimBP_C>();
	}
};
static_assert(alignof(UF_MED_Weaponsmith_FaceAcc_AnimBP_C) == 0x000010, "Wrong alignment on UF_MED_Weaponsmith_FaceAcc_AnimBP_C");
static_assert(sizeof(UF_MED_Weaponsmith_FaceAcc_AnimBP_C) == 0x000AC0, "Wrong size on UF_MED_Weaponsmith_FaceAcc_AnimBP_C");
static_assert(offsetof(UF_MED_Weaponsmith_FaceAcc_AnimBP_C, UberGraphFrame) == 0x0003D0, "Member 'UF_MED_Weaponsmith_FaceAcc_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_FaceAcc_AnimBP_C, AnimGraphNode_Root_6ADB1E924A69A9B47261728A57C90322) == 0x0003D8, "Member 'UF_MED_Weaponsmith_FaceAcc_AnimBP_C::AnimGraphNode_Root_6ADB1E924A69A9B47261728A57C90322' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_FaceAcc_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_B668EC764724C9E704DB9882F844B344) == 0x0003F8, "Member 'UF_MED_Weaponsmith_FaceAcc_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_B668EC764724C9E704DB9882F844B344' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_FaceAcc_AnimBP_C, AnimGraphNode_RigidBody_00F0BAAF4611AD82C8B7BCBF6571CD1D) == 0x000530, "Member 'UF_MED_Weaponsmith_FaceAcc_AnimBP_C::AnimGraphNode_RigidBody_00F0BAAF4611AD82C8B7BCBF6571CD1D' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_FaceAcc_AnimBP_C, AnimGraphNode_LocalToComponentSpace_88458D474A312ACB930E6A9E91A193D7) == 0x000A80, "Member 'UF_MED_Weaponsmith_FaceAcc_AnimBP_C::AnimGraphNode_LocalToComponentSpace_88458D474A312ACB930E6A9E91A193D7' has a wrong offset!");
static_assert(offsetof(UF_MED_Weaponsmith_FaceAcc_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_39E082974576B23B2FC63890B520AFA1) == 0x000AA0, "Member 'UF_MED_Weaponsmith_FaceAcc_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_39E082974576B23B2FC63890B520AFA1' has a wrong offset!");

}

