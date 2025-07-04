﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionConfirmation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C
// 0x00A8 (0x0540 - 0x0498)
class UAthenaDirectAcquisitionConfirmation_C final : public UFortStoreFrontOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0498(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C* AthenaDirectAcquisitonDetails_BattlePassStarDetails; // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CancelButton;                                      // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Currency1ItemImage2;                               // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CurrencyVB;                                        // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ItemRewardsSB;                                     // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMTXButton_C*                           MTXButton;                                         // 0x04D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* NonrefundableText;                      // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               O_Sale_PreviousPrice;                              // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OfferName;                                         // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PurchaseButton;                                    // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOfferDisplayPrice1;                            // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOriginalPrice1;                                // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          CanPurchase;                                       // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPurchasing;                                      // 0x0511(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_512[0x2];                                      // 0x0512(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberToPurchase;                                  // 0x0514(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanPurchaseLeft;                                   // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanPurchaseRight;                                  // 0x0519(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanChangeQuantity;                                 // 0x051A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51B[0x5];                                      // 0x051B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   Confirm;                                           // 0x0520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   Decline;                                           // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_AthenaDirectAcquisitionConfirmation(int32 EntryPoint);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void OnOfferSet();
	void UpdateFromOffer();
	void SetupPrice(class UWidget* PriceContainer, class UTextBlock* NormalPriceText, class UWidget* SalePriceContainer, class UTextBlock* SalePriceText, class UImage* CurrencyImage);
	void UpdateItemList();
	void SetPurchaseNumber(int32 InNumToPurchse);
	void UpdateCatalogOfferName();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDirectAcquisitionConfirmation_C">();
	}
	static class UAthenaDirectAcquisitionConfirmation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDirectAcquisitionConfirmation_C>();
	}
};
static_assert(alignof(UAthenaDirectAcquisitionConfirmation_C) == 0x000008, "Wrong alignment on UAthenaDirectAcquisitionConfirmation_C");
static_assert(sizeof(UAthenaDirectAcquisitionConfirmation_C) == 0x000540, "Wrong size on UAthenaDirectAcquisitionConfirmation_C");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, UberGraphFrame) == 0x000498, "Member 'UAthenaDirectAcquisitionConfirmation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, AthenaDirectAcquisitonDetails_BattlePassStarDetails) == 0x0004A0, "Member 'UAthenaDirectAcquisitionConfirmation_C::AthenaDirectAcquisitonDetails_BattlePassStarDetails' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, CancelButton) == 0x0004A8, "Member 'UAthenaDirectAcquisitionConfirmation_C::CancelButton' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, CommonTextBlock_0) == 0x0004B0, "Member 'UAthenaDirectAcquisitionConfirmation_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, Currency1ItemImage2) == 0x0004B8, "Member 'UAthenaDirectAcquisitionConfirmation_C::Currency1ItemImage2' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, CurrencyVB) == 0x0004C0, "Member 'UAthenaDirectAcquisitionConfirmation_C::CurrencyVB' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, ItemRewardsSB) == 0x0004C8, "Member 'UAthenaDirectAcquisitionConfirmation_C::ItemRewardsSB' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, Lightbox) == 0x0004D0, "Member 'UAthenaDirectAcquisitionConfirmation_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, MTXButton) == 0x0004D8, "Member 'UAthenaDirectAcquisitionConfirmation_C::MTXButton' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, NonrefundableText) == 0x0004E0, "Member 'UAthenaDirectAcquisitionConfirmation_C::NonrefundableText' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, O_Sale_PreviousPrice) == 0x0004E8, "Member 'UAthenaDirectAcquisitionConfirmation_C::O_Sale_PreviousPrice' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, OfferName) == 0x0004F0, "Member 'UAthenaDirectAcquisitionConfirmation_C::OfferName' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, PurchaseButton) == 0x0004F8, "Member 'UAthenaDirectAcquisitionConfirmation_C::PurchaseButton' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, TextOfferDisplayPrice1) == 0x000500, "Member 'UAthenaDirectAcquisitionConfirmation_C::TextOfferDisplayPrice1' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, TextOriginalPrice1) == 0x000508, "Member 'UAthenaDirectAcquisitionConfirmation_C::TextOriginalPrice1' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, CanPurchase) == 0x000510, "Member 'UAthenaDirectAcquisitionConfirmation_C::CanPurchase' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, IsPurchasing) == 0x000511, "Member 'UAthenaDirectAcquisitionConfirmation_C::IsPurchasing' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, NumberToPurchase) == 0x000514, "Member 'UAthenaDirectAcquisitionConfirmation_C::NumberToPurchase' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, CanPurchaseLeft) == 0x000518, "Member 'UAthenaDirectAcquisitionConfirmation_C::CanPurchaseLeft' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, CanPurchaseRight) == 0x000519, "Member 'UAthenaDirectAcquisitionConfirmation_C::CanPurchaseRight' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, CanChangeQuantity) == 0x00051A, "Member 'UAthenaDirectAcquisitionConfirmation_C::CanChangeQuantity' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, Confirm) == 0x000520, "Member 'UAthenaDirectAcquisitionConfirmation_C::Confirm' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, Decline) == 0x000530, "Member 'UAthenaDirectAcquisitionConfirmation_C::Decline' has a wrong offset!");

}

