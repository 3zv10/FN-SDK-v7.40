﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CMS_ML_BattlePass_RightImageWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function CMS_ML_BattlePass_RightImageWidget.CMS_ML_BattlePass_RightImageWidget_C.ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget
// 0x0040 (0x0040 - 0x0000)
struct CMS_ML_BattlePass_RightImageWidget_C_ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaAccountContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCurrentSeasonName_ReturnValue;         // 0x0010(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0028(0x0018)()
};
static_assert(alignof(CMS_ML_BattlePass_RightImageWidget_C_ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget) == 0x000008, "Wrong alignment on CMS_ML_BattlePass_RightImageWidget_C_ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget");
static_assert(sizeof(CMS_ML_BattlePass_RightImageWidget_C_ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget) == 0x000040, "Wrong size on CMS_ML_BattlePass_RightImageWidget_C_ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget");
static_assert(offsetof(CMS_ML_BattlePass_RightImageWidget_C_ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget, EntryPoint) == 0x000000, "Member 'CMS_ML_BattlePass_RightImageWidget_C_ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(CMS_ML_BattlePass_RightImageWidget_C_ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'CMS_ML_BattlePass_RightImageWidget_C_ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(CMS_ML_BattlePass_RightImageWidget_C_ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget, CallFunc_GetCurrentSeasonName_ReturnValue) == 0x000010, "Member 'CMS_ML_BattlePass_RightImageWidget_C_ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget::CallFunc_GetCurrentSeasonName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CMS_ML_BattlePass_RightImageWidget_C_ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget, CallFunc_TextToUpper_ReturnValue) == 0x000028, "Member 'CMS_ML_BattlePass_RightImageWidget_C_ExecuteUbergraph_CMS_ML_BattlePass_RightImageWidget::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

}

