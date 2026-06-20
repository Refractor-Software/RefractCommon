// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#include "Widgets/RefractDiscreteRotator.h"

#include "CommonRotator.h"
#include "Commands/RefractCommonWidgetCommand.h"
#include "Types/RefractCommonUITypes.h"

URefractDiscreteRotator::URefractDiscreteRotator(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void URefractDiscreteRotator::SetOptions(const TArray<FText>& InOptions)
{
	Options = InOptions;
	CurrentIndex = 0;

	if (Options.IsValidIndex(0))
	{
		SetLabelText(Options[0]);
	}

	OnOptionsPopulated();
}

void URefractDiscreteRotator::SetSelectedIndex(int32 InIndex)
{
	if (!Options.IsValidIndex(InIndex))
	{
		return;
	}

	CurrentIndex = InIndex;
	SetLabelText(Options[CurrentIndex]);
	OnOptionSelected(CurrentIndex);
}

FText URefractDiscreteRotator::GetSelectedOptionText() const
{
	return Options.IsValidIndex(CurrentIndex) ? Options[CurrentIndex] : FText::GetEmpty();
}

void URefractDiscreteRotator::OnOptionSelected_Implementation(int32 Index)
{
	// No-op
}

void URefractDiscreteRotator::ShiftInternal(const ERotatorDirection Direction, const bool bFromNavigation)
{
	if (!IsInteractionEnabled() || Options.IsEmpty())
	{
		return;
	}

	const int32 Delta    = Direction == ERotatorDirection::Left ? -1 : 1;
	const int32 NewIndex = FMath::Clamp(CurrentIndex + Delta, 0, Options.Num() - 1);

	if (NewIndex != CurrentIndex)
	{
		const int32 PreviousIndex = CurrentIndex;
		SetSelectedIndex(NewIndex);

		if (auto* Cmd = RotationCommand.GetMutablePtr<FRefractCommonWidgetCommand>())
		{
			FRefractDiscreteRotatorTriggerPayload Payload;
			Payload.Direction     = Direction;
			Payload.Index         = CurrentIndex;
			Payload.PreviousIndex = PreviousIndex;

			const FRefractCommonWidgetCommandContext Context = FRefractCommonWidgetCommandContext::Create(this, FInstancedStruct::Make(Payload));

			if (Cmd->CanExecute(Context))
			{
				Cmd->Execute(Context);
			}
		}

		OnRotatedWithDirection.Broadcast(CurrentIndex, Direction);
		OnRotatedEvent.Broadcast(CurrentIndex, bFromNavigation);
	}
}
