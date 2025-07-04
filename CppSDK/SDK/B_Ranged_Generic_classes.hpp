﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Ranged_Generic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "En_ShellTypes_01_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C
// 0x01C8 (0x0DE8 - 0x0C20)
class AB_Ranged_Generic_C : public AFortWeaponRanged
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C20(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Reload_Empty_;                                     // 0x0C28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Shells_empty_;                                     // 0x0C30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ScopeMesh1P;                                       // 0x0C38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Muzzle_Empty_;                                     // 0x0C40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642; // 0x0C48(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642; // 0x0C4C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4D[0x3];                                      // 0x0C4D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     AnimateScopePostProcess;                           // 0x0C50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        MuzzleParticleSystem;                              // 0x0C58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;                     // 0x0C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;                 // 0x0C68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDestroyEffect;                                  // 0x0C70(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Use_Reload_Particles;                              // 0x0C71(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C72[0x6];                                      // 0x0C72(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Reload_ParticleSystem;                             // 0x0C78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastPlayFXTime;                                    // 0x0C80(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinPlayFXTime;                                     // 0x0C84(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseShellsOnFire_;                                  // 0x0C88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseShellsOnReload_;                                // 0x0C89(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseShellsOnPump_;                                  // 0x0C8A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C8B[0x5];                                      // 0x0C8B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        ShellsParticleSystemTemplate;                      // 0x0C90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ReloadSocketName;                                  // 0x0C98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortAIPawn*>                    Array_Of_Active_Enemy_AI;                          // 0x0CA0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          Scope___Render_Enemies_To_Custom_Depth_Buffer;     // 0x0CB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_CB1[0x3];                                      // 0x0CB1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Shells_Socket_Name;                                // 0x0CB4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	En_ShellTypes_01                              ShellTypeSelect;                                   // 0x0CBC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CBD[0x3];                                      // 0x0CBD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Shells_Spawn_Rate_Scale;                           // 0x0CC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ShellsRotationRate;                                // 0x0CC4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Velocity;                                   // 0x0CD0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Gravity;                                    // 0x0CDC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shells_Lifetime;                                   // 0x0CE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Shells_Size;                                       // 0x0CEC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shells_Time_Dilation;                              // 0x0CF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Target_Scope_Vignette_Blur_Screen_Percentage;      // 0x0CFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Scope_Camera_Offset_Amount;                        // 0x0D00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SmallShells;                                       // 0x0D04(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          MediumShells;                                      // 0x0D05(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LargeShells;                                       // 0x0D06(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShotgunShells;                                     // 0x0D07(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EnergyShells;                                      // 0x0D08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D09[0x3];                                      // 0x0D09(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Inherit_Parent_Velocity;                           // 0x0D0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cylindrical_Radius;                                // 0x0D10(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cylindrical_Height;                                // 0x0D14(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugShellsSocket_;                                // 0x0D18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Use_2_Post_Processes_For_the_Scope;                // 0x0D19(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_D1A[0x6];                                      // 0x0D1A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound_ScopeZoomIn;                                 // 0x0D20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_ScopeZoomOut;                                // 0x0D28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Alteration_Ambient_PS;                             // 0x0D30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ReticleHUDElementTags;                             // 0x0D38(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Is_Wind_Enabled;                                   // 0x0D58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D59[0x7];                                      // 0x0D59(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        MuzzleWindParticleSystem;                          // 0x0D60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        MuzzleParticleSystem1P;                            // 0x0D68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldHideReticleAfterDelay;                       // 0x0D70(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D71[0x7];                                      // 0x0D71(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPostProcessComponent*                  DownScopePostProcessSpawned;                       // 0x0D78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  DownScopePostProcessSpawned2;                      // 0x0D80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               MuzzleWindParticleSpawned;                         // 0x0D88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StencilBufferValue;                                // 0x0D90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D94[0x4];                                      // 0x0D94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            Curve_PitchOffset;                                 // 0x0D98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_ScopedInLoop;                                // 0x0DA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ScopeZoomInComp;                                   // 0x0DA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ScopedInLoopComp;                                  // 0x0DB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ScopeZoomOutComp;                                  // 0x0DB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Alteration_Ambient_PS_Max_Draw_Distance;           // 0x0DC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Muzzle_PS_Max_Draw_Distance;                       // 0x0DC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Beam_PS_Max_Draw_Distance;                         // 0x0DC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Reload_PS_Max_Draw_Distance;                       // 0x0DCC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shells_PS_Max_Draw_Distance;                       // 0x0DD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DD4[0x4];                                      // 0x0DD4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   onAimDownSightsChanged;                            // 0x0DD8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_B_Ranged_Generic(int32 EntryPoint);
	void ForceScopeBackImmediatly();
	void ShellEjectionOff();
	void Bind_on_Effects_Quality();
	void ShellEjectionFixOn();
	void PitchUpOnRateOfFireChange(float NewRateOfFire);
	void BindFireRateChange();
	void SetupScopePostProcess();
	void ForceScopeFX();
	void UnhideFirstPersonStuffPart1();
	void UnhideFirstPersonStuffPart2(int32 Which_Call);
	void HideThirdPersonStuff();
	void AbortScopeFX();
	void HideFirstPersonStuff();
	void PlayScopePP();
	void UnhideThirdPersonStuff();
	void ResetDoonceScopeSound();
	void ReverseScopePP();
	void ShowWeapon();
	void HideWeapon();
	void ShowWeaponMesh();
	void HideWeaponMesh();
	void OnWeaponVisibilityChanged(bool bVisible);
	void ReceiveBeginPlay();
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32 TargetLimit);
	void SetWeaponPierceThrough(bool Enable, int32 TargetLimit);
	void OnEquippedWeaponDestory();
	void ShellsON__onPump_();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod, class UMaterialInstanceDynamic* DynamicMaterialInstance);
	void OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration);
	void OnWeaponAttached();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32 StencilBufferValue_0);
	void InitializeScopeVariables();
	void K2_OnUnEquip();
	void OnSetTargeting(bool bNewIsTargeting);
	void OnPlayReloadFX(EFortReloadFXState ReloadStage);
	void OnStopWeaponFireFX();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded);
	void OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded);
	void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded);
	void OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded);
	void AnimateScopePostProcess__UpdateFunc();
	void AnimateScopePostProcess__FinishedFunc();
	void UserConstructionScript();
	void AddRandomScale();
	void SetWpnRarity();
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void Muzzle_Play_Reload_FX(EFortReloadFXState Selection);
	void UpdateShellEmittersFX();
	void SetupShellFX();
	void DeactivateShellsFX();
	void ActivateShellsFX(bool Bool);
	void ActivateReloadSmokeFX();
	void DeactivateReloadSmokeFX();
	void DeactivateMuzzleFX();
	void ActivateOrDeactivateWindParticle(bool bNewActive);
	void HideReticle();
	void ShowReticle();
	void SetActiveAlterationIdleParticles(bool Active);
	void SetPostProcessParams(float InputPin);
	void StartScopedAudio();
	void StopScopedAudio();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Ranged_Generic_C">();
	}
	static class AB_Ranged_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Ranged_Generic_C>();
	}
};
static_assert(alignof(AB_Ranged_Generic_C) == 0x000008, "Wrong alignment on AB_Ranged_Generic_C");
static_assert(sizeof(AB_Ranged_Generic_C) == 0x000DE8, "Wrong size on AB_Ranged_Generic_C");
static_assert(offsetof(AB_Ranged_Generic_C, UberGraphFrame) == 0x000C20, "Member 'AB_Ranged_Generic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Reload_Empty_) == 0x000C28, "Member 'AB_Ranged_Generic_C::Reload_Empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_empty_) == 0x000C30, "Member 'AB_Ranged_Generic_C::Shells_empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeMesh1P) == 0x000C38, "Member 'AB_Ranged_Generic_C::ScopeMesh1P' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_Empty_) == 0x000C40, "Member 'AB_Ranged_Generic_C::Muzzle_Empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642) == 0x000C48, "Member 'AB_Ranged_Generic_C::AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642) == 0x000C4C, "Member 'AB_Ranged_Generic_C::AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, AnimateScopePostProcess) == 0x000C50, "Member 'AB_Ranged_Generic_C::AnimateScopePostProcess' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleParticleSystem) == 0x000C58, "Member 'AB_Ranged_Generic_C::MuzzleParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, WeaponDurabilityDestroyEffect) == 0x000C60, "Member 'AB_Ranged_Generic_C::WeaponDurabilityDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, WeaponDurabilityDestroyEffectIcon) == 0x000C68, "Member 'AB_Ranged_Generic_C::WeaponDurabilityDestroyEffectIcon' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseDestroyEffect) == 0x000C70, "Member 'AB_Ranged_Generic_C::UseDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Use_Reload_Particles) == 0x000C71, "Member 'AB_Ranged_Generic_C::Use_Reload_Particles' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Reload_ParticleSystem) == 0x000C78, "Member 'AB_Ranged_Generic_C::Reload_ParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, LastPlayFXTime) == 0x000C80, "Member 'AB_Ranged_Generic_C::LastPlayFXTime' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MinPlayFXTime) == 0x000C84, "Member 'AB_Ranged_Generic_C::MinPlayFXTime' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseShellsOnFire_) == 0x000C88, "Member 'AB_Ranged_Generic_C::UseShellsOnFire_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseShellsOnReload_) == 0x000C89, "Member 'AB_Ranged_Generic_C::UseShellsOnReload_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseShellsOnPump_) == 0x000C8A, "Member 'AB_Ranged_Generic_C::UseShellsOnPump_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShellsParticleSystemTemplate) == 0x000C90, "Member 'AB_Ranged_Generic_C::ShellsParticleSystemTemplate' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ReloadSocketName) == 0x000C98, "Member 'AB_Ranged_Generic_C::ReloadSocketName' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Array_Of_Active_Enemy_AI) == 0x000CA0, "Member 'AB_Ranged_Generic_C::Array_Of_Active_Enemy_AI' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Scope___Render_Enemies_To_Custom_Depth_Buffer) == 0x000CB0, "Member 'AB_Ranged_Generic_C::Scope___Render_Enemies_To_Custom_Depth_Buffer' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Socket_Name) == 0x000CB4, "Member 'AB_Ranged_Generic_C::Shells_Socket_Name' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShellTypeSelect) == 0x000CBC, "Member 'AB_Ranged_Generic_C::ShellTypeSelect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Spawn_Rate_Scale) == 0x000CC0, "Member 'AB_Ranged_Generic_C::Shells_Spawn_Rate_Scale' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShellsRotationRate) == 0x000CC4, "Member 'AB_Ranged_Generic_C::ShellsRotationRate' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Velocity) == 0x000CD0, "Member 'AB_Ranged_Generic_C::Shells_Velocity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Gravity) == 0x000CDC, "Member 'AB_Ranged_Generic_C::Shells_Gravity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Lifetime) == 0x000CE8, "Member 'AB_Ranged_Generic_C::Shells_Lifetime' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Size) == 0x000CEC, "Member 'AB_Ranged_Generic_C::Shells_Size' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Time_Dilation) == 0x000CF8, "Member 'AB_Ranged_Generic_C::Shells_Time_Dilation' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Target_Scope_Vignette_Blur_Screen_Percentage) == 0x000CFC, "Member 'AB_Ranged_Generic_C::Target_Scope_Vignette_Blur_Screen_Percentage' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Scope_Camera_Offset_Amount) == 0x000D00, "Member 'AB_Ranged_Generic_C::Scope_Camera_Offset_Amount' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, SmallShells) == 0x000D04, "Member 'AB_Ranged_Generic_C::SmallShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MediumShells) == 0x000D05, "Member 'AB_Ranged_Generic_C::MediumShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, LargeShells) == 0x000D06, "Member 'AB_Ranged_Generic_C::LargeShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShotgunShells) == 0x000D07, "Member 'AB_Ranged_Generic_C::ShotgunShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, EnergyShells) == 0x000D08, "Member 'AB_Ranged_Generic_C::EnergyShells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Inherit_Parent_Velocity) == 0x000D0C, "Member 'AB_Ranged_Generic_C::Inherit_Parent_Velocity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Cylindrical_Radius) == 0x000D10, "Member 'AB_Ranged_Generic_C::Cylindrical_Radius' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Cylindrical_Height) == 0x000D14, "Member 'AB_Ranged_Generic_C::Cylindrical_Height' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, DebugShellsSocket_) == 0x000D18, "Member 'AB_Ranged_Generic_C::DebugShellsSocket_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Use_2_Post_Processes_For_the_Scope) == 0x000D19, "Member 'AB_Ranged_Generic_C::Use_2_Post_Processes_For_the_Scope' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Sound_ScopeZoomIn) == 0x000D20, "Member 'AB_Ranged_Generic_C::Sound_ScopeZoomIn' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Sound_ScopeZoomOut) == 0x000D28, "Member 'AB_Ranged_Generic_C::Sound_ScopeZoomOut' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Alteration_Ambient_PS) == 0x000D30, "Member 'AB_Ranged_Generic_C::Alteration_Ambient_PS' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ReticleHUDElementTags) == 0x000D38, "Member 'AB_Ranged_Generic_C::ReticleHUDElementTags' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Is_Wind_Enabled) == 0x000D58, "Member 'AB_Ranged_Generic_C::Is_Wind_Enabled' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleWindParticleSystem) == 0x000D60, "Member 'AB_Ranged_Generic_C::MuzzleWindParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleParticleSystem1P) == 0x000D68, "Member 'AB_Ranged_Generic_C::MuzzleParticleSystem1P' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShouldHideReticleAfterDelay) == 0x000D70, "Member 'AB_Ranged_Generic_C::ShouldHideReticleAfterDelay' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, DownScopePostProcessSpawned) == 0x000D78, "Member 'AB_Ranged_Generic_C::DownScopePostProcessSpawned' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, DownScopePostProcessSpawned2) == 0x000D80, "Member 'AB_Ranged_Generic_C::DownScopePostProcessSpawned2' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleWindParticleSpawned) == 0x000D88, "Member 'AB_Ranged_Generic_C::MuzzleWindParticleSpawned' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, StencilBufferValue) == 0x000D90, "Member 'AB_Ranged_Generic_C::StencilBufferValue' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Curve_PitchOffset) == 0x000D98, "Member 'AB_Ranged_Generic_C::Curve_PitchOffset' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Sound_ScopedInLoop) == 0x000DA0, "Member 'AB_Ranged_Generic_C::Sound_ScopedInLoop' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeZoomInComp) == 0x000DA8, "Member 'AB_Ranged_Generic_C::ScopeZoomInComp' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopedInLoopComp) == 0x000DB0, "Member 'AB_Ranged_Generic_C::ScopedInLoopComp' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeZoomOutComp) == 0x000DB8, "Member 'AB_Ranged_Generic_C::ScopeZoomOutComp' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Alteration_Ambient_PS_Max_Draw_Distance) == 0x000DC0, "Member 'AB_Ranged_Generic_C::Alteration_Ambient_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_PS_Max_Draw_Distance) == 0x000DC4, "Member 'AB_Ranged_Generic_C::Muzzle_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Beam_PS_Max_Draw_Distance) == 0x000DC8, "Member 'AB_Ranged_Generic_C::Beam_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Reload_PS_Max_Draw_Distance) == 0x000DCC, "Member 'AB_Ranged_Generic_C::Reload_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_PS_Max_Draw_Distance) == 0x000DD0, "Member 'AB_Ranged_Generic_C::Shells_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, onAimDownSightsChanged) == 0x000DD8, "Member 'AB_Ranged_Generic_C::onAimDownSightsChanged' has a wrong offset!");

}

