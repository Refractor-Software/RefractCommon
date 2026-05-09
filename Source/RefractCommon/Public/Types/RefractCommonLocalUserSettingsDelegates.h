// Copyright (C) William Pimentel-Tonche. All rights reserved.

#pragma once

#include "CoreMinimal.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FRefractCommonAudioDeviceChanged, const FString& /*DeviceId*/);

/** Broadcast when the user's HDR Audio Mode preference changes. */
DECLARE_MULTICAST_DELEGATE_OneParam(FRefractCommonAudioHDRModeChanged, bool /*bEnabled*/);
