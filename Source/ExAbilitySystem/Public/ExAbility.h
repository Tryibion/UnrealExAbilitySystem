// Copyright by Chandler Cox 2022

#pragma once

#include "CoreMinimal.h"
#include "ExAbilityComponent.h"
#include "ExEffect.h"
#include "LatentActions.h"
#include "GameplayTagContainer.h"
#include "GameplayTaskOwnerInterface.h"
#include "ExAbility.generated.h"

/**
 * @brief This is a struct that holds owning information.
 */
USTRUCT(BlueprintType)
struct FAbilityOwnerInfo
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadOnly, Category="OwnerInfo")
	TObjectPtr<AActor> OwningActor;

	UPROPERTY(BlueprintReadOnly, Category="OwnerInfo")
	TObjectPtr<UExAbilityComponent> OwningAbilityComponent;

	UPROPERTY(Transient)
	TObjectPtr<UWorld> World;
};

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, Abstract)
class EXABILITYSYSTEM_API UExAbility : public UObject, public IGameplayTaskOwnerInterface
{
	GENERATED_BODY()

public:
	UExAbility();

	/**
	 * @brief Information of Owning objects.
	 */
	UPROPERTY()
	FAbilityOwnerInfo OwnerInfo;

	/**
	 * @brief Information of Owning objects.
	 */
	UPROPERTY(BlueprintReadOnly)
	bool bIsActive;

	/**
	 * @brief If true, the ability will commit the cost and the cooldown automatically. If false, the commit will need to be called manually.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Ability|General",
		meta = (ToolTip = "If true, the ability will commit the cost and the cooldown automatically. If false, the commit will need to be called manually."))
	bool bAutoCommit;

	/**
	 * @brief If true, the ability will not be allowed to be activated again if one is already active.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Ability|General",
		meta = (ToolTip = "If true, only one of this ability will be allowed to be activated at a time."))
	bool bAllowOnlyOne;

	/**
	 * @brief These tags are used to identify this ability.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Ability|Tags", meta = (ToolTip = "These tags are used to identify this ability."))
	FGameplayTagContainer AbilityTags;

	/**
	 * @brief These tags are granted to the owning ability component upon activation.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Ability|Tags", meta = (ToolTip = "These tags are granted to the owning ability component upon activation."))
	FGameplayTagContainer GrantedTags;

	/**
	 * @brief These tags are required for the ability component to own before activation.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Ability|Tags", meta = (ToolTip = "These tags are required for the ability component to own before activation."))
	FGameplayTagContainer ActivationRequiredTags;

	/**
	 * @brief These tags on the ability component will prevent this ability from activating.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Ability|Tags", meta = (ToolTip = "These tags on the ability component will prevent this ability from activating."))
	FGameplayTagContainer ActivationBlockedTags;

	/**
	 * @brief These tags will block other abilities from activating if they contain these tags.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Ability|Tags", meta = (ToolTip = "These tags will block other abilities from activating if they contain these tags."))
	FGameplayTagContainer BlockAbilityTags;

	/**
	 * @brief These tags will cancel active abilities if they contain these tags.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Ability|Tags", meta = (ToolTip = "These tags will cancel active abilities if they contain these tags."))
	FGameplayTagContainer CancelAbilityTags;

	/**
	 * @brief The cost of the ability.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ability|Cost", meta = (ToolTip = "The cost of the ability."))
	TSubclassOf<UExEffect> AbilityCost;

	/**
	 * @brief The cooldown of the ability.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ability|Cooldown", meta = (ToolTip = "The cooldown of the ability."))
	TSubclassOf<UExEffect> AbilityCooldown;

	/**
	 * @brief This function overrides the world and sets it to the owners world.
	 * @return returns owners world.
	 */
	virtual UWorld* GetWorld() const override { return OwnerInfo.World.Get(); };

	/**
	 * @brief This function calls the blueprint override version of this function to check if the user has defined any conditions
	 * @return Returns true if the ability can be activated.
	 */
	UFUNCTION(BlueprintCallable, Category= "Ability")
	bool CanActivateAbility();

	/**
	 * @brief This function is to be overriden in blueprints to add conditionals to activating abilities.
	 * @return returns true if the ability can be activated.
	 */
	UFUNCTION(BlueprintNativeEvent, Category= "Ability", meta = (DisplayName="Can Activate Ability"))
	bool CanActivateAbility_BP();

	/**
	 * @brief This function activates the ability in C++ and calls the blueprint function
	 */
	UFUNCTION()
	void ActivateAbility();

	/**
	 * @brief This function is overridden in blueprints to add what happens when an ability is activated.
	 */
	UFUNCTION(BlueprintNativeEvent, Category= "Ability", meta = (DisplayName="Activate Ability"))
	void ActivateAbility_BP();

	/**
	 * @brief This function should be called when an ability is ended. Can out clean up code here.
	 */
	UFUNCTION(BlueprintCallable, Category= "Ability")
	void EndAbility();

	/**
	 * @brief This function is the blueprint overridden function for ending an ability.
	 */
	UFUNCTION(BlueprintNativeEvent, Category= "Ability", meta = (DisplayName="End Ability"))
	void EndAbility_BP();

	/**
	 * @brief This function is called when an ability is told to cancel.
	 */
	UFUNCTION(BlueprintCallable, Category= "Ability")
	void CancelAbility();

	/**
	 * @brief This function is the blueprint overridden function for when the ability is told to cancel.
	 */
	UFUNCTION(BlueprintNativeEvent, Category= "Ability", meta = (DisplayName="Cancel Ability"))
	void CancelAbility_BP();

	/**
	 * @brief This function commits the ability by granting the ability cost and the cool down effects.
	 * @return Returns true if ability is committed.
	 */
	UFUNCTION(BlueprintCallable, Category="Ability", meta = (ToolTip = "This commits the cooldown and the cost of the ability."))
	bool CommitAbility();

	/**
	 * @brief This function gets the owning actor from OwnerInfo.
	 * @return Returns the owning actor. This could be a nullptr.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Ability")
	AActor* GetOwningActor();

	/**
	 * @brief This function gets the owning ability component from OwnerInfo
	 * @return Returns the owning ability component. This could be a nullptr.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Ability")
	UExAbilityComponent* GetOwningAbilityComponent();

	/**
	 * Setup tasks
	 */
	UPROPERTY()
	TArray<TObjectPtr<UGameplayTask>> ActiveTasks;
	virtual void OnGameplayTaskInitialized(UGameplayTask& Task) override;
	virtual void OnGameplayTaskActivated(UGameplayTask& Task) override;
	virtual void OnGameplayTaskDeactivated(UGameplayTask& Task) override;
	virtual UGameplayTasksComponent* GetGameplayTasksComponent(const UGameplayTask& Task) const override;
};
