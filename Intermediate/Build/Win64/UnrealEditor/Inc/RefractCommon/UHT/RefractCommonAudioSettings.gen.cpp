// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/RefractCommonAudioSettings.h"
#include "Types/RefractCommonAudioTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRefractCommonAudioSettings() {}

// ********** Begin Cross Module References ********************************************************
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBus_NoRegister();
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractCommonAudioSettings();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractCommonAudioSettings_NoRegister();
REFRACTCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap();
UPackage* Z_Construct_UPackage__Script_RefractCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URefractCommonAudioSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URefractCommonAudioSettings;
UClass* URefractCommonAudioSettings::GetPrivateStaticClass()
{
	using TClass = URefractCommonAudioSettings;
	if (!Z_Registration_Info_UClass_URefractCommonAudioSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RefractCommonAudioSettings"),
			Z_Registration_Info_UClass_URefractCommonAudioSettings.InnerSingleton,
			StaticRegisterNativesURefractCommonAudioSettings,
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
	return Z_Registration_Info_UClass_URefractCommonAudioSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_URefractCommonAudioSettings_NoRegister()
{
	return URefractCommonAudioSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URefractCommonAudioSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Common settings for the audio system.\n */" },
		{ "DisplayName", "Game Audio" },
		{ "IncludePath", "Settings/RefractCommonAudioSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/RefractCommonAudioSettings.h" },
		{ "ToolTip", "Common settings for the audio system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultControlBusMix_MetaData[] = {
		{ "Category", "Mix Settings" },
		{ "Comment", "/** The Default Base Control Bus Mix */" },
		{ "ModuleRelativePath", "Public/Settings/RefractCommonAudioSettings.h" },
		{ "ToolTip", "The Default Base Control Bus Mix" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenControlBusMix_MetaData[] = {
		{ "Category", "Mix Settings" },
		{ "Comment", "/** The Loading Screen Control Bus Mix - Called during loading screens to cover background audio events */" },
		{ "ModuleRelativePath", "Public/Settings/RefractCommonAudioSettings.h" },
		{ "ToolTip", "The Loading Screen Control Bus Mix - Called during loading screens to cover background audio events" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSettingsControlBusMix_MetaData[] = {
		{ "Category", "User Mix Settings" },
		{ "Comment", "/** The User-Customizable Control Bus Mix */" },
		{ "ModuleRelativePath", "Public/Settings/RefractCommonAudioSettings.h" },
		{ "ToolTip", "The User-Customizable Control Bus Mix" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallVolumeControlBus_MetaData[] = {
		{ "Category", "User Mix Settings" },
		{ "Comment", "/** Control Bus assigned to the Overall sound volume setting */" },
		{ "ModuleRelativePath", "Public/Settings/RefractCommonAudioSettings.h" },
		{ "ToolTip", "Control Bus assigned to the Overall sound volume setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolumeControlBus_MetaData[] = {
		{ "Category", "User Mix Settings" },
		{ "Comment", "/** Control Bus assigned to the Music sound volume setting */" },
		{ "ModuleRelativePath", "Public/Settings/RefractCommonAudioSettings.h" },
		{ "ToolTip", "Control Bus assigned to the Music sound volume setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundFXVolumeControlBus_MetaData[] = {
		{ "Category", "User Mix Settings" },
		{ "Comment", "/** Control Bus assigned to the SoundFX sound volume setting */" },
		{ "ModuleRelativePath", "Public/Settings/RefractCommonAudioSettings.h" },
		{ "ToolTip", "Control Bus assigned to the SoundFX sound volume setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueVolumeControlBus_MetaData[] = {
		{ "Category", "User Mix Settings" },
		{ "Comment", "/** Control Bus assigned to the Dialogue sound volume setting */" },
		{ "ModuleRelativePath", "Public/Settings/RefractCommonAudioSettings.h" },
		{ "ToolTip", "Control Bus assigned to the Dialogue sound volume setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChatVolumeControlBus_MetaData[] = {
		{ "Category", "User Mix Settings" },
		{ "Comment", "/** Control Bus assigned to the VoiceChat sound volume setting */" },
		{ "ModuleRelativePath", "Public/Settings/RefractCommonAudioSettings.h" },
		{ "ToolTip", "Control Bus assigned to the VoiceChat sound volume setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HDRAudioSubmixEffectChain_MetaData[] = {
		{ "Category", "Effect Settings" },
		{ "Comment", "/** Submix Processing Chains to achieve high dynamic range audio output */" },
		{ "ModuleRelativePath", "Public/Settings/RefractCommonAudioSettings.h" },
		{ "ToolTip", "Submix Processing Chains to achieve high dynamic range audio output" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LDRAudioSubmixEffectChain_MetaData[] = {
		{ "Category", "Effect Settings" },
		{ "Comment", "/** Submix Processing Chains to achieve low dynamic range audio output */" },
		{ "ModuleRelativePath", "Public/Settings/RefractCommonAudioSettings.h" },
		{ "ToolTip", "Submix Processing Chains to achieve low dynamic range audio output" },
	};
#endif // WITH_METADATA

// ********** Begin Class URefractCommonAudioSettings constinit property declarations **************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultControlBusMix;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LoadingScreenControlBusMix;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UserSettingsControlBusMix;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverallVolumeControlBus;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MusicVolumeControlBus;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoundFXVolumeControlBus;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DialogueVolumeControlBus;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_VoiceChatVolumeControlBus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HDRAudioSubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HDRAudioSubmixEffectChain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LDRAudioSubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LDRAudioSubmixEffectChain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URefractCommonAudioSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URefractCommonAudioSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URefractCommonAudioSettings_Statics

// ********** Begin Class URefractCommonAudioSettings Property Definitions *************************
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_DefaultControlBusMix = { "DefaultControlBusMix", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioSettings, DefaultControlBusMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultControlBusMix_MetaData), NewProp_DefaultControlBusMix_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_LoadingScreenControlBusMix = { "LoadingScreenControlBusMix", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioSettings, LoadingScreenControlBusMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingScreenControlBusMix_MetaData), NewProp_LoadingScreenControlBusMix_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_UserSettingsControlBusMix = { "UserSettingsControlBusMix", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioSettings, UserSettingsControlBusMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSettingsControlBusMix_MetaData), NewProp_UserSettingsControlBusMix_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_OverallVolumeControlBus = { "OverallVolumeControlBus", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioSettings, OverallVolumeControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallVolumeControlBus_MetaData), NewProp_OverallVolumeControlBus_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_MusicVolumeControlBus = { "MusicVolumeControlBus", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioSettings, MusicVolumeControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicVolumeControlBus_MetaData), NewProp_MusicVolumeControlBus_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_SoundFXVolumeControlBus = { "SoundFXVolumeControlBus", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioSettings, SoundFXVolumeControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundFXVolumeControlBus_MetaData), NewProp_SoundFXVolumeControlBus_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_DialogueVolumeControlBus = { "DialogueVolumeControlBus", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioSettings, DialogueVolumeControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueVolumeControlBus_MetaData), NewProp_DialogueVolumeControlBus_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_VoiceChatVolumeControlBus = { "VoiceChatVolumeControlBus", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioSettings, VoiceChatVolumeControlBus), Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceChatVolumeControlBus_MetaData), NewProp_VoiceChatVolumeControlBus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain_Inner = { "HDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap, METADATA_PARAMS(0, nullptr) }; // 4088165809
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain = { "HDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioSettings, HDRAudioSubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HDRAudioSubmixEffectChain_MetaData), NewProp_HDRAudioSubmixEffectChain_MetaData) }; // 4088165809
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain_Inner = { "LDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAudioSubmixEffectChainMap, METADATA_PARAMS(0, nullptr) }; // 4088165809
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain = { "LDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonAudioSettings, LDRAudioSubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LDRAudioSubmixEffectChain_MetaData), NewProp_LDRAudioSubmixEffectChain_MetaData) }; // 4088165809
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URefractCommonAudioSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_DefaultControlBusMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_LoadingScreenControlBusMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_UserSettingsControlBusMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_OverallVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_MusicVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_SoundFXVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_DialogueVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_VoiceChatVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonAudioSettings_Statics::PropPointers) < 2048);
// ********** End Class URefractCommonAudioSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_URefractCommonAudioSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_RefractCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonAudioSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URefractCommonAudioSettings_Statics::ClassParams = {
	&URefractCommonAudioSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URefractCommonAudioSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonAudioSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonAudioSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URefractCommonAudioSettings_Statics::Class_MetaDataParams)
};
void URefractCommonAudioSettings::StaticRegisterNativesURefractCommonAudioSettings()
{
}
UClass* Z_Construct_UClass_URefractCommonAudioSettings()
{
	if (!Z_Registration_Info_UClass_URefractCommonAudioSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URefractCommonAudioSettings.OuterSingleton, Z_Construct_UClass_URefractCommonAudioSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URefractCommonAudioSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URefractCommonAudioSettings);
URefractCommonAudioSettings::~URefractCommonAudioSettings() {}
// ********** End Class URefractCommonAudioSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractCommonAudioSettings_h__Script_RefractCommon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URefractCommonAudioSettings, URefractCommonAudioSettings::StaticClass, TEXT("URefractCommonAudioSettings"), &Z_Registration_Info_UClass_URefractCommonAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URefractCommonAudioSettings), 168885043U) },
	};
}; // Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractCommonAudioSettings_h__Script_RefractCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractCommonAudioSettings_h__Script_RefractCommon_3340608665{
	TEXT("/Script/RefractCommon"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractCommonAudioSettings_h__Script_RefractCommon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractCommonAudioSettings_h__Script_RefractCommon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
