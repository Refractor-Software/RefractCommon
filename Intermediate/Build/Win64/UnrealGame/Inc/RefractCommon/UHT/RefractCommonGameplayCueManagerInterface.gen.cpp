// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/RefractCommonGameplayCueManagerInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRefractCommonGameplayCueManagerInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractCommonGameplayCueManagerInterface();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_RefractCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface URefractCommonGameplayCueManagerInterface ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_URefractCommonGameplayCueManagerInterface;
UClass* URefractCommonGameplayCueManagerInterface::GetPrivateStaticClass()
{
	using TClass = URefractCommonGameplayCueManagerInterface;
	if (!Z_Registration_Info_UClass_URefractCommonGameplayCueManagerInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RefractCommonGameplayCueManagerInterface"),
			Z_Registration_Info_UClass_URefractCommonGameplayCueManagerInterface.InnerSingleton,
			StaticRegisterNativesURefractCommonGameplayCueManagerInterface,
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
	return Z_Registration_Info_UClass_URefractCommonGameplayCueManagerInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_NoRegister()
{
	return URefractCommonGameplayCueManagerInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/RefractCommonGameplayCueManagerInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface URefractCommonGameplayCueManagerInterface constinit property declarations 
// ********** End Interface URefractCommonGameplayCueManagerInterface constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRefractCommonGameplayCueManagerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_Statics
UObject* (*const Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_RefractCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_Statics::ClassParams = {
	&URefractCommonGameplayCueManagerInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_Statics::Class_MetaDataParams)
};
void URefractCommonGameplayCueManagerInterface::StaticRegisterNativesURefractCommonGameplayCueManagerInterface()
{
}
UClass* Z_Construct_UClass_URefractCommonGameplayCueManagerInterface()
{
	if (!Z_Registration_Info_UClass_URefractCommonGameplayCueManagerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URefractCommonGameplayCueManagerInterface.OuterSingleton, Z_Construct_UClass_URefractCommonGameplayCueManagerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URefractCommonGameplayCueManagerInterface.OuterSingleton;
}
URefractCommonGameplayCueManagerInterface::URefractCommonGameplayCueManagerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URefractCommonGameplayCueManagerInterface);
// ********** End Interface URefractCommonGameplayCueManagerInterface ******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h__Script_RefractCommon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URefractCommonGameplayCueManagerInterface, URefractCommonGameplayCueManagerInterface::StaticClass, TEXT("URefractCommonGameplayCueManagerInterface"), &Z_Registration_Info_UClass_URefractCommonGameplayCueManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URefractCommonGameplayCueManagerInterface), 2968671652U) },
	};
}; // Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h__Script_RefractCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h__Script_RefractCommon_194011910{
	TEXT("/Script/RefractCommon"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h__Script_RefractCommon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_Interfaces_RefractCommonGameplayCueManagerInterface_h__Script_RefractCommon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
