#include "Settings/RefractPlatformSettings.h"

FQualityDeviceProfileVariant::FQualityDeviceProfileVariant()
	: MinHardwareRefreshRate(60)
{
}

URefractPlatformSettings::URefractPlatformSettings()
{
	MobileFrameRateLimits.Append({ 20, 30, 45, 60, 90, 120 });
}

const URefractPlatformSettings* URefractPlatformSettings::Get()
{
	const URefractPlatformSettings* Result = UPlatformSettingsManager::Get().GetSettingsForPlatform<ThisClass>();
	check(Result);
	return Result;
}

//////////////////////////////////////////////////////////////////////

URefractPerformanceSettings::URefractPerformanceSettings()
{
	PerPlatformSettings.Initialize(URefractPlatformSettings::StaticClass());

	CategoryName = TEXT("Game");

	DesktopFrameRateLimits.Append({ 30, 40, 60, 72, 80, 90, 120, 144, 160, 165, 180, 200, 240, 360, 480 });
}
