// Copyright by Chandler Cox 2022


#include "ExAbilityComponent.h"

#include "ExAbility.h"
#include "ExEffect.h"
#include "ExAbilitySystem/ExAbilitySystemLogging.h"

// Sets default values for this component's properties
UExAbilityComponent::UExAbilityComponent(const FObjectInitializer& ObjectInitializer)
	: Super (ObjectInitializer)
{
	PrimaryComponentTick.bCanEverTick = false;
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
		UE_EXABILITY_LOG("%s ability has been created on %s ability component", *InstancedAttribute->GetName(), *GetName())
	}
}

void UExAbilityComponent::AddActiveEffect(UExEffect* Effect)
{
	if (!Effect)
	{
		return;
	}
	ActiveEffects.Add(Effect);
	UE_EXABILITY_LOG("%s effect has been added as an active effect from %s ability component", *Effect->GetName(), *GetName())
}

void UExAbilityComponent::RemoveActiveEffect(UExEffect* Effect)
{
	if (!Effect)
	{
		return;
	}
	ActiveEffects.Remove(Effect);
	UE_EXABILITY_LOG("%s effect has been removed as an active effect from %s ability component", *Effect->GetName(), *GetName())
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
	UE_EXABILITY_LOG("%s ability has been granted to %s ability component", *Ability->GetName(), *GetName())
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
				UE_EXABILITY_LOG("%s ability could not be activated due to the owner not having all of the required tags.", *GrantedAbility->GetName());
				return false;
			}
		}

		// check if the ability should be blocked by existing tags
		if (!GrantedAbility.GetDefaultObject()->ActivationBlockedTags.IsEmpty())
		{
			if (OwnerTags.HasAny(GrantedAbility.GetDefaultObject()->ActivationBlockedTags))
			{
				UE_EXABILITY_LOG("%s ability could not be activated due to exisitng tags blocking the activation.", *GrantedAbility->GetName());
				return false;
			}
		}

		// check if the ability should be blocked by other abilities
		for (auto ActiveAbility : GetActiveAbilities())
		{
			if (ActiveAbility->BlockAbilityTags.HasAny(GrantedAbility.GetDefaultObject()->AbilityTags))
			{
				UE_EXABILITY_LOG("%s ability could not be activated due to an active ability blocking its activation.", *GrantedAbility->GetName());
				return false;
			}
			if (ActiveAbility->GetClass() == Ability)
			{
				if (ActiveAbility->bAllowOnlyOne)
				{
					UE_EXABILITY_LOG("%s ability could not be activated due to the same ability already being active. To allow multiple of the same ability change the bAllowOnlyOne to false", *GrantedAbility->GetName());
					return false;
				}
			}
		}

		// check if cooldown is active
		if (Ability.GetDefaultObject()->AbilityCooldown)
		{
			if (OwnerTags.HasAny(Ability.GetDefaultObject()->AbilityCooldown.GetDefaultObject()->GrantedTags))
			{
				UE_EXABILITY_LOG("%s ability could not be activated due to the cooldown being active.", *GrantedAbility->GetName());
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
					UE_EXABILITY_LOG("%s ability canceled the active ability %s.", *GrantedAbility->GetName(), *ActiveAbility->GetName());
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
			OnGameplayTagsAdded.Broadcast(InstancedAbility->GrantedTags);
			UE_EXABILITY_LOG("%s ability has been sucessfully activated.", *InstancedAbility->GetName());
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
	OnGameplayTagsRemoved.Broadcast(Ability->GrantedTags);
	UE_EXABILITY_LOG("%s ability has been taged to be removed.", *Ability->GetName());
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
	UE_EXABILITY_LOG("%s ability has been added as an active ability.", *Ability->GetName());
}

void UExAbilityComponent::RemoveActiveAbility(UExAbility* Ability)
{
	if (!Ability)
	{
		return;
	}
	ActiveAbilities.Remove(Ability);
	UE_EXABILITY_LOG("%s ability has been removed as an active ability.", *Ability->GetName());
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
	OnGameplayTagsAdded.Broadcast(InstancedEffect->GrantedTags);
	AddActiveEffect(InstancedEffect);
	UE_EXABILITY_LOG("%s effect has been granted and activated.", *InstancedEffect->GetName());
	InstancedEffect->StartEffect();
	return true;
}

void UExAbilityComponent::RemoveEffectByClass(TSubclassOf<UExEffect> Effect)
{
	// removes effect only if it is an active effect
	for (auto EffectInstance : ActiveEffects)
	{
		if (EffectInstance->GetClass() == Effect)
		{
			RemoveEffect(EffectInstance);
			return;
		}
	}
}

void UExAbilityComponent::RemoveEffect(UExEffect* Effect)
{
	if (ActiveEffects.Contains(Effect))
	{
		Effect->EndEffect();
		OwnerTags.RemoveTags(Effect->GrantedTags);
		OnGameplayTagsRemoved.Broadcast(Effect->GrantedTags);
		RemoveActiveEffect(Effect);
		UE_EXABILITY_LOG("%s effect has been removed.", *Effect->GetName());
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

void UExAbilityComponent::AddTagsToOwnedTags(FGameplayTagContainer Tags)
{
	OwnerTags.AppendTags(Tags);
	OnGameplayTagsAdded.Broadcast(Tags);
}

void UExAbilityComponent::RemoveTagsFromOwnedTags(FGameplayTagContainer Tags)
{
	OwnerTags.RemoveTags(Tags);
	OnGameplayTagsRemoved.Broadcast(Tags);
}

void UExAbilityComponent::SendGameplayTagEvent(FGameplayTag Tag)
{
	OnGameplayEvent.Broadcast(Tag);
	UE_EXABILITY_LOG("%s tag was broadcast as a gameplay tag event.", *Tag.ToString());
}






