#pragma once

#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(LogExAbilitySystem, Log, All);
#define UE_EXABILITY_LOG(msg, ...) UE_LOG(LogExAbilitySystem, Log, TEXT(msg), ##__VA_ARGS__)
#define UE_EXABILITY_WARNING(msg, ...) UE_LOG(LogExAbilitySystem, Warning, TEXT(msg), ##__VA_ARGS__)
#define UE_EXABILITY_ERROR(msg, ...) UE_LOG(LogExAbilitySystem, Error, TEXT(msg), ##__VA_ARGS__)

#define LOG_BLUE_SCREEN_MSG(time, msg, ...) DebugPrintScreen(time, FColor::Cyan, FString::Printf(TEXT(msg), ##__VA_ARGS__))
#define LOG_RED_SCREEN_MSG(time, msg, ...) DebugPrintScreen(time, FColor::Red, FString::Printf(TEXT(msg), ##__VA_ARGS__))

static void DebugPrintScreen(const float DisplayTime, const FColor Color, const FString Message)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, DisplayTime, Color, Message);
	}
}
