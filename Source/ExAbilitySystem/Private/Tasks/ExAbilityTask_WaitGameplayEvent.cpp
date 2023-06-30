// Fill out your copyright notice in the Description page of Project Settings.


#include "Tasks/ExAbilityTask_WaitGameplayEvent.h"

#include "ExAbilityComponent.h"
#include "ExAbilitySystem/ExAbilitySystemLogging.h"


UExAbilityTask_WaitGameplayEvent* UExAbilityTask_WaitGameplayEvent::WaitForGameplayEvent(UExAbility* OwningAbility, FGameplayTag Tag)
{
	auto MyObj = NewAbilityTask<UExAbilityTask_WaitGameplayEvent>(OwningAbility);
	MyObj->EventTag = Tag;

	return MyObj;
}

void UExAbilityTask_WaitGameplayEvent::Activate()
{
	Super::Activate();
	
	bAddedToDelegate = false;

	auto ASC = AbilitySystemComponent.Get();
	if (!ASC)
	{
		UE_EXABILITY_LOG("%s wait for tag event task ended because ability component doesnt exist.", *Ability.GetName())
		EndTask();
	}
	
	AbilitySystemComponent.Get()->OnGameplayEvent.AddDynamic(this, &UExAbilityTask_WaitGameplayEvent::OnEventReceived);
	UE_EXABILITY_LOG("%s wait for tag event task started. Waiting for event with tag %s.", *Ability.GetName(), *EventTag.ToString())
	bAddedToDelegate = true;
}

void UExAbilityTask_WaitGameplayEvent::OnEventReceived(FGameplayTag Tag)
{
	if (EventTag.MatchesTag(Tag) && ShouldBroadcastDelegates())
	{
		UE_EXABILITY_LOG("%s wait for tag event task ended because tag Event %s match was found.", *InstanceName.ToString(), *Tag.ToString())
		EventReceived.Broadcast();
		EndTask();
	}
}

void UExAbilityTask_WaitGameplayEvent::BeginDestroy()
{
	if (bAddedToDelegate && AbilitySystemComponent.Get())
	{
		AbilitySystemComponent.Get()->OnGameplayEvent.RemoveDynamic(this, &UExAbilityTask_WaitGameplayEvent::OnEventReceived);
	}
	
	Super::BeginDestroy();
}
