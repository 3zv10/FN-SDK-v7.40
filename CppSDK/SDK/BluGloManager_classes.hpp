﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BluGloManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BluGloManager.BluGloManager_C
// 0x0060 (0x0420 - 0x03C0)
class ABluGloManager_C final : public AFortBluGloManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ATiered_BluGlo_Parent_C*>        PossibleSpawnLocationsArray;                       // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ATiered_BluGlo_Parent_C*>        OccupiedNodes;                                     // 0x03E0(0x0010)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         AmountOfBluGloToSpawn;                             // 0x03F0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 QueryActor;                                        // 0x03F8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnestRequestArraySet;                              // 0x0400(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_401[0x3];                                      // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BluGloNavigablePointRadius;                        // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Reward_Start_Sound;                                // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Reward_Appear_Sound;                               // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocationLength;                                    // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BluGloSpawnAnimationTime;                          // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BluGloManager(int32 EntryPoint);
	void AddMoreBluGloInWorld(class AFortMission* Mission);
	void SpawnBluGloGroupEvent(const struct FVector& SpawnCenter);
	void SpawnFXComplete(class UParticleSystemComponent* PSystem);
	void OnBluGloQueryFinished(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, EEnvQueryStatus QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32 NumBluGloToSpawn);
	void StopSpawnFX(bool off);
	void HandleMissionEvent_RequestBluGloSpawnUseEQS(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params_0, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, const class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, const class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void HandleMissionEvent_RequestBluGloSpawnUseActor(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params_0, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, const class UDataAsset* EventContent, class AActor* EventInstigator, int32 GenericInt, float GenericFloat, const class FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void UserConstructionScript();
	void RequestedBluGo(class AFortMission* Mission, const struct FVector& EQS_Start_Location, class AActor* Actor);
	void RemoveOccupiedNodes();
	void SpawnBluGlo(const struct FVector& SpawnLocation, const struct FVector& SpawnFromLocation);
	void IssueBluGloRequest(int32 NumBluGloToSpawn, class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid);
	void BuildSpawnLocations(EEnvQueryStatus QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32 NumBluGloToSpawn, const struct FVector& SpawnCenter, TArray<struct FVector>* LocationsForSpawningBluGlo);
	void BuildSpawnLocationsFromQueryLocations(int32 NumBluGloToSpawn, TArray<struct FVector>& QueryResultLocations, TArray<struct FVector>* LocationsForSpawningBluGlo);
	void BuildSpawnLocationsRandomly(const struct FVector& LocationToSpawnFrom, int32 NumBluGloToSpawn, TArray<struct FVector>* LocationsForSpawningBluGlo);
	void ChooseSpawnCenter(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFrom, struct FVector* SpawnCenter);
	void SpawnBluGloGroup(class AActor* ActorToSpawnFrom, const struct FVector& LocationToSpawnFromIfActorInvalid, EEnvQueryStatus QueryStatus, class UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32 NumBluGloToSpawn);
	void StartSpawnFXAndAudio(const struct FVector& SpawnCenter, class UParticleSystemComponent** SpawnFXEmitter);
	void IssueBluGloRequestForMission(class AFortMission* Mission, class AActor* ActorToSpawnBluGloFrom);
	void PrintDebugInfoForBluGloToSpawn(TArray<class ATiered_BluGlo_Parent_C*>& TargetArray);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BluGloManager_C">();
	}
	static class ABluGloManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABluGloManager_C>();
	}
};
static_assert(alignof(ABluGloManager_C) == 0x000008, "Wrong alignment on ABluGloManager_C");
static_assert(sizeof(ABluGloManager_C) == 0x000420, "Wrong size on ABluGloManager_C");
static_assert(offsetof(ABluGloManager_C, UberGraphFrame) == 0x0003C0, "Member 'ABluGloManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABluGloManager_C, DefaultSceneRoot) == 0x0003C8, "Member 'ABluGloManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABluGloManager_C, PossibleSpawnLocationsArray) == 0x0003D0, "Member 'ABluGloManager_C::PossibleSpawnLocationsArray' has a wrong offset!");
static_assert(offsetof(ABluGloManager_C, OccupiedNodes) == 0x0003E0, "Member 'ABluGloManager_C::OccupiedNodes' has a wrong offset!");
static_assert(offsetof(ABluGloManager_C, AmountOfBluGloToSpawn) == 0x0003F0, "Member 'ABluGloManager_C::AmountOfBluGloToSpawn' has a wrong offset!");
static_assert(offsetof(ABluGloManager_C, QueryActor) == 0x0003F8, "Member 'ABluGloManager_C::QueryActor' has a wrong offset!");
static_assert(offsetof(ABluGloManager_C, OnestRequestArraySet) == 0x000400, "Member 'ABluGloManager_C::OnestRequestArraySet' has a wrong offset!");
static_assert(offsetof(ABluGloManager_C, BluGloNavigablePointRadius) == 0x000404, "Member 'ABluGloManager_C::BluGloNavigablePointRadius' has a wrong offset!");
static_assert(offsetof(ABluGloManager_C, Reward_Start_Sound) == 0x000408, "Member 'ABluGloManager_C::Reward_Start_Sound' has a wrong offset!");
static_assert(offsetof(ABluGloManager_C, Reward_Appear_Sound) == 0x000410, "Member 'ABluGloManager_C::Reward_Appear_Sound' has a wrong offset!");
static_assert(offsetof(ABluGloManager_C, LocationLength) == 0x000418, "Member 'ABluGloManager_C::LocationLength' has a wrong offset!");
static_assert(offsetof(ABluGloManager_C, BluGloSpawnAnimationTime) == 0x00041C, "Member 'ABluGloManager_C::BluGloSpawnAnimationTime' has a wrong offset!");

}

