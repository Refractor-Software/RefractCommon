// Copyright (C) William Pimentel-Tonche. All rights reserved.

#pragma once

#include "RefractCommonFunctionLibrary.h"

#include "AssetRegistry/ARFilter.h"
#include "AssetRegistry/AssetRegistryModule.h"

template <typename T>
TArray<TSoftObjectPtr<T>> URefractCommonFunctionLibrary::GetAllObjectAssetsOfType()
{
	static_assert(TIsDerivedFrom<T, UObject>::IsDerived, "T must derive from UObject");

	TArray<TSoftObjectPtr<T>> AssetReferences = {};

	FARFilter Filter;
	Filter.ClassPaths.Add(T::StaticClass()->GetClassPathName());
	Filter.bRecursiveClasses = true;

	TArray<FAssetData> AssetDataArray;
	IAssetRegistry::GetChecked().GetAssets(Filter, AssetDataArray);

	for (const FAssetData& AssetData : AssetDataArray)
	{
		AssetReferences.AddUnique(TSoftObjectPtr<T>(AssetData.ToSoftObjectPath()));
	}

	return AssetReferences;
}

template <typename T>
TArray<TSoftClassPtr<T>> URefractCommonFunctionLibrary::GetAllClassAssetsOfType()
{
	static_assert(TIsDerivedFrom<T, UObject>::IsDerived, "T must derive from UObject");

	TArray<TSoftClassPtr<T>> AssetReferences = {};

	FARFilter Filter;
	Filter.ClassPaths.Add(T::StaticClass()->GetClassPathName());
	Filter.bRecursiveClasses = true;

	TArray<FAssetData> AssetDataArray;
	IAssetRegistry::GetChecked().GetAssets(Filter, AssetDataArray);

	for (const FAssetData& AssetData : AssetDataArray)
	{
		AssetReferences.AddUnique(TSoftClassPtr<T>(AssetData.ToSoftObjectPath()));
	}

	return AssetReferences;
}
