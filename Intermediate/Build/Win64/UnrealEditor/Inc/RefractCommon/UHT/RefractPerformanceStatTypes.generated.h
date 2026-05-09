// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/RefractPerformanceStatTypes.h"

#ifdef REFRACTCOMMON_RefractPerformanceStatTypes_generated_h
#error "RefractPerformanceStatTypes.generated.h already included, missing '#pragma once' in RefractPerformanceStatTypes.h"
#endif
#define REFRACTCOMMON_RefractPerformanceStatTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractPerformanceStatTypes_h

// ********** Begin Enum EPerformanceStat **********************************************************
#define FOREACH_ENUM_EPERFORMANCESTAT(op) \
	op(EPerformanceStat::ClientFPS) \
	op(EPerformanceStat::ServerFPS) \
	op(EPerformanceStat::IdleTime) \
	op(EPerformanceStat::FrameTime) \
	op(EPerformanceStat::FrameTime_GameThread) \
	op(EPerformanceStat::FrameTime_RenderThread) \
	op(EPerformanceStat::FrameTime_RHIThread) \
	op(EPerformanceStat::FrameTime_GPU) \
	op(EPerformanceStat::Ping) \
	op(EPerformanceStat::PacketLoss_Incoming) \
	op(EPerformanceStat::PacketLoss_Outgoing) \
	op(EPerformanceStat::PacketRate_Incoming) \
	op(EPerformanceStat::PacketRate_Outgoing) \
	op(EPerformanceStat::PacketSize_Incoming) \
	op(EPerformanceStat::PacketSize_Outgoing) \
	op(EPerformanceStat::Latency_Total) \
	op(EPerformanceStat::Latency_Game) \
	op(EPerformanceStat::Latency_Render) \
	op(EPerformanceStat::Count) 

enum class EPerformanceStat : uint8;
template<> struct TIsUEnumClass<EPerformanceStat> { enum { Value = true }; };
template<> REFRACTCOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<EPerformanceStat>();
// ********** End Enum EPerformanceStat ************************************************************

// ********** Begin Enum EPerformanceStatDisplayMode ***********************************************
#define FOREACH_ENUM_EPERFORMANCESTATDISPLAYMODE(op) \
	op(EPerformanceStatDisplayMode::Hidden) \
	op(EPerformanceStatDisplayMode::TextOnly) \
	op(EPerformanceStatDisplayMode::GraphOnly) \
	op(EPerformanceStatDisplayMode::TextAndGraph) 

enum class EPerformanceStatDisplayMode : uint8;
template<> struct TIsUEnumClass<EPerformanceStatDisplayMode> { enum { Value = true }; };
template<> REFRACTCOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<EPerformanceStatDisplayMode>();
// ********** End Enum EPerformanceStatDisplayMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
