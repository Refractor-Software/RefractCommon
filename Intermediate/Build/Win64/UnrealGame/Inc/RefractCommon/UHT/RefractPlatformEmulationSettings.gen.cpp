// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/RefractPlatformEmulationSettings.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRefractPlatformEmulationSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractPlatformEmulationSettings();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractPlatformEmulationSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_RefractCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URefractPlatformEmulationSettings Function GetKnownDeviceProfiles ********
struct Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics
{
	struct RefractPlatformEmulationSettings_eventGetKnownDeviceProfiles_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformEmulationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetKnownDeviceProfiles constinit property declarations ****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetKnownDeviceProfiles constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetKnownDeviceProfiles Property Definitions ***************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractPlatformEmulationSettings_eventGetKnownDeviceProfiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::PropPointers) < 2048);
// ********** End Function GetKnownDeviceProfiles Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractPlatformEmulationSettings, nullptr, "GetKnownDeviceProfiles", 	Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::RefractPlatformEmulationSettings_eventGetKnownDeviceProfiles_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::RefractPlatformEmulationSettings_eventGetKnownDeviceProfiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractPlatformEmulationSettings::execGetKnownDeviceProfiles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetKnownDeviceProfiles();
	P_NATIVE_END;
}
// ********** End Class URefractPlatformEmulationSettings Function GetKnownDeviceProfiles **********

// ********** Begin Class URefractPlatformEmulationSettings Function GetKnownPlatformIds ***********
struct Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics
{
	struct RefractPlatformEmulationSettings_eventGetKnownPlatformIds_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformEmulationSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetKnownPlatformIds constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetKnownPlatformIds constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetKnownPlatformIds Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractPlatformEmulationSettings_eventGetKnownPlatformIds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics::PropPointers) < 2048);
// ********** End Function GetKnownPlatformIds Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractPlatformEmulationSettings, nullptr, "GetKnownPlatformIds", 	Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics::RefractPlatformEmulationSettings_eventGetKnownPlatformIds_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics::RefractPlatformEmulationSettings_eventGetKnownPlatformIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractPlatformEmulationSettings::execGetKnownPlatformIds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetKnownPlatformIds();
	P_NATIVE_END;
}
// ********** End Class URefractPlatformEmulationSettings Function GetKnownPlatformIds *************

// ********** Begin Class URefractPlatformEmulationSettings ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URefractPlatformEmulationSettings;
UClass* URefractPlatformEmulationSettings::GetPrivateStaticClass()
{
	using TClass = URefractPlatformEmulationSettings;
	if (!Z_Registration_Info_UClass_URefractPlatformEmulationSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RefractPlatformEmulationSettings"),
			Z_Registration_Info_UClass_URefractPlatformEmulationSettings.InnerSingleton,
			StaticRegisterNativesURefractPlatformEmulationSettings,
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
	return Z_Registration_Info_UClass_URefractPlatformEmulationSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_URefractPlatformEmulationSettings_NoRegister()
{
	return URefractPlatformEmulationSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URefractPlatformEmulationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings relevant to in-editor platform emulation.\n */" },
		{ "DisplayName", "Platform Emulation Settings (Editor)" },
		{ "IncludePath", "Settings/RefractPlatformEmulationSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformEmulationSettings.h" },
		{ "ToolTip", "Settings relevant to in-editor platform emulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPlatformTraitsToEnable_MetaData[] = {
		{ "Categories", "Input, Platform.Trait" },
		{ "Category", "Platform Emulation" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformEmulationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPlatformTraitsToSuppress_MetaData[] = {
		{ "Categories", "Input, Platform.Trait" },
		{ "Category", "Platform Emulation" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformEmulationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PretendPlatform_MetaData[] = {
		{ "Category", "Platform Emulation" },
		{ "GetOptions", "GetKnownPlatformIds" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformEmulationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PretendBaseDeviceProfile_MetaData[] = {
		{ "Category", "Platform Emulation" },
		{ "Comment", "// The base device profile to pretend we are using when emulating device-specific device profiles applied from ULyraSettingsLocal\n" },
		{ "EditCondition", "bApplyDeviceProfilesInPIE" },
		{ "GetOptions", "GetKnownDeviceProfiles" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformEmulationSettings.h" },
		{ "ToolTip", "The base device profile to pretend we are using when emulating device-specific device profiles applied from ULyraSettingsLocal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyFrameRateSettingsInPIE_MetaData[] = {
		{ "Category", "Platform Emulation" },
		{ "Comment", "// Do we apply desktop-style frame rate settings in PIE?\n// (frame rate limits are an engine-wide setting so it's not always desirable to have enabled in the editor)\n// You may also want to disable the editor preference \"Use Less CPU when in Background\" if testing background frame rate limits\n" },
		{ "ConsoleVariable", "Lyra.Settings.ApplyFrameRateSettingsInPIE" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformEmulationSettings.h" },
		{ "ToolTip", "Do we apply desktop-style frame rate settings in PIE?\n(frame rate limits are an engine-wide setting so it's not always desirable to have enabled in the editor)\nYou may also want to disable the editor preference \"Use Less CPU when in Background\" if testing background frame rate limits" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyFrontEndPerformanceOptionsInPIE_MetaData[] = {
		{ "Category", "Platform Emulation" },
		{ "Comment", "// Do we apply front-end specific performance options in PIE?\n// Most engine performance/scalability settings they drive are global, so if one PIE window\n// is in the front-end and the other is in-game one will win and the other gets stuck with those settings\n" },
		{ "ConsoleVariable", "Lyra.Settings.ApplyFrontEndPerformanceOptionsInPIE" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformEmulationSettings.h" },
		{ "ToolTip", "Do we apply front-end specific performance options in PIE?\nMost engine performance/scalability settings they drive are global, so if one PIE window\nis in the front-end and the other is in-game one will win and the other gets stuck with those settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDeviceProfilesInPIE_MetaData[] = {
		{ "Category", "Platform Emulation" },
		{ "Comment", "// Should we apply experience/platform emulated device profiles in PIE?\n" },
		{ "ConsoleVariable", "Lyra.Settings.ApplyDeviceProfilesInPIE" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Settings/RefractPlatformEmulationSettings.h" },
		{ "ToolTip", "Should we apply experience/platform emulated device profiles in PIE?" },
	};
#endif // WITH_METADATA

// ********** Begin Class URefractPlatformEmulationSettings constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalPlatformTraitsToEnable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalPlatformTraitsToSuppress;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PretendPlatform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PretendBaseDeviceProfile;
	static void NewProp_bApplyFrameRateSettingsInPIE_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyFrameRateSettingsInPIE;
	static void NewProp_bApplyFrontEndPerformanceOptionsInPIE_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyFrontEndPerformanceOptionsInPIE;
	static void NewProp_bApplyDeviceProfilesInPIE_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDeviceProfilesInPIE;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URefractPlatformEmulationSettings constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetKnownDeviceProfiles"), .Pointer = &URefractPlatformEmulationSettings::execGetKnownDeviceProfiles },
		{ .NameUTF8 = UTF8TEXT("GetKnownPlatformIds"), .Pointer = &URefractPlatformEmulationSettings::execGetKnownPlatformIds },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownDeviceProfiles, "GetKnownDeviceProfiles" }, // 987739969
		{ &Z_Construct_UFunction_URefractPlatformEmulationSettings_GetKnownPlatformIds, "GetKnownPlatformIds" }, // 1521146198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URefractPlatformEmulationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URefractPlatformEmulationSettings_Statics

// ********** Begin Class URefractPlatformEmulationSettings Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToEnable = { "AdditionalPlatformTraitsToEnable", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractPlatformEmulationSettings, AdditionalPlatformTraitsToEnable), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalPlatformTraitsToEnable_MetaData), NewProp_AdditionalPlatformTraitsToEnable_MetaData) }; // 3438578166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToSuppress = { "AdditionalPlatformTraitsToSuppress", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractPlatformEmulationSettings, AdditionalPlatformTraitsToSuppress), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalPlatformTraitsToSuppress_MetaData), NewProp_AdditionalPlatformTraitsToSuppress_MetaData) }; // 3438578166
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_PretendPlatform = { "PretendPlatform", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractPlatformEmulationSettings, PretendPlatform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PretendPlatform_MetaData), NewProp_PretendPlatform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_PretendBaseDeviceProfile = { "PretendBaseDeviceProfile", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractPlatformEmulationSettings, PretendBaseDeviceProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PretendBaseDeviceProfile_MetaData), NewProp_PretendBaseDeviceProfile_MetaData) };
void Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE_SetBit(void* Obj)
{
	((URefractPlatformEmulationSettings*)Obj)->bApplyFrameRateSettingsInPIE = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE = { "bApplyFrameRateSettingsInPIE", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URefractPlatformEmulationSettings), &Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyFrameRateSettingsInPIE_MetaData), NewProp_bApplyFrameRateSettingsInPIE_MetaData) };
void Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE_SetBit(void* Obj)
{
	((URefractPlatformEmulationSettings*)Obj)->bApplyFrontEndPerformanceOptionsInPIE = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE = { "bApplyFrontEndPerformanceOptionsInPIE", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URefractPlatformEmulationSettings), &Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyFrontEndPerformanceOptionsInPIE_MetaData), NewProp_bApplyFrontEndPerformanceOptionsInPIE_MetaData) };
void Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE_SetBit(void* Obj)
{
	((URefractPlatformEmulationSettings*)Obj)->bApplyDeviceProfilesInPIE = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE = { "bApplyDeviceProfilesInPIE", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URefractPlatformEmulationSettings), &Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyDeviceProfilesInPIE_MetaData), NewProp_bApplyDeviceProfilesInPIE_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_AdditionalPlatformTraitsToSuppress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_PretendPlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_PretendBaseDeviceProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_bApplyFrameRateSettingsInPIE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_bApplyFrontEndPerformanceOptionsInPIE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::NewProp_bApplyDeviceProfilesInPIE,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::PropPointers) < 2048);
// ********** End Class URefractPlatformEmulationSettings Property Definitions *********************
UObject* (*const Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
	(UObject* (*)())Z_Construct_UPackage__Script_RefractCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::ClassParams = {
	&URefractPlatformEmulationSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::Class_MetaDataParams)
};
void URefractPlatformEmulationSettings::StaticRegisterNativesURefractPlatformEmulationSettings()
{
	UClass* Class = URefractPlatformEmulationSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::Funcs));
}
UClass* Z_Construct_UClass_URefractPlatformEmulationSettings()
{
	if (!Z_Registration_Info_UClass_URefractPlatformEmulationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URefractPlatformEmulationSettings.OuterSingleton, Z_Construct_UClass_URefractPlatformEmulationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URefractPlatformEmulationSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URefractPlatformEmulationSettings);
URefractPlatformEmulationSettings::~URefractPlatformEmulationSettings() {}
// ********** End Class URefractPlatformEmulationSettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformEmulationSettings_h__Script_RefractCommon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URefractPlatformEmulationSettings, URefractPlatformEmulationSettings::StaticClass, TEXT("URefractPlatformEmulationSettings"), &Z_Registration_Info_UClass_URefractPlatformEmulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URefractPlatformEmulationSettings), 2757317008U) },
	};
}; // Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformEmulationSettings_h__Script_RefractCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformEmulationSettings_h__Script_RefractCommon_1417514740{
	TEXT("/Script/RefractCommon"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformEmulationSettings_h__Script_RefractCommon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformEmulationSettings_h__Script_RefractCommon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
