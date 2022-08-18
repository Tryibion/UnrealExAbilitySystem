// Copyright by Chandler Cox 2022

#pragma once

#include "CoreMinimal.h"
#include "ExAttribute.h"
#include "GameplayTagContainer.h"

#include "Components/ActorComponent.h"
#include "ExAbilityComponent.generated.h"

class UExAbility;
class UExEffect;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EXABILITYSYSTEM_API UExAbilityComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UExAbilityComponent();
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	/**
	 * @brief A list of default attributes set in the editor.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Ability System|Attributes")
	TArray<TSubclassOf<UExAttribute>> DefaultAttributes;

	/**
	 * @brief A list of the instanced attribute references.
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category= "Ability System|Attributes")
	TArray<UExAttribute*> Attributes;

	/**
	 * @brief A list of the default abilities set in the editor.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Ability System|Abilities")
	TArray<TSubclassOf<UExAbility>> DefaultAbilities;

	/**
	 * @brief A list of the granted abilities. This list holds the abilities that the actor can use.
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category= "Ability System|Abilities")
	TArray<TSubclassOf<UExAbility>> GrantedAbilities;

	/**
	 * @brief A list of the active instanced abilities.
	 */
	UPROPERTY(VisibleInstanceOnly, Category= "Ability System|Abilities")
	TArray<UExAbility*> ActiveAbilities;

	/**
	 * @brief A list of default effects to set in the editor.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Ability System|Effects")
	TArray<TSubclassOf<UExEffect>> DefaultEffects;

	/**
	 * @brief A list of the active instanced effects.
	 */
	UPROPERTY(VisibleInstanceOnly, Category= "Ability System|Effects")
	TArray<UExEffect*> ActiveEffects;

public:
	/**
	 * A container of tags the owner has to determine what abilities can be activated, cool downs, etc. 
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= "Ability System")
	FGameplayTagContainer OwnerTags;
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/**
	 * @brief The function takes an ability subclass and adds it to GrantedAbilities.
	 * @param Ability The subclass of an ability.
	 * @return returns true if the ability is successfully added to GrantedAbilities.
	 */
	UFUNCTION(BlueprintCallable, Category="Ability|Abilities")
	bool GrantAbility(TSubclassOf<UExAbility> Ability);

	/**
	 * @brief This function checks to make sure there are no conflicting tags or has all the tags in OwnerTags required to activate an ability. This function then instances the ability.
	 * @param Ability The subclass of the ability that should be activated.
	 * @param AbilityInstance An instance of an ability that is returned if instanced. This is a nullptr if instancing fails.
	 * @return Returns true if an ability can be activated and is successfully instanced.
	 */
	UFUNCTION(BlueprintCallable, Category="Ability|Abilities")
	bool TryActivateAbility(TSubclassOf<UExAbility> Ability, UExAbility*& AbilityInstance);

	/**
	 * @brief This function removes the tags from OwnerTags and calls RemoveActivateAbility.
	 * @param Ability This is an instance of an ability.
	 */
	void DeactivateAbility(UExAbility* Ability);

	/**
	 * @brief This function gets abilities that are activated.
	 * @return Returns a TArray of ability instances in the ActiveAbilities TArray.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Ability|Abilities")
	TArray<UExAbility*> GetActiveAbilities();

	/**
	 * @brief This function checks the ActiveAbilities TArray to see if an ability is currently active.
	 * @param Ability This is a subclass of an ability.
	 * @return Returns true if ability is active.
	 */
	UFUNCTION(BlueprintCallable, Category="Ability|Abilities")
	bool CheckIfAbilityIsActive(TSubclassOf<UExAbility> Ability);

	/**
	 * @brief This function adds an instanced ability to the ActiveAbilities TArray.
	 * @param Ability This is an instance of an ability.
	 */
	UFUNCTION()
	void AddActiveAbility(UExAbility* Ability);

	/**
	 * @brief This function removes an instance ability from the ActiveAbilities TArray.
	 * @param Ability This is an instanced ability.
	 */
	UFUNCTION()
	void RemoveActiveAbility(UExAbility* Ability);

	/**
	 * @brief This function creates an attribute and instances it.
	 * @param DefaultAttribute The subclass of an attribute.
	 */
	UFUNCTION()
	void CreateAttribute(TSubclassOf<UExAttribute> DefaultAttribute);

	/**
	 * @brief This function adds an effect to the ActiveEffects TArray.
	 * @param Effect This is an instance of an effect.
	 */
	UFUNCTION()
	void AddActiveEffect(UExEffect* Effect);

	/**
	 * @brief This function removes an effect from the ActiveEffects TArray
	 * @param Effect This is an instance of an effect.
	 */
	UFUNCTION()
	void RemoveActiveEffect(UExEffect* Effect);

	/**
	 * @brief This function checks the owner tags and instances an effect.
	 * @param Effect This is a subclass of an effect.
	 * @return return true if the effect is instanced.
	 */
	UFUNCTION(BlueprintCallable, Category="Ability|Effects")
	bool GrantEffect(TSubclassOf<UExEffect> Effect);

	/**
	 * @brief This function removes an effect if the effect is active.
	 * @param Effect A subclass of an effect.
	 */
	UFUNCTION(BlueprintCallable, Category="Ability|Effects")
	void RemoveEffect(TSubclassOf<UExEffect> Effect);

	/**
	 * @brief This function checks to see if the owner has an attribute.
	 * @param Attribute This is a subclass of an attribute.
	 * @return Returns true if Attributes contains the attribute parameter.
	 */
	UFUNCTION(BlueprintCallable, Category="Ability|Attributes")
	bool CheckIfHasAttributeByClass(TSubclassOf<UExAttribute> Attribute);

	/**
	 * @brief This function get an instance of an attribute based on its class.
	 * @param Attribute This is the subclass of the attribute desired.
	 * @return Returns the instanced attribute if it exists, otherwise returns nullptr.
	 */
	UFUNCTION(BlueprintCallable, Category="Ability|Attributes")
	UExAttribute* GetAttributeOfClass(TSubclassOf<UExAttribute> Attribute);

	/**
	 * @brief This function find any abilities that are waiting for a tag event to continue and sends a tag to them.
	 * @param Tag This is a gameplay tag.
	 */
	UFUNCTION(BlueprintCallable)
	void SendGameplayTagEvent(FGameplayTag Tag);

	/**
	 * @brief This function adds a gameplay tag to the OwnerTags container.
	 * @param Tag This is a gameplay tag.
	 */
	UFUNCTION(BlueprintCallable, Category="Ability|Tags")
	void AddTagToOwnedTags(FGameplayTag Tag);

	/**
	 * @brief This function removes a tag from the OwnerTags container.
	 * @param Tag This is a gameplay tag.
	 */
	UFUNCTION(BlueprintCallable, Category="Ability|Tags")
	void RemoveTagFromOwnedTags(FGameplayTag Tag);
	
};


