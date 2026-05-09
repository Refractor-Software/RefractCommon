// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/RefractCommonLocalUserSettings.h"

#ifdef REFRACTCOMMON_RefractCommonLocalUserSettings_generated_h
#error "RefractCommonLocalUserSettings.generated.h already included, missing '#pragma once' in RefractCommonLocalUserSettings.h"
#endif
#define REFRACTCOMMON_RefractCommonLocalUserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URefractCommonLocalUserSettings;

// ********** Begin Class URefractCommonLocalUserSettings ******************************************
#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_GameFramework_RefractCommonLocalUserSettings_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetControllerPlatform); \
	DECLARE_FUNCTION(execSetControllerPlatform); \
	DECLARE_FUNCTION(execSetAudioOutputDeviceId); \
	DECLARE_FUNCTION(execGetAudioOutputDeviceId); \
	DECLARE_FUNCTION(execSetVoiceChatVolume); \
	DECLARE_FUNCTION(execGetVoiceChatVolume); \
	DECLARE_FUNCTION(execSetDialogueVolume); \
	DECLARE_FUNCTION(execGetDialogueVolume); \
	DECLARE_FUNCTION(execSetSoundFXVolume); \
	DECLARE_FUNCTION(execGetSoundFXVolume); \
	DECLARE_FUNCTION(execSetMusicVolume); \
	DECLARE_FUNCTION(execGetMusicVolume); \
	DECLARE_FUNCTION(execSetOverallVolume); \
	DECLARE_FUNCTION(execGetOverallVolume); \
	DECLARE_FUNCTION(execSetHDRAudioModeEnabled); \
	DECLARE_FUNCTION(execIsHDRAudioModeEnabled); \
	DECLARE_FUNCTION(execCanModifyHeadphoneModeEnabled); \
	DECLARE_FUNCTION(execSetHeadphoneModeEnabled); \
	DECLARE_FUNCTION(execIsHeadphoneModeEnabled); \
	DECLARE_FUNCTION(execGetDesiredDeviceProfileQualitySuffix); \
	DECLARE_FUNCTION(execSetDesiredDeviceProfileQualitySuffix); \
	DECLARE_FUNCTION(execRunAutoBenchmark); \
	DECLARE_FUNCTION(execShouldRunAutoBenchmarkAtStartup); \
	DECLARE_FUNCTION(execCanRunAutoBenchmark); \
	DECLARE_FUNCTION(execGetMaxSupportedOverallQualityLevel); \
	DECLARE_FUNCTION(execResetToMobileDeviceDefaults); \
	DECLARE_FUNCTION(execGetLowestQualityWithFrameRateLimit); \
	DECLARE_FUNCTION(execGetFirstFrameRateWithQualityLimit); \
	DECLARE_FUNCTION(execIsSupportedMobileFramePace); \
	DECLARE_FUNCTION(execGetMaxMobileFrameRate); \
	DECLARE_FUNCTION(execGetDefaultMobileFrameRate); \
	DECLARE_FUNCTION(execGetDesiredMobileFrameRateLimit); \
	DECLARE_FUNCTION(execSetDesiredMobileFrameRateLimit); \
	DECLARE_FUNCTION(execShouldUseFrontendPerformanceSettings); \
	DECLARE_FUNCTION(execSetShouldUseFrontendPerformanceSettings); \
	DECLARE_FUNCTION(execGetFrameRateLimit_Always); \
	DECLARE_FUNCTION(execSetFrameRateLimit_Always); \
	DECLARE_FUNCTION(execGetFrameRateLimit_WhenBackground); \
	DECLARE_FUNCTION(execSetFrameRateLimit_WhenBackground); \
	DECLARE_FUNCTION(execGetFrameRateLimit_InMenu); \
	DECLARE_FUNCTION(execSetFrameRateLimit_InMenu); \
	DECLARE_FUNCTION(execGetFrameRateLimit_OnBattery); \
	DECLARE_FUNCTION(execSetFrameRateLimit_OnBattery); \
	DECLARE_FUNCTION(execIsSafeZoneSet); \
	DECLARE_FUNCTION(execGetSafeZone); \
	DECLARE_FUNCTION(execSetSafeZone); \
	DECLARE_FUNCTION(execGetDisplayGamma); \
	DECLARE_FUNCTION(execSetDisplayGamma); \
	DECLARE_FUNCTION(execGet);


struct Z_Construct_UClass_URefractCommonLocalUserSettings_Statics;
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractCommonLocalUserSettings_NoRegister();

#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_GameFramework_RefractCommonLocalUserSettings_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURefractCommonLocalUserSettings(); \
	friend struct ::Z_Construct_UClass_URefractCommonLocalUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REFRACTCOMMON_API UClass* ::Z_Construct_UClass_URefractCommonLocalUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URefractCommonLocalUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RefractCommon"), Z_Construct_UClass_URefractCommonLocalUserSettings_NoRegister) \
	DECLARE_SERIALIZER(URefractCommonLocalUserSettings)


#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_GameFramework_RefractCommonLocalUserSettings_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URefractCommonLocalUserSettings(URefractCommonLocalUserSettings&&) = delete; \
	URefractCommonLocalUserSettings(const URefractCommonLocalUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REFRACTCOMMON_API, URefractCommonLocalUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URefractCommonLocalUserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URefractCommonLocalUserSettings) \
	REFRACTCOMMON_API virtual ~URefractCommonLocalUserSettings();


#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_GameFramework_RefractCommonLocalUserSettings_h_23_PROLOG
#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_GameFramework_RefractCommonLocalUserSettings_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_GameFramework_RefractCommonLocalUserSettings_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_GameFramework_RefractCommonLocalUserSettings_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_GameFramework_RefractCommonLocalUserSettings_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URefractCommonLocalUserSettings;

// ********** End Class URefractCommonLocalUserSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_GameFramework_RefractCommonLocalUserSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
