// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#include "Widgets/RefractNumericRotator.h"

#include "CommonRotator.h"

URefractNumericRotator::URefractNumericRotator(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URefractNumericRotator::SetRange(const int32 Min, const int32 Max)
{
	MinValue = Min;
	MaxValue = Max;
	CurrentValue = MinValue;
	SetLabelText(FText::AsNumber(CurrentValue));
	OnOptionsPopulated();
}

FInt32Range URefractNumericRotator::GetRange() const
{
	return FInt32Range(
		FInt32Range::BoundsType::Inclusive(MinValue),
		FInt32Range::BoundsType::Inclusive(MaxValue));
}

void URefractNumericRotator::SetSelectedValue(const int32 InValue)
{
	if (InValue < MinValue || InValue > MaxValue)
	{
		return;
	}

	CurrentValue = InValue;
	SetLabelText(FText::AsNumber(CurrentValue));
	OnOptionSelected(CurrentValue);
}

void URefractNumericRotator::OnOptionSelected_Implementation(int32 Value)
{
	// No-op
}

void URefractNumericRotator::ShiftInternal(const ERotatorDirection Direction, const bool bFromNavigation)
{
	if (!IsInteractionEnabled())
	{
		return;
	}

	const int32 Delta    = Direction == ERotatorDirection::Left ? -1 : 1;
	const int32 NewValue = FMath::Clamp(CurrentValue + Delta, MinValue, MaxValue);

	if (NewValue != CurrentValue)
	{
		SetSelectedValue(NewValue);
		OnRotatedWithDirection.Broadcast(CurrentValue, Direction);
		OnRotatedEvent.Broadcast(CurrentValue, bFromNavigation);
	}
}
