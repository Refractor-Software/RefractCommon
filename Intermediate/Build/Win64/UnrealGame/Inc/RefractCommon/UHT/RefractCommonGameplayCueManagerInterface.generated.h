// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/RefractCommonGameplayCueManagerInterface.h"

#ifdef REFRACTCOMMON_RefractCommonGameplayCueManagerInterface_generated_h
#error "RefractCommonGameplayCueManagerInterface.generated.h already included, missing '#pragma once' in RefractCommonGameplayCueManagerInterface.h"
#endif
#define REFRACTCOMMON_RefractCommonGameplayCueManagerInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface URefractCommonGameplayCueManagerInterface ****************************
struct Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_Statics;
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_NoRegister();

#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	REFRACTCOMMON_API URefractCommonGameplayCueManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URefractCommonGameplayCueManagerInterface(URefractCommonGameplayCueManagerInterface&&) = delete; \
	URefractCommonGameplayCueManagerInterface(const URefractCommonGameplayCueManagerInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(REFRACTCOMMON_API, URefractCommonGameplayCueManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URefractCommonGameplayCueManagerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URefractCommonGameplayCueManagerInterface) \
	virtual ~URefractCommonGameplayCueManagerInterface() = default;


#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURefractCommonGameplayCueManagerInterface(); \
	friend struct ::Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REFRACTCOMMON_API UClass* ::Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(URefractCommonGameplayCueManagerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RefractCommon"), Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_NoRegister) \
	DECLARE_SERIALIZER(URefractCommonGameplayCueManagerInterface)


#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRefractCommonGameplayCueManagerInterface() {} \
public: \
	typedef URefractCommonGameplayCueManagerInterface UClassType; \
	typedef IRefractCommonGameplayCueManagerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h_9_PROLOG
#define FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URefractCommonGameplayCueManagerInterface;

// ********** End Interface URefractCommonGameplayCueManagerInterface ******************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
