// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFramework/RefractCommonLocalUserSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRefractCommonLocalUserSettings() {}

// ********** Begin Cross Module References ********************************************************
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBus_NoRegister();
AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBusMix_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractCommonLocalUserSettings();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractCommonLocalUserSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_RefractCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URefractCommonLocalUserSettings Function CanModifyHeadphoneModeEnabled ***
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics
{
	struct RefractCommonLocalUserSettings_eventCanModifyHeadphoneModeEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Returns whether headphone mode can currently be toggled by the user.\n\x09 * Returns false if the platform forces binaural spatialization on or off.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Returns whether headphone mode can currently be toggled by the user.\nReturns false if the platform forces binaural spatialization on or off." },
	};
#endif // WITH_METADATA

// ********** Begin Function CanModifyHeadphoneModeEnabled constinit property declarations *********
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanModifyHeadphoneModeEnabled constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanModifyHeadphoneModeEnabled Property Definitions ********************
void Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RefractCommonLocalUserSettings_eventCanModifyHeadphoneModeEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RefractCommonLocalUserSettings_eventCanModifyHeadphoneModeEnabled_Parms), &Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics::PropPointers) < 2048);
// ********** End Function CanModifyHeadphoneModeEnabled Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "CanModifyHeadphoneModeEnabled", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics::RefractCommonLocalUserSettings_eventCanModifyHeadphoneModeEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics::RefractCommonLocalUserSettings_eventCanModifyHeadphoneModeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execCanModifyHeadphoneModeEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanModifyHeadphoneModeEnabled();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function CanModifyHeadphoneModeEnabled *****

// ********** Begin Class URefractCommonLocalUserSettings Function CanRunAutoBenchmark *************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics
{
	struct RefractCommonLocalUserSettings_eventCanRunAutoBenchmark_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Quality" },
		{ "Comment", "/**\n\x09 * Returns whether this platform supports running the auto benchmark.\n\x09 * @return True if the auto benchmark can be run on this platform.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Returns whether this platform supports running the auto benchmark.\n@return True if the auto benchmark can be run on this platform." },
	};
#endif // WITH_METADATA

// ********** Begin Function CanRunAutoBenchmark constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanRunAutoBenchmark constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanRunAutoBenchmark Property Definitions ******************************
void Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RefractCommonLocalUserSettings_eventCanRunAutoBenchmark_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RefractCommonLocalUserSettings_eventCanRunAutoBenchmark_Parms), &Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics::PropPointers) < 2048);
// ********** End Function CanRunAutoBenchmark Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "CanRunAutoBenchmark", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics::RefractCommonLocalUserSettings_eventCanRunAutoBenchmark_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics::RefractCommonLocalUserSettings_eventCanRunAutoBenchmark_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execCanRunAutoBenchmark)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanRunAutoBenchmark();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function CanRunAutoBenchmark ***************

// ********** Begin Class URefractCommonLocalUserSettings Function Get *****************************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_Get_Statics
{
	struct RefractCommonLocalUserSettings_eventGet_Parms
	{
		URefractCommonLocalUserSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * @return The game's URefractCommonLocalUserSettings instance, or nullptr if GEngine is not yet initialized or wasn't configured correctly.\n\x09 */" },
		{ "DisplayName", "Get Common Local User Settings" },
		{ "Keywords", "preferences config options" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "@return The game's URefractCommonLocalUserSettings instance, or nullptr if GEngine is not yet initialized or wasn't configured correctly." },
	};
#endif // WITH_METADATA

// ********** Begin Function Get constinit property declarations ***********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Get constinit property declarations *************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Get Property Definitions **********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGet_Parms, ReturnValue), Z_Construct_UClass_URefractCommonLocalUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_Get_Statics::PropPointers) < 2048);
// ********** End Function Get Property Definitions ************************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_Get_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "Get", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_Get_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_Get_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_Get_Statics::RefractCommonLocalUserSettings_eventGet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_Get_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_Get_Statics::RefractCommonLocalUserSettings_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URefractCommonLocalUserSettings**)Z_Param__Result=URefractCommonLocalUserSettings::Get();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function Get *******************************

// ********** Begin Class URefractCommonLocalUserSettings Function GetAudioOutputDeviceId **********
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId_Statics
{
	struct RefractCommonLocalUserSettings_eventGetAudioOutputDeviceId_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Get the user's preferred audio output device ID.\n\x09 * @return The audio output device ID string.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the user's preferred audio output device ID.\n@return The audio output device ID string." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAudioOutputDeviceId constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAudioOutputDeviceId constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAudioOutputDeviceId Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetAudioOutputDeviceId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId_Statics::PropPointers) < 2048);
// ********** End Function GetAudioOutputDeviceId Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetAudioOutputDeviceId", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId_Statics::RefractCommonLocalUserSettings_eventGetAudioOutputDeviceId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId_Statics::RefractCommonLocalUserSettings_eventGetAudioOutputDeviceId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetAudioOutputDeviceId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAudioOutputDeviceId();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetAudioOutputDeviceId ************

// ********** Begin Class URefractCommonLocalUserSettings Function GetControllerPlatform ***********
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform_Statics
{
	struct RefractCommonLocalUserSettings_eventGetControllerPlatform_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Input" },
		{ "Comment", "/**\n\x09 * Get the active controller platform representation.\n\x09 * @return The name of the active controller platform.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the active controller platform representation.\n@return The name of the active controller platform." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetControllerPlatform constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetControllerPlatform constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetControllerPlatform Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetControllerPlatform_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform_Statics::PropPointers) < 2048);
// ********** End Function GetControllerPlatform Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetControllerPlatform", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform_Statics::RefractCommonLocalUserSettings_eventGetControllerPlatform_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform_Statics::RefractCommonLocalUserSettings_eventGetControllerPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetControllerPlatform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetControllerPlatform();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetControllerPlatform *************

// ********** Begin Class URefractCommonLocalUserSettings Function GetDefaultMobileFrameRate *******
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate_Statics
{
	struct RefractCommonLocalUserSettings_eventGetDefaultMobileFrameRate_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate|Mobile" },
		{ "Comment", "/**\n\x09 * Get the default mobile frame rate as defined by the device profile.\n\x09 * @return The default mobile frame rate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the default mobile frame rate as defined by the device profile.\n@return The default mobile frame rate." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDefaultMobileFrameRate constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDefaultMobileFrameRate constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDefaultMobileFrameRate Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetDefaultMobileFrameRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate_Statics::PropPointers) < 2048);
// ********** End Function GetDefaultMobileFrameRate Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetDefaultMobileFrameRate", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate_Statics::RefractCommonLocalUserSettings_eventGetDefaultMobileFrameRate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate_Statics::RefractCommonLocalUserSettings_eventGetDefaultMobileFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetDefaultMobileFrameRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URefractCommonLocalUserSettings::GetDefaultMobileFrameRate();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetDefaultMobileFrameRate *********

// ********** Begin Class URefractCommonLocalUserSettings Function GetDesiredDeviceProfileQualitySuffix 
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix_Statics
{
	struct RefractCommonLocalUserSettings_eventGetDesiredDeviceProfileQualitySuffix_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|DeviceProfile" },
		{ "Comment", "/**\n\x09 * Get the desired device profile quality suffix. Used on console platforms.\n\x09 * @return The desired device profile suffix.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the desired device profile quality suffix. Used on console platforms.\n@return The desired device profile suffix." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDesiredDeviceProfileQualitySuffix constinit property declarations **
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDesiredDeviceProfileQualitySuffix constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDesiredDeviceProfileQualitySuffix Property Definitions *************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetDesiredDeviceProfileQualitySuffix_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix_Statics::PropPointers) < 2048);
// ********** End Function GetDesiredDeviceProfileQualitySuffix Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetDesiredDeviceProfileQualitySuffix", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix_Statics::RefractCommonLocalUserSettings_eventGetDesiredDeviceProfileQualitySuffix_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix_Statics::RefractCommonLocalUserSettings_eventGetDesiredDeviceProfileQualitySuffix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetDesiredDeviceProfileQualitySuffix)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDesiredDeviceProfileQualitySuffix();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetDesiredDeviceProfileQualitySuffix 

// ********** Begin Class URefractCommonLocalUserSettings Function GetDesiredMobileFrameRateLimit **
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit_Statics
{
	struct RefractCommonLocalUserSettings_eventGetDesiredMobileFrameRateLimit_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate|Mobile" },
		{ "Comment", "/**\n\x09 * Get the desired target frame rate for mobile.\n\x09 * @return The desired target frame rate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the desired target frame rate for mobile.\n@return The desired target frame rate." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDesiredMobileFrameRateLimit constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDesiredMobileFrameRateLimit constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDesiredMobileFrameRateLimit Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetDesiredMobileFrameRateLimit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit_Statics::PropPointers) < 2048);
// ********** End Function GetDesiredMobileFrameRateLimit Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetDesiredMobileFrameRateLimit", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit_Statics::RefractCommonLocalUserSettings_eventGetDesiredMobileFrameRateLimit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit_Statics::RefractCommonLocalUserSettings_eventGetDesiredMobileFrameRateLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetDesiredMobileFrameRateLimit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDesiredMobileFrameRateLimit();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetDesiredMobileFrameRateLimit ****

// ********** Begin Class URefractCommonLocalUserSettings Function GetDialogueVolume ***************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume_Statics
{
	struct RefractCommonLocalUserSettings_eventGetDialogueVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Get the dialogue volume level.\n\x09 * @return The dialogue volume, in the range [0, 1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the dialogue volume level.\n@return The dialogue volume, in the range [0, 1]." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialogueVolume constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialogueVolume constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialogueVolume Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetDialogueVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume_Statics::PropPointers) < 2048);
// ********** End Function GetDialogueVolume Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetDialogueVolume", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume_Statics::RefractCommonLocalUserSettings_eventGetDialogueVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume_Statics::RefractCommonLocalUserSettings_eventGetDialogueVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetDialogueVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDialogueVolume();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetDialogueVolume *****************

// ********** Begin Class URefractCommonLocalUserSettings Function GetDisplayGamma *****************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma_Statics
{
	struct RefractCommonLocalUserSettings_eventGetDisplayGamma_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Display" },
		{ "Comment", "/**\n\x09 * Get the pending display gamma value.\n\x09 * @return The current pending display gamma. This may differ from the currently applied value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the pending display gamma value.\n@return The current pending display gamma. This may differ from the currently applied value." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDisplayGamma constinit property declarations ***********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDisplayGamma constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDisplayGamma Property Definitions **********************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetDisplayGamma_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma_Statics::PropPointers) < 2048);
// ********** End Function GetDisplayGamma Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetDisplayGamma", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma_Statics::RefractCommonLocalUserSettings_eventGetDisplayGamma_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma_Statics::RefractCommonLocalUserSettings_eventGetDisplayGamma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetDisplayGamma)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetDisplayGamma();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetDisplayGamma *******************

// ********** Begin Class URefractCommonLocalUserSettings Function GetFirstFrameRateWithQualityLimit 
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit_Statics
{
	struct RefractCommonLocalUserSettings_eventGetFirstFrameRateWithQualityLimit_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate|Mobile" },
		{ "Comment", "/**\n\x09 * Get the first frame rate at which overall quality becomes restricted by the device profile.\n\x09 * @return The first frame rate with a quality limit, or INDEX_NONE if none.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the first frame rate at which overall quality becomes restricted by the device profile.\n@return The first frame rate with a quality limit, or INDEX_NONE if none." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFirstFrameRateWithQualityLimit constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFirstFrameRateWithQualityLimit constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFirstFrameRateWithQualityLimit Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetFirstFrameRateWithQualityLimit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit_Statics::PropPointers) < 2048);
// ********** End Function GetFirstFrameRateWithQualityLimit Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetFirstFrameRateWithQualityLimit", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit_Statics::RefractCommonLocalUserSettings_eventGetFirstFrameRateWithQualityLimit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit_Statics::RefractCommonLocalUserSettings_eventGetFirstFrameRateWithQualityLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetFirstFrameRateWithQualityLimit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFirstFrameRateWithQualityLimit();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetFirstFrameRateWithQualityLimit *

// ********** Begin Class URefractCommonLocalUserSettings Function GetFrameRateLimit_Always ********
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always_Statics
{
	struct RefractCommonLocalUserSettings_eventGetFrameRateLimit_Always_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate" },
		{ "Comment", "/**\n\x09 * Get the unconditional frame rate limit (applied when plugged in, in-game, and foregrounded).\n\x09 * @return The unconditional frame rate limit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the unconditional frame rate limit (applied when plugged in, in-game, and foregrounded).\n@return The unconditional frame rate limit." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFrameRateLimit_Always constinit property declarations **************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFrameRateLimit_Always constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFrameRateLimit_Always Property Definitions *************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetFrameRateLimit_Always_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always_Statics::PropPointers) < 2048);
// ********** End Function GetFrameRateLimit_Always Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetFrameRateLimit_Always", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always_Statics::RefractCommonLocalUserSettings_eventGetFrameRateLimit_Always_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always_Statics::RefractCommonLocalUserSettings_eventGetFrameRateLimit_Always_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetFrameRateLimit_Always)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetFrameRateLimit_Always();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetFrameRateLimit_Always **********

// ********** Begin Class URefractCommonLocalUserSettings Function GetFrameRateLimit_InMenu ********
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu_Statics
{
	struct RefractCommonLocalUserSettings_eventGetFrameRateLimit_InMenu_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate" },
		{ "Comment", "/**\n\x09 * Get the frame rate limit used while in a game menu.\n\x09 * @return The frame rate limit in menus.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the frame rate limit used while in a game menu.\n@return The frame rate limit in menus." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFrameRateLimit_InMenu constinit property declarations **************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFrameRateLimit_InMenu constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFrameRateLimit_InMenu Property Definitions *************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetFrameRateLimit_InMenu_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu_Statics::PropPointers) < 2048);
// ********** End Function GetFrameRateLimit_InMenu Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetFrameRateLimit_InMenu", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu_Statics::RefractCommonLocalUserSettings_eventGetFrameRateLimit_InMenu_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu_Statics::RefractCommonLocalUserSettings_eventGetFrameRateLimit_InMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetFrameRateLimit_InMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetFrameRateLimit_InMenu();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetFrameRateLimit_InMenu **********

// ********** Begin Class URefractCommonLocalUserSettings Function GetFrameRateLimit_OnBattery *****
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery_Statics
{
	struct RefractCommonLocalUserSettings_eventGetFrameRateLimit_OnBattery_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate" },
		{ "Comment", "/**\n\x09 * Get the frame rate limit used when running on battery power.\n\x09 * @return The frame rate limit on battery.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the frame rate limit used when running on battery power.\n@return The frame rate limit on battery." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFrameRateLimit_OnBattery constinit property declarations ***********
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFrameRateLimit_OnBattery constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFrameRateLimit_OnBattery Property Definitions **********************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetFrameRateLimit_OnBattery_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery_Statics::PropPointers) < 2048);
// ********** End Function GetFrameRateLimit_OnBattery Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetFrameRateLimit_OnBattery", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery_Statics::RefractCommonLocalUserSettings_eventGetFrameRateLimit_OnBattery_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery_Statics::RefractCommonLocalUserSettings_eventGetFrameRateLimit_OnBattery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetFrameRateLimit_OnBattery)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetFrameRateLimit_OnBattery();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetFrameRateLimit_OnBattery *******

// ********** Begin Class URefractCommonLocalUserSettings Function GetFrameRateLimit_WhenBackground 
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground_Statics
{
	struct RefractCommonLocalUserSettings_eventGetFrameRateLimit_WhenBackground_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate" },
		{ "Comment", "/**\n\x09 * Get the frame rate limit used when the application is unfocused (in the background).\n\x09 * @return The frame rate limit when the application is unfocused.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the frame rate limit used when the application is unfocused (in the background).\n@return The frame rate limit when the application is unfocused." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFrameRateLimit_WhenBackground constinit property declarations ******
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFrameRateLimit_WhenBackground constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFrameRateLimit_WhenBackground Property Definitions *****************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetFrameRateLimit_WhenBackground_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground_Statics::PropPointers) < 2048);
// ********** End Function GetFrameRateLimit_WhenBackground Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetFrameRateLimit_WhenBackground", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground_Statics::RefractCommonLocalUserSettings_eventGetFrameRateLimit_WhenBackground_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground_Statics::RefractCommonLocalUserSettings_eventGetFrameRateLimit_WhenBackground_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetFrameRateLimit_WhenBackground)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetFrameRateLimit_WhenBackground();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetFrameRateLimit_WhenBackground **

// ********** Begin Class URefractCommonLocalUserSettings Function GetLowestQualityWithFrameRateLimit 
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit_Statics
{
	struct RefractCommonLocalUserSettings_eventGetLowestQualityWithFrameRateLimit_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate|Mobile" },
		{ "Comment", "/**\n\x09 * Get the lowest overall quality level at which a frame rate limit applies.\n\x09 * @return The lowest quality with a frame rate limit, or -1 if no limit exists.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the lowest overall quality level at which a frame rate limit applies.\n@return The lowest quality with a frame rate limit, or -1 if no limit exists." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLowestQualityWithFrameRateLimit constinit property declarations ****
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLowestQualityWithFrameRateLimit constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLowestQualityWithFrameRateLimit Property Definitions ***************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetLowestQualityWithFrameRateLimit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit_Statics::PropPointers) < 2048);
// ********** End Function GetLowestQualityWithFrameRateLimit Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetLowestQualityWithFrameRateLimit", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit_Statics::RefractCommonLocalUserSettings_eventGetLowestQualityWithFrameRateLimit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit_Statics::RefractCommonLocalUserSettings_eventGetLowestQualityWithFrameRateLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetLowestQualityWithFrameRateLimit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLowestQualityWithFrameRateLimit();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetLowestQualityWithFrameRateLimit 

// ********** Begin Class URefractCommonLocalUserSettings Function GetMaxMobileFrameRate ***********
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate_Statics
{
	struct RefractCommonLocalUserSettings_eventGetMaxMobileFrameRate_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate|Mobile" },
		{ "Comment", "/**\n\x09 * Get the maximum supported mobile frame rate as defined by the device profile.\n\x09 * @return The maximum supported mobile frame rate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the maximum supported mobile frame rate as defined by the device profile.\n@return The maximum supported mobile frame rate." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaxMobileFrameRate constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaxMobileFrameRate constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaxMobileFrameRate Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetMaxMobileFrameRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate_Statics::PropPointers) < 2048);
// ********** End Function GetMaxMobileFrameRate Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetMaxMobileFrameRate", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate_Statics::RefractCommonLocalUserSettings_eventGetMaxMobileFrameRate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate_Statics::RefractCommonLocalUserSettings_eventGetMaxMobileFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetMaxMobileFrameRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URefractCommonLocalUserSettings::GetMaxMobileFrameRate();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetMaxMobileFrameRate *************

// ********** Begin Class URefractCommonLocalUserSettings Function GetMaxSupportedOverallQualityLevel 
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel_Statics
{
	struct RefractCommonLocalUserSettings_eventGetMaxSupportedOverallQualityLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Quality" },
		{ "Comment", "/**\n\x09 * Get the maximum supported overall runtime quality level for the current platform.\n\x09 * @return The maximum supported overall quality level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the maximum supported overall runtime quality level for the current platform.\n@return The maximum supported overall quality level." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMaxSupportedOverallQualityLevel constinit property declarations ****
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMaxSupportedOverallQualityLevel constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMaxSupportedOverallQualityLevel Property Definitions ***************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetMaxSupportedOverallQualityLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel_Statics::PropPointers) < 2048);
// ********** End Function GetMaxSupportedOverallQualityLevel Property Definitions *****************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetMaxSupportedOverallQualityLevel", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel_Statics::RefractCommonLocalUserSettings_eventGetMaxSupportedOverallQualityLevel_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel_Statics::RefractCommonLocalUserSettings_eventGetMaxSupportedOverallQualityLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetMaxSupportedOverallQualityLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxSupportedOverallQualityLevel();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetMaxSupportedOverallQualityLevel 

// ********** Begin Class URefractCommonLocalUserSettings Function GetMusicVolume ******************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume_Statics
{
	struct RefractCommonLocalUserSettings_eventGetMusicVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Get the music volume level.\n\x09 * @return The music volume, in the range [0, 1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the music volume level.\n@return The music volume, in the range [0, 1]." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMusicVolume constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMusicVolume constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMusicVolume Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetMusicVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume_Statics::PropPointers) < 2048);
// ********** End Function GetMusicVolume Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetMusicVolume", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume_Statics::RefractCommonLocalUserSettings_eventGetMusicVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume_Statics::RefractCommonLocalUserSettings_eventGetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetMusicVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMusicVolume();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetMusicVolume ********************

// ********** Begin Class URefractCommonLocalUserSettings Function GetOverallVolume ****************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume_Statics
{
	struct RefractCommonLocalUserSettings_eventGetOverallVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Get the overall (master) volume level.\n\x09 * @return The overall volume, in the range [0, 1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the overall (master) volume level.\n@return The overall volume, in the range [0, 1]." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOverallVolume constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOverallVolume constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOverallVolume Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetOverallVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume_Statics::PropPointers) < 2048);
// ********** End Function GetOverallVolume Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetOverallVolume", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume_Statics::RefractCommonLocalUserSettings_eventGetOverallVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume_Statics::RefractCommonLocalUserSettings_eventGetOverallVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetOverallVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetOverallVolume();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetOverallVolume ******************

// ********** Begin Class URefractCommonLocalUserSettings Function GetSafeZone *********************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone_Statics
{
	struct RefractCommonLocalUserSettings_eventGetSafeZone_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Display" },
		{ "Comment", "/**\n\x09 * Get the safe zone scale.\n\x09 * @return The current safe zone scale, or 0 if it has never been explicitly set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the safe zone scale.\n@return The current safe zone scale, or 0 if it has never been explicitly set." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSafeZone constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSafeZone constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSafeZone Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetSafeZone_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone_Statics::PropPointers) < 2048);
// ********** End Function GetSafeZone Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetSafeZone", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone_Statics::RefractCommonLocalUserSettings_eventGetSafeZone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone_Statics::RefractCommonLocalUserSettings_eventGetSafeZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetSafeZone)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSafeZone();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetSafeZone ***********************

// ********** Begin Class URefractCommonLocalUserSettings Function GetSoundFXVolume ****************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume_Statics
{
	struct RefractCommonLocalUserSettings_eventGetSoundFXVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Get the sound effects volume level.\n\x09 * @return The sound effects volume, in the range [0, 1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the sound effects volume level.\n@return The sound effects volume, in the range [0, 1]." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSoundFXVolume constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSoundFXVolume constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSoundFXVolume Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetSoundFXVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume_Statics::PropPointers) < 2048);
// ********** End Function GetSoundFXVolume Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetSoundFXVolume", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume_Statics::RefractCommonLocalUserSettings_eventGetSoundFXVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume_Statics::RefractCommonLocalUserSettings_eventGetSoundFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetSoundFXVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSoundFXVolume();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetSoundFXVolume ******************

// ********** Begin Class URefractCommonLocalUserSettings Function GetVoiceChatVolume **************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume_Statics
{
	struct RefractCommonLocalUserSettings_eventGetVoiceChatVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Get the voice chat volume level.\n\x09 * @return The voice chat volume, in the range [0, 1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Get the voice chat volume level.\n@return The voice chat volume, in the range [0, 1]." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVoiceChatVolume constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVoiceChatVolume constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVoiceChatVolume Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventGetVoiceChatVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume_Statics::PropPointers) < 2048);
// ********** End Function GetVoiceChatVolume Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "GetVoiceChatVolume", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume_Statics::RefractCommonLocalUserSettings_eventGetVoiceChatVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume_Statics::RefractCommonLocalUserSettings_eventGetVoiceChatVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execGetVoiceChatVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVoiceChatVolume();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function GetVoiceChatVolume ****************

// ********** Begin Class URefractCommonLocalUserSettings Function IsHDRAudioModeEnabled ***********
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics
{
	struct RefractCommonLocalUserSettings_eventIsHDRAudioModeEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Returns whether High Dynamic Range Audio mode is currently enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Returns whether High Dynamic Range Audio mode is currently enabled." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsHDRAudioModeEnabled constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsHDRAudioModeEnabled constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsHDRAudioModeEnabled Property Definitions ****************************
void Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RefractCommonLocalUserSettings_eventIsHDRAudioModeEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RefractCommonLocalUserSettings_eventIsHDRAudioModeEnabled_Parms), &Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics::PropPointers) < 2048);
// ********** End Function IsHDRAudioModeEnabled Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "IsHDRAudioModeEnabled", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics::RefractCommonLocalUserSettings_eventIsHDRAudioModeEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics::RefractCommonLocalUserSettings_eventIsHDRAudioModeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execIsHDRAudioModeEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHDRAudioModeEnabled();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function IsHDRAudioModeEnabled *************

// ********** Begin Class URefractCommonLocalUserSettings Function IsHeadphoneModeEnabled **********
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics
{
	struct RefractCommonLocalUserSettings_eventIsHeadphoneModeEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Returns whether headphone mode (HRTF spatialization) is currently enabled.\n\x09 * NOTE: May be overruled if au.DisableBinauralSpatialization is set externally.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Returns whether headphone mode (HRTF spatialization) is currently enabled.\nNOTE: May be overruled if au.DisableBinauralSpatialization is set externally." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsHeadphoneModeEnabled constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsHeadphoneModeEnabled constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsHeadphoneModeEnabled Property Definitions ***************************
void Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RefractCommonLocalUserSettings_eventIsHeadphoneModeEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RefractCommonLocalUserSettings_eventIsHeadphoneModeEnabled_Parms), &Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics::PropPointers) < 2048);
// ********** End Function IsHeadphoneModeEnabled Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "IsHeadphoneModeEnabled", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics::RefractCommonLocalUserSettings_eventIsHeadphoneModeEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics::RefractCommonLocalUserSettings_eventIsHeadphoneModeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execIsHeadphoneModeEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHeadphoneModeEnabled();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function IsHeadphoneModeEnabled ************

// ********** Begin Class URefractCommonLocalUserSettings Function IsSafeZoneSet *******************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics
{
	struct RefractCommonLocalUserSettings_eventIsSafeZoneSet_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Display" },
		{ "Comment", "/**\n\x09 * Returns whether the safe zone scale has ever been explicitly set by the user.\n\x09 * @return True if the safe zone has been set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Returns whether the safe zone scale has ever been explicitly set by the user.\n@return True if the safe zone has been set." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSafeZoneSet constinit property declarations *************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSafeZoneSet constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSafeZoneSet Property Definitions ************************************
void Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RefractCommonLocalUserSettings_eventIsSafeZoneSet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RefractCommonLocalUserSettings_eventIsSafeZoneSet_Parms), &Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics::PropPointers) < 2048);
// ********** End Function IsSafeZoneSet Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "IsSafeZoneSet", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics::RefractCommonLocalUserSettings_eventIsSafeZoneSet_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics::RefractCommonLocalUserSettings_eventIsSafeZoneSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execIsSafeZoneSet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSafeZoneSet();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function IsSafeZoneSet *********************

// ********** Begin Class URefractCommonLocalUserSettings Function IsSupportedMobileFramePace ******
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics
{
	struct RefractCommonLocalUserSettings_eventIsSupportedMobileFramePace_Parms
	{
		int32 TestFPS;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate|Mobile" },
		{ "Comment", "/**\n\x09 * Returns whether the given frame rate is a supported mobile frame pace.\n\x09 * @param TestFPS The frame rate to test.\n\x09 * @return True if TestFPS is valid and supported on this device.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Returns whether the given frame rate is a supported mobile frame pace.\n@param TestFPS The frame rate to test.\n@return True if TestFPS is valid and supported on this device." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSupportedMobileFramePace constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_TestFPS;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSupportedMobileFramePace constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSupportedMobileFramePace Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::NewProp_TestFPS = { "TestFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventIsSupportedMobileFramePace_Parms, TestFPS), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RefractCommonLocalUserSettings_eventIsSupportedMobileFramePace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RefractCommonLocalUserSettings_eventIsSupportedMobileFramePace_Parms), &Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::NewProp_TestFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::PropPointers) < 2048);
// ********** End Function IsSupportedMobileFramePace Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "IsSupportedMobileFramePace", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::RefractCommonLocalUserSettings_eventIsSupportedMobileFramePace_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::RefractCommonLocalUserSettings_eventIsSupportedMobileFramePace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execIsSupportedMobileFramePace)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TestFPS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URefractCommonLocalUserSettings::IsSupportedMobileFramePace(Z_Param_TestFPS);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function IsSupportedMobileFramePace ********

// ********** Begin Class URefractCommonLocalUserSettings Function ResetToMobileDeviceDefaults *****
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_ResetToMobileDeviceDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate|Mobile" },
		{ "Comment", "/**\n\x09 * Reset mobile scalability settings to the device profile defaults.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Reset mobile scalability settings to the device profile defaults." },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetToMobileDeviceDefaults constinit property declarations ***********
// ********** End Function ResetToMobileDeviceDefaults constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_ResetToMobileDeviceDefaults_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "ResetToMobileDeviceDefaults", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_ResetToMobileDeviceDefaults_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_ResetToMobileDeviceDefaults_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_ResetToMobileDeviceDefaults()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_ResetToMobileDeviceDefaults_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execResetToMobileDeviceDefaults)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToMobileDeviceDefaults();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function ResetToMobileDeviceDefaults *******

// ********** Begin Class URefractCommonLocalUserSettings Function RunAutoBenchmark ****************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics
{
	struct RefractCommonLocalUserSettings_eventRunAutoBenchmark_Parms
	{
		bool bSaveImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Quality" },
		{ "Comment", "/**\n\x09 * Run the auto benchmark.\n\x09 * @param bSaveImmediately Whether to save settings immediately after benchmarking.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Run the auto benchmark.\n@param bSaveImmediately Whether to save settings immediately after benchmarking." },
	};
#endif // WITH_METADATA

// ********** Begin Function RunAutoBenchmark constinit property declarations **********************
	static void NewProp_bSaveImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RunAutoBenchmark constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RunAutoBenchmark Property Definitions *********************************
void Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics::NewProp_bSaveImmediately_SetBit(void* Obj)
{
	((RefractCommonLocalUserSettings_eventRunAutoBenchmark_Parms*)Obj)->bSaveImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics::NewProp_bSaveImmediately = { "bSaveImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RefractCommonLocalUserSettings_eventRunAutoBenchmark_Parms), &Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics::NewProp_bSaveImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics::NewProp_bSaveImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics::PropPointers) < 2048);
// ********** End Function RunAutoBenchmark Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "RunAutoBenchmark", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics::RefractCommonLocalUserSettings_eventRunAutoBenchmark_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics::RefractCommonLocalUserSettings_eventRunAutoBenchmark_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execRunAutoBenchmark)
{
	P_GET_UBOOL(Z_Param_bSaveImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunAutoBenchmark(Z_Param_bSaveImmediately);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function RunAutoBenchmark ******************

// ********** Begin Class URefractCommonLocalUserSettings Function SetAudioOutputDeviceId **********
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId_Statics
{
	struct RefractCommonLocalUserSettings_eventSetAudioOutputDeviceId_Parms
	{
		FString InAudioOutputDeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Set the user's preferred audio output device by ID.\n\x09 * @param InAudioOutputDeviceId The audio output device ID to use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the user's preferred audio output device by ID.\n@param InAudioOutputDeviceId The audio output device ID to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAudioOutputDeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAudioOutputDeviceId constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_InAudioOutputDeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAudioOutputDeviceId constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAudioOutputDeviceId Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId_Statics::NewProp_InAudioOutputDeviceId = { "InAudioOutputDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetAudioOutputDeviceId_Parms, InAudioOutputDeviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAudioOutputDeviceId_MetaData), NewProp_InAudioOutputDeviceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId_Statics::NewProp_InAudioOutputDeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId_Statics::PropPointers) < 2048);
// ********** End Function SetAudioOutputDeviceId Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetAudioOutputDeviceId", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId_Statics::RefractCommonLocalUserSettings_eventSetAudioOutputDeviceId_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId_Statics::RefractCommonLocalUserSettings_eventSetAudioOutputDeviceId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetAudioOutputDeviceId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InAudioOutputDeviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioOutputDeviceId(Z_Param_InAudioOutputDeviceId);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetAudioOutputDeviceId ************

// ********** Begin Class URefractCommonLocalUserSettings Function SetControllerPlatform ***********
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform_Statics
{
	struct RefractCommonLocalUserSettings_eventSetControllerPlatform_Parms
	{
		FName InControllerPlatform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Input" },
		{ "Comment", "/**\n\x09 * Set the controller platform representation.\n\x09 * Used on platforms that support multiple controller types (e.g. Xbox and PlayStation on PC).\n\x09 * @param InControllerPlatform The name of the controller platform to use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the controller platform representation.\nUsed on platforms that support multiple controller types (e.g. Xbox and PlayStation on PC).\n@param InControllerPlatform The name of the controller platform to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InControllerPlatform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetControllerPlatform constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_InControllerPlatform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetControllerPlatform constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetControllerPlatform Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform_Statics::NewProp_InControllerPlatform = { "InControllerPlatform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetControllerPlatform_Parms, InControllerPlatform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InControllerPlatform_MetaData), NewProp_InControllerPlatform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform_Statics::NewProp_InControllerPlatform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform_Statics::PropPointers) < 2048);
// ********** End Function SetControllerPlatform Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetControllerPlatform", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform_Statics::RefractCommonLocalUserSettings_eventSetControllerPlatform_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform_Statics::RefractCommonLocalUserSettings_eventSetControllerPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetControllerPlatform)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InControllerPlatform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControllerPlatform(Z_Param_InControllerPlatform);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetControllerPlatform *************

// ********** Begin Class URefractCommonLocalUserSettings Function SetDesiredDeviceProfileQualitySuffix 
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix_Statics
{
	struct RefractCommonLocalUserSettings_eventSetDesiredDeviceProfileQualitySuffix_Parms
	{
		FString InDesiredSuffix;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|DeviceProfile" },
		{ "Comment", "/**\n\x09 * Set the desired device profile quality suffix. Used on console platforms.\n\x09 * @param InDesiredSuffix The desired device profile suffix.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the desired device profile quality suffix. Used on console platforms.\n@param InDesiredSuffix The desired device profile suffix." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDesiredSuffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDesiredDeviceProfileQualitySuffix constinit property declarations **
	static const UECodeGen_Private::FStrPropertyParams NewProp_InDesiredSuffix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDesiredDeviceProfileQualitySuffix constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDesiredDeviceProfileQualitySuffix Property Definitions *************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix_Statics::NewProp_InDesiredSuffix = { "InDesiredSuffix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetDesiredDeviceProfileQualitySuffix_Parms, InDesiredSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDesiredSuffix_MetaData), NewProp_InDesiredSuffix_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix_Statics::NewProp_InDesiredSuffix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix_Statics::PropPointers) < 2048);
// ********** End Function SetDesiredDeviceProfileQualitySuffix Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetDesiredDeviceProfileQualitySuffix", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix_Statics::RefractCommonLocalUserSettings_eventSetDesiredDeviceProfileQualitySuffix_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix_Statics::RefractCommonLocalUserSettings_eventSetDesiredDeviceProfileQualitySuffix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetDesiredDeviceProfileQualitySuffix)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InDesiredSuffix);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDesiredDeviceProfileQualitySuffix(Z_Param_InDesiredSuffix);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetDesiredDeviceProfileQualitySuffix 

// ********** Begin Class URefractCommonLocalUserSettings Function SetDesiredMobileFrameRateLimit **
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit_Statics
{
	struct RefractCommonLocalUserSettings_eventSetDesiredMobileFrameRateLimit_Parms
	{
		int32 NewLimitFPS;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate|Mobile" },
		{ "Comment", "/**\n\x09 * Set the desired target frame rate for mobile.\n\x09 * @param NewLimitFPS The desired target frame rate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the desired target frame rate for mobile.\n@param NewLimitFPS The desired target frame rate." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDesiredMobileFrameRateLimit constinit property declarations ********
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLimitFPS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDesiredMobileFrameRateLimit constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDesiredMobileFrameRateLimit Property Definitions *******************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit_Statics::NewProp_NewLimitFPS = { "NewLimitFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetDesiredMobileFrameRateLimit_Parms, NewLimitFPS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit_Statics::NewProp_NewLimitFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit_Statics::PropPointers) < 2048);
// ********** End Function SetDesiredMobileFrameRateLimit Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetDesiredMobileFrameRateLimit", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit_Statics::RefractCommonLocalUserSettings_eventSetDesiredMobileFrameRateLimit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit_Statics::RefractCommonLocalUserSettings_eventSetDesiredMobileFrameRateLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetDesiredMobileFrameRateLimit)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewLimitFPS);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDesiredMobileFrameRateLimit(Z_Param_NewLimitFPS);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetDesiredMobileFrameRateLimit ****

// ********** Begin Class URefractCommonLocalUserSettings Function SetDialogueVolume ***************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume_Statics
{
	struct RefractCommonLocalUserSettings_eventSetDialogueVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Set the dialogue volume level.\n\x09 * @param InVolume The desired dialogue volume, in the range [0, 1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the dialogue volume level.\n@param InVolume The desired dialogue volume, in the range [0, 1]." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDialogueVolume constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDialogueVolume constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDialogueVolume Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetDialogueVolume_Parms, InVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume_Statics::PropPointers) < 2048);
// ********** End Function SetDialogueVolume Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetDialogueVolume", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume_Statics::RefractCommonLocalUserSettings_eventSetDialogueVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume_Statics::RefractCommonLocalUserSettings_eventSetDialogueVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetDialogueVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetDialogueVolume *****************

// ********** Begin Class URefractCommonLocalUserSettings Function SetDisplayGamma *****************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma_Statics
{
	struct RefractCommonLocalUserSettings_eventSetDisplayGamma_Parms
	{
		double InGamma;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Display" },
		{ "Comment", "/**\n\x09 * Set the display gamma value. Changes take effect immediately.\n\x09 * @param InGamma The desired display gamma value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the display gamma value. Changes take effect immediately.\n@param InGamma The desired display gamma value." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDisplayGamma constinit property declarations ***********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InGamma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDisplayGamma constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDisplayGamma Property Definitions **********************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma_Statics::NewProp_InGamma = { "InGamma", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetDisplayGamma_Parms, InGamma), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma_Statics::NewProp_InGamma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma_Statics::PropPointers) < 2048);
// ********** End Function SetDisplayGamma Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetDisplayGamma", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma_Statics::RefractCommonLocalUserSettings_eventSetDisplayGamma_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma_Statics::RefractCommonLocalUserSettings_eventSetDisplayGamma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetDisplayGamma)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_InGamma);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDisplayGamma(Z_Param_InGamma);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetDisplayGamma *******************

// ********** Begin Class URefractCommonLocalUserSettings Function SetFrameRateLimit_Always ********
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always_Statics
{
	struct RefractCommonLocalUserSettings_eventSetFrameRateLimit_Always_Parms
	{
		double NewLimitFPS;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate" },
		{ "Comment", "/**\n\x09 * Set the unconditional frame rate limit (applied when plugged in, in-game, and foregrounded).\n\x09 * @param NewLimitFPS The desired unconditional frame rate limit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the unconditional frame rate limit (applied when plugged in, in-game, and foregrounded).\n@param NewLimitFPS The desired unconditional frame rate limit." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetFrameRateLimit_Always constinit property declarations **************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NewLimitFPS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFrameRateLimit_Always constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFrameRateLimit_Always Property Definitions *************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always_Statics::NewProp_NewLimitFPS = { "NewLimitFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetFrameRateLimit_Always_Parms, NewLimitFPS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always_Statics::NewProp_NewLimitFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always_Statics::PropPointers) < 2048);
// ********** End Function SetFrameRateLimit_Always Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetFrameRateLimit_Always", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always_Statics::RefractCommonLocalUserSettings_eventSetFrameRateLimit_Always_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always_Statics::RefractCommonLocalUserSettings_eventSetFrameRateLimit_Always_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetFrameRateLimit_Always)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_NewLimitFPS);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameRateLimit_Always(Z_Param_NewLimitFPS);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetFrameRateLimit_Always **********

// ********** Begin Class URefractCommonLocalUserSettings Function SetFrameRateLimit_InMenu ********
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu_Statics
{
	struct RefractCommonLocalUserSettings_eventSetFrameRateLimit_InMenu_Parms
	{
		double NewLimitFPS;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate" },
		{ "Comment", "/**\n\x09 * Set the frame rate limit used while in a game menu.\n\x09 * @param NewLimitFPS The desired frame rate limit in menus.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the frame rate limit used while in a game menu.\n@param NewLimitFPS The desired frame rate limit in menus." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetFrameRateLimit_InMenu constinit property declarations **************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NewLimitFPS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFrameRateLimit_InMenu constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFrameRateLimit_InMenu Property Definitions *************************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu_Statics::NewProp_NewLimitFPS = { "NewLimitFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetFrameRateLimit_InMenu_Parms, NewLimitFPS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu_Statics::NewProp_NewLimitFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu_Statics::PropPointers) < 2048);
// ********** End Function SetFrameRateLimit_InMenu Property Definitions ***************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetFrameRateLimit_InMenu", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu_Statics::RefractCommonLocalUserSettings_eventSetFrameRateLimit_InMenu_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu_Statics::RefractCommonLocalUserSettings_eventSetFrameRateLimit_InMenu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetFrameRateLimit_InMenu)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_NewLimitFPS);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameRateLimit_InMenu(Z_Param_NewLimitFPS);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetFrameRateLimit_InMenu **********

// ********** Begin Class URefractCommonLocalUserSettings Function SetFrameRateLimit_OnBattery *****
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery_Statics
{
	struct RefractCommonLocalUserSettings_eventSetFrameRateLimit_OnBattery_Parms
	{
		double NewLimitFPS;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate" },
		{ "Comment", "/**\n\x09 * Set the frame rate limit used when running on battery power.\n\x09 * @param NewLimitFPS The desired frame rate limit on battery.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the frame rate limit used when running on battery power.\n@param NewLimitFPS The desired frame rate limit on battery." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetFrameRateLimit_OnBattery constinit property declarations ***********
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NewLimitFPS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFrameRateLimit_OnBattery constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFrameRateLimit_OnBattery Property Definitions **********************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery_Statics::NewProp_NewLimitFPS = { "NewLimitFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetFrameRateLimit_OnBattery_Parms, NewLimitFPS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery_Statics::NewProp_NewLimitFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery_Statics::PropPointers) < 2048);
// ********** End Function SetFrameRateLimit_OnBattery Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetFrameRateLimit_OnBattery", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery_Statics::RefractCommonLocalUserSettings_eventSetFrameRateLimit_OnBattery_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery_Statics::RefractCommonLocalUserSettings_eventSetFrameRateLimit_OnBattery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetFrameRateLimit_OnBattery)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_NewLimitFPS);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameRateLimit_OnBattery(Z_Param_NewLimitFPS);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetFrameRateLimit_OnBattery *******

// ********** Begin Class URefractCommonLocalUserSettings Function SetFrameRateLimit_WhenBackground 
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground_Statics
{
	struct RefractCommonLocalUserSettings_eventSetFrameRateLimit_WhenBackground_Parms
	{
		double NewLimitFPS;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate" },
		{ "Comment", "/**\n\x09 * Set the frame rate limit used when the application is unfocused (in the background).\n\x09 * @param NewLimitFPS The desired frame rate limit when the application is unfocused.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the frame rate limit used when the application is unfocused (in the background).\n@param NewLimitFPS The desired frame rate limit when the application is unfocused." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetFrameRateLimit_WhenBackground constinit property declarations ******
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NewLimitFPS;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFrameRateLimit_WhenBackground constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFrameRateLimit_WhenBackground Property Definitions *****************
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground_Statics::NewProp_NewLimitFPS = { "NewLimitFPS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetFrameRateLimit_WhenBackground_Parms, NewLimitFPS), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground_Statics::NewProp_NewLimitFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground_Statics::PropPointers) < 2048);
// ********** End Function SetFrameRateLimit_WhenBackground Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetFrameRateLimit_WhenBackground", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground_Statics::RefractCommonLocalUserSettings_eventSetFrameRateLimit_WhenBackground_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground_Statics::RefractCommonLocalUserSettings_eventSetFrameRateLimit_WhenBackground_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetFrameRateLimit_WhenBackground)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_NewLimitFPS);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameRateLimit_WhenBackground(Z_Param_NewLimitFPS);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetFrameRateLimit_WhenBackground **

// ********** Begin Class URefractCommonLocalUserSettings Function SetHDRAudioModeEnabled **********
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics
{
	struct RefractCommonLocalUserSettings_eventSetHDRAudioModeEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Enables or disables High Dynamic Range Audio mode.\n\x09 * Broadcasts OnHDRAudioModeChangedDelegate to notify listeners.\n\x09 * @param bEnabled Whether to enable HDR Audio mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Enables or disables High Dynamic Range Audio mode.\nBroadcasts OnHDRAudioModeChangedDelegate to notify listeners.\n@param bEnabled Whether to enable HDR Audio mode." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHDRAudioModeEnabled constinit property declarations ****************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHDRAudioModeEnabled constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHDRAudioModeEnabled Property Definitions ***************************
void Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((RefractCommonLocalUserSettings_eventSetHDRAudioModeEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RefractCommonLocalUserSettings_eventSetHDRAudioModeEnabled_Parms), &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics::PropPointers) < 2048);
// ********** End Function SetHDRAudioModeEnabled Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetHDRAudioModeEnabled", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics::RefractCommonLocalUserSettings_eventSetHDRAudioModeEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics::RefractCommonLocalUserSettings_eventSetHDRAudioModeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetHDRAudioModeEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHDRAudioModeEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetHDRAudioModeEnabled ************

// ********** Begin Class URefractCommonLocalUserSettings Function SetHeadphoneModeEnabled *********
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics
{
	struct RefractCommonLocalUserSettings_eventSetHeadphoneModeEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Enables or disables headphone mode (HRTF spatialization).\n\x09 * NOTE: Will be overruled if au.DisableBinauralSpatialization is set externally.\n\x09 * @param bEnabled Whether to enable headphone mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Enables or disables headphone mode (HRTF spatialization).\nNOTE: Will be overruled if au.DisableBinauralSpatialization is set externally.\n@param bEnabled Whether to enable headphone mode." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetHeadphoneModeEnabled constinit property declarations ***************
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetHeadphoneModeEnabled constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetHeadphoneModeEnabled Property Definitions **************************
void Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((RefractCommonLocalUserSettings_eventSetHeadphoneModeEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RefractCommonLocalUserSettings_eventSetHeadphoneModeEnabled_Parms), &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics::PropPointers) < 2048);
// ********** End Function SetHeadphoneModeEnabled Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetHeadphoneModeEnabled", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics::RefractCommonLocalUserSettings_eventSetHeadphoneModeEnabled_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics::RefractCommonLocalUserSettings_eventSetHeadphoneModeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetHeadphoneModeEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeadphoneModeEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetHeadphoneModeEnabled ***********

// ********** Begin Class URefractCommonLocalUserSettings Function SetMusicVolume ******************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume_Statics
{
	struct RefractCommonLocalUserSettings_eventSetMusicVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Set the music volume level.\n\x09 * @param InVolume The desired music volume, in the range [0, 1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the music volume level.\n@param InVolume The desired music volume, in the range [0, 1]." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetMusicVolume constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetMusicVolume constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetMusicVolume Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetMusicVolume_Parms, InVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume_Statics::PropPointers) < 2048);
// ********** End Function SetMusicVolume Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetMusicVolume", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume_Statics::RefractCommonLocalUserSettings_eventSetMusicVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume_Statics::RefractCommonLocalUserSettings_eventSetMusicVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetMusicVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMusicVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetMusicVolume ********************

// ********** Begin Class URefractCommonLocalUserSettings Function SetOverallVolume ****************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume_Statics
{
	struct RefractCommonLocalUserSettings_eventSetOverallVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Set the overall (master) volume level.\n\x09 * @param InVolume The desired overall volume, in the range [0, 1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the overall (master) volume level.\n@param InVolume The desired overall volume, in the range [0, 1]." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetOverallVolume constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOverallVolume constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOverallVolume Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetOverallVolume_Parms, InVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume_Statics::PropPointers) < 2048);
// ********** End Function SetOverallVolume Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetOverallVolume", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume_Statics::RefractCommonLocalUserSettings_eventSetOverallVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume_Statics::RefractCommonLocalUserSettings_eventSetOverallVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetOverallVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverallVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetOverallVolume ******************

// ********** Begin Class URefractCommonLocalUserSettings Function SetSafeZone *********************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone_Statics
{
	struct RefractCommonLocalUserSettings_eventSetSafeZone_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Display" },
		{ "Comment", "/**\n\x09 * Set the safe zone scale. Changes take effect immediately.\n\x09 * @param Value The desired safe zone scale.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the safe zone scale. Changes take effect immediately.\n@param Value The desired safe zone scale." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSafeZone constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSafeZone constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSafeZone Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetSafeZone_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone_Statics::PropPointers) < 2048);
// ********** End Function SetSafeZone Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetSafeZone", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone_Statics::RefractCommonLocalUserSettings_eventSetSafeZone_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone_Statics::RefractCommonLocalUserSettings_eventSetSafeZone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetSafeZone)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSafeZone(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetSafeZone ***********************

// ********** Begin Class URefractCommonLocalUserSettings Function SetShouldUseFrontendPerformanceSettings 
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics
{
	struct RefractCommonLocalUserSettings_eventSetShouldUseFrontendPerformanceSettings_Parms
	{
		bool bInFrontEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate" },
		{ "Comment", "/**\n\x09 * Set whether front-end (main menu) performance settings should currently be applied.\n\x09 * @param bInFrontEnd Whether the game is currently in the front-end.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set whether front-end (main menu) performance settings should currently be applied.\n@param bInFrontEnd Whether the game is currently in the front-end." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetShouldUseFrontendPerformanceSettings constinit property declarations 
	static void NewProp_bInFrontEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInFrontEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetShouldUseFrontendPerformanceSettings constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetShouldUseFrontendPerformanceSettings Property Definitions **********
void Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics::NewProp_bInFrontEnd_SetBit(void* Obj)
{
	((RefractCommonLocalUserSettings_eventSetShouldUseFrontendPerformanceSettings_Parms*)Obj)->bInFrontEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics::NewProp_bInFrontEnd = { "bInFrontEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RefractCommonLocalUserSettings_eventSetShouldUseFrontendPerformanceSettings_Parms), &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics::NewProp_bInFrontEnd_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics::NewProp_bInFrontEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics::PropPointers) < 2048);
// ********** End Function SetShouldUseFrontendPerformanceSettings Property Definitions ************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetShouldUseFrontendPerformanceSettings", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics::RefractCommonLocalUserSettings_eventSetShouldUseFrontendPerformanceSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics::RefractCommonLocalUserSettings_eventSetShouldUseFrontendPerformanceSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetShouldUseFrontendPerformanceSettings)
{
	P_GET_UBOOL(Z_Param_bInFrontEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShouldUseFrontendPerformanceSettings(Z_Param_bInFrontEnd);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetShouldUseFrontendPerformanceSettings 

// ********** Begin Class URefractCommonLocalUserSettings Function SetSoundFXVolume ****************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume_Statics
{
	struct RefractCommonLocalUserSettings_eventSetSoundFXVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Set the sound effects volume level.\n\x09 * @param InVolume The desired sound effects volume, in the range [0, 1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the sound effects volume level.\n@param InVolume The desired sound effects volume, in the range [0, 1]." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSoundFXVolume constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSoundFXVolume constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSoundFXVolume Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetSoundFXVolume_Parms, InVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume_Statics::PropPointers) < 2048);
// ********** End Function SetSoundFXVolume Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetSoundFXVolume", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume_Statics::RefractCommonLocalUserSettings_eventSetSoundFXVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume_Statics::RefractCommonLocalUserSettings_eventSetSoundFXVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetSoundFXVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSoundFXVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetSoundFXVolume ******************

// ********** Begin Class URefractCommonLocalUserSettings Function SetVoiceChatVolume **************
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume_Statics
{
	struct RefractCommonLocalUserSettings_eventSetVoiceChatVolume_Parms
	{
		float InVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Audio" },
		{ "Comment", "/**\n\x09 * Set the voice chat volume level.\n\x09 * @param InVolume The desired voice chat volume, in the range [0, 1].\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Set the voice chat volume level.\n@param InVolume The desired voice chat volume, in the range [0, 1]." },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVoiceChatVolume constinit property declarations ********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVoiceChatVolume constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVoiceChatVolume Property Definitions *******************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonLocalUserSettings_eventSetVoiceChatVolume_Parms, InVolume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume_Statics::NewProp_InVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume_Statics::PropPointers) < 2048);
// ********** End Function SetVoiceChatVolume Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "SetVoiceChatVolume", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume_Statics::RefractCommonLocalUserSettings_eventSetVoiceChatVolume_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume_Statics::RefractCommonLocalUserSettings_eventSetVoiceChatVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execSetVoiceChatVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVoiceChatVolume(Z_Param_InVolume);
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function SetVoiceChatVolume ****************

// ********** Begin Class URefractCommonLocalUserSettings Function ShouldRunAutoBenchmarkAtStartup *
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics
{
	struct RefractCommonLocalUserSettings_eventShouldRunAutoBenchmarkAtStartup_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|Quality" },
		{ "Comment", "/**\n\x09 * Returns whether the auto benchmark should run at startup (i.e. has never been run).\n\x09 * @return True if the auto benchmark should be run at startup.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Returns whether the auto benchmark should run at startup (i.e. has never been run).\n@return True if the auto benchmark should be run at startup." },
	};
#endif // WITH_METADATA

// ********** Begin Function ShouldRunAutoBenchmarkAtStartup constinit property declarations *******
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShouldRunAutoBenchmarkAtStartup constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShouldRunAutoBenchmarkAtStartup Property Definitions ******************
void Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RefractCommonLocalUserSettings_eventShouldRunAutoBenchmarkAtStartup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RefractCommonLocalUserSettings_eventShouldRunAutoBenchmarkAtStartup_Parms), &Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics::PropPointers) < 2048);
// ********** End Function ShouldRunAutoBenchmarkAtStartup Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "ShouldRunAutoBenchmarkAtStartup", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics::RefractCommonLocalUserSettings_eventShouldRunAutoBenchmarkAtStartup_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics::RefractCommonLocalUserSettings_eventShouldRunAutoBenchmarkAtStartup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execShouldRunAutoBenchmarkAtStartup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldRunAutoBenchmarkAtStartup();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function ShouldRunAutoBenchmarkAtStartup ***

// ********** Begin Class URefractCommonLocalUserSettings Function ShouldUseFrontendPerformanceSettings 
struct Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics
{
	struct RefractCommonLocalUserSettings_eventShouldUseFrontendPerformanceSettings_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings|FrameRate" },
		{ "Comment", "/**\n\x09 * Returns whether front-end performance settings are currently active.\n\x09 * @return True if front-end performance settings should be applied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Returns whether front-end performance settings are currently active.\n@return True if front-end performance settings should be applied." },
	};
#endif // WITH_METADATA

// ********** Begin Function ShouldUseFrontendPerformanceSettings constinit property declarations **
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShouldUseFrontendPerformanceSettings constinit property declarations ****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShouldUseFrontendPerformanceSettings Property Definitions *************
void Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RefractCommonLocalUserSettings_eventShouldUseFrontendPerformanceSettings_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RefractCommonLocalUserSettings_eventShouldUseFrontendPerformanceSettings_Parms), &Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics::PropPointers) < 2048);
// ********** End Function ShouldUseFrontendPerformanceSettings Property Definitions ***************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonLocalUserSettings, nullptr, "ShouldUseFrontendPerformanceSettings", 	Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics::RefractCommonLocalUserSettings_eventShouldUseFrontendPerformanceSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics::RefractCommonLocalUserSettings_eventShouldUseFrontendPerformanceSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonLocalUserSettings::execShouldUseFrontendPerformanceSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldUseFrontendPerformanceSettings();
	P_NATIVE_END;
}
// ********** End Class URefractCommonLocalUserSettings Function ShouldUseFrontendPerformanceSettings 

// ********** Begin Class URefractCommonLocalUserSettings ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URefractCommonLocalUserSettings;
UClass* URefractCommonLocalUserSettings::GetPrivateStaticClass()
{
	using TClass = URefractCommonLocalUserSettings;
	if (!Z_Registration_Info_UClass_URefractCommonLocalUserSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RefractCommonLocalUserSettings"),
			Z_Registration_Info_UClass_URefractCommonLocalUserSettings.InnerSingleton,
			StaticRegisterNativesURefractCommonLocalUserSettings,
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
	return Z_Registration_Info_UClass_URefractCommonLocalUserSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_URefractCommonLocalUserSettings_NoRegister()
{
	return URefractCommonLocalUserSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URefractCommonLocalUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Locally-stored game user settings.\n */" },
		{ "IncludePath", "GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Locally-stored game user settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayGamma_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateLimit_OnBattery_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateLimit_InMenu_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateLimit_WhenBackground_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileFrameRateLimit_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDesiredHeadphoneMode_MetaData[] = {
		{ "Comment", "/** Whether we *want* to use headphone mode; may differ from the currently applied value. */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "Whether we *want* to use headphone mode; may differ from the currently applied value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHeadphoneMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHDRAudioMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundFXVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChatVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioOutputDeviceId_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeZoneScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusMap_MetaData[] = {
		{ "Comment", "/*SoundClassName*/" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "SoundClassName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlBusMix_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSoundControlBusMixLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredUserChosenDeviceProfileSuffix_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAppliedDeviceProfileOverrideSuffix_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserChosenDeviceProfileSuffix_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerPlatform_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the controller the player is using. Maps to a UCommonInputBaseControllerData\n\x09 * registered for this platform in <Platform>Game.ini under +ControllerData=...\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
		{ "ToolTip", "The name of the controller the player is using. Maps to a UCommonInputBaseControllerData\nregistered for this platform in <Platform>Game.ini under +ControllerData=..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerPreset_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfigName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFramework/RefractCommonLocalUserSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URefractCommonLocalUserSettings constinit property declarations **********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayGamma;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRateLimit_OnBattery;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRateLimit_InMenu;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRateLimit_WhenBackground;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MobileFrameRateLimit;
	static void NewProp_bDesiredHeadphoneMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDesiredHeadphoneMode;
	static void NewProp_bUseHeadphoneMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHeadphoneMode;
	static void NewProp_bUseHDRAudioMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHDRAudioMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverallVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SoundFXVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DialogueVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoiceChatVolume;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AudioOutputDeviceId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SafeZoneScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlBusMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlBusMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ControlBusMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlBusMix;
	static void NewProp_bSoundControlBusMixLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoundControlBusMixLoaded;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DesiredUserChosenDeviceProfileSuffix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentAppliedDeviceProfileOverrideSuffix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserChosenDeviceProfileSuffix;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControllerPlatform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControllerPreset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputConfigName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URefractCommonLocalUserSettings constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanModifyHeadphoneModeEnabled"), .Pointer = &URefractCommonLocalUserSettings::execCanModifyHeadphoneModeEnabled },
		{ .NameUTF8 = UTF8TEXT("CanRunAutoBenchmark"), .Pointer = &URefractCommonLocalUserSettings::execCanRunAutoBenchmark },
		{ .NameUTF8 = UTF8TEXT("Get"), .Pointer = &URefractCommonLocalUserSettings::execGet },
		{ .NameUTF8 = UTF8TEXT("GetAudioOutputDeviceId"), .Pointer = &URefractCommonLocalUserSettings::execGetAudioOutputDeviceId },
		{ .NameUTF8 = UTF8TEXT("GetControllerPlatform"), .Pointer = &URefractCommonLocalUserSettings::execGetControllerPlatform },
		{ .NameUTF8 = UTF8TEXT("GetDefaultMobileFrameRate"), .Pointer = &URefractCommonLocalUserSettings::execGetDefaultMobileFrameRate },
		{ .NameUTF8 = UTF8TEXT("GetDesiredDeviceProfileQualitySuffix"), .Pointer = &URefractCommonLocalUserSettings::execGetDesiredDeviceProfileQualitySuffix },
		{ .NameUTF8 = UTF8TEXT("GetDesiredMobileFrameRateLimit"), .Pointer = &URefractCommonLocalUserSettings::execGetDesiredMobileFrameRateLimit },
		{ .NameUTF8 = UTF8TEXT("GetDialogueVolume"), .Pointer = &URefractCommonLocalUserSettings::execGetDialogueVolume },
		{ .NameUTF8 = UTF8TEXT("GetDisplayGamma"), .Pointer = &URefractCommonLocalUserSettings::execGetDisplayGamma },
		{ .NameUTF8 = UTF8TEXT("GetFirstFrameRateWithQualityLimit"), .Pointer = &URefractCommonLocalUserSettings::execGetFirstFrameRateWithQualityLimit },
		{ .NameUTF8 = UTF8TEXT("GetFrameRateLimit_Always"), .Pointer = &URefractCommonLocalUserSettings::execGetFrameRateLimit_Always },
		{ .NameUTF8 = UTF8TEXT("GetFrameRateLimit_InMenu"), .Pointer = &URefractCommonLocalUserSettings::execGetFrameRateLimit_InMenu },
		{ .NameUTF8 = UTF8TEXT("GetFrameRateLimit_OnBattery"), .Pointer = &URefractCommonLocalUserSettings::execGetFrameRateLimit_OnBattery },
		{ .NameUTF8 = UTF8TEXT("GetFrameRateLimit_WhenBackground"), .Pointer = &URefractCommonLocalUserSettings::execGetFrameRateLimit_WhenBackground },
		{ .NameUTF8 = UTF8TEXT("GetLowestQualityWithFrameRateLimit"), .Pointer = &URefractCommonLocalUserSettings::execGetLowestQualityWithFrameRateLimit },
		{ .NameUTF8 = UTF8TEXT("GetMaxMobileFrameRate"), .Pointer = &URefractCommonLocalUserSettings::execGetMaxMobileFrameRate },
		{ .NameUTF8 = UTF8TEXT("GetMaxSupportedOverallQualityLevel"), .Pointer = &URefractCommonLocalUserSettings::execGetMaxSupportedOverallQualityLevel },
		{ .NameUTF8 = UTF8TEXT("GetMusicVolume"), .Pointer = &URefractCommonLocalUserSettings::execGetMusicVolume },
		{ .NameUTF8 = UTF8TEXT("GetOverallVolume"), .Pointer = &URefractCommonLocalUserSettings::execGetOverallVolume },
		{ .NameUTF8 = UTF8TEXT("GetSafeZone"), .Pointer = &URefractCommonLocalUserSettings::execGetSafeZone },
		{ .NameUTF8 = UTF8TEXT("GetSoundFXVolume"), .Pointer = &URefractCommonLocalUserSettings::execGetSoundFXVolume },
		{ .NameUTF8 = UTF8TEXT("GetVoiceChatVolume"), .Pointer = &URefractCommonLocalUserSettings::execGetVoiceChatVolume },
		{ .NameUTF8 = UTF8TEXT("IsHDRAudioModeEnabled"), .Pointer = &URefractCommonLocalUserSettings::execIsHDRAudioModeEnabled },
		{ .NameUTF8 = UTF8TEXT("IsHeadphoneModeEnabled"), .Pointer = &URefractCommonLocalUserSettings::execIsHeadphoneModeEnabled },
		{ .NameUTF8 = UTF8TEXT("IsSafeZoneSet"), .Pointer = &URefractCommonLocalUserSettings::execIsSafeZoneSet },
		{ .NameUTF8 = UTF8TEXT("IsSupportedMobileFramePace"), .Pointer = &URefractCommonLocalUserSettings::execIsSupportedMobileFramePace },
		{ .NameUTF8 = UTF8TEXT("ResetToMobileDeviceDefaults"), .Pointer = &URefractCommonLocalUserSettings::execResetToMobileDeviceDefaults },
		{ .NameUTF8 = UTF8TEXT("RunAutoBenchmark"), .Pointer = &URefractCommonLocalUserSettings::execRunAutoBenchmark },
		{ .NameUTF8 = UTF8TEXT("SetAudioOutputDeviceId"), .Pointer = &URefractCommonLocalUserSettings::execSetAudioOutputDeviceId },
		{ .NameUTF8 = UTF8TEXT("SetControllerPlatform"), .Pointer = &URefractCommonLocalUserSettings::execSetControllerPlatform },
		{ .NameUTF8 = UTF8TEXT("SetDesiredDeviceProfileQualitySuffix"), .Pointer = &URefractCommonLocalUserSettings::execSetDesiredDeviceProfileQualitySuffix },
		{ .NameUTF8 = UTF8TEXT("SetDesiredMobileFrameRateLimit"), .Pointer = &URefractCommonLocalUserSettings::execSetDesiredMobileFrameRateLimit },
		{ .NameUTF8 = UTF8TEXT("SetDialogueVolume"), .Pointer = &URefractCommonLocalUserSettings::execSetDialogueVolume },
		{ .NameUTF8 = UTF8TEXT("SetDisplayGamma"), .Pointer = &URefractCommonLocalUserSettings::execSetDisplayGamma },
		{ .NameUTF8 = UTF8TEXT("SetFrameRateLimit_Always"), .Pointer = &URefractCommonLocalUserSettings::execSetFrameRateLimit_Always },
		{ .NameUTF8 = UTF8TEXT("SetFrameRateLimit_InMenu"), .Pointer = &URefractCommonLocalUserSettings::execSetFrameRateLimit_InMenu },
		{ .NameUTF8 = UTF8TEXT("SetFrameRateLimit_OnBattery"), .Pointer = &URefractCommonLocalUserSettings::execSetFrameRateLimit_OnBattery },
		{ .NameUTF8 = UTF8TEXT("SetFrameRateLimit_WhenBackground"), .Pointer = &URefractCommonLocalUserSettings::execSetFrameRateLimit_WhenBackground },
		{ .NameUTF8 = UTF8TEXT("SetHDRAudioModeEnabled"), .Pointer = &URefractCommonLocalUserSettings::execSetHDRAudioModeEnabled },
		{ .NameUTF8 = UTF8TEXT("SetHeadphoneModeEnabled"), .Pointer = &URefractCommonLocalUserSettings::execSetHeadphoneModeEnabled },
		{ .NameUTF8 = UTF8TEXT("SetMusicVolume"), .Pointer = &URefractCommonLocalUserSettings::execSetMusicVolume },
		{ .NameUTF8 = UTF8TEXT("SetOverallVolume"), .Pointer = &URefractCommonLocalUserSettings::execSetOverallVolume },
		{ .NameUTF8 = UTF8TEXT("SetSafeZone"), .Pointer = &URefractCommonLocalUserSettings::execSetSafeZone },
		{ .NameUTF8 = UTF8TEXT("SetShouldUseFrontendPerformanceSettings"), .Pointer = &URefractCommonLocalUserSettings::execSetShouldUseFrontendPerformanceSettings },
		{ .NameUTF8 = UTF8TEXT("SetSoundFXVolume"), .Pointer = &URefractCommonLocalUserSettings::execSetSoundFXVolume },
		{ .NameUTF8 = UTF8TEXT("SetVoiceChatVolume"), .Pointer = &URefractCommonLocalUserSettings::execSetVoiceChatVolume },
		{ .NameUTF8 = UTF8TEXT("ShouldRunAutoBenchmarkAtStartup"), .Pointer = &URefractCommonLocalUserSettings::execShouldRunAutoBenchmarkAtStartup },
		{ .NameUTF8 = UTF8TEXT("ShouldUseFrontendPerformanceSettings"), .Pointer = &URefractCommonLocalUserSettings::execShouldUseFrontendPerformanceSettings },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_CanModifyHeadphoneModeEnabled, "CanModifyHeadphoneModeEnabled" }, // 3703650906
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_CanRunAutoBenchmark, "CanRunAutoBenchmark" }, // 1004096366
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_Get, "Get" }, // 946697424
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetAudioOutputDeviceId, "GetAudioOutputDeviceId" }, // 3898894196
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetControllerPlatform, "GetControllerPlatform" }, // 1945176531
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDefaultMobileFrameRate, "GetDefaultMobileFrameRate" }, // 1220874981
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredDeviceProfileQualitySuffix, "GetDesiredDeviceProfileQualitySuffix" }, // 4089452882
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDesiredMobileFrameRateLimit, "GetDesiredMobileFrameRateLimit" }, // 1653821320
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDialogueVolume, "GetDialogueVolume" }, // 2319437683
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetDisplayGamma, "GetDisplayGamma" }, // 3840861126
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFirstFrameRateWithQualityLimit, "GetFirstFrameRateWithQualityLimit" }, // 1626461080
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_Always, "GetFrameRateLimit_Always" }, // 4179969004
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_InMenu, "GetFrameRateLimit_InMenu" }, // 1211837747
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_OnBattery, "GetFrameRateLimit_OnBattery" }, // 3088804390
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetFrameRateLimit_WhenBackground, "GetFrameRateLimit_WhenBackground" }, // 2303374726
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetLowestQualityWithFrameRateLimit, "GetLowestQualityWithFrameRateLimit" }, // 1831678537
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxMobileFrameRate, "GetMaxMobileFrameRate" }, // 956962641
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMaxSupportedOverallQualityLevel, "GetMaxSupportedOverallQualityLevel" }, // 3898635105
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetMusicVolume, "GetMusicVolume" }, // 2968733777
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetOverallVolume, "GetOverallVolume" }, // 2920718496
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSafeZone, "GetSafeZone" }, // 2982918371
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetSoundFXVolume, "GetSoundFXVolume" }, // 878910182
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_GetVoiceChatVolume, "GetVoiceChatVolume" }, // 1961721814
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHDRAudioModeEnabled, "IsHDRAudioModeEnabled" }, // 1058460145
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_IsHeadphoneModeEnabled, "IsHeadphoneModeEnabled" }, // 4272907198
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSafeZoneSet, "IsSafeZoneSet" }, // 1420211624
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_IsSupportedMobileFramePace, "IsSupportedMobileFramePace" }, // 21991436
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_ResetToMobileDeviceDefaults, "ResetToMobileDeviceDefaults" }, // 431860253
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_RunAutoBenchmark, "RunAutoBenchmark" }, // 1588683831
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetAudioOutputDeviceId, "SetAudioOutputDeviceId" }, // 3669739113
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetControllerPlatform, "SetControllerPlatform" }, // 1394958000
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredDeviceProfileQualitySuffix, "SetDesiredDeviceProfileQualitySuffix" }, // 230980164
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDesiredMobileFrameRateLimit, "SetDesiredMobileFrameRateLimit" }, // 2495907628
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDialogueVolume, "SetDialogueVolume" }, // 2156917157
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetDisplayGamma, "SetDisplayGamma" }, // 1396888585
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_Always, "SetFrameRateLimit_Always" }, // 1741106467
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_InMenu, "SetFrameRateLimit_InMenu" }, // 2497969563
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_OnBattery, "SetFrameRateLimit_OnBattery" }, // 4021397108
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetFrameRateLimit_WhenBackground, "SetFrameRateLimit_WhenBackground" }, // 951949537
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHDRAudioModeEnabled, "SetHDRAudioModeEnabled" }, // 1447585453
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetHeadphoneModeEnabled, "SetHeadphoneModeEnabled" }, // 2350863801
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetMusicVolume, "SetMusicVolume" }, // 3568202487
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetOverallVolume, "SetOverallVolume" }, // 761723007
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSafeZone, "SetSafeZone" }, // 820667707
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetShouldUseFrontendPerformanceSettings, "SetShouldUseFrontendPerformanceSettings" }, // 2394921448
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetSoundFXVolume, "SetSoundFXVolume" }, // 3847878657
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_SetVoiceChatVolume, "SetVoiceChatVolume" }, // 1853167989
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldRunAutoBenchmarkAtStartup, "ShouldRunAutoBenchmarkAtStartup" }, // 541696006
		{ &Z_Construct_UFunction_URefractCommonLocalUserSettings_ShouldUseFrontendPerformanceSettings, "ShouldUseFrontendPerformanceSettings" }, // 3044801476
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URefractCommonLocalUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URefractCommonLocalUserSettings_Statics

// ********** Begin Class URefractCommonLocalUserSettings Property Definitions *********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_DisplayGamma = { "DisplayGamma", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, DisplayGamma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayGamma_MetaData), NewProp_DisplayGamma_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_FrameRateLimit_OnBattery = { "FrameRateLimit_OnBattery", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, FrameRateLimit_OnBattery), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRateLimit_OnBattery_MetaData), NewProp_FrameRateLimit_OnBattery_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_FrameRateLimit_InMenu = { "FrameRateLimit_InMenu", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, FrameRateLimit_InMenu), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRateLimit_InMenu_MetaData), NewProp_FrameRateLimit_InMenu_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_FrameRateLimit_WhenBackground = { "FrameRateLimit_WhenBackground", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, FrameRateLimit_WhenBackground), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRateLimit_WhenBackground_MetaData), NewProp_FrameRateLimit_WhenBackground_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_MobileFrameRateLimit = { "MobileFrameRateLimit", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, MobileFrameRateLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileFrameRateLimit_MetaData), NewProp_MobileFrameRateLimit_MetaData) };
void Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bDesiredHeadphoneMode_SetBit(void* Obj)
{
	((URefractCommonLocalUserSettings*)Obj)->bDesiredHeadphoneMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bDesiredHeadphoneMode = { "bDesiredHeadphoneMode", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URefractCommonLocalUserSettings), &Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bDesiredHeadphoneMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDesiredHeadphoneMode_MetaData), NewProp_bDesiredHeadphoneMode_MetaData) };
void Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bUseHeadphoneMode_SetBit(void* Obj)
{
	((URefractCommonLocalUserSettings*)Obj)->bUseHeadphoneMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bUseHeadphoneMode = { "bUseHeadphoneMode", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URefractCommonLocalUserSettings), &Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bUseHeadphoneMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHeadphoneMode_MetaData), NewProp_bUseHeadphoneMode_MetaData) };
void Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bUseHDRAudioMode_SetBit(void* Obj)
{
	((URefractCommonLocalUserSettings*)Obj)->bUseHDRAudioMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bUseHDRAudioMode = { "bUseHDRAudioMode", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URefractCommonLocalUserSettings), &Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bUseHDRAudioMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHDRAudioMode_MetaData), NewProp_bUseHDRAudioMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_OverallVolume = { "OverallVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, OverallVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallVolume_MetaData), NewProp_OverallVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, MusicVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicVolume_MetaData), NewProp_MusicVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_SoundFXVolume = { "SoundFXVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, SoundFXVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundFXVolume_MetaData), NewProp_SoundFXVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_DialogueVolume = { "DialogueVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, DialogueVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueVolume_MetaData), NewProp_DialogueVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_VoiceChatVolume = { "VoiceChatVolume", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, VoiceChatVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceChatVolume_MetaData), NewProp_VoiceChatVolume_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_AudioOutputDeviceId = { "AudioOutputDeviceId", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, AudioOutputDeviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioOutputDeviceId_MetaData), NewProp_AudioOutputDeviceId_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_SafeZoneScale = { "SafeZoneScale", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, SafeZoneScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeZoneScale_MetaData), NewProp_SafeZoneScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_ControlBusMap_ValueProp = { "ControlBusMap", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USoundControlBus_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_ControlBusMap_Key_KeyProp = { "ControlBusMap_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_ControlBusMap = { "ControlBusMap", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, ControlBusMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlBusMap_MetaData), NewProp_ControlBusMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_ControlBusMix = { "ControlBusMix", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, ControlBusMix), Z_Construct_UClass_USoundControlBusMix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlBusMix_MetaData), NewProp_ControlBusMix_MetaData) };
void Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bSoundControlBusMixLoaded_SetBit(void* Obj)
{
	((URefractCommonLocalUserSettings*)Obj)->bSoundControlBusMixLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bSoundControlBusMixLoaded = { "bSoundControlBusMixLoaded", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URefractCommonLocalUserSettings), &Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bSoundControlBusMixLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSoundControlBusMixLoaded_MetaData), NewProp_bSoundControlBusMixLoaded_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_DesiredUserChosenDeviceProfileSuffix = { "DesiredUserChosenDeviceProfileSuffix", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, DesiredUserChosenDeviceProfileSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredUserChosenDeviceProfileSuffix_MetaData), NewProp_DesiredUserChosenDeviceProfileSuffix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_CurrentAppliedDeviceProfileOverrideSuffix = { "CurrentAppliedDeviceProfileOverrideSuffix", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, CurrentAppliedDeviceProfileOverrideSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAppliedDeviceProfileOverrideSuffix_MetaData), NewProp_CurrentAppliedDeviceProfileOverrideSuffix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_UserChosenDeviceProfileSuffix = { "UserChosenDeviceProfileSuffix", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, UserChosenDeviceProfileSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserChosenDeviceProfileSuffix_MetaData), NewProp_UserChosenDeviceProfileSuffix_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_ControllerPlatform = { "ControllerPlatform", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, ControllerPlatform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerPlatform_MetaData), NewProp_ControllerPlatform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_ControllerPreset = { "ControllerPreset", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, ControllerPreset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerPreset_MetaData), NewProp_ControllerPreset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_InputConfigName = { "InputConfigName", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URefractCommonLocalUserSettings, InputConfigName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfigName_MetaData), NewProp_InputConfigName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_DisplayGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_FrameRateLimit_OnBattery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_FrameRateLimit_InMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_FrameRateLimit_WhenBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_MobileFrameRateLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bDesiredHeadphoneMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bUseHeadphoneMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bUseHDRAudioMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_OverallVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_MusicVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_SoundFXVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_DialogueVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_VoiceChatVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_AudioOutputDeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_SafeZoneScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_ControlBusMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_ControlBusMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_ControlBusMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_ControlBusMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_bSoundControlBusMixLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_DesiredUserChosenDeviceProfileSuffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_CurrentAppliedDeviceProfileOverrideSuffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_UserChosenDeviceProfileSuffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_ControllerPlatform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_ControllerPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::NewProp_InputConfigName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::PropPointers) < 2048);
// ********** End Class URefractCommonLocalUserSettings Property Definitions ***********************
UObject* (*const Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_RefractCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::ClassParams = {
	&URefractCommonLocalUserSettings::StaticClass,
	"GameUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::PropPointers),
	0,
	0x408800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::Class_MetaDataParams)
};
void URefractCommonLocalUserSettings::StaticRegisterNativesURefractCommonLocalUserSettings()
{
	UClass* Class = URefractCommonLocalUserSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::Funcs));
}
UClass* Z_Construct_UClass_URefractCommonLocalUserSettings()
{
	if (!Z_Registration_Info_UClass_URefractCommonLocalUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URefractCommonLocalUserSettings.OuterSingleton, Z_Construct_UClass_URefractCommonLocalUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URefractCommonLocalUserSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URefractCommonLocalUserSettings);
URefractCommonLocalUserSettings::~URefractCommonLocalUserSettings() {}
// ********** End Class URefractCommonLocalUserSettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_GameFramework_RefractCommonLocalUserSettings_h__Script_RefractCommon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URefractCommonLocalUserSettings, URefractCommonLocalUserSettings::StaticClass, TEXT("URefractCommonLocalUserSettings"), &Z_Registration_Info_UClass_URefractCommonLocalUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URefractCommonLocalUserSettings), 3100292123U) },
	};
}; // Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_GameFramework_RefractCommonLocalUserSettings_h__Script_RefractCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_GameFramework_RefractCommonLocalUserSettings_h__Script_RefractCommon_3144906360{
	TEXT("/Script/RefractCommon"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_GameFramework_RefractCommonLocalUserSettings_h__Script_RefractCommon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_GameFramework_RefractCommonLocalUserSettings_h__Script_RefractCommon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
