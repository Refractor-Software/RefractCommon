// Copyright (C) William Pimentel-Tonche. All rights reserved.

#include "RefractCommonFunctionLibrary.h"

#include "GeneralProjectSettings.h"

namespace TextTemplates
{
	static FString UnrealAttribution
	{
		"{ProductName} uses Unreal® Engine. Unreal® is a trademark or registered trademark of Epic Games, Inc. in the United States of America and elsewhere."
		"\nUnreal® Engine, Copyright 1998 – {ProductBuildYear}, Epic Games, Inc. All rights reserved."
	};
}

FString URefractCommonFunctionLibrary::GetProductName()
{
	return GetDefault<UGeneralProjectSettings>()->ProjectName;
}

int32 URefractCommonFunctionLibrary::GetProductBuildYear()
{
	// __DATE__ is a string like "Apr 23 2026" (format "Mmm DD YYYY" according to the C++ standard)
	// The year starts at index 7
	const FString DateString(TEXT(__DATE__));
	const FString YearString = DateString.Mid(7, 4);
	return FCString::Atoi(*YearString);
}

FString URefractCommonFunctionLibrary::GetUnrealEngineAttribution()
{
	const FStringFormatNamedArguments Args
	{
		{TEXT("ProductName"), GetProductName()},
		{TEXT("ProductBuildYear"), FString::FromInt(GetProductBuildYear())}
	};

	return FString::Format(*TextTemplates::UnrealAttribution, Args);
}

bool URefractCommonFunctionLibrary::IsInEditor()
{
#if UE_EDITOR
	return true;
#else
	return false;
#endif
}
