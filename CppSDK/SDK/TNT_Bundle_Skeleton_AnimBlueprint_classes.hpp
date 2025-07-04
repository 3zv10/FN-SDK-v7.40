﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TNT_Bundle_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass TNT_Bundle_Skeleton_AnimBlueprint.TNT_Bundle_Skeleton_AnimBlueprint_C
// 0x0608 (0x0870 - 0x0268)
class UTNT_Bundle_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_268[0x8];                                      // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_0E80607941CA5A58311D7BA7D9236346; // 0x0278(0x0020)()
	struct FAnimNode_SubInput                     AnimGraphNode_SubInput_32C7856A4D26D995F6C882A32CC23B8A; // 0x0298(0x0048)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_BD65FF0045636DFF1FF3C7B74BBDF795; // 0x02E0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_70244CF849E450BB78DF9998D765E8BA; // 0x0300(0x0020)()
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody_6FB8161844712FE393C4D1B1C2EB894D; // 0x0320(0x0550)()

public:
	void ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TNT_Bundle_Skeleton_AnimBlueprint_C">();
	}
	static class UTNT_Bundle_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTNT_Bundle_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UTNT_Bundle_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UTNT_Bundle_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UTNT_Bundle_Skeleton_AnimBlueprint_C) == 0x000870, "Wrong size on UTNT_Bundle_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UTNT_Bundle_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x000270, "Member 'UTNT_Bundle_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTNT_Bundle_Skeleton_AnimBlueprint_C, AnimGraphNode_Root_0E80607941CA5A58311D7BA7D9236346) == 0x000278, "Member 'UTNT_Bundle_Skeleton_AnimBlueprint_C::AnimGraphNode_Root_0E80607941CA5A58311D7BA7D9236346' has a wrong offset!");
static_assert(offsetof(UTNT_Bundle_Skeleton_AnimBlueprint_C, AnimGraphNode_SubInput_32C7856A4D26D995F6C882A32CC23B8A) == 0x000298, "Member 'UTNT_Bundle_Skeleton_AnimBlueprint_C::AnimGraphNode_SubInput_32C7856A4D26D995F6C882A32CC23B8A' has a wrong offset!");
static_assert(offsetof(UTNT_Bundle_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace_BD65FF0045636DFF1FF3C7B74BBDF795) == 0x0002E0, "Member 'UTNT_Bundle_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace_BD65FF0045636DFF1FF3C7B74BBDF795' has a wrong offset!");
static_assert(offsetof(UTNT_Bundle_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace_70244CF849E450BB78DF9998D765E8BA) == 0x000300, "Member 'UTNT_Bundle_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace_70244CF849E450BB78DF9998D765E8BA' has a wrong offset!");
static_assert(offsetof(UTNT_Bundle_Skeleton_AnimBlueprint_C, AnimGraphNode_RigidBody_6FB8161844712FE393C4D1B1C2EB894D) == 0x000320, "Member 'UTNT_Bundle_Skeleton_AnimBlueprint_C::AnimGraphNode_RigidBody_6FB8161844712FE393C4D1B1C2EB894D' has a wrong offset!");

}

