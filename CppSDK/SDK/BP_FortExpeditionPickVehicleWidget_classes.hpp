﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionPickVehicleWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FortExpeditionPickVehicleWidget.BP_FortExpeditionPickVehicleWidget_C
// 0x0050 (0x0378 - 0x0328)
class UBP_FortExpeditionPickVehicleWidget_C final : public UFortExpeditionPickVehicleWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTileView*                        CommonTileView_0;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_ExpeditionSquadSlotsView_C*         ExpeditionSquadSlotsView;                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    BackInputAction;                                   // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class UObject*>                        SquadOjbects;                                      // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                   OnVehicleSelected;                                 // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BP_FortExpeditionPickVehicleWidget(int32 EntryPoint);
	void HandleVehcileButtonUnhovered(class UCommonButton* Button);
	void HandleVehicleButtonHovered(class UCommonButton* Button);
	void HACK_GetMeOutOfSelectContext();
	void HandleVehicleSelected(class FName SquadId);
	void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_59_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void OnActivated();
	void SetData(class UFortExpeditionItem* InItem);
	void Construct();
	void HandleBack(bool* PassThrough);
	void Setup_Input_Action_Handlers();
	void Get_Expedition_Item_Definition(class UFortItem* ItemDef, class UFortExpeditionItemDefinition** AsFort_Expedition_Item_Definition);
	void Determine_Available_Expedition_Squads(const struct FGameplayTagContainer& RequirementTags);
	void Pre_Select_for_Console();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortExpeditionPickVehicleWidget_C">();
	}
	static class UBP_FortExpeditionPickVehicleWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FortExpeditionPickVehicleWidget_C>();
	}
};
static_assert(alignof(UBP_FortExpeditionPickVehicleWidget_C) == 0x000008, "Wrong alignment on UBP_FortExpeditionPickVehicleWidget_C");
static_assert(sizeof(UBP_FortExpeditionPickVehicleWidget_C) == 0x000378, "Wrong size on UBP_FortExpeditionPickVehicleWidget_C");
static_assert(offsetof(UBP_FortExpeditionPickVehicleWidget_C, UberGraphFrame) == 0x000328, "Member 'UBP_FortExpeditionPickVehicleWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionPickVehicleWidget_C, CommonTileView_0) == 0x000330, "Member 'UBP_FortExpeditionPickVehicleWidget_C::CommonTileView_0' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionPickVehicleWidget_C, ExpeditionSquadSlotsView) == 0x000338, "Member 'UBP_FortExpeditionPickVehicleWidget_C::ExpeditionSquadSlotsView' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionPickVehicleWidget_C, SafeZone_0) == 0x000340, "Member 'UBP_FortExpeditionPickVehicleWidget_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionPickVehicleWidget_C, BackInputAction) == 0x000348, "Member 'UBP_FortExpeditionPickVehicleWidget_C::BackInputAction' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionPickVehicleWidget_C, SquadOjbects) == 0x000358, "Member 'UBP_FortExpeditionPickVehicleWidget_C::SquadOjbects' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionPickVehicleWidget_C, OnVehicleSelected) == 0x000368, "Member 'UBP_FortExpeditionPickVehicleWidget_C::OnVehicleSelected' has a wrong offset!");

}

