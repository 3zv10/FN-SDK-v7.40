﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Perk_Ninja_ShadowStance_Active

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Perk_Ninja_ShadowStance_Active.GC_Perk_Ninja_ShadowStance_Active_C
// 0x0160 (0x09E0 - 0x0880)
class AGC_Perk_Ninja_ShadowStance_Active_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Animate_Ninja_ShadowStance_Dissolve_Inverse_Translucent_Shader_Opacity_F50344084749F221FC44349955C0A4BA; // 0x0888(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Animate_Ninja_ShadowStance_Dissolve_NinjaDissolve_F50344084749F221FC44349955C0A4BA; // 0x088C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Animate_Ninja_ShadowStance_Dissolve__Direction_F50344084749F221FC44349955C0A4BA; // 0x0890(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_891[0x7];                                      // 0x0891(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Animate_Ninja_ShadowStance_Dissolve;               // 0x0898(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        MyTarget;                                          // 0x08A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Shadow_Stance_Material;                            // 0x08A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Ninja_Dissolve_Material;                           // 0x08B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShadowStanceVisibility;                            // 0x08B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8BC[0x4];                                      // 0x08BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             OG_Head_Materials;                                 // 0x08C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UMaterial*, class UMaterialInterface*> DissolveMaterialMap;                           // 0x08D0(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>         Duplicate_Meshes;                                  // 0x0920(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             OG_Body_Materials;                                 // 0x0930(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             OG_Hat_Materials;                                  // 0x0940(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             OG_Backpack_Materials;                             // 0x0950(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             OG_Charm_Materials;                                // 0x0960(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             OG_Face_Materials;                                 // 0x0970(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       Dissolve_MIDs;                                     // 0x0980(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USkeletalMeshComponent*                 Duplicate_Head;                                    // 0x0990(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Body;                                    // 0x0998(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Hat;                                     // 0x09A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Backpack;                                // 0x09A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Charm;                                   // 0x09B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Duplicate_Face;                                    // 0x09B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       Duplicate_MIDs;                                    // 0x09C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       Previous_Weapon_MID;                               // 0x09D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GC_Perk_Ninja_ShadowStance_Active(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget_0, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void Shadow_Stance_Dissolve_Timeline(bool Reverse);
	void Animate_Ninja_ShadowStance_Dissolve__UpdateFunc();
	void Animate_Ninja_ShadowStance_Dissolve__FinishedFunc();
	void UserConstructionScript();
	void Save_Material(class AFortPlayerPawn* NInja_Pawn);
	void Override_Material_to_Dissolve_Material(class AFortPlayerPawn* NInja_Pawn);
	void Create_Duplicate_Mesh(class AFortPlayerPawn* NinjaPawn);
	void Destroy_Duplicate_Mesh();
	void Restore_OG_Materials(class AFortPlayerPawn* NInja_Pawn);
	void Override_Material_and_Copy_Parameters_on_Weapon_Mesh(class AFortPlayerPawn* Player_Pawn);
	void Restore_Material_on_Weapon_Mesh(class AFortPlayerPawn* Player_Pawn, class AFortWeapon* Weapon_to_Restore__Defaults_to_Current_);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Perk_Ninja_ShadowStance_Active_C">();
	}
	static class AGC_Perk_Ninja_ShadowStance_Active_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Perk_Ninja_ShadowStance_Active_C>();
	}
};
static_assert(alignof(AGC_Perk_Ninja_ShadowStance_Active_C) == 0x000008, "Wrong alignment on AGC_Perk_Ninja_ShadowStance_Active_C");
static_assert(sizeof(AGC_Perk_Ninja_ShadowStance_Active_C) == 0x0009E0, "Wrong size on AGC_Perk_Ninja_ShadowStance_Active_C");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, UberGraphFrame) == 0x000880, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Animate_Ninja_ShadowStance_Dissolve_Inverse_Translucent_Shader_Opacity_F50344084749F221FC44349955C0A4BA) == 0x000888, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Animate_Ninja_ShadowStance_Dissolve_Inverse_Translucent_Shader_Opacity_F50344084749F221FC44349955C0A4BA' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Animate_Ninja_ShadowStance_Dissolve_NinjaDissolve_F50344084749F221FC44349955C0A4BA) == 0x00088C, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Animate_Ninja_ShadowStance_Dissolve_NinjaDissolve_F50344084749F221FC44349955C0A4BA' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Animate_Ninja_ShadowStance_Dissolve__Direction_F50344084749F221FC44349955C0A4BA) == 0x000890, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Animate_Ninja_ShadowStance_Dissolve__Direction_F50344084749F221FC44349955C0A4BA' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Animate_Ninja_ShadowStance_Dissolve) == 0x000898, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Animate_Ninja_ShadowStance_Dissolve' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, MyTarget) == 0x0008A0, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::MyTarget' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Shadow_Stance_Material) == 0x0008A8, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Shadow_Stance_Material' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Ninja_Dissolve_Material) == 0x0008B0, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Ninja_Dissolve_Material' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, ShadowStanceVisibility) == 0x0008B8, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::ShadowStanceVisibility' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, OG_Head_Materials) == 0x0008C0, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::OG_Head_Materials' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, DissolveMaterialMap) == 0x0008D0, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::DissolveMaterialMap' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Duplicate_Meshes) == 0x000920, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Duplicate_Meshes' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, OG_Body_Materials) == 0x000930, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::OG_Body_Materials' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, OG_Hat_Materials) == 0x000940, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::OG_Hat_Materials' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, OG_Backpack_Materials) == 0x000950, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::OG_Backpack_Materials' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, OG_Charm_Materials) == 0x000960, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::OG_Charm_Materials' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, OG_Face_Materials) == 0x000970, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::OG_Face_Materials' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Dissolve_MIDs) == 0x000980, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Dissolve_MIDs' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Duplicate_Head) == 0x000990, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Duplicate_Head' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Duplicate_Body) == 0x000998, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Duplicate_Body' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Duplicate_Hat) == 0x0009A0, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Duplicate_Hat' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Duplicate_Backpack) == 0x0009A8, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Duplicate_Backpack' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Duplicate_Charm) == 0x0009B0, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Duplicate_Charm' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Duplicate_Face) == 0x0009B8, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Duplicate_Face' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Duplicate_MIDs) == 0x0009C0, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Duplicate_MIDs' has a wrong offset!");
static_assert(offsetof(AGC_Perk_Ninja_ShadowStance_Active_C, Previous_Weapon_MID) == 0x0009D0, "Member 'AGC_Perk_Ninja_ShadowStance_Active_C::Previous_Weapon_MID' has a wrong offset!");

}

