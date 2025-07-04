﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: McpProfileSys

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "McpProfileSys_structs.hpp"


namespace SDK
{

// Class McpProfileSys.McpItemAware
// 0x0000 (0x0000 - 0x0000)
class IMcpItemAware final
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpItemAware">();
	}
	static class IMcpItemAware* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMcpItemAware>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IMcpItemAware) == 0x000001, "Wrong alignment on IMcpItemAware");
static_assert(sizeof(IMcpItemAware) == 0x000001, "Wrong size on IMcpItemAware");

// Class McpProfileSys.McpItemDefinitionBase
// 0x0000 (0x0030 - 0x0030)
class UMcpItemDefinitionBase : public UPrimaryDataAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpItemDefinitionBase">();
	}
	static class UMcpItemDefinitionBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMcpItemDefinitionBase>();
	}
};
static_assert(alignof(UMcpItemDefinitionBase) == 0x000008, "Wrong alignment on UMcpItemDefinitionBase");
static_assert(sizeof(UMcpItemDefinitionBase) == 0x000030, "Wrong size on UMcpItemDefinitionBase");

// Class McpProfileSys.McpProfile
// 0x0160 (0x0188 - 0x0028)
class UMcpProfile : public UObject
{
public:
	EServerClientFlag                             AllowSubscriptionToNotificationsService;           // 0x0028(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_29[0x57];                                      // 0x0029(0x0057)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DebugName;                                         // 0x0080(0x0010)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bProfileLockOperationPending;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bProfileUnlockOperationPending;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bEnableMocks;                                      // 0x0092(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_93[0x1D];                                      // 0x0093(0x001D)(Fixing Size After Last Property [ Dumper-7 ])
	class UMcpProfileGroup*                       ProfileGroup;                                      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 ProfileId;                                         // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int64                                         ProfileRevision;                                   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         FullProfileQueryQueued;                            // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bProfileWriteLocked;                               // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_D5[0x3];                                       // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              ProfileWriteLockExpireTime;                        // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         CommandRevision;                                   // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E4[0xA4];                                      // 0x00E4(0x00A4)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void DeleteAllProfiles(struct FClientUrlContext* Context);
	void DeleteProfile(struct FClientUrlContext* Context);
	void LockProfileForWrite(const class FString& Code, int32 Timeout, struct FDedicatedServerUrlContext* Context);
	void QueryProfile(struct FBaseUrlContext* Context);
	void QueryPublicProfile(struct FBaseUrlContext* Context);
	void UnlockProfileForWrite(const class FString& Code, struct FDedicatedServerUrlContext* Context);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpProfile">();
	}
	static class UMcpProfile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMcpProfile>();
	}
};
static_assert(alignof(UMcpProfile) == 0x000008, "Wrong alignment on UMcpProfile");
static_assert(sizeof(UMcpProfile) == 0x000188, "Wrong size on UMcpProfile");
static_assert(offsetof(UMcpProfile, AllowSubscriptionToNotificationsService) == 0x000028, "Member 'UMcpProfile::AllowSubscriptionToNotificationsService' has a wrong offset!");
static_assert(offsetof(UMcpProfile, DebugName) == 0x000080, "Member 'UMcpProfile::DebugName' has a wrong offset!");
static_assert(offsetof(UMcpProfile, bProfileLockOperationPending) == 0x000090, "Member 'UMcpProfile::bProfileLockOperationPending' has a wrong offset!");
static_assert(offsetof(UMcpProfile, bProfileUnlockOperationPending) == 0x000091, "Member 'UMcpProfile::bProfileUnlockOperationPending' has a wrong offset!");
static_assert(offsetof(UMcpProfile, bEnableMocks) == 0x000092, "Member 'UMcpProfile::bEnableMocks' has a wrong offset!");
static_assert(offsetof(UMcpProfile, ProfileGroup) == 0x0000B0, "Member 'UMcpProfile::ProfileGroup' has a wrong offset!");
static_assert(offsetof(UMcpProfile, ProfileId) == 0x0000B8, "Member 'UMcpProfile::ProfileId' has a wrong offset!");
static_assert(offsetof(UMcpProfile, ProfileRevision) == 0x0000C8, "Member 'UMcpProfile::ProfileRevision' has a wrong offset!");
static_assert(offsetof(UMcpProfile, FullProfileQueryQueued) == 0x0000D0, "Member 'UMcpProfile::FullProfileQueryQueued' has a wrong offset!");
static_assert(offsetof(UMcpProfile, bProfileWriteLocked) == 0x0000D4, "Member 'UMcpProfile::bProfileWriteLocked' has a wrong offset!");
static_assert(offsetof(UMcpProfile, ProfileWriteLockExpireTime) == 0x0000D8, "Member 'UMcpProfile::ProfileWriteLockExpireTime' has a wrong offset!");
static_assert(offsetof(UMcpProfile, CommandRevision) == 0x0000E0, "Member 'UMcpProfile::CommandRevision' has a wrong offset!");

// Class McpProfileSys.McpProfileGroup
// 0x01E8 (0x0210 - 0x0028)
class UMcpProfileGroup final : public UObject
{
public:
	uint8                                         Pad_28[0xA0];                                      // 0x0028(0x00A0)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DelayMcpResults;                                   // 0x00C8(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         WeeklyIntervalStartDay;                            // 0x00CC(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FProfileEntry>                  ProfileList;                                       // 0x00D0(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                          bIsInitialized;                                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PlayerName;                                        // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bIsServer;                                         // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ProfileNotificationsStompTopic;                    // 0x0100(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_110[0x40];                                     // 0x0110(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LastMcpVersion;                                    // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 LastContentVersion;                                // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimespan                              LocalTimeOffset;                                   // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_178[0x10];                                     // 0x0178(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bIsProcessingRequestGenerator;                     // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LockCode;                                          // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMcpProfile*>                    LockedProfiles;                                    // 0x01A0(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                 LockedProfilesString;                              // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         ProfileWriteLockTimeoutSecs;                       // 0x01C0(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bSubscribedToNotifications;                        // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1C5[0x3];                                      // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ApplyStashEndPoint;                                // 0x01C8(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1D8[0x8];                                      // 0x01D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bSendProfileCommandRevisions;                      // 0x01E0(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bAsyncParseProfileUpdates;                         // 0x01E1(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1E2[0x2E];                                     // 0x01E2(0x002E)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpProfileGroup">();
	}
	static class UMcpProfileGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMcpProfileGroup>();
	}
};
static_assert(alignof(UMcpProfileGroup) == 0x000008, "Wrong alignment on UMcpProfileGroup");
static_assert(sizeof(UMcpProfileGroup) == 0x000210, "Wrong size on UMcpProfileGroup");
static_assert(offsetof(UMcpProfileGroup, DelayMcpResults) == 0x0000C8, "Member 'UMcpProfileGroup::DelayMcpResults' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, WeeklyIntervalStartDay) == 0x0000CC, "Member 'UMcpProfileGroup::WeeklyIntervalStartDay' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, ProfileList) == 0x0000D0, "Member 'UMcpProfileGroup::ProfileList' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, bIsInitialized) == 0x0000E0, "Member 'UMcpProfileGroup::bIsInitialized' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, PlayerName) == 0x0000E8, "Member 'UMcpProfileGroup::PlayerName' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, bIsServer) == 0x0000F8, "Member 'UMcpProfileGroup::bIsServer' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, ProfileNotificationsStompTopic) == 0x000100, "Member 'UMcpProfileGroup::ProfileNotificationsStompTopic' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LastMcpVersion) == 0x000150, "Member 'UMcpProfileGroup::LastMcpVersion' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LastContentVersion) == 0x000160, "Member 'UMcpProfileGroup::LastContentVersion' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LocalTimeOffset) == 0x000170, "Member 'UMcpProfileGroup::LocalTimeOffset' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, bIsProcessingRequestGenerator) == 0x000188, "Member 'UMcpProfileGroup::bIsProcessingRequestGenerator' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LockCode) == 0x000190, "Member 'UMcpProfileGroup::LockCode' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LockedProfiles) == 0x0001A0, "Member 'UMcpProfileGroup::LockedProfiles' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, LockedProfilesString) == 0x0001B0, "Member 'UMcpProfileGroup::LockedProfilesString' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, ProfileWriteLockTimeoutSecs) == 0x0001C0, "Member 'UMcpProfileGroup::ProfileWriteLockTimeoutSecs' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, bSubscribedToNotifications) == 0x0001C4, "Member 'UMcpProfileGroup::bSubscribedToNotifications' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, ApplyStashEndPoint) == 0x0001C8, "Member 'UMcpProfileGroup::ApplyStashEndPoint' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, bSendProfileCommandRevisions) == 0x0001E0, "Member 'UMcpProfileGroup::bSendProfileCommandRevisions' has a wrong offset!");
static_assert(offsetof(UMcpProfileGroup, bAsyncParseProfileUpdates) == 0x0001E1, "Member 'UMcpProfileGroup::bAsyncParseProfileUpdates' has a wrong offset!");

// Class McpProfileSys.McpProfileManager
// 0x0030 (0x0058 - 0x0028)
class UMcpProfileManager final : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FProfileGroupEntry>             ServerProfileGroups;                               // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FProfileGroupEntry>             ClientProfileGroups;                               // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"McpProfileManager">();
	}
	static class UMcpProfileManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMcpProfileManager>();
	}
};
static_assert(alignof(UMcpProfileManager) == 0x000008, "Wrong alignment on UMcpProfileManager");
static_assert(sizeof(UMcpProfileManager) == 0x000058, "Wrong size on UMcpProfileManager");
static_assert(offsetof(UMcpProfileManager, ServerProfileGroups) == 0x000038, "Member 'UMcpProfileManager::ServerProfileGroups' has a wrong offset!");
static_assert(offsetof(UMcpProfileManager, ClientProfileGroups) == 0x000048, "Member 'UMcpProfileManager::ClientProfileGroups' has a wrong offset!");

}

