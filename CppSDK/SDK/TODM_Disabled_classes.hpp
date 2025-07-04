﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TODM_Disabled

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MASTER_TODM_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TODM_Disabled.TODM_Disabled_C
// 0x0180 (0x0F60 - 0x0DE0)
class ATODM_Disabled_C final : public AMASTER_TODM_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TODM_Disabled_C;                    // 0x0DE0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         WindSpeed_0;                                       // 0x0DE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomWeatherWaitTime_0;                           // 0x0DEC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentAmountOfRandomWeatherTimeLeft_0;            // 0x0DF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewWeatherLerpAmount_0;                            // 0x0DF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindStrength_0;                                    // 0x0DF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FutureWindStrength_0;                              // 0x0DFC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FutureWindSpeed_0;                                 // 0x0E00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPickNewWindConditions_0;                          // 0x0E04(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E05[0x3];                                      // 0x0E05(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LightningStrength_0;                               // 0x0E08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ThreatCloudStormAmount_0;                          // 0x0E0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseRainWithStorms_0;                               // 0x0E10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Play_a_Particle_Effect_Near_the_players_Feet_0;    // 0x0E11(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          WindEffects_Should_be_Active_0;                    // 0x0E12(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E13[0x5];                                      // 0x0E13(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               Storm_Foot_Particle_Outdoor_0;                     // 0x0E18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Storm_Foot_Particle_While_on_Terrain_0;            // 0x0E20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Storm_Foot_Particle_Indoor_0;                      // 0x0E28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Storm_Foot_Particle_While_NOT_on_Terrain_0;        // 0x0E30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Storm_Wind_Strength_0;                             // 0x0E38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Generate_Foliage_Wind_Gusts_0;                     // 0x0E3C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E3D[0x3];                                      // 0x0E3D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           LightningStrikeTimerHandle_0;                      // 0x0E40(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           PreviousDirectionalLightColor_0;                   // 0x0E48(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Lightning_Flash_Color_0;                           // 0x0E58(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Lightning_Flash_Timeline_Min_0;                    // 0x0E68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Lightning_Flash_Timeline_Max_0;                    // 0x0E6C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ShootingStarParticleSystem_0;                      // 0x0E70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Spawn_Shooting_Stars_0;                            // 0x0E78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E79[0x3];                                      // 0x0E79(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           SkyboxFogMorningColor_0;                           // 0x0E7C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogMorningLitColor_0;                        // 0x0E8C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningDistance_0;                        // 0x0E9C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningDiffuseAmount_0;                   // 0x0EA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningEmissiveAmount_0;                  // 0x0EA4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitLength_0;                       // 0x0EA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitRotation_0;                     // 0x0EAC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogMorningLitOffset_0;                       // 0x0EB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogDayColor_0;                               // 0x0EB4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogDayLitColor_0;                            // 0x0EC4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayDistance_0;                            // 0x0ED4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayDiffuseAmount_0;                       // 0x0ED8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayEmissiveAmount_0;                      // 0x0EDC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitLength_0;                           // 0x0EE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitRotation_0;                         // 0x0EE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogDayLitOffset_0;                           // 0x0EE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogEveningColor_0;                           // 0x0EEC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogEveningLitColor_0;                        // 0x0EFC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningDistance_0;                        // 0x0F0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningDiffuseAmount_0;                   // 0x0F10(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningEmissiveAmount_0;                  // 0x0F14(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitLength_0;                       // 0x0F18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitRotation_0;                     // 0x0F1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogEveningLitOffset_0;                       // 0x0F20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogNightColor_0;                             // 0x0F24(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyboxFogNightLitColor_0;                          // 0x0F34(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightDistance_0;                          // 0x0F44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightDiffuseAmount_0;                     // 0x0F48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightEmissiveAmount_0;                    // 0x0F4C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitLength_0;                         // 0x0F50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitRotation_0;                       // 0x0F54(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyboxFogNightLitOffset_0;                         // 0x0F58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TODM_Disabled(int32 EntryPoint);
	void ReceiveBeginPlay();
	void DisableLightAndFog(bool Enable);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TODM_Disabled_C">();
	}
	static class ATODM_Disabled_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATODM_Disabled_C>();
	}
};
static_assert(alignof(ATODM_Disabled_C) == 0x000010, "Wrong alignment on ATODM_Disabled_C");
static_assert(sizeof(ATODM_Disabled_C) == 0x000F60, "Wrong size on ATODM_Disabled_C");
static_assert(offsetof(ATODM_Disabled_C, UberGraphFrame_TODM_Disabled_C) == 0x000DE0, "Member 'ATODM_Disabled_C::UberGraphFrame_TODM_Disabled_C' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, WindSpeed_0) == 0x000DE8, "Member 'ATODM_Disabled_C::WindSpeed_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, RandomWeatherWaitTime_0) == 0x000DEC, "Member 'ATODM_Disabled_C::RandomWeatherWaitTime_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, CurrentAmountOfRandomWeatherTimeLeft_0) == 0x000DF0, "Member 'ATODM_Disabled_C::CurrentAmountOfRandomWeatherTimeLeft_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, NewWeatherLerpAmount_0) == 0x000DF4, "Member 'ATODM_Disabled_C::NewWeatherLerpAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, WindStrength_0) == 0x000DF8, "Member 'ATODM_Disabled_C::WindStrength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, FutureWindStrength_0) == 0x000DFC, "Member 'ATODM_Disabled_C::FutureWindStrength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, FutureWindSpeed_0) == 0x000E00, "Member 'ATODM_Disabled_C::FutureWindSpeed_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, bPickNewWindConditions_0) == 0x000E04, "Member 'ATODM_Disabled_C::bPickNewWindConditions_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, LightningStrength_0) == 0x000E08, "Member 'ATODM_Disabled_C::LightningStrength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, ThreatCloudStormAmount_0) == 0x000E0C, "Member 'ATODM_Disabled_C::ThreatCloudStormAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, UseRainWithStorms_0) == 0x000E10, "Member 'ATODM_Disabled_C::UseRainWithStorms_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Play_a_Particle_Effect_Near_the_players_Feet_0) == 0x000E11, "Member 'ATODM_Disabled_C::Play_a_Particle_Effect_Near_the_players_Feet_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, WindEffects_Should_be_Active_0) == 0x000E12, "Member 'ATODM_Disabled_C::WindEffects_Should_be_Active_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Storm_Foot_Particle_Outdoor_0) == 0x000E18, "Member 'ATODM_Disabled_C::Storm_Foot_Particle_Outdoor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Storm_Foot_Particle_While_on_Terrain_0) == 0x000E20, "Member 'ATODM_Disabled_C::Storm_Foot_Particle_While_on_Terrain_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Storm_Foot_Particle_Indoor_0) == 0x000E28, "Member 'ATODM_Disabled_C::Storm_Foot_Particle_Indoor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Storm_Foot_Particle_While_NOT_on_Terrain_0) == 0x000E30, "Member 'ATODM_Disabled_C::Storm_Foot_Particle_While_NOT_on_Terrain_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Storm_Wind_Strength_0) == 0x000E38, "Member 'ATODM_Disabled_C::Storm_Wind_Strength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Generate_Foliage_Wind_Gusts_0) == 0x000E3C, "Member 'ATODM_Disabled_C::Generate_Foliage_Wind_Gusts_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, LightningStrikeTimerHandle_0) == 0x000E40, "Member 'ATODM_Disabled_C::LightningStrikeTimerHandle_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, PreviousDirectionalLightColor_0) == 0x000E48, "Member 'ATODM_Disabled_C::PreviousDirectionalLightColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Lightning_Flash_Color_0) == 0x000E58, "Member 'ATODM_Disabled_C::Lightning_Flash_Color_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Lightning_Flash_Timeline_Min_0) == 0x000E68, "Member 'ATODM_Disabled_C::Lightning_Flash_Timeline_Min_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Lightning_Flash_Timeline_Max_0) == 0x000E6C, "Member 'ATODM_Disabled_C::Lightning_Flash_Timeline_Max_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, ShootingStarParticleSystem_0) == 0x000E70, "Member 'ATODM_Disabled_C::ShootingStarParticleSystem_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, Spawn_Shooting_Stars_0) == 0x000E78, "Member 'ATODM_Disabled_C::Spawn_Shooting_Stars_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningColor_0) == 0x000E7C, "Member 'ATODM_Disabled_C::SkyboxFogMorningColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningLitColor_0) == 0x000E8C, "Member 'ATODM_Disabled_C::SkyboxFogMorningLitColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningDistance_0) == 0x000E9C, "Member 'ATODM_Disabled_C::SkyboxFogMorningDistance_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningDiffuseAmount_0) == 0x000EA0, "Member 'ATODM_Disabled_C::SkyboxFogMorningDiffuseAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningEmissiveAmount_0) == 0x000EA4, "Member 'ATODM_Disabled_C::SkyboxFogMorningEmissiveAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningLitLength_0) == 0x000EA8, "Member 'ATODM_Disabled_C::SkyboxFogMorningLitLength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningLitRotation_0) == 0x000EAC, "Member 'ATODM_Disabled_C::SkyboxFogMorningLitRotation_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogMorningLitOffset_0) == 0x000EB0, "Member 'ATODM_Disabled_C::SkyboxFogMorningLitOffset_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayColor_0) == 0x000EB4, "Member 'ATODM_Disabled_C::SkyboxFogDayColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayLitColor_0) == 0x000EC4, "Member 'ATODM_Disabled_C::SkyboxFogDayLitColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayDistance_0) == 0x000ED4, "Member 'ATODM_Disabled_C::SkyboxFogDayDistance_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayDiffuseAmount_0) == 0x000ED8, "Member 'ATODM_Disabled_C::SkyboxFogDayDiffuseAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayEmissiveAmount_0) == 0x000EDC, "Member 'ATODM_Disabled_C::SkyboxFogDayEmissiveAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayLitLength_0) == 0x000EE0, "Member 'ATODM_Disabled_C::SkyboxFogDayLitLength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayLitRotation_0) == 0x000EE4, "Member 'ATODM_Disabled_C::SkyboxFogDayLitRotation_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogDayLitOffset_0) == 0x000EE8, "Member 'ATODM_Disabled_C::SkyboxFogDayLitOffset_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningColor_0) == 0x000EEC, "Member 'ATODM_Disabled_C::SkyboxFogEveningColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningLitColor_0) == 0x000EFC, "Member 'ATODM_Disabled_C::SkyboxFogEveningLitColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningDistance_0) == 0x000F0C, "Member 'ATODM_Disabled_C::SkyboxFogEveningDistance_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningDiffuseAmount_0) == 0x000F10, "Member 'ATODM_Disabled_C::SkyboxFogEveningDiffuseAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningEmissiveAmount_0) == 0x000F14, "Member 'ATODM_Disabled_C::SkyboxFogEveningEmissiveAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningLitLength_0) == 0x000F18, "Member 'ATODM_Disabled_C::SkyboxFogEveningLitLength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningLitRotation_0) == 0x000F1C, "Member 'ATODM_Disabled_C::SkyboxFogEveningLitRotation_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogEveningLitOffset_0) == 0x000F20, "Member 'ATODM_Disabled_C::SkyboxFogEveningLitOffset_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightColor_0) == 0x000F24, "Member 'ATODM_Disabled_C::SkyboxFogNightColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightLitColor_0) == 0x000F34, "Member 'ATODM_Disabled_C::SkyboxFogNightLitColor_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightDistance_0) == 0x000F44, "Member 'ATODM_Disabled_C::SkyboxFogNightDistance_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightDiffuseAmount_0) == 0x000F48, "Member 'ATODM_Disabled_C::SkyboxFogNightDiffuseAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightEmissiveAmount_0) == 0x000F4C, "Member 'ATODM_Disabled_C::SkyboxFogNightEmissiveAmount_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightLitLength_0) == 0x000F50, "Member 'ATODM_Disabled_C::SkyboxFogNightLitLength_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightLitRotation_0) == 0x000F54, "Member 'ATODM_Disabled_C::SkyboxFogNightLitRotation_0' has a wrong offset!");
static_assert(offsetof(ATODM_Disabled_C, SkyboxFogNightLitOffset_0) == 0x000F58, "Member 'ATODM_Disabled_C::SkyboxFogNightLitOffset_0' has a wrong offset!");

}

