// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#include "RefractCommonUIFunctionLibrary.h"

#include "CommonButtonBase.h"
#include "CommonInputSubsystem.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

UCommonInputSubsystem* URefractCommonUIFunctionLibrary::GetCommonInputSubsystem(const UWidget* Context)
{
	return Context ? UCommonInputSubsystem::Get(Context->GetOwningLocalPlayer()) : nullptr;
}

ECommonInputType URefractCommonUIFunctionLibrary::GetOwningPlayerInputType(const UWidget* Context)
{
	const UCommonInputSubsystem* Subsystem = GetCommonInputSubsystem(Context);
	return IsValid(Subsystem) ? Subsystem->GetCurrentInputType() : ECommonInputType::Count;
}

bool URefractCommonUIFunctionLibrary::IsOwningPlayerUsingTouch(const UWidget* Context)
{
	const UCommonInputSubsystem* Subsystem = GetCommonInputSubsystem(Context);
	return IsValid(Subsystem) ? Subsystem->GetCurrentInputType() == ECommonInputType::Touch : false;
}

bool URefractCommonUIFunctionLibrary::IsOwningPlayerUsingGamepad(const UWidget* Context)
{
	const UCommonInputSubsystem* Subsystem = GetCommonInputSubsystem(Context);
	return IsValid(Subsystem) ? Subsystem->GetCurrentInputType() == ECommonInputType::Gamepad : false;
}

void URefractCommonUIFunctionLibrary::PlayCommonButtonClickSound(const UCommonButtonBase* Button)
{
	if (IsValid(Button))
	{
		USoundBase* SoundBase = Cast<USoundBase>(Button->GetStyle()->ClickedSlateSound.GetResourceObject());
		if (IsValid(SoundBase))
		{
			UGameplayStatics::PlaySound2D(Button, SoundBase);
		}
	}
}
