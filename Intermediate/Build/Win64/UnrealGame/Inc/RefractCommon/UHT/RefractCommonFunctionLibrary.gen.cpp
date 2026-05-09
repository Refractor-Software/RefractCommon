// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RefractCommonFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRefractCommonFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractCommonFunctionLibrary();
REFRACTCOMMON_API UClass* Z_Construct_UClass_URefractCommonFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_RefractCommon();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URefractCommonFunctionLibrary Function GetProductBuildYear ***************
struct Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear_Statics
{
	struct RefractCommonFunctionLibrary_eventGetProductBuildYear_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Text Resources | Product" },
		{ "Comment", "/**\n\x09 * @return The year this product was last built. This may be outdated if the project hasn't been recompiled in a while.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RefractCommonFunctionLibrary.h" },
		{ "ToolTip", "@return The year this product was last built. This may be outdated if the project hasn't been recompiled in a while." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetProductBuildYear constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetProductBuildYear constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetProductBuildYear Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonFunctionLibrary_eventGetProductBuildYear_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear_Statics::PropPointers) < 2048);
// ********** End Function GetProductBuildYear Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonFunctionLibrary, nullptr, "GetProductBuildYear", 	Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear_Statics::RefractCommonFunctionLibrary_eventGetProductBuildYear_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear_Statics::RefractCommonFunctionLibrary_eventGetProductBuildYear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonFunctionLibrary::execGetProductBuildYear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URefractCommonFunctionLibrary::GetProductBuildYear();
	P_NATIVE_END;
}
// ********** End Class URefractCommonFunctionLibrary Function GetProductBuildYear *****************

// ********** Begin Class URefractCommonFunctionLibrary Function GetProductName ********************
struct Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName_Statics
{
	struct RefractCommonFunctionLibrary_eventGetProductName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Text Resources | Product" },
		{ "Comment", "/**\n\x09 * @return The non-localized name this product is using for publishing, as specified by the Project Settings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RefractCommonFunctionLibrary.h" },
		{ "ToolTip", "@return The non-localized name this product is using for publishing, as specified by the Project Settings." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetProductName constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetProductName constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetProductName Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonFunctionLibrary_eventGetProductName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName_Statics::PropPointers) < 2048);
// ********** End Function GetProductName Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonFunctionLibrary, nullptr, "GetProductName", 	Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName_Statics::RefractCommonFunctionLibrary_eventGetProductName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName_Statics::RefractCommonFunctionLibrary_eventGetProductName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonFunctionLibrary::execGetProductName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URefractCommonFunctionLibrary::GetProductName();
	P_NATIVE_END;
}
// ********** End Class URefractCommonFunctionLibrary Function GetProductName **********************

// ********** Begin Class URefractCommonFunctionLibrary Function GetUnrealEngineAttribution ********
struct Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution_Statics
{
	struct RefractCommonFunctionLibrary_eventGetUnrealEngineAttribution_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Text Resources | Legal" },
		{ "Comment", "/**\n\x09 * @return The Unreal Engine attribution notice for this project, as specified by section 7a of the Unreal Engine EULA.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RefractCommonFunctionLibrary.h" },
		{ "ToolTip", "@return The Unreal Engine attribution notice for this project, as specified by section 7a of the Unreal Engine EULA." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetUnrealEngineAttribution constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetUnrealEngineAttribution constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetUnrealEngineAttribution Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RefractCommonFunctionLibrary_eventGetUnrealEngineAttribution_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution_Statics::PropPointers) < 2048);
// ********** End Function GetUnrealEngineAttribution Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonFunctionLibrary, nullptr, "GetUnrealEngineAttribution", 	Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution_Statics::RefractCommonFunctionLibrary_eventGetUnrealEngineAttribution_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution_Statics::RefractCommonFunctionLibrary_eventGetUnrealEngineAttribution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonFunctionLibrary::execGetUnrealEngineAttribution)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=URefractCommonFunctionLibrary::GetUnrealEngineAttribution();
	P_NATIVE_END;
}
// ********** End Class URefractCommonFunctionLibrary Function GetUnrealEngineAttribution **********

// ********** Begin Class URefractCommonFunctionLibrary Function IsInEditor ************************
struct Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics
{
	struct RefractCommonFunctionLibrary_eventIsInEditor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Platform" },
		{ "Comment", "/**\n\x09 * @return Whether we are in the editor or a standalone game.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RefractCommonFunctionLibrary.h" },
		{ "ToolTip", "@return Whether we are in the editor or a standalone game." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsInEditor constinit property declarations ****************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsInEditor constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsInEditor Property Definitions ***************************************
void Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RefractCommonFunctionLibrary_eventIsInEditor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RefractCommonFunctionLibrary_eventIsInEditor_Parms), &Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics::PropPointers) < 2048);
// ********** End Function IsInEditor Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URefractCommonFunctionLibrary, nullptr, "IsInEditor", 	Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics::RefractCommonFunctionLibrary_eventIsInEditor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics::RefractCommonFunctionLibrary_eventIsInEditor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URefractCommonFunctionLibrary::execIsInEditor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URefractCommonFunctionLibrary::IsInEditor();
	P_NATIVE_END;
}
// ********** End Class URefractCommonFunctionLibrary Function IsInEditor **************************

// ********** Begin Class URefractCommonFunctionLibrary ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URefractCommonFunctionLibrary;
UClass* URefractCommonFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = URefractCommonFunctionLibrary;
	if (!Z_Registration_Info_UClass_URefractCommonFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RefractCommonFunctionLibrary"),
			Z_Registration_Info_UClass_URefractCommonFunctionLibrary.InnerSingleton,
			StaticRegisterNativesURefractCommonFunctionLibrary,
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
	return Z_Registration_Info_UClass_URefractCommonFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_URefractCommonFunctionLibrary_NoRegister()
{
	return URefractCommonFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URefractCommonFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library for common needs.\n */" },
		{ "IncludePath", "RefractCommonFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RefractCommonFunctionLibrary.h" },
		{ "ToolTip", "Function library for common needs." },
	};
#endif // WITH_METADATA

// ********** Begin Class URefractCommonFunctionLibrary constinit property declarations ************
// ********** End Class URefractCommonFunctionLibrary constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetProductBuildYear"), .Pointer = &URefractCommonFunctionLibrary::execGetProductBuildYear },
		{ .NameUTF8 = UTF8TEXT("GetProductName"), .Pointer = &URefractCommonFunctionLibrary::execGetProductName },
		{ .NameUTF8 = UTF8TEXT("GetUnrealEngineAttribution"), .Pointer = &URefractCommonFunctionLibrary::execGetUnrealEngineAttribution },
		{ .NameUTF8 = UTF8TEXT("IsInEditor"), .Pointer = &URefractCommonFunctionLibrary::execIsInEditor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductBuildYear, "GetProductBuildYear" }, // 706999308
		{ &Z_Construct_UFunction_URefractCommonFunctionLibrary_GetProductName, "GetProductName" }, // 3432420856
		{ &Z_Construct_UFunction_URefractCommonFunctionLibrary_GetUnrealEngineAttribution, "GetUnrealEngineAttribution" }, // 2194372373
		{ &Z_Construct_UFunction_URefractCommonFunctionLibrary_IsInEditor, "IsInEditor" }, // 4229760117
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URefractCommonFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URefractCommonFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_URefractCommonFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RefractCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URefractCommonFunctionLibrary_Statics::ClassParams = {
	&URefractCommonFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URefractCommonFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URefractCommonFunctionLibrary_Statics::Class_MetaDataParams)
};
void URefractCommonFunctionLibrary::StaticRegisterNativesURefractCommonFunctionLibrary()
{
	UClass* Class = URefractCommonFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URefractCommonFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_URefractCommonFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_URefractCommonFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URefractCommonFunctionLibrary.OuterSingleton, Z_Construct_UClass_URefractCommonFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URefractCommonFunctionLibrary.OuterSingleton;
}
URefractCommonFunctionLibrary::URefractCommonFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URefractCommonFunctionLibrary);
URefractCommonFunctionLibrary::~URefractCommonFunctionLibrary() {}
// ********** End Class URefractCommonFunctionLibrary **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_RefractCommonFunctionLibrary_h__Script_RefractCommon_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URefractCommonFunctionLibrary, URefractCommonFunctionLibrary::StaticClass, TEXT("URefractCommonFunctionLibrary"), &Z_Registration_Info_UClass_URefractCommonFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URefractCommonFunctionLibrary), 995904659U) },
	};
}; // Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_RefractCommonFunctionLibrary_h__Script_RefractCommon_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_RefractCommonFunctionLibrary_h__Script_RefractCommon_777352211{
	TEXT("/Script/RefractCommon"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_RefractCommonFunctionLibrary_h__Script_RefractCommon_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Marketplace_RefractorSoftware_Foundation_RefractCommon_Source_RefractCommon_Public_RefractCommonFunctionLibrary_h__Script_RefractCommon_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
