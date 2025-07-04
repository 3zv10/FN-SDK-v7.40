﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialImportPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialImportPanel.SocialImportPanel_C
// 0x00C0 (0x0478 - 0x03B8)
class USocialImportPanel_C final : public UFortSocialImportPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                      Button_Claim;                                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         Button_ErrorClose;                                 // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         Button_ErrorRetry;                                 // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_28;                                // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_142;                               // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           EntryVBox;                                         // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GliderGirl;                                        // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GliderPerson1;                                     // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Waiting;                                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Error;                                     // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_1;                                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_CloseButton;                        // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ImportProcess;                      // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Modes;                              // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_OptOut;                             // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_PanelType;                          // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SocialImportPanel(int32 EntryPoint);
	void OnActivated();
	void OnPanelTypeSet(ESocialImportPanelType NewType);
	void OnClaimViewRequested();
	void OnImportViewRequested();
	void OnLauncherImportOpened();
	void OnWaitingViewRequested();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialImportPanel_C">();
	}
	static class USocialImportPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialImportPanel_C>();
	}
};
static_assert(alignof(USocialImportPanel_C) == 0x000008, "Wrong alignment on USocialImportPanel_C");
static_assert(sizeof(USocialImportPanel_C) == 0x000478, "Wrong size on USocialImportPanel_C");
static_assert(offsetof(USocialImportPanel_C, UberGraphFrame) == 0x0003B8, "Member 'USocialImportPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, Button_Claim) == 0x0003C0, "Member 'USocialImportPanel_C::Button_Claim' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, Button_ErrorClose) == 0x0003C8, "Member 'USocialImportPanel_C::Button_ErrorClose' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, Button_ErrorRetry) == 0x0003D0, "Member 'USocialImportPanel_C::Button_ErrorRetry' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, CommonTextBlock_28) == 0x0003D8, "Member 'USocialImportPanel_C::CommonTextBlock_28' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, CommonTextBlock_142) == 0x0003E0, "Member 'USocialImportPanel_C::CommonTextBlock_142' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, EntryVBox) == 0x0003E8, "Member 'USocialImportPanel_C::EntryVBox' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, GliderGirl) == 0x0003F0, "Member 'USocialImportPanel_C::GliderGirl' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, GliderPerson1) == 0x0003F8, "Member 'USocialImportPanel_C::GliderPerson1' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, Image_0) == 0x000400, "Member 'USocialImportPanel_C::Image_0' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, Image_1) == 0x000408, "Member 'USocialImportPanel_C::Image_1' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, Image_2) == 0x000410, "Member 'USocialImportPanel_C::Image_2' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, Image_3) == 0x000418, "Member 'USocialImportPanel_C::Image_3' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, Image_Waiting) == 0x000420, "Member 'USocialImportPanel_C::Image_Waiting' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, Lightbox) == 0x000428, "Member 'USocialImportPanel_C::Lightbox' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, Overlay_Error) == 0x000430, "Member 'USocialImportPanel_C::Overlay_Error' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, SafeZone_0) == 0x000438, "Member 'USocialImportPanel_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, SafeZone_1) == 0x000440, "Member 'USocialImportPanel_C::SafeZone_1' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, Title) == 0x000448, "Member 'USocialImportPanel_C::Title' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, WidgetSwitcher_CloseButton) == 0x000450, "Member 'USocialImportPanel_C::WidgetSwitcher_CloseButton' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, WidgetSwitcher_ImportProcess) == 0x000458, "Member 'USocialImportPanel_C::WidgetSwitcher_ImportProcess' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, WidgetSwitcher_Modes) == 0x000460, "Member 'USocialImportPanel_C::WidgetSwitcher_Modes' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, WidgetSwitcher_OptOut) == 0x000468, "Member 'USocialImportPanel_C::WidgetSwitcher_OptOut' has a wrong offset!");
static_assert(offsetof(USocialImportPanel_C, WidgetSwitcher_PanelType) == 0x000470, "Member 'USocialImportPanel_C::WidgetSwitcher_PanelType' has a wrong offset!");

}

