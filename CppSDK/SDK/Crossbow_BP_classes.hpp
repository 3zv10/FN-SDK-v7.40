﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Crossbow_BP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Crossbow_BP.Crossbow_BP_C
// 0x00F0 (0x0358 - 0x0268)
class UCrossbow_BP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_268[0x8];                                      // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                         AnimGraphNode_Slot_C2CE56F348B7595774725785CADC3973; // 0x0278(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root_F1B1D70144C41EE177919293C033515D; // 0x02C0(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_DB6FD6CD480FD66D7D67B3BB318137F7; // 0x02E0(0x0078)()

public:
	void ExecuteUbergraph_Crossbow_BP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Crossbow_BP_C">();
	}
	static class UCrossbow_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrossbow_BP_C>();
	}
};
static_assert(alignof(UCrossbow_BP_C) == 0x000008, "Wrong alignment on UCrossbow_BP_C");
static_assert(sizeof(UCrossbow_BP_C) == 0x000358, "Wrong size on UCrossbow_BP_C");
static_assert(offsetof(UCrossbow_BP_C, UberGraphFrame) == 0x000270, "Member 'UCrossbow_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCrossbow_BP_C, AnimGraphNode_Slot_C2CE56F348B7595774725785CADC3973) == 0x000278, "Member 'UCrossbow_BP_C::AnimGraphNode_Slot_C2CE56F348B7595774725785CADC3973' has a wrong offset!");
static_assert(offsetof(UCrossbow_BP_C, AnimGraphNode_Root_F1B1D70144C41EE177919293C033515D) == 0x0002C0, "Member 'UCrossbow_BP_C::AnimGraphNode_Root_F1B1D70144C41EE177919293C033515D' has a wrong offset!");
static_assert(offsetof(UCrossbow_BP_C, AnimGraphNode_SequencePlayer_DB6FD6CD480FD66D7D67B3BB318137F7) == 0x0002E0, "Member 'UCrossbow_BP_C::AnimGraphNode_SequencePlayer_DB6FD6CD480FD66D7D67B3BB318137F7' has a wrong offset!");

}

