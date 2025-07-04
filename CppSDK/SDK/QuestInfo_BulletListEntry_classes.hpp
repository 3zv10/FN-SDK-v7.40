﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestInfo_BulletListEntry

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C
// 0x0020 (0x0258 - 0x0238)
class UQuestInfo_BulletListEntry_C final : public UCommonUserWidget
{
public:
	class UImage*                                 ImageBorder;                                       // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageEntryIcon;                                    // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxIcon;                                       // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextBoxEntryText;                                  // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void InitBullet(const class FText& EntryText);
	void InitBrush(const class FText& EntryText, const struct FSlateBrush& EntryIconBrush);
	struct FVector2D CalcBrushSize(const struct FVector2D& InImageSize);
	void ShowBorder();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestInfo_BulletListEntry_C">();
	}
	static class UQuestInfo_BulletListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestInfo_BulletListEntry_C>();
	}
};
static_assert(alignof(UQuestInfo_BulletListEntry_C) == 0x000008, "Wrong alignment on UQuestInfo_BulletListEntry_C");
static_assert(sizeof(UQuestInfo_BulletListEntry_C) == 0x000258, "Wrong size on UQuestInfo_BulletListEntry_C");
static_assert(offsetof(UQuestInfo_BulletListEntry_C, ImageBorder) == 0x000238, "Member 'UQuestInfo_BulletListEntry_C::ImageBorder' has a wrong offset!");
static_assert(offsetof(UQuestInfo_BulletListEntry_C, ImageEntryIcon) == 0x000240, "Member 'UQuestInfo_BulletListEntry_C::ImageEntryIcon' has a wrong offset!");
static_assert(offsetof(UQuestInfo_BulletListEntry_C, SizeBoxIcon) == 0x000248, "Member 'UQuestInfo_BulletListEntry_C::SizeBoxIcon' has a wrong offset!");
static_assert(offsetof(UQuestInfo_BulletListEntry_C, TextBoxEntryText) == 0x000250, "Member 'UQuestInfo_BulletListEntry_C::TextBoxEntryText' has a wrong offset!");

}

