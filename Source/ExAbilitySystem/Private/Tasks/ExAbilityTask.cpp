// Fill out your copyright notice in the Description page of Project Settings.


#include "Tasks/ExAbilityTask.h"

#include "ExAbility.h"
#include "ExAbilityComponent.h"

UExAbilityTask::UExAbilityTask(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UExAbilityTask::SetAbilityComponent(UExAbilityComponent* InAbilitySystemComponent)
{
	AbilitySystemComponent = InAbilitySystemComponent;
}

void UExAbilityTask::SetAbility(UExAbility* InAbility)
{
	Ability = InAbility;
}

void UExAbilityTask::InitSimulatedTask(UGameplayTasksComponent& InGameplayTasksComponent)
{
	Super::InitSimulatedTask(InGameplayTasksComponent);

	SetAbilityComponent(Cast<UExAbilityComponent>(TasksComponent.Get()));
}

void UExAbilityTask::OnDestroy(bool bInOwnerFinished)
{
	Super::OnDestroy(bInOwnerFinished);

	Ability = nullptr;
}

bool UExAbilityTask::ShouldBroadcastDelegates() const
{
	return (Ability && Ability->bIsActive);
}
