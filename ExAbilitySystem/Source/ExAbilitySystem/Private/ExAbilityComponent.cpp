// Copyright by Chandler Cox 2022


#include "ExAbilityComponent.h"

#include "ExAbility.h"
#include "ExEffect.h"

// Sets default values for this component's properties
UExAbilityComponent::UExAbilityComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	
	// ...
}

// Called when the game starts
void UExAbilityComponent::BeginPlay()
{
	Super::BeginPlay();

	// add defaults to respective TArrays
	for (auto DefaultAbility : DefaultAbilities)
	{
		GrantAbility(DefaultAbility);
	}

	Attributes.Empty();
	for (auto DefaultAttribute : DefaultAttributes)
	{
		CreateAttribute(DefaultAttribute);
	}

	for	(auto DefaultEffect : DefaultEffects)
	{
		GrantEffect(DefaultEffect);
	}
	// ...
	
}

void UExAbilityComponent::CreateAttribute(TSubclassOf<UExAttribute> DefaultAttribute)
{
	// check to see if attribute already exists
	for (auto Attribute : Attributes)
	{
		if (Attribute->GetClass() == DefaultAttribute)
		{
			return;
		}
	}

	// instance attribute
	UExAttribute* InstancedAttribute = NewObject<UExAttribute>(this, DefaultAttribute);
	if (InstancedAttribute)
	{
		InstancedAttribute->OwnerInfo.World = GetWorld();
		InstancedAttribute->OwnerInfo.OwningActor = GetOwner();
		InstancedAttribute->OwnerInfo.OwningAbilityComponent = this;
		Attributes.Add(InstancedAttribute);
	}
}

void UExAbilityComponent::AddActiveEffect(UExEffect* Effect)
{
	if (!Effect)
	{
		return;
	}
	ActiveEffects.Add(Effect);
}

void UExAbilityComponent::RemoveActiveEffect(UExEffect* Effect)
{
	if (!Effect)
	{
		return;
	}
	ActiveEffects.Remove(Effect);
}


// Called every frame
void UExAbilityComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UExAbilityComponent::GrantAbility(TSubclassOf<UExAbility> Ability)
{
	if (!Ability)
	{
		return false;
	}

	// only add one ability to Granted Abilities.
	for (auto GrantedAbility : GrantedAbilities)
	{
		if (GrantedAbility == Ability)
		{
			return false;
		}
	}
	
	GrantedAbilities.Add(Ability);
	return true;
}

bool UExAbilityComponent::TryActivateAbility(TSubclassOf<UExAbility> Ability, UExAbility*& AbilityInstance)
{
	if (!Ability)
	{
		return false;
	}
	
	for (auto GrantedAbility : GrantedAbilities)
	{
		if (GrantedAbility != Ability)
		{
			continue;
		}
		
		// check if the ability has the required tags
		if (!GrantedAbility.GetDefaultObject()->ActivationRequiredTags.IsEmpty())
		{
			if (!OwnerTags.HasAll(GrantedAbility.GetDefaultObject()->ActivationRequiredTags))
			{
				return false;
			}
		}

		// check if the ability should be blocked by existing tags
		if (!GrantedAbility.GetDefaultObject()->ActivationBlockedTags.IsEmpty())
		{
			if (OwnerTags.HasAny(GrantedAbility.GetDefaultObject()->ActivationBlockedTags))
			{
				return false;
			}
		}

		// check if the ability should be blocked by other abilities
		for (auto ActiveAbility : GetActiveAbilities())
		{
			if (ActiveAbility->BlockAbilityTags.HasAny(GrantedAbility.GetDefaultObject()->AbilityTags))
			{
				return false;
			}
		}

		// check if cooldown is active
		if (Ability.GetDefaultObject()->AbilityCooldown)
		{
			if (OwnerTags.HasAny(Ability.GetDefaultObject()->AbilityCooldown.GetDefaultObject()->GrantedTags))
			{
				return false;
			}
		}

		// cancel abilities based on cancel tags
		if (!Ability.GetDefaultObject()->CancelAbilityTags.IsEmpty())
		{
			for (auto ActiveAbility : GetActiveAbilities())
			{
				if (ActiveAbility->AbilityTags.HasAny(Ability.GetDefaultObject()->CancelAbilityTags))
				{
					ActiveAbility->CancelAbility();
				}
			}
		}

		// instance ability
		UExAbility* InstancedAbility = NewObject<UExAbility>(this, Ability);
		if (!InstancedAbility)
		{
			return false;
		}

		InstancedAbility->OwnerInfo.World = GetWorld();
		InstancedAbility->OwnerInfo.OwningActor = GetOwner();
		InstancedAbility->OwnerInfo.OwningAbilityComponent = this;

		// activate ability
		if (InstancedAbility->CanActivateAbility())
		{
			AddActiveAbility(InstancedAbility);
			OwnerTags.AppendTags(InstancedAbility->GrantedTags);
			InstancedAbility->ActivateAbility();
			AbilityInstance = InstancedAbility; // return ability pointer form function
			return true;
		}
	}
	return false;
}

void UExAbilityComponent::DeactivateAbility(UExAbility* Ability)
{
	if (!Ability)
	{
		return;
	}
	
	OwnerTags.RemoveTags(Ability->GrantedTags);
	RemoveActiveAbility(Ability);
}

TArray<UExAbility*> UExAbilityComponent::GetActiveAbilities()
{
	return ActiveAbilities;
}

bool UExAbilityComponent::CheckIfAbilityIsActive(TSubclassOf<UExAbility> Ability)
{
	if (!Ability)
	{
		return false;
	}

	for (auto ActiveAbility : ActiveAbilities)
	{
		if (ActiveAbility->GetClass() == Ability)
		{
			return true;
		}
	}

	return false;
}

void UExAbilityComponent::AddActiveAbility(UExAbility* Ability)
{
	if (!Ability)
	{
		return;
	}
	ActiveAbilities.Add(Ability);
}

void UExAbilityComponent::RemoveActiveAbility(UExAbility* Ability)
{
	if (!Ability)
	{
		return;
	}
	ActiveAbilities.Remove(Ability);
}

bool UExAbilityComponent::GrantEffect(TSubclassOf<UExEffect> Effect)
{
	if (!Effect)
	{
		return false;
	}

	// checks if OwnerTags has any of the tags to block activation of the effect
	if (OwnerTags.HasAny(Effect.GetDefaultObject()->ActivationBlockedTags))
	{
		return false;
	}

	// instance effect
	UExEffect* InstancedEffect = NewObject<UExEffect>(this, Effect);
	if (!InstancedEffect)
	{
		return false;
	}
	InstancedEffect->OwnerInfo.World = GetWorld();
	InstancedEffect->OwnerInfo.OwningAbilityComponent = this;
	InstancedEffect->OwnerInfo.OwningActor = GetOwner();
	OwnerTags.AppendTags(InstancedEffect->GrantedTags);
	AddActiveEffect(InstancedEffect);
	InstancedEffect->StartEffect();
	return true;
}

void UExAbilityComponent::RemoveEffect(TSubclassOf<UExEffect> Effect)
{
	// removes effect only if it is an active effect
	for (auto EffectInstance : ActiveEffects)
	{
		if (EffectInstance->GetClass() == Effect)
		{
			EffectInstance->EndEffect();
			OwnerTags.RemoveTags(EffectInstance->GrantedTags);
			RemoveActiveEffect(EffectInstance);
			return;
		}
	}
}

bool UExAbilityComponent::CheckIfHasAttributeByClass(TSubclassOf<UExAttribute> Attribute)
{
	for (auto AttributeInstance : Attributes)
	{
		if (AttributeInstance->GetClass() == Attribute)
		{
			return true;
		}
	}
	return false;
}

UExAttribute* UExAbilityComponent::GetAttributeOfClass(TSubclassOf<UExAttribute> Attribute)
{
	// loop through attributes to find if any classes match the existing attributes.
	for (auto AttributeInstance : Attributes)
	{
		if (AttributeInstance->GetClass() == Attribute)
		{
			return AttributeInstance;
		}
	}
	
	return nullptr;
}

void UExAbilityComponent::SendGameplayTagEvent(FGameplayTag Tag)
{
	// loop through abilities and find action to sent a gameplay tag.
	for(auto ability : ActiveAbilities)
	{
		WaitForTag* Action = GetWorld()->GetLatentActionManager().FindExistingAction<class WaitForTag>(ability, ability->LatentID);
		if (Action)
		{
			GEngine->AddOnScreenDebugMessage(1, 1, FColor::Blue, TEXT("Tag Sent"));
			Action->TryTag(Tag);
		}
	}
}

void UExAbilityComponent::AddTagToOwnedTags(FGameplayTag Tag)
{
	OwnerTags.AddTag(Tag);
}

void UExAbilityComponent::RemoveTagFromOwnedTags(FGameplayTag Tag)
{
	OwnerTags.RemoveTag(Tag);
}






