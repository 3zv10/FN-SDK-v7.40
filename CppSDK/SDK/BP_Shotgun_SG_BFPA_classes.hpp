﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shotgun_SG_BFPA

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C
// 0x0090 (0x02F8 - 0x0268)
class UBP_Shotgun_SG_BFPA_C final : public UAnimInstance
{
public:
	uint8                                         Pad_268[0x8];                                      // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_4F6329394B95E045DDC6838AB743FA3F; // 0x0278(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_58DF360140B29B2553BE3DB3DD1B36FB; // 0x0298(0x0048)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_87A69A934D766ABE8EC875A0703F52BB; // 0x02E0(0x0018)()

public:
	void ExecuteUbergraph_BP_Shotgun_SG_BFPA(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Shotgun_SG_BFPA_C">();
	}
	static class UBP_Shotgun_SG_BFPA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Shotgun_SG_BFPA_C>();
	}
};
static_assert(alignof(UBP_Shotgun_SG_BFPA_C) == 0x000008, "Wrong alignment on UBP_Shotgun_SG_BFPA_C");
static_assert(sizeof(UBP_Shotgun_SG_BFPA_C) == 0x0002F8, "Wrong size on UBP_Shotgun_SG_BFPA_C");
static_assert(offsetof(UBP_Shotgun_SG_BFPA_C, UberGraphFrame) == 0x000270, "Member 'UBP_Shotgun_SG_BFPA_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Shotgun_SG_BFPA_C, AnimGraphNode_Root_4F6329394B95E045DDC6838AB743FA3F) == 0x000278, "Member 'UBP_Shotgun_SG_BFPA_C::AnimGraphNode_Root_4F6329394B95E045DDC6838AB743FA3F' has a wrong offset!");
static_assert(offsetof(UBP_Shotgun_SG_BFPA_C, AnimGraphNode_Slot_58DF360140B29B2553BE3DB3DD1B36FB) == 0x000298, "Member 'UBP_Shotgun_SG_BFPA_C::AnimGraphNode_Slot_58DF360140B29B2553BE3DB3DD1B36FB' has a wrong offset!");
static_assert(offsetof(UBP_Shotgun_SG_BFPA_C, AnimGraphNode_LocalRefPose_87A69A934D766ABE8EC875A0703F52BB) == 0x0002E0, "Member 'UBP_Shotgun_SG_BFPA_C::AnimGraphNode_LocalRefPose_87A69A934D766ABE8EC875A0703F52BB' has a wrong offset!");

}

