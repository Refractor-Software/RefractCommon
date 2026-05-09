// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/RefractCommonAudioMixEffectsSubsystem.h"
#include "Types/RefractCommonAudioTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRefractCommonAudioMixEffectsSubsystem() {}

// ********** Begin Cross Module References ********************************************************
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBus_NoRegister();
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_NoRegister();
REFRACTCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAudioSubmixEffectChain();
UPackage* Z_Construct_UPackage__Script_RefractCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URefractCommonAudioMixEffectsSubsystem ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_URefractCommonAudioMixEffectsSubsystem;
UClass* URefractCommonAudioMixEffectsSubsystem::GetPrivateStaticClass()
{
	using TClass = URefractCommonAudioMixEffectsSubsystem;
	if (!Z_Registration_Info_UClass_URefractCommonAudioMixEffectsSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RefractCommonAudioMixEffectsSubsystem"),
			Z_Registration_Info_UClass_URefractCommonAudioMixEffectsSubsystem.InnerSingleton,
			StaticRegisterNativesURefractCommonAudioMixEffectsSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_URefractCommonAudioMixEffectsSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_NoRegister()
{
	return URefractCommonAudioMixEffectsSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Automatically engage default and user control bus mixes to retrieve previously saved user settings and apply them to the activated user mix.\n * Automatically apply HDR/LDR audio submix effect chain overrides based on the user's preference for HDR Audio.\n * Sound Effect Chain Overrides are defined in the Audio Settings.\n */" },
		{ "IncludePath", "Subsystems/RefractCommonAudioMixEffectsSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/RefractCommonAudioMixEffectsSubsystem.h" },
		{ "ToolTip", "Automatically engage default and user control bus mixes to retrieve previously saved user settings and apply them to the activated user mix.\nAutomatically apply HDR/LDR audio submix effect chain overrides based on the user's preference for HDR Audio.\nSound Effect Chain Overrides are defined in the Audio Settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBaseMix_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/RefractCommonAudioMixEffectsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenMix_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/RefractCommonAudioMixEffectsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserMix_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/RefractCommonAudioMixEffectsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallControlBus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/RefractCommonAudioMixEffectsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicControlBus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/RefractCommonAudioMixEffectsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundFXControlBus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/RefractCommonAudioMixEffectsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueControlBus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/RefractCommonAudioMixEffectsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChatControlBus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/RefractCommonAudioMixEffectsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HDRSubmixEffectChain_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/RefractCommonAudioMixEffectsSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LDRSubmixEffectChain_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/RefractCommonAudioMixEffectsSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URefractCommonAudioMixEffectsSubsystem constinit property declarations ***
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBaseMix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadingScreenMix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserMix;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverallControlBus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MusicControlBus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundFXControlBus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueControlBus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VoiceChatControlBus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HDRSubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HDRSubmixEffectChain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LDRSubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LDRSubmixEffectChain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URefractCommonAudioMixEffectsSubsystem constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URefractCommonAudioMixEffectsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics

// ********** Begin Class URefractCommonAudioMixEffectsSubsystem Property Definitions **************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_DefaultBaseMix = { "DefaultBaseMix", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioMixEffectsSubsystem, DefaultBaseMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBaseMix_MetaData), NewProp_DefaultBaseMix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_LoadingScreenMix = { "LoadingScreenMix", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioMixEffectsSubsystem, LoadingScreenMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingScreenMix_MetaData), NewProp_LoadingScreenMix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_UserMix = { "UserMix", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioMixEffectsSubsystem, UserMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserMix_MetaData), NewProp_UserMix_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_OverallControlBus = { "OverallControlBus", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioMixEffectsSubsystem, OverallControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallControlBus_MetaData), NewProp_OverallControlBus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_MusicControlBus = { "MusicControlBus", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioMixEffectsSubsystem, MusicControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicControlBus_MetaData), NewProp_MusicControlBus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_SoundFXControlBus = { "SoundFXControlBus", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioMixEffectsSubsystem, SoundFXControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundFXControlBus_MetaData), NewProp_SoundFXControlBus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_DialogueControlBus = { "DialogueControlBus", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioMixEffectsSubsystem, DialogueControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueControlBus_MetaData), NewProp_DialogueControlBus_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_VoiceChatControlBus = { "VoiceChatControlBus", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioMixEffectsSubsystem, VoiceChatControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceChatControlBus_MetaData), NewProp_VoiceChatControlBus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain_Inner = { "HDRSubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioSubmixEffectChain, METADATA_PARAMS(0, nullptr) }; // 2691402804
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain = { "HDRSubmixEffectChain", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioMixEffectsSubsystem, HDRSubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HDRSubmixEffectChain_MetaData), NewProp_HDRSubmixEffectChain_MetaData) }; // 2691402804
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain_Inner = { "LDRSubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioSubmixEffectChain, METADATA_PARAMS(0, nullptr) }; // 2691402804
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain = { "LDRSubmixEffectChain", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioMixEffectsSubsystem, LDRSubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LDRSubmixEffectChain_MetaData), NewProp_LDRSubmixEffectChain_MetaData) }; // 2691402804
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_DefaultBaseMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_LoadingScreenMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_UserMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_OverallControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_MusicControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_SoundFXControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_DialogueControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_VoiceChatControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_HDRSubmixEffectChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::NewProp_LDRSubmixEffectChain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::PropPointers) < 2048);
// ********** End Class URefractCommonAudioMixEffectsSubsystem Property Definitions ****************
UObject* (*const Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_RefractCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::ClassParams = {
	&URefractCommonAudioMixEffectsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::Class_MetaDataParams)
};
void URefractCommonAudioMixEffectsSubsystem::StaticRegisterNativesURefractCommonAudioMixEffectsSubsystem()
{
}
UClass* Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem()
{
	if (!Z_Registration_Info_UClass_URefractCommonAudioMixEffectsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URefractCommonAudioMixEffectsSubsystem.OuterSingleton, Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URefractCommonAudioMixEffectsSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URefractCommonAudioMixEffectsSubsystem);
URefractCommonAudioMixEffectsSubsystem::~URefractCommonAudioMixEffectsSubsystem() {}
// ********** End Class URefractCommonAudioMixEffectsSubsystem *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Subsystems_RefractCommonAudioMixEffectsSubsystem_h__Script_RefractCommon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URefractCommonAudioMixEffectsSubsystem, URefractCommonAudioMixEffectsSubsystem::StaticClass, TEXT("URefractCommonAudioMixEffectsSubsystem"), &Z_Registration_Info_UClass_URefractCommonAudioMixEffectsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URefractCommonAudioMixEffectsSubsystem), 4090326909U) },
	};
}; // Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Subsystems_RefractCommonAudioMixEffectsSubsystem_h__Script_RefractCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Subsystems_RefractCommonAudioMixEffectsSubsystem_h__Script_RefractCommon_1289875391{
	TEXT("/Script/RefractCommon"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Subsystems_RefractCommonAudioMixEffectsSubsystem_h__Script_RefractCommon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Subsystems_RefractCommonAudioMixEffectsSubsystem_h__Script_RefractCommon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
