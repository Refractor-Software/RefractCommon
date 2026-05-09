// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/RefractPerformanceStatTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRefractPerformanceStatTypes() {}

// ********** Begin Cross Module References ********************************************************
REFRACTCOMMON_API UEnum* Z_Construct_UEnum_RefractCommon_EPerformanceStat();
REFRACTCOMMON_API UEnum* Z_Construct_UEnum_RefractCommon_EPerformanceStatDisplayMode();
UPackage* Z_Construct_UPackage__Script_RefractCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPerformanceStat **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPerformanceStat;
static UEnum* EPerformanceStat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPerformanceStat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPerformanceStat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RefractCommon_EPerformanceStat, (UObject*)Z_Construct_UPackage__Script_RefractCommon(), TEXT("EPerformanceStat"));
	}
	return Z_Registration_Info_UEnum_EPerformanceStat.OuterSingleton;
}
template<> REFRACTCOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<EPerformanceStat>()
{
	return EPerformanceStat_StaticEnum();
}
struct Z_Construct_UEnum_RefractCommon_EPerformanceStat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClientFPS.Comment", "// stat fps (in Hz)\n" },
		{ "ClientFPS.Name", "EPerformanceStat::ClientFPS" },
		{ "ClientFPS.ToolTip", "stat fps (in Hz)" },
		{ "Comment", "// Different kinds of stats that can be displayed on-screen\n" },
		{ "Count.Comment", "// New stats should go above here\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EPerformanceStat::Count" },
		{ "Count.ToolTip", "New stats should go above here" },
		{ "FrameTime.Comment", "// Stat unit overall (in seconds)\n" },
		{ "FrameTime.Name", "EPerformanceStat::FrameTime" },
		{ "FrameTime.ToolTip", "Stat unit overall (in seconds)" },
		{ "FrameTime_GameThread.Comment", "// Stat unit (game thread, in seconds)\n" },
		{ "FrameTime_GameThread.Name", "EPerformanceStat::FrameTime_GameThread" },
		{ "FrameTime_GameThread.ToolTip", "Stat unit (game thread, in seconds)" },
		{ "FrameTime_GPU.Comment", "// Stat unit (inferred GPU time, in seconds)\n" },
		{ "FrameTime_GPU.Name", "EPerformanceStat::FrameTime_GPU" },
		{ "FrameTime_GPU.ToolTip", "Stat unit (inferred GPU time, in seconds)" },
		{ "FrameTime_RenderThread.Comment", "// Stat unit (render thread, in seconds)\n" },
		{ "FrameTime_RenderThread.Name", "EPerformanceStat::FrameTime_RenderThread" },
		{ "FrameTime_RenderThread.ToolTip", "Stat unit (render thread, in seconds)" },
		{ "FrameTime_RHIThread.Comment", "// Stat unit (RHI thread, in seconds)\n" },
		{ "FrameTime_RHIThread.Name", "EPerformanceStat::FrameTime_RHIThread" },
		{ "FrameTime_RHIThread.ToolTip", "Stat unit (RHI thread, in seconds)" },
		{ "IdleTime.Comment", "// idle time spent waiting for vsync or frame rate limit (in seconds)\n" },
		{ "IdleTime.Name", "EPerformanceStat::IdleTime" },
		{ "IdleTime.ToolTip", "idle time spent waiting for vsync or frame rate limit (in seconds)" },
		{ "Latency_Game.Comment", "// Game simulation start to driver submission end\n" },
		{ "Latency_Game.Name", "EPerformanceStat::Latency_Game" },
		{ "Latency_Game.ToolTip", "Game simulation start to driver submission end" },
		{ "Latency_Render.Comment", "// OS render queue start to GPU render end\n" },
		{ "Latency_Render.Name", "EPerformanceStat::Latency_Render" },
		{ "Latency_Render.ToolTip", "OS render queue start to GPU render end" },
		{ "Latency_Total.Comment", "// The total latency in MS of the game\n" },
		{ "Latency_Total.Name", "EPerformanceStat::Latency_Total" },
		{ "Latency_Total.ToolTip", "The total latency in MS of the game" },
		{ "ModuleRelativePath", "Public/Types/RefractPerformanceStatTypes.h" },
		{ "PacketLoss_Incoming.Comment", "// The incoming packet loss percentage (%)\n" },
		{ "PacketLoss_Incoming.Name", "EPerformanceStat::PacketLoss_Incoming" },
		{ "PacketLoss_Incoming.ToolTip", "The incoming packet loss percentage (%)" },
		{ "PacketLoss_Outgoing.Comment", "// The outgoing packet loss percentage (%)\n" },
		{ "PacketLoss_Outgoing.Name", "EPerformanceStat::PacketLoss_Outgoing" },
		{ "PacketLoss_Outgoing.ToolTip", "The outgoing packet loss percentage (%)" },
		{ "PacketRate_Incoming.Comment", "// The number of packets received in the last second\n" },
		{ "PacketRate_Incoming.Name", "EPerformanceStat::PacketRate_Incoming" },
		{ "PacketRate_Incoming.ToolTip", "The number of packets received in the last second" },
		{ "PacketRate_Outgoing.Comment", "// The number of packets sent in the past second\n" },
		{ "PacketRate_Outgoing.Name", "EPerformanceStat::PacketRate_Outgoing" },
		{ "PacketRate_Outgoing.ToolTip", "The number of packets sent in the past second" },
		{ "PacketSize_Incoming.Comment", "// The avg. size (in bytes) of packets received\n" },
		{ "PacketSize_Incoming.Name", "EPerformanceStat::PacketSize_Incoming" },
		{ "PacketSize_Incoming.ToolTip", "The avg. size (in bytes) of packets received" },
		{ "PacketSize_Outgoing.Comment", "// The avg. size (in bytes) of packets sent\n" },
		{ "PacketSize_Outgoing.Name", "EPerformanceStat::PacketSize_Outgoing" },
		{ "PacketSize_Outgoing.ToolTip", "The avg. size (in bytes) of packets sent" },
		{ "Ping.Comment", "// Network ping (in ms)\n" },
		{ "Ping.Name", "EPerformanceStat::Ping" },
		{ "Ping.ToolTip", "Network ping (in ms)" },
		{ "ServerFPS.Comment", "// server tick rate (in Hz)\n" },
		{ "ServerFPS.Name", "EPerformanceStat::ServerFPS" },
		{ "ServerFPS.ToolTip", "server tick rate (in Hz)" },
		{ "ToolTip", "Different kinds of stats that can be displayed on-screen" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPerformanceStat::ClientFPS", (int64)EPerformanceStat::ClientFPS },
		{ "EPerformanceStat::ServerFPS", (int64)EPerformanceStat::ServerFPS },
		{ "EPerformanceStat::IdleTime", (int64)EPerformanceStat::IdleTime },
		{ "EPerformanceStat::FrameTime", (int64)EPerformanceStat::FrameTime },
		{ "EPerformanceStat::FrameTime_GameThread", (int64)EPerformanceStat::FrameTime_GameThread },
		{ "EPerformanceStat::FrameTime_RenderThread", (int64)EPerformanceStat::FrameTime_RenderThread },
		{ "EPerformanceStat::FrameTime_RHIThread", (int64)EPerformanceStat::FrameTime_RHIThread },
		{ "EPerformanceStat::FrameTime_GPU", (int64)EPerformanceStat::FrameTime_GPU },
		{ "EPerformanceStat::Ping", (int64)EPerformanceStat::Ping },
		{ "EPerformanceStat::PacketLoss_Incoming", (int64)EPerformanceStat::PacketLoss_Incoming },
		{ "EPerformanceStat::PacketLoss_Outgoing", (int64)EPerformanceStat::PacketLoss_Outgoing },
		{ "EPerformanceStat::PacketRate_Incoming", (int64)EPerformanceStat::PacketRate_Incoming },
		{ "EPerformanceStat::PacketRate_Outgoing", (int64)EPerformanceStat::PacketRate_Outgoing },
		{ "EPerformanceStat::PacketSize_Incoming", (int64)EPerformanceStat::PacketSize_Incoming },
		{ "EPerformanceStat::PacketSize_Outgoing", (int64)EPerformanceStat::PacketSize_Outgoing },
		{ "EPerformanceStat::Latency_Total", (int64)EPerformanceStat::Latency_Total },
		{ "EPerformanceStat::Latency_Game", (int64)EPerformanceStat::Latency_Game },
		{ "EPerformanceStat::Latency_Render", (int64)EPerformanceStat::Latency_Render },
		{ "EPerformanceStat::Count", (int64)EPerformanceStat::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RefractCommon_EPerformanceStat_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RefractCommon_EPerformanceStat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RefractCommon,
	nullptr,
	"EPerformanceStat",
	"EPerformanceStat",
	Z_Construct_UEnum_RefractCommon_EPerformanceStat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RefractCommon_EPerformanceStat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RefractCommon_EPerformanceStat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RefractCommon_EPerformanceStat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RefractCommon_EPerformanceStat()
{
	if (!Z_Registration_Info_UEnum_EPerformanceStat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPerformanceStat.InnerSingleton, Z_Construct_UEnum_RefractCommon_EPerformanceStat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPerformanceStat.InnerSingleton;
}
// ********** End Enum EPerformanceStat ************************************************************

// ********** Begin Enum EPerformanceStatDisplayMode ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPerformanceStatDisplayMode;
static UEnum* EPerformanceStatDisplayMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPerformanceStatDisplayMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPerformanceStatDisplayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RefractCommon_EPerformanceStatDisplayMode, (UObject*)Z_Construct_UPackage__Script_RefractCommon(), TEXT("EPerformanceStatDisplayMode"));
	}
	return Z_Registration_Info_UEnum_EPerformanceStatDisplayMode.OuterSingleton;
}
template<> REFRACTCOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<EPerformanceStatDisplayMode>()
{
	return EPerformanceStatDisplayMode_StaticEnum();
}
struct Z_Construct_UEnum_RefractCommon_EPerformanceStatDisplayMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// How to display the stat\n" },
		{ "GraphOnly.Comment", "// Show this stat in graph form\n" },
		{ "GraphOnly.Name", "EPerformanceStatDisplayMode::GraphOnly" },
		{ "GraphOnly.ToolTip", "Show this stat in graph form" },
		{ "Hidden.Comment", "// Don't show this stat\n" },
		{ "Hidden.Name", "EPerformanceStatDisplayMode::Hidden" },
		{ "Hidden.ToolTip", "Don't show this stat" },
		{ "ModuleRelativePath", "Public/Types/RefractPerformanceStatTypes.h" },
		{ "TextAndGraph.Comment", "// Show this stat as both text and graph\n" },
		{ "TextAndGraph.Name", "EPerformanceStatDisplayMode::TextAndGraph" },
		{ "TextAndGraph.ToolTip", "Show this stat as both text and graph" },
		{ "TextOnly.Comment", "// Show this stat in text form\n" },
		{ "TextOnly.Name", "EPerformanceStatDisplayMode::TextOnly" },
		{ "TextOnly.ToolTip", "Show this stat in text form" },
		{ "ToolTip", "How to display the stat" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPerformanceStatDisplayMode::Hidden", (int64)EPerformanceStatDisplayMode::Hidden },
		{ "EPerformanceStatDisplayMode::TextOnly", (int64)EPerformanceStatDisplayMode::TextOnly },
		{ "EPerformanceStatDisplayMode::GraphOnly", (int64)EPerformanceStatDisplayMode::GraphOnly },
		{ "EPerformanceStatDisplayMode::TextAndGraph", (int64)EPerformanceStatDisplayMode::TextAndGraph },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RefractCommon_EPerformanceStatDisplayMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RefractCommon_EPerformanceStatDisplayMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RefractCommon,
	nullptr,
	"EPerformanceStatDisplayMode",
	"EPerformanceStatDisplayMode",
	Z_Construct_UEnum_RefractCommon_EPerformanceStatDisplayMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RefractCommon_EPerformanceStatDisplayMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RefractCommon_EPerformanceStatDisplayMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RefractCommon_EPerformanceStatDisplayMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RefractCommon_EPerformanceStatDisplayMode()
{
	if (!Z_Registration_Info_UEnum_EPerformanceStatDisplayMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPerformanceStatDisplayMode.InnerSingleton, Z_Construct_UEnum_RefractCommon_EPerformanceStatDisplayMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPerformanceStatDisplayMode.InnerSingleton;
}
// ********** End Enum EPerformanceStatDisplayMode *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractPerformanceStatTypes_h__Script_RefractCommon_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPerformanceStat_StaticEnum, TEXT("EPerformanceStat"), &Z_Registration_Info_UEnum_EPerformanceStat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2657755310U) },
		{ EPerformanceStatDisplayMode_StaticEnum, TEXT("EPerformanceStatDisplayMode"), &Z_Registration_Info_UEnum_EPerformanceStatDisplayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 56996204U) },
	};
}; // Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractPerformanceStatTypes_h__Script_RefractCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractPerformanceStatTypes_h__Script_RefractCommon_396957790{
	TEXT("/Script/RefractCommon"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractPerformanceStatTypes_h__Script_RefractCommon_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractPerformanceStatTypes_h__Script_RefractCommon_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
