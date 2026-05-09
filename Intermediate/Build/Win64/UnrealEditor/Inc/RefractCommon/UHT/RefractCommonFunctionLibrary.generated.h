// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RefractCommonFunctionLibrary.h"

#ifdef REFRACTCOMMON_RefractCommonFunctionLibrary_generated_h
#error "RefractCommonFunctionLibrary.generated.h already included, missing '#pragma once' in RefractCommonFunctionLibrary.h"
#endif
#define REFRACTCOMMON_RefractCommonFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URefractCommonFunctionLibrary ********************************************
#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_RefractCommonFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsInEditor); \
	DECLARE_FUNCTION(execGetUnrealEngineAttribution); \
	DECLARE_FUNCTION(execGetProductBuildYear); \
	DECLARE_FUNCTION(execGetProductName);


struct Z_Construct_UClass_URefractCommonFunctionLibrary_Statics;
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractCommonFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_RefractCommonFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURefractCommonFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_URefractCommonFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REFRACTCOMMON_API UClass* ::Z_Construct_UClass_URefractCommonFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(URefractCommonFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RefractCommon"), Z_Construct_UClass_URefractCommonFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(URefractCommonFunctionLibrary)


#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_RefractCommonFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REFRACTCOMMON_API URefractCommonFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URefractCommonFunctionLibrary(URefractCommonFunctionLibrary&&) = delete; \
	URefractCommonFunctionLibrary(const URefractCommonFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REFRACTCOMMON_API, URefractCommonFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URefractCommonFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URefractCommonFunctionLibrary) \
	REFRACTCOMMON_API virtual ~URefractCommonFunctionLibrary();


#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_RefractCommonFunctionLibrary_h_16_PROLOG
#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_RefractCommonFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_RefractCommonFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_RefractCommonFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_RefractCommonFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URefractCommonFunctionLibrary;

// ********** End Class URefractCommonFunctionLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_RefractCommonFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
