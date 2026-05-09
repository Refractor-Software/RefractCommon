// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/RefractPlatformSettings.h"
#include "Engine/PlatformSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRefractPlatformSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettings();
DEVELOPERSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformSettings();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractPerformanceSettings();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractPerformanceSettings_NoRegister();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractPlatformSettings();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractPlatformSettings_NoRegister();
REFRACTCOMMON_API UEnum* Z_Construct_UEnum_RefractCommon_EFramePacingMode();
REFRACTCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FQualityDeviceProfileVariant();
UPackage* Z_Construct_UPackage__Script_RefractCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FQualityDeviceProfileVariant **************************************
struct Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FQualityDeviceProfileVariant); }
	static inline consteval int16 GetStructAlignment() { return alignof(FQualityDeviceProfileVariant); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes a single platform-specific device profile variant that the user can select in the UI.\n */" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
		{ "ToolTip", "Describes a single platform-specific device profile variant that the user can select in the UI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// The user-facing display name for this device profile. This is what will be shown in the in-game settings menu.\n" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
		{ "ToolTip", "The user-facing display name for this device profile. This is what will be shown in the in-game settings menu." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceProfileSuffix_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "// The suffix to append to the base device profile name for the current platform.\n" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
		{ "ToolTip", "The suffix to append to the base device profile name for the current platform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHardwareRefreshRate_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/**\n\x09 * The minimum refresh rate that must be supported by the connected display to enable this mode.\n\x09 *\n\x09 * Example: If this is set to 120hz, and the device is connected to a 60hz display, this profile will not be available.\n\x09 */" },
		{ "ForceUnits", "Hz" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
		{ "ToolTip", "The minimum refresh rate that must be supported by the connected display to enable this mode.\n\nExample: If this is set to 120hz, and the device is connected to a 60hz display, this profile will not be available." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FQualityDeviceProfileVariant constinit property declarations ******
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceProfileSuffix;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinHardwareRefreshRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FQualityDeviceProfileVariant constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQualityDeviceProfileVariant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQualityDeviceProfileVariant;
class UScriptStruct* FQualityDeviceProfileVariant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQualityDeviceProfileVariant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQualityDeviceProfileVariant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQualityDeviceProfileVariant, (UObject*)Z_Construct_UPackage__Script_RefractCommon(), TEXT("QualityDeviceProfileVariant"));
	}
	return Z_Registration_Info_UScriptStruct_FQualityDeviceProfileVariant.OuterSingleton;
	}

// ********** Begin ScriptStruct FQualityDeviceProfileVariant Property Definitions *****************
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQualityDeviceProfileVariant, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::NewProp_DeviceProfileSuffix = { "DeviceProfileSuffix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQualityDeviceProfileVariant, DeviceProfileSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceProfileSuffix_MetaData), NewProp_DeviceProfileSuffix_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::NewProp_MinHardwareRefreshRate = { "MinHardwareRefreshRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQualityDeviceProfileVariant, MinHardwareRefreshRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHardwareRefreshRate_MetaData), NewProp_MinHardwareRefreshRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::NewProp_DeviceProfileSuffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::NewProp_MinHardwareRefreshRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FQualityDeviceProfileVariant Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RefractCommon,
	nullptr,
	&NewStructOps,
	"QualityDeviceProfileVariant",
	Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::PropPointers),
	sizeof(FQualityDeviceProfileVariant),
	alignof(FQualityDeviceProfileVariant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQualityDeviceProfileVariant()
{
	if (!Z_Registration_Info_UScriptStruct_FQualityDeviceProfileVariant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQualityDeviceProfileVariant.InnerSingleton, Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FQualityDeviceProfileVariant.InnerSingleton);
}
// ********** End ScriptStruct FQualityDeviceProfileVariant ****************************************

// ********** Begin Enum EFramePacingMode **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFramePacingMode;
static UEnum* EFramePacingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFramePacingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFramePacingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RefractCommon_EFramePacingMode, (UObject*)Z_Construct_UPackage__Script_RefractCommon(), TEXT("EFramePacingMode"));
	}
	return Z_Registration_Info_UEnum_EFramePacingMode.OuterSingleton;
}
template<> REFRACTCOMMON_NON_ATTRIBUTED_API UEnum* StaticEnum<EFramePacingMode>()
{
	return EFramePacingMode_StaticEnum();
}
struct Z_Construct_UEnum_RefractCommon_EFramePacingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Console.Comment", "// Device profiles set the frame rate limit.\n" },
		{ "Console.Name", "EFramePacingMode::Console" },
		{ "Console.ToolTip", "Device profiles set the frame rate limit." },
		{ "Desktop.Comment", "// User preferences set the frame rate limit, including whether to lock to vsync.\n" },
		{ "Desktop.Name", "EFramePacingMode::Desktop" },
		{ "Desktop.ToolTip", "User preferences set the frame rate limit, including whether to lock to vsync." },
		{ "Mobile.Comment", "// Device profiles provide a user-facing choice of frame rate limits.\n" },
		{ "Mobile.Name", "EFramePacingMode::Mobile" },
		{ "Mobile.ToolTip", "Device profiles provide a user-facing choice of frame rate limits." },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFramePacingMode::Desktop", (int64)EFramePacingMode::Desktop },
		{ "EFramePacingMode::Console", (int64)EFramePacingMode::Console },
		{ "EFramePacingMode::Mobile", (int64)EFramePacingMode::Mobile },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_RefractCommon_EFramePacingMode_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RefractCommon_EFramePacingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RefractCommon,
	nullptr,
	"EFramePacingMode",
	"EFramePacingMode",
	Z_Construct_UEnum_RefractCommon_EFramePacingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RefractCommon_EFramePacingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RefractCommon_EFramePacingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RefractCommon_EFramePacingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RefractCommon_EFramePacingMode()
{
	if (!Z_Registration_Info_UEnum_EFramePacingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFramePacingMode.InnerSingleton, Z_Construct_UEnum_RefractCommon_EFramePacingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFramePacingMode.InnerSingleton;
}
// ********** End Enum EFramePacingMode ************************************************************

// ********** Begin Class URefractPlatformSettings *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URefractPlatformSettings;
UClass* URefractPlatformSettings::GetPrivateStaticClass()
{
	using TClass = URefractPlatformSettings;
	if (!Z_Registration_Info_UClass_URefractPlatformSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RefractPlatformSettings"),
			Z_Registration_Info_UClass_URefractPlatformSettings.InnerSingleton,
			StaticRegisterNativesURefractPlatformSettings,
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
	return Z_Registration_Info_UClass_URefractPlatformSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_URefractPlatformSettings_NoRegister()
{
	return URefractPlatformSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URefractPlatformSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Platform-specific settings.\n */" },
		{ "IncludePath", "Settings/RefractPlatformSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
		{ "ToolTip", "Platform-specific settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDeviceProfileSuffix_MetaData[] = {
		{ "Category", "DeviceProfiles" },
		{ "Comment", "// The default variant suffix to append, should typically be a member of\n// UserFacingDeviceProfileOptions unless there is only one for the current platform\n//\n// Note that this will usually be set from platform-specific ini files, not via the UI\n" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
		{ "ToolTip", "The default variant suffix to append, should typically be a member of\nUserFacingDeviceProfileOptions unless there is only one for the current platform\n\nNote that this will usually be set from platform-specific ini files, not via the UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserFacingDeviceProfileOptions_MetaData[] = {
		{ "Category", "DeviceProfiles" },
		{ "Comment", "// The list of device profile variations to allow users to choose from in settings\n//\n// These should be sorted from slowest to fastest by target frame rate:\n//   If the current display doesn't support a user chosen refresh rate, we'll try\n//   previous entries until we find one that works\n//\n// Note that this will usually be set from platform-specific ini files, not via the UI\n" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
		{ "ToolTip", "The list of device profile variations to allow users to choose from in settings\n\nThese should be sorted from slowest to fastest by target frame rate:\n  If the current display doesn't support a user chosen refresh rate, we'll try\n  previous entries until we find one that works\n\nNote that this will usually be set from platform-specific ini files, not via the UI" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsGranularVideoQualitySettings_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "Comment", "// Does the platform support granular video quality settings?\n" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
		{ "ToolTip", "Does the platform support granular video quality settings?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAutomaticVideoQualityBenchmark_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "Comment", "// Does the platform support running the automatic quality benchmark (typically this should only be true if bSupportsGranularVideoQualitySettings is also true)\n" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
		{ "ToolTip", "Does the platform support running the automatic quality benchmark (typically this should only be true if bSupportsGranularVideoQualitySettings is also true)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramePacingMode_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "Comment", "// How is frame pacing controlled\n" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
		{ "ToolTip", "How is frame pacing controlled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileFrameRateLimits_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "Comment", "// Potential frame rates to display for mobile\n// Note: This is further limited by Lyra.DeviceProfile.Mobile.MaxFrameRate from the\n// platform-specific device profile and what the platform frame pacer reports as supported\n" },
		{ "EditCondition", "FramePacingMode==EFramePacingMode::Mobile" },
		{ "ForceUnits", "Hz" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
		{ "ToolTip", "Potential frame rates to display for mobile\nNote: This is further limited by Lyra.DeviceProfile.Mobile.MaxFrameRate from the\nplatform-specific device profile and what the platform frame pacer reports as supported" },
	};
#endif // WITH_METADATA

// ********** Begin Class URefractPlatformSettings constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultDeviceProfileSuffix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserFacingDeviceProfileOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UserFacingDeviceProfileOptions;
	static void NewProp_bSupportsGranularVideoQualitySettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsGranularVideoQualitySettings;
	static void NewProp_bSupportsAutomaticVideoQualityBenchmark_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAutomaticVideoQualityBenchmark;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FramePacingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FramePacingMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MobileFrameRateLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileFrameRateLimits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URefractPlatformSettings constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URefractPlatformSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URefractPlatformSettings_Statics

// ********** Begin Class URefractPlatformSettings Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_DefaultDeviceProfileSuffix = { "DefaultDeviceProfileSuffix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractPlatformSettings, DefaultDeviceProfileSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDeviceProfileSuffix_MetaData), NewProp_DefaultDeviceProfileSuffix_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_UserFacingDeviceProfileOptions_Inner = { "UserFacingDeviceProfileOptions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQualityDeviceProfileVariant, METADATA_PARAMS(0, nullptr) }; // 411405533
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_UserFacingDeviceProfileOptions = { "UserFacingDeviceProfileOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractPlatformSettings, UserFacingDeviceProfileOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserFacingDeviceProfileOptions_MetaData), NewProp_UserFacingDeviceProfileOptions_MetaData) }; // 411405533
void Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_bSupportsGranularVideoQualitySettings_SetBit(void* Obj)
{
	((URefractPlatformSettings*)Obj)->bSupportsGranularVideoQualitySettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_bSupportsGranularVideoQualitySettings = { "bSupportsGranularVideoQualitySettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URefractPlatformSettings), &Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_bSupportsGranularVideoQualitySettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsGranularVideoQualitySettings_MetaData), NewProp_bSupportsGranularVideoQualitySettings_MetaData) };
void Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_bSupportsAutomaticVideoQualityBenchmark_SetBit(void* Obj)
{
	((URefractPlatformSettings*)Obj)->bSupportsAutomaticVideoQualityBenchmark = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_bSupportsAutomaticVideoQualityBenchmark = { "bSupportsAutomaticVideoQualityBenchmark", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URefractPlatformSettings), &Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_bSupportsAutomaticVideoQualityBenchmark_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsAutomaticVideoQualityBenchmark_MetaData), NewProp_bSupportsAutomaticVideoQualityBenchmark_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_FramePacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_FramePacingMode = { "FramePacingMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractPlatformSettings, FramePacingMode), Z_Construct_UEnum_RefractCommon_EFramePacingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramePacingMode_MetaData), NewProp_FramePacingMode_MetaData) }; // 2871852471
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_MobileFrameRateLimits_Inner = { "MobileFrameRateLimits", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_MobileFrameRateLimits = { "MobileFrameRateLimits", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractPlatformSettings, MobileFrameRateLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileFrameRateLimits_MetaData), NewProp_MobileFrameRateLimits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URefractPlatformSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_DefaultDeviceProfileSuffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_UserFacingDeviceProfileOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_UserFacingDeviceProfileOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_bSupportsGranularVideoQualitySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_bSupportsAutomaticVideoQualityBenchmark,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_FramePacingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_FramePacingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_MobileFrameRateLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformSettings_Statics::NewProp_MobileFrameRateLimits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefractPlatformSettings_Statics::PropPointers) < 2048);
// ********** End Class URefractPlatformSettings Property Definitions ******************************
UObject* (*const Z_Construct_UClass_URefractPlatformSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPlatformSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_RefractCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefractPlatformSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URefractPlatformSettings_Statics::ClassParams = {
	&URefractPlatformSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URefractPlatformSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URefractPlatformSettings_Statics::PropPointers),
	0,
	0x000804A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URefractPlatformSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URefractPlatformSettings_Statics::Class_MetaDataParams)
};
void URefractPlatformSettings::StaticRegisterNativesURefractPlatformSettings()
{
}
UClass* Z_Construct_UClass_URefractPlatformSettings()
{
	if (!Z_Registration_Info_UClass_URefractPlatformSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URefractPlatformSettings.OuterSingleton, Z_Construct_UClass_URefractPlatformSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URefractPlatformSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URefractPlatformSettings);
URefractPlatformSettings::~URefractPlatformSettings() {}
// ********** End Class URefractPlatformSettings ***************************************************

// ********** Begin Class URefractPerformanceSettings **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URefractPerformanceSettings;
UClass* URefractPerformanceSettings::GetPrivateStaticClass()
{
	using TClass = URefractPerformanceSettings;
	if (!Z_Registration_Info_UClass_URefractPerformanceSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RefractPerformanceSettings"),
			Z_Registration_Info_UClass_URefractPerformanceSettings.InnerSingleton,
			StaticRegisterNativesURefractPerformanceSettings,
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
	return Z_Registration_Info_UClass_URefractPerformanceSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_URefractPerformanceSettings_NoRegister()
{
	return URefractPerformanceSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URefractPerformanceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Game Performance" },
		{ "IncludePath", "Settings/RefractPlatformSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerPlatformSettings_MetaData[] = {
		{ "Category", "PlatformSpecific" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesktopFrameRateLimits_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** The list of frame rates to allow users to select from on desktop platforms. */" },
		{ "ForceUnits", "Hz" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformSettings.h" },
		{ "ToolTip", "The list of frame rates to allow users to select from on desktop platforms." },
	};
#endif // WITH_METADATA

// ********** Begin Class URefractPerformanceSettings constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerPlatformSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesktopFrameRateLimits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DesktopFrameRateLimits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URefractPerformanceSettings constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URefractPerformanceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URefractPerformanceSettings_Statics

// ********** Begin Class URefractPerformanceSettings Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URefractPerformanceSettings_Statics::NewProp_PerPlatformSettings = { "PerPlatformSettings", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractPerformanceSettings, PerPlatformSettings), Z_Construct_UScriptStruct_FPerPlatformSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerPlatformSettings_MetaData), NewProp_PerPlatformSettings_MetaData) }; // 391609619
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URefractPerformanceSettings_Statics::NewProp_DesktopFrameRateLimits_Inner = { "DesktopFrameRateLimits", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URefractPerformanceSettings_Statics::NewProp_DesktopFrameRateLimits = { "DesktopFrameRateLimits", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractPerformanceSettings, DesktopFrameRateLimits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesktopFrameRateLimits_MetaData), NewProp_DesktopFrameRateLimits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URefractPerformanceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPerformanceSettings_Statics::NewProp_PerPlatformSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPerformanceSettings_Statics::NewProp_DesktopFrameRateLimits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPerformanceSettings_Statics::NewProp_DesktopFrameRateLimits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefractPerformanceSettings_Statics::PropPointers) < 2048);
// ********** End Class URefractPerformanceSettings Property Definitions ***************************
UObject* (*const Z_Construct_UClass_URefractPerformanceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
	(UObject* (*)())Z_Construct_UPackage__Script_RefractCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefractPerformanceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URefractPerformanceSettings_Statics::ClassParams = {
	&URefractPerformanceSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URefractPerformanceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URefractPerformanceSettings_Statics::PropPointers),
	0,
	0x008800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URefractPerformanceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URefractPerformanceSettings_Statics::Class_MetaDataParams)
};
void URefractPerformanceSettings::StaticRegisterNativesURefractPerformanceSettings()
{
}
UClass* Z_Construct_UClass_URefractPerformanceSettings()
{
	if (!Z_Registration_Info_UClass_URefractPerformanceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URefractPerformanceSettings.OuterSingleton, Z_Construct_UClass_URefractPerformanceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URefractPerformanceSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URefractPerformanceSettings);
URefractPerformanceSettings::~URefractPerformanceSettings() {}
// ********** End Class URefractPerformanceSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformSettings_h__Script_RefractCommon_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFramePacingMode_StaticEnum, TEXT("EFramePacingMode"), &Z_Registration_Info_UEnum_EFramePacingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2871852471U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQualityDeviceProfileVariant::StaticStruct, Z_Construct_UScriptStruct_FQualityDeviceProfileVariant_Statics::NewStructOps, TEXT("QualityDeviceProfileVariant"),&Z_Registration_Info_UScriptStruct_FQualityDeviceProfileVariant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQualityDeviceProfileVariant), 411405533U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URefractPlatformSettings, URefractPlatformSettings::StaticClass, TEXT("URefractPlatformSettings"), &Z_Registration_Info_UClass_URefractPlatformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URefractPlatformSettings), 1070182820U) },
		{ Z_Construct_UClass_URefractPerformanceSettings, URefractPerformanceSettings::StaticClass, TEXT("URefractPerformanceSettings"), &Z_Registration_Info_UClass_URefractPerformanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URefractPerformanceSettings), 2856754282U) },
	};
}; // Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformSettings_h__Script_RefractCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformSettings_h__Script_RefractCommon_1138696040{
	TEXT("/Script/RefractCommon"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformSettings_h__Script_RefractCommon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformSettings_h__Script_RefractCommon_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformSettings_h__Script_RefractCommon_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformSettings_h__Script_RefractCommon_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformSettings_h__Script_RefractCommon_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformSettings_h__Script_RefractCommon_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
