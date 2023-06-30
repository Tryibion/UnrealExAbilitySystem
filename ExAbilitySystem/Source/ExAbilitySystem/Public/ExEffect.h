// Copyright by Chandler Cox 2022

#pragma once

#include "CoreMinimal.h"
#include "ExAttribute.h"
#include "ExEffectCalculation.h"
#include "GameplayTagContainer.h"
#include "ExEffect.generated.h"

/**
 * @brief The type of the effect activation.
 */
UENUM(Blueprintable, BlueprintType)
enum class EEffectActivationType : uint8
{
	EAT_Instant				UMETA(DisplayName = "Instant"),
	EAT_HasDuration			UMETA(DisplayName = "Has Duration"),
	EAT_Infinite			UMETA(DisplayName = "Infinite")
};

/**
 * @brief The type of the effect modification.
 */
UENUM(Blueprintable, BlueprintType)
enum class EEffectModifyType : uint8
{
	EMT_Add					UMETA(DisplayName = "Add"),
	EMT_Multiply			UMETA(DisplayName = "Multiply"),
	EMT_Divide				UMETA(DisplayName = "Divide"),
	EMT_CustomCalculation	UMETA(DisplayName = "Custom Calculation")
};

/**
 * @brief The type of attribute value to change.
 */
UENUM(Blueprintable, BlueprintType)
enum class EAttributeValueToChange : uint8
{
	AVC_CurrentValue		UMETA(DisplayName = "Current Value"),
	AVC_MinimumValue		UMETA(DisplayName = "Minimum Value"),
	AVC_MaximumValue		UMETA(DisplayName = "Maximum Value")
};

/**
 * @brief How the attribute is modified by the effect.
 */
USTRUCT(BlueprintType)
struct FEffectAttributeModifier
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect|Attribute Modification")
	TSubclassOf<UExAttribute> Attribute;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect|Attribute Modification")
	EEffectModifyType ModifyType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect|Attribute Modification")
	EAttributeValueToChange AttributeValueToChange;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect|Attribute Modification", meta = (EditCondition = "ModifyType != EEffectModifyType::EMT_CustomCalculation"))
	float ModifyValue;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect|Attribute Modification",
		meta = (EditCondition = "ModifyType == EEffectModifyType::EMT_CustomCalculation",
				ToolTip = "Custom calculation class to use if Modify Type is set to custom calculation."))
	TSubclassOf<UExEffectCalculation> EffectCalculation;
};

/**
 * @brief The Owner information for an effect.
 */
USTRUCT(BlueprintType)
struct FEffectOwnerInfo
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
UCLASS(BlueprintType, Blueprintable, Abstract)
class EXABILITYSYSTEM_API UExEffect : public UObject
{
	GENERATED_BODY()

protected:
	/**
	 * @brief A counter to keep track of the duration of the effect.
	 */
	UPROPERTY()
	float DurationCounter;

public:

	UExEffect();

	/**
	 * @brief The amount of time the effect has been active.
	 */
	UPROPERTY(BlueprintReadOnly, Category="Effect")
	float ActiveTime;

	UPROPERTY(BlueprintReadOnly, Category="Effect")
	FEffectOwnerInfo OwnerInfo;

	virtual UWorld* GetWorld() const override { return OwnerInfo.World.Get(); };

	/**
	 * @brief Activation type for the effect.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect")
	EEffectActivationType ActivationType;

	/**
	 * @brief The duration of the effect in seconds. Only valid for Has Duration type.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect",
		meta = (EditCondition = "ActivationType == EEffectActivationType::EAT_HasDuration",
				ToolTip = "The duration of the effect in seconds. Only valid for Has Duration type.",
				ClampMin = "0"))
	float Duration;

	/**
	 * @brief How often the timer will fire and activate the effect. Only valid for effects that have a duration.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect",
		meta = (EditCondition = "ActivationType == EEffectActivationType::EAT_HasDuration || ActivationType == EEffectActivationType::EAT_Infinite",
				ToolTip = "How often the timer will fire and activate the effect. Only valid for effects that have a duration.",
				ClampMin = "0"))
	float ActivationFiringRate;

	/**
	 * @brief These tags are granted to the owning ability component upon activation.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect|Tags", meta = (ToolTip = "These tags are granted to the owning ability component upon activation."))
	FGameplayTagContainer GrantedTags;

	/**
	 * @brief These tags on the ability component will prevent this effect from activating.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect|Tags", meta = (ToolTip = "These tags on the ability component will prevent this effect from activating."))
	FGameplayTagContainer ActivationBlockedTags;

	/**
	 * @brief A container to hold many attribute modifiers.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect|Attribute Modification")
	TArray<FEffectAttributeModifier> ModifyAttribute;

	/**
	 * @brief Called when an effect is started.
	 */
	UFUNCTION()
	void StartEffect();

	/**
	 * @brief Called when an effect is running.
	 */
	UFUNCTION()
	void RunEffect();

	/**
	 * @brief Called when an effect ends.
	 */
	UFUNCTION()
	void EndEffect();

	/**
	 * @brief Blueprint function called when the event is running for extra functionality.
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Effect")
	void OnEffectRunning();
	
	/**
	 * @brief Timer handle for the effect.
	 */
	UPROPERTY()
	FTimerHandle EffectTimerHandle;

	UPROPERTY()
	TArray<class UExEffectCalculation*> CustomEffectCalculation;
};
