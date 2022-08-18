// Copyright by Chandler Cox 2022

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "ExAttribute.generated.h"


class UExAbilityComponent;

/**
 * @brief The type of value for each attribute.
 */
UENUM(BlueprintType, Blueprintable)
enum class EAttributeValueType : uint8
{
	AVT_CurrentValue		UMETA(DisplayName = "Current Value"),
	AVT_MinimumValue		UMETA(DisplayName = "Minimum Value"),
	AVT_MaximumValue		UMETA(DisplayName = "Maximum Value")
};

/**
 * @brief This is the owner's information passed into the attribute.
 */
USTRUCT(BlueprintType)
struct FAttributeOwnerInfo
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadOnly, Category="OwnerInfo")
	AActor* OwningActor;

	UPROPERTY(BlueprintReadOnly, Category="OwnerInfo")
	UExAbilityComponent* OwningAbilityComponent;

	UPROPERTY(Transient)
	UWorld* World;
	
};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnValueChanged, float, NewValue, float, OldValue);

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable, Abstract, EditInlineNew)
class EXABILITYSYSTEM_API UExAttribute : public UObject
{
	GENERATED_BODY()

public:
	UExAttribute();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Attribute")
	FGameplayTag AttributeTag;

	UPROPERTY()
	FAttributeOwnerInfo OwnerInfo;

	UPROPERTY(BlueprintReadOnly, Category="Attribute")
	EAttributeValueType ChangedValue;

protected:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Attribute")
	float CurrentValue;

	UPROPERTY(BlueprintReadOnly, Category="Attribute")
	float OldCurrentValue;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Attribute")
	float MinimumValue;

	UPROPERTY(BlueprintReadOnly, Category="Attribute")
	float OldMinimumValue;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Attribute")
	float MaximumValue;

	UPROPERTY(BlueprintReadOnly, Category="Attribute")
	float OldMaximumValue;

public:

	
	virtual UWorld* GetWorld() const override { return OwnerInfo.World; };

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Attribute")
	AActor* GetOwningActor();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Attribute")
	UExAbilityComponent* GetOwningAbilityComponent();

	/**
	 * @brief Delegate broadcast when the current value of an attribute is changed.
	 */
	UPROPERTY(BlueprintAssignable, Category="Attribute|Events")
	FOnValueChanged OnCurrentValueChanged;

	/**
	 * @brief Delegate broadcast when the Minimum value of an attribute is changed.
	 */
	UPROPERTY(BlueprintAssignable, Category="Attribute|Events")
	FOnValueChanged OnMinimumValueChanged;

	/**
	 * @brief Delegate broadcast when the Maximum value of an attribute is changed.
	 */
	UPROPERTY(BlueprintAssignable, Category="Attribute|Events")
	FOnValueChanged OnMaximumValueChanged;

	/**
	 * @brief This function changes the current value to the new value.
	 * @param NewValue This is the new value to set the current value to.
	 */
	UFUNCTION(BlueprintCallable, Category="Attribute")
	void ChangeCurrentValue(float NewValue);

	/**
	 * @brief This function changes the minimum value to the new value.
	 * @param NewValue This is the new value to set the minimum value to.
	 */
	UFUNCTION(BlueprintCallable, Category="Attribute")
	void ChangeMinimumValue(float NewValue);

	/**
	 * @brief This function changes the maximum value to the new value.
	 * @param NewValue This is the new value to set the maximum value to.
	 */
	UFUNCTION(BlueprintCallable, Category="Attribute")
	void ChangeMaximumValue(float NewValue);

	/**
	 * @brief This function gets the current value.
	 * @return Returns the current value.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Attribute")
	float GetCurrentValue();

	/**
	 * @brief This function gets the minimum value.
	 * @return Returns the minimum value.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Attribute")
	float GetMinimumValue();

	/**
	 * @brief This function gets the maximum value.
	 * @return Returns the maximum value.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Attribute")
	float GetMaximumValue();

	/**
	 * @brief This function is called after the attribute has been changed.
	 */
	UFUNCTION(BlueprintCallable, Category="Attribute")
	virtual void PostAttributeChange();

	/**
	 * @brief This function is the blueprint overridden function for after the attribute has been changed.
	 */
	UFUNCTION(BlueprintNativeEvent, Category="Attribute", meta = (DisplayName="Post Attribute Change"))
	void PostAttributeChange_BP();

	/**
	 * @brief This function is called before an attribute is changed.
	 */
	UFUNCTION(BlueprintCallable, Category="Attribute")
	virtual void PreAttributeChange();

	/**
	 * @brief This function is the blueprint overridden function for before the attribute has been changed.
	 */
	UFUNCTION(BlueprintNativeEvent, Category="Attribute", meta = (DisplayName="Pre Attribute Change"))
	void PreAttributeChange_BP();
	
};
