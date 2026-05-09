// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/RefractCommonAudioTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRefractCommonAudioTypes() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
REFRACTCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAudioSubmixEffectChain();
REFRACTCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap();
UPackage* Z_Construct_UPackage__Script_RefractCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAudioSubmixEffectChain *******************************************
struct Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAudioSubmixEffectChain); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAudioSubmixEffectChain); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains a sound submix and the effect chain that should be applied to it.\n * This is the transient runtime structure that holds hard references, which load data into memory and prevent GC.\n */" },
		{ "ModuleRelativePath", "Public/Types/RefractCommonAudioTypes.h" },
		{ "ToolTip", "Contains a sound submix and the effect chain that should be applied to it.\nThis is the transient runtime structure that holds hard references, which load data into memory and prevent GC." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[] = {
		{ "Comment", "/** The submix on which to apply the effect chain. */" },
		{ "ModuleRelativePath", "Public/Types/RefractCommonAudioTypes.h" },
		{ "ToolTip", "The submix on which to apply the effect chain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectChain_MetaData[] = {
		{ "Comment", "/** Effect chain to apply to this submix. Effects are processed in the array index order. */" },
		{ "ModuleRelativePath", "Public/Types/RefractCommonAudioTypes.h" },
		{ "ToolTip", "Effect chain to apply to this submix. Effects are processed in the array index order." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAudioSubmixEffectChain constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Submix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectChain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAudioSubmixEffectChain constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioSubmixEffectChain>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChain;
class UScriptStruct* FAudioSubmixEffectChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioSubmixEffectChain, (UObject*)Z_Construct_UPackage__Script_RefractCommon(), TEXT("AudioSubmixEffectChain"));
	}
	return Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChain.OuterSingleton;
	}

// ********** Begin ScriptStruct FAudioSubmixEffectChain Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSubmixEffectChain, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Submix_MetaData), NewProp_Submix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::NewProp_SubmixEffectChain_Inner = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::NewProp_SubmixEffectChain = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSubmixEffectChain, SubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixEffectChain_MetaData), NewProp_SubmixEffectChain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::NewProp_Submix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::NewProp_SubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::NewProp_SubmixEffectChain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAudioSubmixEffectChain Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RefractCommon,
	nullptr,
	&NewStructOps,
	"AudioSubmixEffectChain",
	Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::PropPointers),
	sizeof(FAudioSubmixEffectChain),
	alignof(FAudioSubmixEffectChain),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioSubmixEffectChain()
{
	if (!Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChain.InnerSingleton, Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChain.InnerSingleton);
}
// ********** End ScriptStruct FAudioSubmixEffectChain *********************************************

// ********** Begin ScriptStruct FAudioSubmixEffectChainMap ****************************************
struct Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FAudioSubmixEffectChainMap); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAudioSubmixEffectChainMap); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The submix effect chain map used for configuration purposes.\n * This is the configuration mapping structure that holds soft references, which don't load data into memory by themselves.\n */" },
		{ "ModuleRelativePath", "Public/Types/RefractCommonAudioTypes.h" },
		{ "ToolTip", "The submix effect chain map used for configuration purposes.\nThis is the configuration mapping structure that holds soft references, which don't load data into memory by themselves." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** The submix on which to apply the effect chain. */" },
		{ "ModuleRelativePath", "Public/Types/RefractCommonAudioTypes.h" },
		{ "ToolTip", "The submix on which to apply the effect chain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectChain_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Effect chain to apply to this submix. Effects are processed in the array index order. */" },
		{ "ModuleRelativePath", "Public/Types/RefractCommonAudioTypes.h" },
		{ "ToolTip", "Effect chain to apply to this submix. Effects are processed in the array index order." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAudioSubmixEffectChainMap constinit property declarations ********
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Submix;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectChain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAudioSubmixEffectChainMap constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioSubmixEffectChainMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChainMap;
class UScriptStruct* FAudioSubmixEffectChainMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChainMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChainMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap, (UObject*)Z_Construct_UPackage__Script_RefractCommon(), TEXT("AudioSubmixEffectChainMap"));
	}
	return Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChainMap.OuterSingleton;
	}

// ********** Begin ScriptStruct FAudioSubmixEffectChainMap Property Definitions *******************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSubmixEffectChainMap, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Submix_MetaData), NewProp_Submix_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain_Inner = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSubmixEffectChainMap, SubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixEffectChain_MetaData), NewProp_SubmixEffectChain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::NewProp_Submix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FAudioSubmixEffectChainMap Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RefractCommon,
	nullptr,
	&NewStructOps,
	"AudioSubmixEffectChainMap",
	Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::PropPointers),
	sizeof(FAudioSubmixEffectChainMap),
	alignof(FAudioSubmixEffectChainMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap()
{
	if (!Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChainMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChainMap.InnerSingleton, Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChainMap.InnerSingleton);
}
// ********** End ScriptStruct FAudioSubmixEffectChainMap ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractCommonAudioTypes_h__Script_RefractCommon_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioSubmixEffectChain::StaticStruct, Z_Construct_UScriptStruct_FAudioSubmixEffectChain_Statics::NewStructOps, TEXT("AudioSubmixEffectChain"),&Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioSubmixEffectChain), 2691402804U) },
		{ FAudioSubmixEffectChainMap::StaticStruct, Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap_Statics::NewStructOps, TEXT("AudioSubmixEffectChainMap"),&Z_Registration_Info_UScriptStruct_FAudioSubmixEffectChainMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioSubmixEffectChainMap), 4088165809U) },
	};
}; // Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractCommonAudioTypes_h__Script_RefractCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractCommonAudioTypes_h__Script_RefractCommon_3254564723{
	TEXT("/Script/RefractCommon"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractCommonAudioTypes_h__Script_RefractCommon_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Types_RefractCommonAudioTypes_h__Script_RefractCommon_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
