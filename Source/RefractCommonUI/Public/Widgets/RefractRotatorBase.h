// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#pragma once

#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "RefractRotatorBase.generated.h"

enum class ERotatorDirection : uint8;
class UCommonTextBlock;

#define UE_API REFRACTCOMMONUI_API

/** Base class for left/right rotator widgets. Handles focus, navigation, and label display. */
UCLASS(MinimalAPI, Abstract, NotBlueprintable, meta = (Category = "Rotator", DisableNativeTick))
class URefractRotatorBase : public UCommonButtonBase
{
	GENERATED_BODY()

public:
	UE_API URefractRotatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~ BEGIN UUserWidget
	UE_API virtual bool Initialize() override;
	UE_API virtual FNavigationReply NativeOnNavigation(const FGeometry& MyGeometry, const FNavigationEvent& InNavigationEvent, const FNavigationReply& InDefaultReply) override;
	//~ END UUserWidget

	UFUNCTION(Category = "Rotator", BlueprintNativeEvent)
	UE_API void OnOptionsPopulated();

	UFUNCTION(Category = "Rotator", BlueprintCallable, BlueprintPure = false, BlueprintCosmetic)
	UE_API void Decrement();

	UFUNCTION(Category = "Rotator", BlueprintCallable, BlueprintPure = false, BlueprintCosmetic)
	UE_API void Increment();

protected:
	/** Sets the label text displayed in the rotator. Called by subclasses on selection change. */
	UE_API void SetLabelText(const FText& InText) const;

	/** Implemented by subclasses to advance or retreat the selection by one step. */
	UE_API virtual void ShiftInternal(ERotatorDirection Direction, bool bFromNavigation) PURE_VIRTUAL(,);

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCommonTextBlock> RotatorLabelDisplayText;

private:
	TSharedPtr<SWidget> HandleNavigation(EUINavigation Navigation);
	FNavigationDelegate OnNavigationDelegate;
};

#undef UE_API
