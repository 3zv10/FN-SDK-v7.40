﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RefundTicket

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RefundTicket.RefundTicket_C
// 0x0028 (0x0258 - 0x0230)
class URefundTicket_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Pending;                                           // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Consumed;                                          // 0x0240(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Consume;                                           // 0x0248(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImageTicket;                                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RefundTicket(int32 EntryPoint);
	void PendingEvent(bool isPending);
	void ConsumeEvent();
	void IsConsumed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RefundTicket_C">();
	}
	static class URefundTicket_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URefundTicket_C>();
	}
};
static_assert(alignof(URefundTicket_C) == 0x000008, "Wrong alignment on URefundTicket_C");
static_assert(sizeof(URefundTicket_C) == 0x000258, "Wrong size on URefundTicket_C");
static_assert(offsetof(URefundTicket_C, UberGraphFrame) == 0x000230, "Member 'URefundTicket_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URefundTicket_C, Pending) == 0x000238, "Member 'URefundTicket_C::Pending' has a wrong offset!");
static_assert(offsetof(URefundTicket_C, Consumed) == 0x000240, "Member 'URefundTicket_C::Consumed' has a wrong offset!");
static_assert(offsetof(URefundTicket_C, Consume) == 0x000248, "Member 'URefundTicket_C::Consume' has a wrong offset!");
static_assert(offsetof(URefundTicket_C, ImageTicket) == 0x000250, "Member 'URefundTicket_C::ImageTicket' has a wrong offset!");

}

