﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CMS_ML_BattlePass_RightImageWidget

#include "Basic.hpp"

#include "EpicCMSUIFramework_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CMS_ML_BattlePass_RightImageWidget.CMS_ML_BattlePass_RightImageWidget_C
// 0x0020 (0x0270 - 0x0250)
class UCMS_ML_BattlePass_RightImageWidget_C final : public UEpicCMSSimpleMessage
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       SeasonName;                                        // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SoftGlow;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SoftTextShadow;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CMS_ML_BattlePass_RightImageWidget_C">();
	}
	static class UCMS_ML_BattlePass_RightImageWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCMS_ML_BattlePass_RightImageWidget_C>();
	}
};
static_assert(alignof(UCMS_ML_BattlePass_RightImageWidget_C) == 0x000008, "Wrong alignment on UCMS_ML_BattlePass_RightImageWidget_C");
static_assert(sizeof(UCMS_ML_BattlePass_RightImageWidget_C) == 0x000270, "Wrong size on UCMS_ML_BattlePass_RightImageWidget_C");
static_assert(offsetof(UCMS_ML_BattlePass_RightImageWidget_C, UberGraphFrame) == 0x000250, "Member 'UCMS_ML_BattlePass_RightImageWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCMS_ML_BattlePass_RightImageWidget_C, SeasonName) == 0x000258, "Member 'UCMS_ML_BattlePass_RightImageWidget_C::SeasonName' has a wrong offset!");
static_assert(offsetof(UCMS_ML_BattlePass_RightImageWidget_C, SoftGlow) == 0x000260, "Member 'UCMS_ML_BattlePass_RightImageWidget_C::SoftGlow' has a wrong offset!");
static_assert(offsetof(UCMS_ML_BattlePass_RightImageWidget_C, SoftTextShadow) == 0x000268, "Member 'UCMS_ML_BattlePass_RightImageWidget_C::SoftTextShadow' has a wrong offset!");

}

