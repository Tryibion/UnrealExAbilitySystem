// Fill out your copyright notice in the Description page of Project Settings.


#include "Tasks/ExAbilityTask_WaitForTagRemoved.h"

#include "ExAbilityComponent.h"
#include "ExAbilitySystem/ExAbilitySystemLogging.h"

UExAbilityTask_WaitForTagRemoved* UExAbilityTask_WaitForTagRemoved::WaitForTagRemoved(UExAbility* OwningAbility, FGameplayTag Tag)
{
	auto MyObj = NewAbilityTask<UExAbilityTask_WaitForTagRemoved>(OwningAbility);
	MyObj->Tag = Tag;

	return MyObj;
}

void UExAbilityTask_WaitForTagRemoved::Activate()
{
	Super::Activate();

	bAddedToDelegate = false;

	auto ASC = AbilitySystemComponent.Get();
	if (!ASC)
	{
		UE_EXABILITY_LOG("%s wait for tag removed task ended because ability component doesnt exist.", *Ability.GetName())
		EndTask();
	}

	if (!Tag.MatchesAny(ASC->GetOwnedTags()) && ShouldBroadcastDelegates())
	{
		UE_EXABILITY_LOG("%s wait for tag removed task ended because ability component doesnt have the tag %s.", *Ability.GetName(), *Tag.ToString())
		OnRemoved.Broadcast();
		EndTask();
	}
	else
	{
		AbilitySystemComponent.Get()->OnGameplayTagsRemoved.AddDynamic(this, &UExAbilityTask_WaitForTagRemoved::OnTagsRemoved);
		UE_EXABILITY_LOG("%s wait for tag removed task started. waiting for tag %s to be removed.", *Ability.GetName(), *Tag.ToString())
		bAddedToDelegate = true;
	}
}

void UExAbilityTask_WaitForTagRemoved::OnTagsRemoved(FGameplayTagContainer Tags)
{
	if (Tag.MatchesAny(Tags) && ShouldBroadcastDelegates())
	{
		UE_EXABILITY_LOG("%s wait for tag removed task ended because tag %s match was found.", *Ability.GetName(), *Tag.ToString())
		OnRemoved.Broadcast();
		EndTask();
	}
}

void UExAbilityTask_WaitForTagRemoved::BeginDestroy()
{
	if (bAddedToDelegate && AbilitySystemComponent.Get())
	{
		AbilitySystemComponent.Get()->OnGameplayTagsRemoved.RemoveDynamic(this, &UExAbilityTask_WaitForTagRemoved::OnTagsRemoved);
	}
	
	Super::BeginDestroy();
}
