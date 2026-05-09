// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/RefractCommonScalabilityTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRefractCommonScalabilityTypes() {}

// ********** Begin Cross Module References ********************************************************
REFRACTCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FScalabilitySnapshot();
UPackage* Z_Construct_UPackage__Script_RefractCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FScalabilitySnapshot **********************************************
struct Z_Construct_UScriptStruct_FScalabilitySnapshot_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FScalabilitySnapshot); }
	static inline consteval int16 GetStructAlignment() { return alignof(FScalabilitySnapshot); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A snapshot of scalability quality levels, optionally with per-channel override flags.\n * Used to capture device profile defaults and apply or clamp them against live settings.\n */" },
		{ "ModuleRelativePath", "Public/Types/RefractCommonScalabilityTypes.h" },
		{ "ToolTip", "A snapshot of scalability quality levels, optionally with per-channel override flags.\nUsed to capture device profile defaults and apply or clamp them against live settings." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FScalabilitySnapshot constinit property declarations **************
// ********** End ScriptStruct FScalabilitySnapshot constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalabilitySnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FScalabilitySnapshot_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FScalabilitySnapshot;
class UScriptStruct* FScalabilitySnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FScalabilitySnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FScalabilitySnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalabilitySnapshot, (UObject*)Z_Construct_UPackage__Script_RefractCommon(), TEXT("ScalabilitySnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_FScalabilitySnapshot.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalabilitySnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RefractCommon,
	nullptr,
	&NewStructOps,
	"ScalabilitySnapshot",
	nullptr,
	0,
	sizeof(FScalabilitySnapshot),
	alignof(FScalabilitySnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalabilitySnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScalabilitySnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScalabilitySnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_FScalabilitySnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FScalabilitySnapshot.InnerSingleton, Z_Construct_UScriptStruct_FScalabilitySnapshot_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FScalabilitySnapshot.InnerSingleton);
}
// ********** End ScriptStruct FScalabilitySnapshot ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractCommonScalabilityTypes_h__Script_RefractCommon_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FScalabilitySnapshot::StaticStruct, Z_Construct_UScriptStruct_FScalabilitySnapshot_Statics::NewStructOps, TEXT("ScalabilitySnapshot"),&Z_Registration_Info_UScriptStruct_FScalabilitySnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScalabilitySnapshot), 711321289U) },
	};
}; // Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractCommonScalabilityTypes_h__Script_RefractCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractCommonScalabilityTypes_h__Script_RefractCommon_3112309480{
	TEXT("/Script/RefractCommon"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractCommonScalabilityTypes_h__Script_RefractCommon_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractCommonScalabilityTypes_h__Script_RefractCommon_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
