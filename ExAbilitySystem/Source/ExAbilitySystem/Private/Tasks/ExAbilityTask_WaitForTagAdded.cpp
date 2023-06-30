// Fill out your copyright notice in the Description page of Project Settings.


#include "Tasks/ExAbilityTask_WaitForTagAdded.h"

#include "ExAbilityComponent.h"
#include "ExAbilitySystem/ExAbilitySystemLogging.h"


UExAbilityTask_WaitForTagAdded* UExAbilityTask_WaitForTagAdded::WaitForTagAdd(UExAbility* OwningAbility, FGameplayTag Tag)
{
	auto MyObj = NewAbilityTask<UExAbilityTask_WaitForTagAdded>(OwningAbility);
	MyObj->Tag = Tag;

	return MyObj;
}

void UExAbilityTask_WaitForTagAdded::Activate()
{
	Super::Activate();
	bAddedToDelegate = false;

	auto ASC = AbilitySystemComponent.Get();
	if (!ASC)
	{
		UE_EXABILITY_LOG("%s wait for tag task ended because ability component doesnt exist.", *Ability.GetName())
		EndTask();
	}
	
	if (ASC->GetOwnedTags().HasTag(Tag) && ShouldBroadcastDelegates())
	{
		UE_EXABILITY_LOG("%s wait for tag added task ended because ability component already has tag %s.", *Ability.GetName(), *Tag.ToString())
		OnAdded.Broadcast();
		EndTask();
	}
	else
	{
		AbilitySystemComponent.Get()->OnGameplayTagsAdded.AddDynamic(this, &UExAbilityTask_WaitForTagAdded::OnTagsAdded);
		UE_EXABILITY_LOG("%s wait for tag added task started. waiting for tag %s to be added.", *Ability.GetName(), *Tag.ToString())
		bAddedToDelegate = true;
	}
}

void UExAbilityTask_WaitForTagAdded::OnTagsAdded(FGameplayTagContainer Tags)
{
	if (Tag.MatchesAny(Tags) && ShouldBroadcastDelegates())
	{
		UE_EXABILITY_LOG("%s wait for tag add task ended because tag %s match was found.", *Ability.GetName(), *Tag.ToString())
		OnAdded.Broadcast();
		EndTask();
	}
}

void UExAbilityTask_WaitForTagAdded::BeginDestroy()
{
	if (bAddedToDelegate && AbilitySystemComponent.Get())
	{
		AbilitySystemComponent.Get()->OnGameplayTagsAdded.RemoveDynamic(this, &UExAbilityTask_WaitForTagAdded::OnTagsAdded);
	}
	Super::BeginDestroy();
}
