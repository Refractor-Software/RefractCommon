// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#include "RefractCommonUIFunctionLibrary.h"

#include "CommonButtonBase.h"
#include "CommonInputSubsystem.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

UCommonInputSubsystem* URefractCommonUIFunctionLibrary::GetCommonInputSubsystem(const ULocalPlayer* Context)
{
	return IsValid(Context) ? UCommonInputSubsystem::Get(Context) : nullptr;
}

UCommonInputSubsystem* URefractCommonUIFunctionLibrary::GetCommonInputSubsystem(const UWidget* Context)
{
	return IsValid(Context) ? UCommonInputSubsystem::Get(Context->GetOwningLocalPlayer()) : nullptr;
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

FName URefractCommonUIFunctionLibrary::SuspendInput(APlayerController* Player, const FName Reason)
{
	return SuspendInput(IsValid(Player) ? Player->GetLocalPlayer() : nullptr, Reason);
}

FName URefractCommonUIFunctionLibrary::SuspendInput(const ULocalPlayer* Player, const FName Reason)
{
	static int32 Suspensions = 0;
	if (UCommonInputSubsystem* Subsystem = GetCommonInputSubsystem(Player); IsValid(Subsystem))
	{
		Suspensions++;
		FName SuspendToken = Reason;
		SuspendToken.SetNumber(Suspensions);
		for (ECommonInputType InputType : TEnumRange<ECommonInputType>())
		{
			Subsystem->SetInputTypeFilter(InputType, SuspendToken, true);
		}
		return SuspendToken;
	}
	return NAME_None;
}

void URefractCommonUIFunctionLibrary::ResumeInput(APlayerController* Player, const FName Token)
{
	ResumeInput(IsValid(Player) ? Player->GetLocalPlayer() : nullptr, Token);
}

void URefractCommonUIFunctionLibrary::ResumeInput(ULocalPlayer* Player, FName Token)
{
	if (UCommonInputSubsystem* Subsystem = GetCommonInputSubsystem(Player); IsValid(Subsystem) && Token != NAME_None)
	{
		for (ECommonInputType InputType : TEnumRange<ECommonInputType>())
		{
			Subsystem->SetInputTypeFilter(InputType, Token, false);
		}
	}
}
