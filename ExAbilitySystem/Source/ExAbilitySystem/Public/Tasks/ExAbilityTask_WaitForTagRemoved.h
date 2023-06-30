// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Tasks/ExAbilityTask.h"
#include "ExAbilityTask_WaitForTagRemoved.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRemovedTagDelegate);

/**
 * This task waits for a tag to be removed from the ability component before continuing
 */
UCLASS()
class EXABILITYSYSTEM_API UExAbilityTask_WaitForTagRemoved : public UExAbilityTask
{
	GENERATED_BODY()

	FGameplayTag Tag;

	bool bAddedToDelegate;

	UPROPERTY(BlueprintAssignable)
	FRemovedTagDelegate OnRemoved;

	/**
	 * 	Wait until the specified gameplay tag is removed
	 */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UExAbilityTask_WaitForTagRemoved* WaitForTagRemoved(UExAbility* OwningAbility, FGameplayTag Tag);

	virtual void Activate() override;

	UFUNCTION()
	void OnTagsRemoved(FGameplayTagContainer Tags);

	virtual void BeginDestroy() override;
};
