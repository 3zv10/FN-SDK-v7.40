﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScheduledEvents

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "JsonUtilities_structs.hpp"


namespace SDK
{

// ScriptStruct ScheduledEvents.EventRecord
// 0x0020 (0x0020 - 0x0000)
struct FEventRecord final
{
public:
	class FString                                 EventType;                                         // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              ActiveUntil;                                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              ActiveSince;                                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FEventRecord) == 0x000008, "Wrong alignment on FEventRecord");
static_assert(sizeof(FEventRecord) == 0x000020, "Wrong size on FEventRecord");
static_assert(offsetof(FEventRecord, EventType) == 0x000000, "Member 'FEventRecord::EventType' has a wrong offset!");
static_assert(offsetof(FEventRecord, ActiveUntil) == 0x000010, "Member 'FEventRecord::ActiveUntil' has a wrong offset!");
static_assert(offsetof(FEventRecord, ActiveSince) == 0x000018, "Member 'FEventRecord::ActiveSince' has a wrong offset!");

// ScriptStruct ScheduledEvents.EventChannelState
// 0x0038 (0x0038 - 0x0000)
struct FEventChannelState final
{
public:
	struct FDateTime                              ValidFrom;                                         // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEventRecord>                   ActiveEvents;                                      // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                     State;                                             // 0x0018(0x0020)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FEventChannelState) == 0x000008, "Wrong alignment on FEventChannelState");
static_assert(sizeof(FEventChannelState) == 0x000038, "Wrong size on FEventChannelState");
static_assert(offsetof(FEventChannelState, ValidFrom) == 0x000000, "Member 'FEventChannelState::ValidFrom' has a wrong offset!");
static_assert(offsetof(FEventChannelState, ActiveEvents) == 0x000008, "Member 'FEventChannelState::ActiveEvents' has a wrong offset!");
static_assert(offsetof(FEventChannelState, State) == 0x000018, "Member 'FEventChannelState::State' has a wrong offset!");

// ScriptStruct ScheduledEvents.EventsTimeline
// 0x0018 (0x0018 - 0x0000)
struct FEventsTimeline final
{
public:
	struct FDateTime                              CacheExpire;                                       // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEventChannelState>             States;                                            // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FEventsTimeline) == 0x000008, "Wrong alignment on FEventsTimeline");
static_assert(sizeof(FEventsTimeline) == 0x000018, "Wrong size on FEventsTimeline");
static_assert(offsetof(FEventsTimeline, CacheExpire) == 0x000000, "Member 'FEventsTimeline::CacheExpire' has a wrong offset!");
static_assert(offsetof(FEventsTimeline, States) == 0x000008, "Member 'FEventsTimeline::States' has a wrong offset!");

// ScriptStruct ScheduledEvents.CalendarDownload
// 0x0060 (0x0060 - 0x0000)
struct FCalendarDownload final
{
public:
	struct FDateTime                              CurrentTime;                                       // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        EventsTimeOffsetHrs;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FEventsTimeline>   Channels;                                          // 0x0010(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCalendarDownload) == 0x000008, "Wrong alignment on FCalendarDownload");
static_assert(sizeof(FCalendarDownload) == 0x000060, "Wrong size on FCalendarDownload");
static_assert(offsetof(FCalendarDownload, CurrentTime) == 0x000000, "Member 'FCalendarDownload::CurrentTime' has a wrong offset!");
static_assert(offsetof(FCalendarDownload, EventsTimeOffsetHrs) == 0x000008, "Member 'FCalendarDownload::EventsTimeOffsetHrs' has a wrong offset!");
static_assert(offsetof(FCalendarDownload, Channels) == 0x000010, "Member 'FCalendarDownload::Channels' has a wrong offset!");

}

