// Copyright by Chandler Cox 2022

#pragma once

#include "CoreMinimal.h"
#include "ExAbilityComponent.h"
#include "UObject/Interface.h"
#include "ExAbilityInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UExAbilityInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * simple interface to get an ability component..
 */
class EXABILITYSYSTEM_API IExAbilityInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Ability Interface")
	UExAbilityComponent* GetAbilitySystemComponent();
};
