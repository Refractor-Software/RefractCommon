// SPDX-License-Identifier: Zlib
// Copyright (C) William Pimentel-Tonche

#include "Widgets/RefractRotatorBase.h"

#include "CommonRotator.h"
#include "CommonTextBlock.h"

URefractRotatorBase::URefractRotatorBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetIsFocusable(true);
}

bool URefractRotatorBase::Initialize()
{
	if (Super::Initialize())
	{
		OnNavigationDelegate.BindUObject(this, &ThisClass::HandleNavigation);
		return true;
	}
	return false;
}

FNavigationReply URefractRotatorBase::NativeOnNavigation(
	const FGeometry& MyGeometry,
	const FNavigationEvent& InNavigationEvent,
	const FNavigationReply& InDefaultReply)
{
	switch (InNavigationEvent.GetNavigationType())
	{
	case EUINavigation::Left:
	case EUINavigation::Right:
		return FNavigationReply::Custom(OnNavigationDelegate);
	default:
		return InDefaultReply;
	}
}

void URefractRotatorBase::Decrement()
{
	ShiftInternal(ERotatorDirection::Left, false);
}

void URefractRotatorBase::Increment()
{
	ShiftInternal(ERotatorDirection::Right, false);
}

void URefractRotatorBase::SetLabelText(const FText& InText) const
{
	if (RotatorLabelDisplayText)
	{
		RotatorLabelDisplayText->SetText(InText);
	}
}

void URefractRotatorBase::OnOptionsPopulated_Implementation()
{
}

TSharedPtr<SWidget> URefractRotatorBase::HandleNavigation(const EUINavigation InNavigation)
{
	if (InNavigation == EUINavigation::Left)
	{
		ShiftInternal(ERotatorDirection::Left, true);
	}
	else if (InNavigation == EUINavigation::Right)
	{
		ShiftInternal(ERotatorDirection::Right, true);
	}
	return nullptr;
}
