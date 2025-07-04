﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePassDirectAcquisitionScreen

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.ExecuteUbergraph_BattlePassDirectAcquisitionScreen
// 0x00E8 (0x00E8 - 0x0000)
struct BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActivated_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaAccountContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCurrentSeasonName_ReturnValue;         // 0x0010(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0028(0x0018)()
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0040(0x0010)(NoDestructor)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0040)(HasGetValueTypeHash)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B0(0x0018)()
	struct FDateTime                              CallFunc_GetSeasonStoreEndDate_ReturnValue;        // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue1;                  // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen) == 0x000008, "Wrong alignment on BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen");
static_assert(sizeof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen) == 0x0000E8, "Wrong size on BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen, EntryPoint) == 0x000000, "Member 'BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen, CallFunc_IsActivated_ReturnValue) == 0x000004, "Member 'BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen::CallFunc_IsActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen, CallFunc_GetCurrentSeasonName_ReturnValue) == 0x000010, "Member 'BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen::CallFunc_GetCurrentSeasonName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen, CallFunc_TextToUpper_ReturnValue) == 0x000028, "Member 'BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen, K2Node_MakeStruct_DataTableRowHandle) == 0x000040, "Member 'BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000090, "Member 'BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen, K2Node_MakeArray_Array) == 0x0000A0, "Member 'BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen, CallFunc_Format_ReturnValue) == 0x0000B0, "Member 'BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen, CallFunc_GetSeasonStoreEndDate_ReturnValue) == 0x0000C8, "Member 'BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen::CallFunc_GetSeasonStoreEndDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen, K2Node_ComponentBoundEvent_Button) == 0x0000D0, "Member 'BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen, CallFunc_GetContext_ReturnValue1) == 0x0000D8, "Member 'BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen, CallFunc_GetContext_ReturnValue2) == 0x0000E0, "Member 'BattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen::CallFunc_GetContext_ReturnValue2' has a wrong offset!");

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattlePassDirectAcquisitionScreen_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattlePassDirectAcquisitionScreen_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BattlePassDirectAcquisitionScreen_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BattlePassDirectAcquisitionScreen_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BattlePassDirectAcquisitionScreen_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BattlePassDirectAcquisitionScreen_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.GenerateOfferWidget
// 0x0040 (0x0040 - 0x0000)
struct BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget final
{
public:
	class UFortStoreFrontOfferInfo*               OfferData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasDisplayAsset_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBox*                         K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaDirectAcquisitionOfferWidget_C*  CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget) == 0x000008, "Wrong alignment on BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget");
static_assert(sizeof(BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget) == 0x000040, "Wrong size on BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget, OfferData) == 0x000000, "Member 'BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget::OfferData' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_HasDisplayAsset_ReturnValue) == 0x000008, "Member 'BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_HasDisplayAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_Percent_IntInt_ReturnValue) == 0x000010, "Member 'BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget, Temp_int_Variable) == 0x000014, "Member 'BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget, K2Node_Select_Default) == 0x000020, "Member 'BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000028, "Member 'BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_Create_ReturnValue) == 0x000030, "Member 'BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000038, "Member 'BattlePassDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Focus
// 0x0008 (0x0008 - 0x0000)
struct BattlePassDirectAcquisitionScreen_C_Focus final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattlePassDirectAcquisitionScreen_C_Focus) == 0x000008, "Wrong alignment on BattlePassDirectAcquisitionScreen_C_Focus");
static_assert(sizeof(BattlePassDirectAcquisitionScreen_C_Focus) == 0x000008, "Wrong size on BattlePassDirectAcquisitionScreen_C_Focus");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_Focus, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'BattlePassDirectAcquisitionScreen_C_Focus::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.HandleBack
// 0x0010 (0x0010 - 0x0000)
struct BattlePassDirectAcquisitionScreen_C_HandleBack final
{
public:
	bool                                          bPassThrough;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattlePassDirectAcquisitionScreen_C_HandleBack) == 0x000008, "Wrong alignment on BattlePassDirectAcquisitionScreen_C_HandleBack");
static_assert(sizeof(BattlePassDirectAcquisitionScreen_C_HandleBack) == 0x000010, "Wrong size on BattlePassDirectAcquisitionScreen_C_HandleBack");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_HandleBack, bPassThrough) == 0x000000, "Member 'BattlePassDirectAcquisitionScreen_C_HandleBack::bPassThrough' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_HandleBack, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000008, "Member 'BattlePassDirectAcquisitionScreen_C_HandleBack::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.On_CommonBorderTouchToClose_MouseButtonUp
// 0x0228 (0x0228 - 0x0000)
struct BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0168(0x00B8)()
	bool                                          CallFunc_HandleBack_bPassThrough;                  // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp) == 0x000008, "Wrong alignment on BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp");
static_assert(sizeof(BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp) == 0x000228, "Wrong size on BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp, MyGeometry) == 0x000000, "Member 'BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp, MouseEvent) == 0x000038, "Member 'BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp::MouseEvent' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp, ReturnValue) == 0x0000A8, "Member 'BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp, CallFunc_IsMobileGame_ReturnValue) == 0x000160, "Member 'BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp, CallFunc_Handled_ReturnValue) == 0x000168, "Member 'BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp, CallFunc_HandleBack_bPassThrough) == 0x000220, "Member 'BattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp::CallFunc_HandleBack_bPassThrough' has a wrong offset!");

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Intro Anim "Header"
// 0x0008 (0x0008 - 0x0000)
struct BattlePassDirectAcquisitionScreen_C_Intro_Anim__Header_ final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattlePassDirectAcquisitionScreen_C_Intro_Anim__Header_) == 0x000008, "Wrong alignment on BattlePassDirectAcquisitionScreen_C_Intro_Anim__Header_");
static_assert(sizeof(BattlePassDirectAcquisitionScreen_C_Intro_Anim__Header_) == 0x000008, "Wrong size on BattlePassDirectAcquisitionScreen_C_Intro_Anim__Header_");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_Intro_Anim__Header_, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'BattlePassDirectAcquisitionScreen_C_Intro_Anim__Header_::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Intro Anim "OR"
// 0x0008 (0x0008 - 0x0000)
struct BattlePassDirectAcquisitionScreen_C_Intro_Anim__OR_ final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattlePassDirectAcquisitionScreen_C_Intro_Anim__OR_) == 0x000008, "Wrong alignment on BattlePassDirectAcquisitionScreen_C_Intro_Anim__OR_");
static_assert(sizeof(BattlePassDirectAcquisitionScreen_C_Intro_Anim__OR_) == 0x000008, "Wrong size on BattlePassDirectAcquisitionScreen_C_Intro_Anim__OR_");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_Intro_Anim__OR_, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'BattlePassDirectAcquisitionScreen_C_Intro_Anim__OR_::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Intro Anim "Tiles"
// 0x0008 (0x0008 - 0x0000)
struct BattlePassDirectAcquisitionScreen_C_Intro_Anim__Tiles_ final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattlePassDirectAcquisitionScreen_C_Intro_Anim__Tiles_) == 0x000008, "Wrong alignment on BattlePassDirectAcquisitionScreen_C_Intro_Anim__Tiles_");
static_assert(sizeof(BattlePassDirectAcquisitionScreen_C_Intro_Anim__Tiles_) == 0x000008, "Wrong size on BattlePassDirectAcquisitionScreen_C_Intro_Anim__Tiles_");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_Intro_Anim__Tiles_, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'BattlePassDirectAcquisitionScreen_C_Intro_Anim__Tiles_::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Intro Anim Reset
// 0x0008 (0x0008 - 0x0000)
struct BattlePassDirectAcquisitionScreen_C_Intro_Anim_Reset final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattlePassDirectAcquisitionScreen_C_Intro_Anim_Reset) == 0x000008, "Wrong alignment on BattlePassDirectAcquisitionScreen_C_Intro_Anim_Reset");
static_assert(sizeof(BattlePassDirectAcquisitionScreen_C_Intro_Anim_Reset) == 0x000008, "Wrong size on BattlePassDirectAcquisitionScreen_C_Intro_Anim_Reset");
static_assert(offsetof(BattlePassDirectAcquisitionScreen_C_Intro_Anim_Reset, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'BattlePassDirectAcquisitionScreen_C_Intro_Anim_Reset::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

