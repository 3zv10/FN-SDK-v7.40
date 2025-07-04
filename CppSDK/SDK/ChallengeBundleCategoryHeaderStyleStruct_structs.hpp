﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeBundleCategoryHeaderStyleStruct

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// UserDefinedStruct ChallengeBundleCategoryHeaderStyleStruct.ChallengeBundleCategoryHeaderStyleStruct
// 0x00C8 (0x00C8 - 0x0000)
struct FChallengeBundleCategoryHeaderStyleStruct final
{
public:
	struct FSlateBrush                            IconAppearance_15_321A2C94451261E6A1B0528A8ADAC526; // 0x0000(0x0088)(Edit, BlueprintVisible)
	struct FWidgetTransform                       IconTransform_14_469C4A7F4C2CC3E64B542BA6E5C59619; // 0x0088(0x001C)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 BundleCategoryBorderStyle_23_8B995C4D4D97D0A237F876A7FF50038E; // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 BundleCategoryNameStyle_24_848047FA48E3432AAF50138C429A9108; // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 EffectWidget_30_A539FCD44D924941563417AACA249D7A;  // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanShowLockedIcon_29_092BDED14C0CD501C8F1D284FF240998; // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FChallengeBundleCategoryHeaderStyleStruct) == 0x000008, "Wrong alignment on FChallengeBundleCategoryHeaderStyleStruct");
static_assert(sizeof(FChallengeBundleCategoryHeaderStyleStruct) == 0x0000C8, "Wrong size on FChallengeBundleCategoryHeaderStyleStruct");
static_assert(offsetof(FChallengeBundleCategoryHeaderStyleStruct, IconAppearance_15_321A2C94451261E6A1B0528A8ADAC526) == 0x000000, "Member 'FChallengeBundleCategoryHeaderStyleStruct::IconAppearance_15_321A2C94451261E6A1B0528A8ADAC526' has a wrong offset!");
static_assert(offsetof(FChallengeBundleCategoryHeaderStyleStruct, IconTransform_14_469C4A7F4C2CC3E64B542BA6E5C59619) == 0x000088, "Member 'FChallengeBundleCategoryHeaderStyleStruct::IconTransform_14_469C4A7F4C2CC3E64B542BA6E5C59619' has a wrong offset!");
static_assert(offsetof(FChallengeBundleCategoryHeaderStyleStruct, BundleCategoryBorderStyle_23_8B995C4D4D97D0A237F876A7FF50038E) == 0x0000A8, "Member 'FChallengeBundleCategoryHeaderStyleStruct::BundleCategoryBorderStyle_23_8B995C4D4D97D0A237F876A7FF50038E' has a wrong offset!");
static_assert(offsetof(FChallengeBundleCategoryHeaderStyleStruct, BundleCategoryNameStyle_24_848047FA48E3432AAF50138C429A9108) == 0x0000B0, "Member 'FChallengeBundleCategoryHeaderStyleStruct::BundleCategoryNameStyle_24_848047FA48E3432AAF50138C429A9108' has a wrong offset!");
static_assert(offsetof(FChallengeBundleCategoryHeaderStyleStruct, EffectWidget_30_A539FCD44D924941563417AACA249D7A) == 0x0000B8, "Member 'FChallengeBundleCategoryHeaderStyleStruct::EffectWidget_30_A539FCD44D924941563417AACA249D7A' has a wrong offset!");
static_assert(offsetof(FChallengeBundleCategoryHeaderStyleStruct, CanShowLockedIcon_29_092BDED14C0CD501C8F1D284FF240998) == 0x0000C0, "Member 'FChallengeBundleCategoryHeaderStyleStruct::CanShowLockedIcon_29_092BDED14C0CD501C8F1D284FF240998' has a wrong offset!");

}

