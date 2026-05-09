// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/RefractCommonAudioSettings.h"

#ifdef REFRACTCOMMON_RefractCommonAudioSettings_generated_h
#error "RefractCommonAudioSettings.generated.h already included, missing '#pragma once' in RefractCommonAudioSettings.h"
#endif
#define REFRACTCOMMON_RefractCommonAudioSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URefractCommonAudioSettings **********************************************
struct Z_Construct_UClass_URefractCommonAudioSettings_Statics;
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractCommonAudioSettings_NoRegister();

#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractCommonAudioSettings_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURefractCommonAudioSettings(); \
	friend struct ::Z_Construct_UClass_URefractCommonAudioSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REFRACTCOMMON_API UClass* ::Z_Construct_UClass_URefractCommonAudioSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URefractCommonAudioSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/RefractCommon"), Z_Construct_UClass_URefractCommonAudioSettings_NoRegister) \
	DECLARE_SERIALIZER(URefractCommonAudioSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractCommonAudioSettings_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URefractCommonAudioSettings(URefractCommonAudioSettings&&) = delete; \
	URefractCommonAudioSettings(const URefractCommonAudioSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REFRACTCOMMON_API, URefractCommonAudioSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URefractCommonAudioSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URefractCommonAudioSettings) \
	REFRACTCOMMON_API virtual ~URefractCommonAudioSettings();


#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractCommonAudioSettings_h_20_PROLOG
#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractCommonAudioSettings_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractCommonAudioSettings_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractCommonAudioSettings_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URefractCommonAudioSettings;

// ********** End Class URefractCommonAudioSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Settings_RefractCommonAudioSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
