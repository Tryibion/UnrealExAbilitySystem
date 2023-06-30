// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Tasks/ExAbilityTask.h"
#include "ExAbilityTask_WaitForTagAdded.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAddedTagDelegate);

/**
 * This task checks for if a specific tag is added to the ability component. If the tag already exists, then it will continue.
 */
UCLASS()
class EXABILITYSYSTEM_API UExAbilityTask_WaitForTagAdded : public UExAbilityTask
{
	GENERATED_BODY()
	
	FGameplayTag Tag;

	bool bAddedToDelegate;

	UPROPERTY(BlueprintAssignable)
	FAddedTagDelegate OnAdded;

	/**
	 * 	Wait until the specified gameplay tag is Added or continue if already added.
	 */
	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UExAbilityTask_WaitForTagAdded* WaitForTagAdd(UExAbility* OwningAbility, FGameplayTag Tag);

	virtual void Activate() override;

	UFUNCTION()
	void OnTagsAdded(FGameplayTagContainer Tags);

	virtual void BeginDestroy() override;
};
