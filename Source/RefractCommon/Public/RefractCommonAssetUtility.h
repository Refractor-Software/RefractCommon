// Copyright (C) William Pimentel-Tonche. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "AssetRegistry/IAssetRegistry.h"

#define UE_API REFRACTCOMMON_API

/**
 * Utility library for general asset operations. Not that these are common, but some code might need them.
 */
class FRefractCommonAssetUtility
{
public:
	/**
	 * Queries the asset registry for a list (array) of object assets matching the type parameter.
	 * @tparam T The type to query for.
	 * @return A list of pointers to soft object references matching the queried type.
	 */
	template <typename T>
	static TArray<TSoftObjectPtr<T>> GetAllObjectAssetsOfType();

	/**
	 * Queries the asset registry for a list (array) of class assets matching the type parameter.
	 * @tparam T The type to query for.
	 * @return A list of pointers to soft class references matching the queried type.
	 */
	template <typename T>
	static TArray<TSoftClassPtr<T>> GetAllClassAssetsOfType();

private:
	template <typename TPtr>
	static TArray<TPtr> GetAllAssetsOfTypeImpl()
	{
		using T = TPtr::ElementType;
		static_assert(TIsDerivedFrom<T, UObject>::IsDerived, "T must derive from UObject");

		FARFilter Filter;
		Filter.ClassPaths.Add(T::StaticClass()->GetClassPathName());
		Filter.bRecursiveClasses = true;

		TArray<FAssetData> AssetDataArray;
		IAssetRegistry::GetChecked().GetAssets(Filter, AssetDataArray);

		TArray<TPtr> AssetReferences;
		AssetReferences.Reserve(AssetDataArray.Num());
		for (const FAssetData& AssetData : AssetDataArray)
		{
			AssetReferences.AddUnique(TPtr(AssetData.ToSoftObjectPath()));
		}

		return AssetReferences;
	}
};

#undef UE_API

template <typename T>
TArray<TSoftObjectPtr<T>> FRefractCommonAssetUtility::GetAllObjectAssetsOfType()
{
	return GetAllAssetsOfTypeImpl<TSoftObjectPtr<T>>();
}

template <typename T>
TArray<TSoftClassPtr<T>> FRefractCommonAssetUtility::GetAllClassAssetsOfType()
{
	return GetAllAssetsOfTypeImpl<TSoftClassPtr<T>>();
}
