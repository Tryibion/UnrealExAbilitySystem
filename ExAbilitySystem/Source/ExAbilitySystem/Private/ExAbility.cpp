// Copyright by Chandler Cox 2022


#include "ExAbility.h"


UExAbility::UExAbility()
{
	AutoCommit = true;
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
	if (AutoCommit)
	{
		CommitAbility();
	}
	
	ActivateAbility_BP();
	UE_LOG(LogTemp, Display, TEXT("%s ability activated"), *GetName());
}

void UExAbility::ActivateAbility_BP_Implementation()
{
	
}

void UExAbility::EndAbility()
{
	EndAbility_BP();
	UE_LOG(LogTemp, Display, TEXT("%s ability ended"), *GetName());
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
	UE_LOG(LogTemp, Display, TEXT("%s ability canceled"), *GetName());
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
	UE_LOG(LogTemp, Display, TEXT("%s ability committed"), *GetName());
	return true;
}

AActor* UExAbility::GetOwningActor()
{
	return OwnerInfo.OwningActor;
}

UExAbilityComponent* UExAbility::GetOwningAbilityComponent()
{
	return OwnerInfo.OwningAbilityComponent;
}

void UExAbility::WaitForTag(FGameplayTag Tag, FLatentActionInfo LatentInfo)
{
	LatentID = FMath::RandRange(0, 10000000);
	GetWorld()->GetLatentActionManager().AddNewAction(this, LatentID, new class WaitForTag(Tag, LatentInfo));
}



