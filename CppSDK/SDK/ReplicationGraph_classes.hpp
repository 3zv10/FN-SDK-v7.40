﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReplicationGraph

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "ReplicationGraph_structs.hpp"


namespace SDK
{

// Class ReplicationGraph.ReplicationGraphNode
// 0x0028 (0x0050 - 0x0028)
class UReplicationGraphNode : public UObject
{
public:
	TArray<class UReplicationGraphNode*>          AllChildNodes;                                     // 0x0028(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_38[0x18];                                      // 0x0038(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode">();
	}
	static class UReplicationGraphNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode>();
	}
};
static_assert(alignof(UReplicationGraphNode) == 0x000008, "Wrong alignment on UReplicationGraphNode");
static_assert(sizeof(UReplicationGraphNode) == 0x000050, "Wrong size on UReplicationGraphNode");
static_assert(offsetof(UReplicationGraphNode, AllChildNodes) == 0x000028, "Member 'UReplicationGraphNode::AllChildNodes' has a wrong offset!");

// Class ReplicationGraph.ReplicationGraphNode_ActorList
// 0x00A8 (0x00F8 - 0x0050)
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{
public:
	uint8                                         Pad_50[0xA8];                                      // 0x0050(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_ActorList">();
	}
	static class UReplicationGraphNode_ActorList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_ActorList>();
	}
};
static_assert(alignof(UReplicationGraphNode_ActorList) == 0x000008, "Wrong alignment on UReplicationGraphNode_ActorList");
static_assert(sizeof(UReplicationGraphNode_ActorList) == 0x0000F8, "Wrong size on UReplicationGraphNode_ActorList");

// Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// 0x0030 (0x0128 - 0x00F8)
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_F8[0x30];                                      // 0x00F8(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_DynamicSpatialFrequency">();
	}
	static class UReplicationGraphNode_DynamicSpatialFrequency* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_DynamicSpatialFrequency>();
	}
};
static_assert(alignof(UReplicationGraphNode_DynamicSpatialFrequency) == 0x000008, "Wrong alignment on UReplicationGraphNode_DynamicSpatialFrequency");
static_assert(sizeof(UReplicationGraphNode_DynamicSpatialFrequency) == 0x000128, "Wrong size on UReplicationGraphNode_DynamicSpatialFrequency");

// Class ReplicationGraph.ReplicationGraphNode_ConnectionDormanyNode
// 0x0098 (0x0190 - 0x00F8)
class UReplicationGraphNode_ConnectionDormanyNode final : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_F8[0x98];                                      // 0x00F8(0x0098)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_ConnectionDormanyNode">();
	}
	static class UReplicationGraphNode_ConnectionDormanyNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_ConnectionDormanyNode>();
	}
};
static_assert(alignof(UReplicationGraphNode_ConnectionDormanyNode) == 0x000008, "Wrong alignment on UReplicationGraphNode_ConnectionDormanyNode");
static_assert(sizeof(UReplicationGraphNode_ConnectionDormanyNode) == 0x000190, "Wrong size on UReplicationGraphNode_ConnectionDormanyNode");

// Class ReplicationGraph.ReplicationGraph
// 0x0438 (0x0460 - 0x0028)
class UReplicationGraph : public UReplicationDriver
{
public:
	TSubclassOf<class UNetReplicationGraphConnection> ReplicationConnectionManagerClass;             // 0x0028(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetDriver*                             NetDriver;                                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNetReplicationGraphConnection*> Connections;                                       // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UNetReplicationGraphConnection*> PendingConnections;                                // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_58[0x40];                                      // 0x0058(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UReplicationGraphNode*>          GlobalGraphNodes;                                  // 0x0098(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UReplicationGraphNode*>          PrepareForReplicationNodes;                        // 0x00A8(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_B8[0x3A8];                                     // 0x00B8(0x03A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraph">();
	}
	static class UReplicationGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraph>();
	}
};
static_assert(alignof(UReplicationGraph) == 0x000008, "Wrong alignment on UReplicationGraph");
static_assert(sizeof(UReplicationGraph) == 0x000460, "Wrong size on UReplicationGraph");
static_assert(offsetof(UReplicationGraph, ReplicationConnectionManagerClass) == 0x000028, "Member 'UReplicationGraph::ReplicationConnectionManagerClass' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, NetDriver) == 0x000030, "Member 'UReplicationGraph::NetDriver' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, Connections) == 0x000038, "Member 'UReplicationGraph::Connections' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, PendingConnections) == 0x000048, "Member 'UReplicationGraph::PendingConnections' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, GlobalGraphNodes) == 0x000098, "Member 'UReplicationGraph::GlobalGraphNodes' has a wrong offset!");
static_assert(offsetof(UReplicationGraph, PrepareForReplicationNodes) == 0x0000A8, "Member 'UReplicationGraph::PrepareForReplicationNodes' has a wrong offset!");

// Class ReplicationGraph.BasicReplicationGraph
// 0x0030 (0x0490 - 0x0460)
class UBasicReplicationGraph final : public UReplicationGraph
{
public:
	class UReplicationGraphNode_GridSpatialization2D* GridNode;                                      // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReplicationGraphNode_ActorList*        AlwaysRelevantNode;                                // 0x0468(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;                // 0x0470(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         ActorsWithoutNetConnection;                        // 0x0480(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BasicReplicationGraph">();
	}
	static class UBasicReplicationGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasicReplicationGraph>();
	}
};
static_assert(alignof(UBasicReplicationGraph) == 0x000008, "Wrong alignment on UBasicReplicationGraph");
static_assert(sizeof(UBasicReplicationGraph) == 0x000490, "Wrong size on UBasicReplicationGraph");
static_assert(offsetof(UBasicReplicationGraph, GridNode) == 0x000460, "Member 'UBasicReplicationGraph::GridNode' has a wrong offset!");
static_assert(offsetof(UBasicReplicationGraph, AlwaysRelevantNode) == 0x000468, "Member 'UBasicReplicationGraph::AlwaysRelevantNode' has a wrong offset!");
static_assert(offsetof(UBasicReplicationGraph, AlwaysRelevantForConnectionList) == 0x000470, "Member 'UBasicReplicationGraph::AlwaysRelevantForConnectionList' has a wrong offset!");
static_assert(offsetof(UBasicReplicationGraph, ActorsWithoutNetConnection) == 0x000480, "Member 'UBasicReplicationGraph::ActorsWithoutNetConnection' has a wrong offset!");

// Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// 0x00E8 (0x0138 - 0x0050)
class UReplicationGraphNode_ActorListFrequencyBuckets final : public UReplicationGraphNode
{
public:
	uint8                                         Pad_50[0xE8];                                      // 0x0050(0x00E8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_ActorListFrequencyBuckets">();
	}
	static class UReplicationGraphNode_ActorListFrequencyBuckets* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_ActorListFrequencyBuckets>();
	}
};
static_assert(alignof(UReplicationGraphNode_ActorListFrequencyBuckets) == 0x000008, "Wrong alignment on UReplicationGraphNode_ActorListFrequencyBuckets");
static_assert(sizeof(UReplicationGraphNode_ActorListFrequencyBuckets) == 0x000138, "Wrong size on UReplicationGraphNode_ActorListFrequencyBuckets");

// Class ReplicationGraph.ReplicationGraphNode_DormancyNode
// 0x0050 (0x0148 - 0x00F8)
class UReplicationGraphNode_DormancyNode final : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_F8[0x50];                                      // 0x00F8(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_DormancyNode">();
	}
	static class UReplicationGraphNode_DormancyNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_DormancyNode>();
	}
};
static_assert(alignof(UReplicationGraphNode_DormancyNode) == 0x000008, "Wrong alignment on UReplicationGraphNode_DormancyNode");
static_assert(sizeof(UReplicationGraphNode_DormancyNode) == 0x000148, "Wrong size on UReplicationGraphNode_DormancyNode");

// Class ReplicationGraph.ReplicationGraphNode_GridCell
// 0x0058 (0x0150 - 0x00F8)
class UReplicationGraphNode_GridCell final : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_F8[0x48];                                      // 0x00F8(0x0048)(Fixing Size After Last Property [ Dumper-7 ])
	class UReplicationGraphNode*                  DynamicNode;                                       // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UReplicationGraphNode_DormancyNode*     DormancyNode;                                      // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_GridCell">();
	}
	static class UReplicationGraphNode_GridCell* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_GridCell>();
	}
};
static_assert(alignof(UReplicationGraphNode_GridCell) == 0x000008, "Wrong alignment on UReplicationGraphNode_GridCell");
static_assert(sizeof(UReplicationGraphNode_GridCell) == 0x000150, "Wrong size on UReplicationGraphNode_GridCell");
static_assert(offsetof(UReplicationGraphNode_GridCell, DynamicNode) == 0x000140, "Member 'UReplicationGraphNode_GridCell::DynamicNode' has a wrong offset!");
static_assert(offsetof(UReplicationGraphNode_GridCell, DormancyNode) == 0x000148, "Member 'UReplicationGraphNode_GridCell::DormancyNode' has a wrong offset!");

// Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// 0x01C0 (0x0210 - 0x0050)
class UReplicationGraphNode_GridSpatialization2D final : public UReplicationGraphNode
{
public:
	uint8                                         Pad_50[0x1C0];                                     // 0x0050(0x01C0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_GridSpatialization2D">();
	}
	static class UReplicationGraphNode_GridSpatialization2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_GridSpatialization2D>();
	}
};
static_assert(alignof(UReplicationGraphNode_GridSpatialization2D) == 0x000008, "Wrong alignment on UReplicationGraphNode_GridSpatialization2D");
static_assert(sizeof(UReplicationGraphNode_GridSpatialization2D) == 0x000210, "Wrong size on UReplicationGraphNode_GridSpatialization2D");

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
// 0x0018 (0x0068 - 0x0050)
class UReplicationGraphNode_AlwaysRelevant final : public UReplicationGraphNode
{
public:
	class UReplicationGraphNode*                  ChildNode;                                         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_58[0x10];                                      // 0x0058(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_AlwaysRelevant">();
	}
	static class UReplicationGraphNode_AlwaysRelevant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_AlwaysRelevant>();
	}
};
static_assert(alignof(UReplicationGraphNode_AlwaysRelevant) == 0x000008, "Wrong alignment on UReplicationGraphNode_AlwaysRelevant");
static_assert(sizeof(UReplicationGraphNode_AlwaysRelevant) == 0x000068, "Wrong size on UReplicationGraphNode_AlwaysRelevant");
static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant, ChildNode) == 0x000050, "Member 'UReplicationGraphNode_AlwaysRelevant::ChildNode' has a wrong offset!");

// Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
// 0x0028 (0x0120 - 0x00F8)
class UReplicationGraphNode_AlwaysRelevant_ForConnection final : public UReplicationGraphNode_ActorList
{
public:
	uint8                                         Pad_F8[0x18];                                      // 0x00F8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 LastViewer;                                        // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 LastViewTarget;                                    // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_AlwaysRelevant_ForConnection">();
	}
	static class UReplicationGraphNode_AlwaysRelevant_ForConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_AlwaysRelevant_ForConnection>();
	}
};
static_assert(alignof(UReplicationGraphNode_AlwaysRelevant_ForConnection) == 0x000008, "Wrong alignment on UReplicationGraphNode_AlwaysRelevant_ForConnection");
static_assert(sizeof(UReplicationGraphNode_AlwaysRelevant_ForConnection) == 0x000120, "Wrong size on UReplicationGraphNode_AlwaysRelevant_ForConnection");
static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant_ForConnection, LastViewer) == 0x000110, "Member 'UReplicationGraphNode_AlwaysRelevant_ForConnection::LastViewer' has a wrong offset!");
static_assert(offsetof(UReplicationGraphNode_AlwaysRelevant_ForConnection, LastViewTarget) == 0x000118, "Member 'UReplicationGraphNode_AlwaysRelevant_ForConnection::LastViewTarget' has a wrong offset!");

// Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
// 0x0028 (0x0078 - 0x0050)
class UReplicationGraphNode_TearOff_ForConnection final : public UReplicationGraphNode
{
public:
	TArray<struct FTearOffActorInfo>              TearOffActors;                                     // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x18];                                      // 0x0060(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphNode_TearOff_ForConnection">();
	}
	static class UReplicationGraphNode_TearOff_ForConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReplicationGraphNode_TearOff_ForConnection>();
	}
};
static_assert(alignof(UReplicationGraphNode_TearOff_ForConnection) == 0x000008, "Wrong alignment on UReplicationGraphNode_TearOff_ForConnection");
static_assert(sizeof(UReplicationGraphNode_TearOff_ForConnection) == 0x000078, "Wrong size on UReplicationGraphNode_TearOff_ForConnection");
static_assert(offsetof(UReplicationGraphNode_TearOff_ForConnection, TearOffActors) == 0x000050, "Member 'UReplicationGraphNode_TearOff_ForConnection::TearOffActors' has a wrong offset!");

// Class ReplicationGraph.NetReplicationGraphConnection
// 0x01F0 (0x0218 - 0x0028)
class UNetReplicationGraphConnection final : public UReplicationConnectionDriver
{
public:
	class UNetConnection*                         NetConnection;                                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_30[0x140];                                     // 0x0030(0x0140)(Fixing Size After Last Property [ Dumper-7 ])
	class AReplicationGraphDebugActor*            DebugActor;                                        // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_178[0x18];                                     // 0x0178(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UReplicationGraphNode*>          ConnectionGraphNodes;                              // 0x0190(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UReplicationGraphNode_TearOff_ForConnection* TearOffNode;                                  // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1A8[0x70];                                     // 0x01A8(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetReplicationGraphConnection">();
	}
	static class UNetReplicationGraphConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetReplicationGraphConnection>();
	}
};
static_assert(alignof(UNetReplicationGraphConnection) == 0x000008, "Wrong alignment on UNetReplicationGraphConnection");
static_assert(sizeof(UNetReplicationGraphConnection) == 0x000218, "Wrong size on UNetReplicationGraphConnection");
static_assert(offsetof(UNetReplicationGraphConnection, NetConnection) == 0x000028, "Member 'UNetReplicationGraphConnection::NetConnection' has a wrong offset!");
static_assert(offsetof(UNetReplicationGraphConnection, DebugActor) == 0x000170, "Member 'UNetReplicationGraphConnection::DebugActor' has a wrong offset!");
static_assert(offsetof(UNetReplicationGraphConnection, ConnectionGraphNodes) == 0x000190, "Member 'UNetReplicationGraphConnection::ConnectionGraphNodes' has a wrong offset!");
static_assert(offsetof(UNetReplicationGraphConnection, TearOffNode) == 0x0001A0, "Member 'UNetReplicationGraphConnection::TearOffNode' has a wrong offset!");

// Class ReplicationGraph.ReplicationGraphDebugActor
// 0x0010 (0x0340 - 0x0330)
class AReplicationGraphDebugActor final : public AActor
{
public:
	class UReplicationGraph*                      ReplicationGraph;                                  // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetReplicationGraphConnection*         ConnectionManager;                                 // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, const TArray<class AActor*>& Actors);
	void ServerCellInfo();
	void ServerPrintAllActorInfo(const class FString& Str);
	void ServerSetConditionalActorBreakpoint(class AActor* Actor);
	void ServerSetCullDistanceForClass(class UClass* Class_0, float CullDistance);
	void ServerSetPeriodFrameForClass(class UClass* Class_0, int32 PeriodFrame);
	void ServerStartDebugging();
	void ServerStopDebugging();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReplicationGraphDebugActor">();
	}
	static class AReplicationGraphDebugActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AReplicationGraphDebugActor>();
	}
};
static_assert(alignof(AReplicationGraphDebugActor) == 0x000008, "Wrong alignment on AReplicationGraphDebugActor");
static_assert(sizeof(AReplicationGraphDebugActor) == 0x000340, "Wrong size on AReplicationGraphDebugActor");
static_assert(offsetof(AReplicationGraphDebugActor, ReplicationGraph) == 0x000330, "Member 'AReplicationGraphDebugActor::ReplicationGraph' has a wrong offset!");
static_assert(offsetof(AReplicationGraphDebugActor, ConnectionManager) == 0x000338, "Member 'AReplicationGraphDebugActor::ConnectionManager' has a wrong offset!");

}

