// Copyright by Chandler Cox 2022


#include "ExAbility.h"

#include "ExAbilitySystem/ExAbilitySystemLogging.h"
#include "Tasks/ExAbilityTask.h"


UExAbility::UExAbility()
{
	bAutoCommit = true;
	bAllowOnlyOne = true;
}

bool UExAbility::CanActivateAbility()
{
	return CanActivateAbility_BP();
}

bool UExAbility::CanActivateAbility_BP_Implementation()
{
	return true;
}

void UExAbility::ActivateAbility()
{
	UE_EXABILITY_LOG("%s ability activated.", *GetName());
	
	if (bAutoCommit)
	{
		CommitAbility();
	}
	bIsActive = true;
	
	ActivateAbility_BP();
}

void UExAbility::ActivateAbility_BP_Implementation()
{
	
}

void UExAbility::EndAbility()
{
	bIsActive = false;
	EndAbility_BP();
	UE_EXABILITY_LOG("%s ability ended.", *GetName());
	GetOwningAbilityComponent()->DeactivateAbility(this); //TODO: decouple from ability component
}

void UExAbility::EndAbility_BP_Implementation()
{
	
}

void UExAbility::CancelAbility_BP_Implementation()
{
	
}

void UExAbility::CancelAbility()
{
	bIsActive = false;
	UE_EXABILITY_LOG("%s ability canceled.", *GetName())
	CancelAbility_BP();
	EndAbility();
}


bool UExAbility::CommitAbility()
{
	if (AbilityCost)
	{
		if(!GetOwningAbilityComponent()->GrantEffect(AbilityCost))
		{
			return false;
		}
	}
	
	if (AbilityCooldown)
	{
		if(!GetOwningAbilityComponent()->GrantEffect(AbilityCooldown))
		{
			return false;
		}
	}
	UE_EXABILITY_LOG("%s ability committed.", *GetName());
	return true;
}

AActor* UExAbility::GetOwningActor()
{
	return OwnerInfo.OwningActor.Get();
}

UExAbilityComponent* UExAbility::GetOwningAbilityComponent()
{
	return OwnerInfo.OwningAbilityComponent.Get();
}

void UExAbility::OnGameplayTaskInitialized(UGameplayTask& Task)
{
	if (UExAbilityTask* AbilityTask = Cast<UExAbilityTask>(&Task))
	{
		AbilityTask->SetAbilityComponent(OwnerInfo.OwningAbilityComponent.Get());
		AbilityTask->SetAbility(this);
		UE_EXABILITY_LOG("%s task initialized.", *Task.GetInstanceName().ToString());
	}
}

void UExAbility::OnGameplayTaskActivated(UGameplayTask& Task)
{
	ActiveTasks.Add(&Task);
	UE_EXABILITY_LOG("%s task activated.", *Task.GetInstanceName().ToString());
}

void UExAbility::OnGameplayTaskDeactivated(UGameplayTask& Task)
{
	ActiveTasks.Remove(&Task);
	UE_EXABILITY_LOG("%s task deactivated.", *Task.GetInstanceName().ToString());
}

UGameplayTasksComponent* UExAbility::GetGameplayTasksComponent(const UGameplayTask& Task) const
{
	return OwnerInfo.OwningAbilityComponent.Get();
}



