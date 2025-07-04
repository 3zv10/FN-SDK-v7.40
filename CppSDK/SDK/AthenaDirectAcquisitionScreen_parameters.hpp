﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionScreen

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.ExecuteUbergraph_AthenaDirectAcquisitionScreen
// 0x0168 (0x0168 - 0x0000)
struct AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSmallPreviewImage_ReturnValue;         // 0x0008(0x0028)(HasGetValueTypeHash)
	struct FFortToastDisplayInfo                  K2Node_MakeStruct_FortToastDisplayInfo;            // 0x0030(0x0060)()
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetAffiliateName_ReturnValue;             // 0x0098(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActivated_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetWeeklyStoreEndDate_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetDailyStoreEndDate_ReturnValue;         // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_HasOtherPlatformCurrency;             // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_CurrencyMessageLocText;               // 0x00C8(0x0018)(ConstParm)
	bool                                          Temp_bool_Variable;                                // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;            // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEnableSplitWalletTextNotice_ReturnValue; // 0x00F0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F2[0x2];                                       // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x00F4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue1;           // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_AffiliateName;                        // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0120(0x0018)()
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13E[0x2];                                      // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortStoreContext*                      CallFunc_GetContext_ReturnValue1;                  // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue2;                  // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue3;                  // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue2;           // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bDisplayToast;                        // 0x0160(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen");
static_assert(sizeof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen) == 0x000168, "Wrong size on AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, EntryPoint) == 0x000000, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, Temp_byte_Variable) == 0x000004, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_GetSmallPreviewImage_ReturnValue) == 0x000008, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_GetSmallPreviewImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, K2Node_MakeStruct_FortToastDisplayInfo) == 0x000030, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::K2Node_MakeStruct_FortToastDisplayInfo' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_GetContext_ReturnValue) == 0x000090, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_GetAffiliateName_ReturnValue) == 0x000098, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_GetAffiliateName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_IsActivated_ReturnValue) == 0x0000A8, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_IsActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_GetWeeklyStoreEndDate_ReturnValue) == 0x0000B0, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_GetWeeklyStoreEndDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_GetDailyStoreEndDate_ReturnValue) == 0x0000B8, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_GetDailyStoreEndDate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, Temp_byte_Variable1) == 0x0000C0, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, K2Node_Event_HasOtherPlatformCurrency) == 0x0000C1, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::K2Node_Event_HasOtherPlatformCurrency' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, K2Node_Event_CurrencyMessageLocText) == 0x0000C8, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::K2Node_Event_CurrencyMessageLocText' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, Temp_bool_Variable) == 0x0000E0, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_GetRuntimeOptions_ReturnValue) == 0x0000E8, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_GetEnableSplitWalletTextNotice_ReturnValue) == 0x0000F0, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_GetEnableSplitWalletTextNotice_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_BooleanAND_ReturnValue) == 0x0000F1, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, K2Node_CreateDelegate_OutputDelegate) == 0x0000F4, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_GetRuntimeOptions_ReturnValue1) == 0x000108, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_GetRuntimeOptions_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, K2Node_Event_AffiliateName) == 0x000110, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::K2Node_Event_AffiliateName' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_Conv_StringToText_ReturnValue) == 0x000120, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_Len_ReturnValue) == 0x000138, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_Greater_IntInt_ReturnValue) == 0x00013C, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, K2Node_Select_Default) == 0x00013D, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_GetContext_ReturnValue1) == 0x000140, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_GetContext_ReturnValue2) == 0x000148, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_GetContext_ReturnValue3) == 0x000150, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_GetContext_ReturnValue3' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, CallFunc_GetRuntimeOptions_ReturnValue2) == 0x000158, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::CallFunc_GetRuntimeOptions_ReturnValue2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen, K2Node_Event_bDisplayToast) == 0x000160, "Member 'AthenaDirectAcquisitionScreen_C_ExecuteUbergraph_AthenaDirectAcquisitionScreen::K2Node_Event_bDisplayToast' has a wrong offset!");

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnDisplayToast
// 0x0001 (0x0001 - 0x0000)
struct AthenaDirectAcquisitionScreen_C_OnDisplayToast final
{
public:
	bool                                          bDisplayToast;                                     // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaDirectAcquisitionScreen_C_OnDisplayToast) == 0x000001, "Wrong alignment on AthenaDirectAcquisitionScreen_C_OnDisplayToast");
static_assert(sizeof(AthenaDirectAcquisitionScreen_C_OnDisplayToast) == 0x000001, "Wrong size on AthenaDirectAcquisitionScreen_C_OnDisplayToast");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_OnDisplayToast, bDisplayToast) == 0x000000, "Member 'AthenaDirectAcquisitionScreen_C_OnDisplayToast::bDisplayToast' has a wrong offset!");

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnAffiliateUpdated
// 0x0010 (0x0010 - 0x0000)
struct AthenaDirectAcquisitionScreen_C_OnAffiliateUpdated final
{
public:
	class FString                                 AffiliateName_0;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaDirectAcquisitionScreen_C_OnAffiliateUpdated) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionScreen_C_OnAffiliateUpdated");
static_assert(sizeof(AthenaDirectAcquisitionScreen_C_OnAffiliateUpdated) == 0x000010, "Wrong size on AthenaDirectAcquisitionScreen_C_OnAffiliateUpdated");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_OnAffiliateUpdated, AffiliateName_0) == 0x000000, "Member 'AthenaDirectAcquisitionScreen_C_OnAffiliateUpdated::AffiliateName_0' has a wrong offset!");

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.OnUpdateOtherPlatformMTXMessage
// 0x0020 (0x0020 - 0x0000)
struct AthenaDirectAcquisitionScreen_C_OnUpdateOtherPlatformMTXMessage final
{
public:
	bool                                          HasOtherPlatformCurrency;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CurrencyMessageLocText;                            // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AthenaDirectAcquisitionScreen_C_OnUpdateOtherPlatformMTXMessage) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionScreen_C_OnUpdateOtherPlatformMTXMessage");
static_assert(sizeof(AthenaDirectAcquisitionScreen_C_OnUpdateOtherPlatformMTXMessage) == 0x000020, "Wrong size on AthenaDirectAcquisitionScreen_C_OnUpdateOtherPlatformMTXMessage");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_OnUpdateOtherPlatformMTXMessage, HasOtherPlatformCurrency) == 0x000000, "Member 'AthenaDirectAcquisitionScreen_C_OnUpdateOtherPlatformMTXMessage::HasOtherPlatformCurrency' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_OnUpdateOtherPlatformMTXMessage, CurrencyMessageLocText) == 0x000008, "Member 'AthenaDirectAcquisitionScreen_C_OnUpdateOtherPlatformMTXMessage::CurrencyMessageLocText' has a wrong offset!");

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.GenerateOfferWidget
// 0x0098 (0x0098 - 0x0000)
struct AthenaDirectAcquisitionScreen_C_GenerateOfferWidget final
{
public:
	class UFortStoreFrontOfferInfo*               OfferData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetFortStoreOfferCategory_ReturnValue;    // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetStorefrontName_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaDirectAcquisitionOfferWidget_C*  CallFunc_Map_Find_Value;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue1;            // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E[0x2];                                       // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue1;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaDirectAcquisitionOfferWidget_C*  CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionScreen_C_GenerateOfferWidget");
static_assert(sizeof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget) == 0x000098, "Wrong size on AthenaDirectAcquisitionScreen_C_GenerateOfferWidget");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, OfferData) == 0x000000, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::OfferData' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_GetFortStoreOfferCategory_ReturnValue) == 0x000008, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_GetFortStoreOfferCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_GetStorefrontName_ReturnValue) == 0x000018, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_GetStorefrontName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000020, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_Map_Find_Value) == 0x000028, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_Map_Find_ReturnValue) == 0x000030, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_Array_Get_Item) == 0x000038, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_Conv_StringToName_ReturnValue) == 0x000048, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000050, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_GetChildrenCount_ReturnValue) == 0x000054, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_Subtract_IntInt_ReturnValue) == 0x000058, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00005C, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_LessEqual_IntInt_ReturnValue1) == 0x00005D, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_LessEqual_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_Percent_IntInt_ReturnValue) == 0x000060, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_Divide_IntInt_ReturnValue) == 0x000064, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_SelectInt_ReturnValue) == 0x000068, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_SelectInt_ReturnValue1) == 0x00006C, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_SelectInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000078, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_Create_ReturnValue) == 0x000080, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_AddChildToGrid_ReturnValue) == 0x000088, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_GenerateOfferWidget, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000090, "Member 'AthenaDirectAcquisitionScreen_C_GenerateOfferWidget::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Focus
// 0x0008 (0x0008 - 0x0000)
struct AthenaDirectAcquisitionScreen_C_Focus final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaDirectAcquisitionScreen_C_Focus) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionScreen_C_Focus");
static_assert(sizeof(AthenaDirectAcquisitionScreen_C_Focus) == 0x000008, "Wrong size on AthenaDirectAcquisitionScreen_C_Focus");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_Focus, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'AthenaDirectAcquisitionScreen_C_Focus::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

// Function AthenaDirectAcquisitionScreen.AthenaDirectAcquisitionScreen_C.Handle_AffiliateButton
// 0x0020 (0x0020 - 0x0000)
struct AthenaDirectAcquisitionScreen_C_Handle_AffiliateButton final
{
public:
	bool                                          PassThrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAffiliateKeyModal_C*                   CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaDirectAcquisitionScreen_C_Handle_AffiliateButton) == 0x000008, "Wrong alignment on AthenaDirectAcquisitionScreen_C_Handle_AffiliateButton");
static_assert(sizeof(AthenaDirectAcquisitionScreen_C_Handle_AffiliateButton) == 0x000020, "Wrong size on AthenaDirectAcquisitionScreen_C_Handle_AffiliateButton");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_Handle_AffiliateButton, PassThrough) == 0x000000, "Member 'AthenaDirectAcquisitionScreen_C_Handle_AffiliateButton::PassThrough' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_Handle_AffiliateButton, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'AthenaDirectAcquisitionScreen_C_Handle_AffiliateButton::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_Handle_AffiliateButton, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000010, "Member 'AthenaDirectAcquisitionScreen_C_Handle_AffiliateButton::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionScreen_C_Handle_AffiliateButton, CallFunc_Create_ReturnValue) == 0x000018, "Member 'AthenaDirectAcquisitionScreen_C_Handle_AffiliateButton::CallFunc_Create_ReturnValue' has a wrong offset!");

}

