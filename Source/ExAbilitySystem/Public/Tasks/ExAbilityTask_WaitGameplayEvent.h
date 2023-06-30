// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Tasks/ExAbilityTask.h"
#include "ExAbilityTask_WaitGameplayEvent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEventTagDelegate);
/**
 * 
 */
UCLASS()
class EXABILITYSYSTEM_API UExAbilityTask_WaitGameplayEvent : public UExAbilityTask
{
	GENERATED_BODY()
	
	FGameplayTag EventTag;

	bool bAddedToDelegate;

	UPROPERTY(BlueprintAssignable)
	FEventTagDelegate EventReceived;

	/**
	 * 	Wait until the specified gameplay event is triggered.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UExAbilityTask_WaitGameplayEvent* WaitForGameplayEvent(UExAbility* OwningAbility, FGameplayTag Tag);

	virtual void Activate() override;

	UFUNCTION()
	void OnEventReceived(FGameplayTag Tag);

	virtual void BeginDestroy() override;
};
