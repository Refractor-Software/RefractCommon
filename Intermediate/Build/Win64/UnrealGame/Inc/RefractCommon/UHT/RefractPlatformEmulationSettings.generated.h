// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/RefractPlatformEmulationSettings.h"

#ifdef REFRACTCOMMON_RefractPlatformEmulationSettings_generated_h
#error "RefractPlatformEmulationSettings.generated.h already included, missing '#pragma once' in RefractPlatformEmulationSettings.h"
#endif
#define REFRACTCOMMON_RefractPlatformEmulationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URefractPlatformEmulationSettings ****************************************
#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformEmulationSettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetKnownDeviceProfiles); \
	DECLARE_FUNCTION(execGetKnownPlatformIds);


struct Z_Construct_UClass_URefractPlatformEmulationSettings_Statics;
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractPlatformEmulationSettings_NoRegister();

#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformEmulationSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURefractPlatformEmulationSettings(); \
	friend struct ::Z_Construct_UClass_URefractPlatformEmulationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REFRACTCOMMON_API UClass* ::Z_Construct_UClass_URefractPlatformEmulationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URefractPlatformEmulationSettings, UDeveloperSettingsBackedByCVars, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RefractCommon"), Z_Construct_UClass_URefractPlatformEmulationSettings_NoRegister) \
	DECLARE_SERIALIZER(URefractPlatformEmulationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformEmulationSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URefractPlatformEmulationSettings(URefractPlatformEmulationSettings&&) = delete; \
	URefractPlatformEmulationSettings(const URefractPlatformEmulationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REFRACTCOMMON_API, URefractPlatformEmulationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URefractPlatformEmulationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URefractPlatformEmulationSettings) \
	REFRACTCOMMON_API virtual ~URefractPlatformEmulationSettings();


#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformEmulationSettings_h_15_PROLOG
#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformEmulationSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformEmulationSettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformEmulationSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformEmulationSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URefractPlatformEmulationSettings;

// ********** End Class URefractPlatformEmulationSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractPlatformEmulationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
