﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReplicationGraph

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
// 0x0010 (0x0010 - 0x0000)
struct FConnectionAlwaysRelevantNodePair final
{
public:
	class UNetConnection*                         NetConnection;                                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConnectionAlwaysRelevantNodePair) == 0x000008, "Wrong alignment on FConnectionAlwaysRelevantNodePair");
static_assert(sizeof(FConnectionAlwaysRelevantNodePair) == 0x000010, "Wrong size on FConnectionAlwaysRelevantNodePair");
static_assert(offsetof(FConnectionAlwaysRelevantNodePair, NetConnection) == 0x000000, "Member 'FConnectionAlwaysRelevantNodePair::NetConnection' has a wrong offset!");
static_assert(offsetof(FConnectionAlwaysRelevantNodePair, Node) == 0x000008, "Member 'FConnectionAlwaysRelevantNodePair::Node' has a wrong offset!");

// ScriptStruct ReplicationGraph.TearOffActorInfo
// 0x0018 (0x0018 - 0x0000)
struct FTearOffActorInfo final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Actor;                                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10[0x8];                                       // 0x0010(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTearOffActorInfo) == 0x000008, "Wrong alignment on FTearOffActorInfo");
static_assert(sizeof(FTearOffActorInfo) == 0x000018, "Wrong size on FTearOffActorInfo");
static_assert(offsetof(FTearOffActorInfo, Actor) == 0x000008, "Member 'FTearOffActorInfo::Actor' has a wrong offset!");

}

