// Copyright by Chandler Cox 2022

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ExEffectCalculation.generated.h"

class UExAttribute;
class UExEffect;

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable, Abstract)
class EXABILITYSYSTEM_API UExEffectCalculation : public UObject
{
	GENERATED_BODY()

public:

	UExEffectCalculation();

	/**
	 * @brief The attribute instance to modify
	 */
	UPROPERTY(BlueprintReadOnly, Category= "Calculation|Info")
	UExAttribute* AttributeToModify;

	/**
	 * @brief The effect that called the calculation
	 */
	UPROPERTY(BlueprintReadOnly, Category= "Calculation|Info")
	UExEffect* ParentEffect;

	/**
	 * @brief This function is where to put the custom calculation.
	 * @return Returns a float to change the value of the attribute.
	 */
	UFUNCTION(BlueprintCallable, Category="Calculation")
	float Calculation();

	/**
	 * @brief This function is a blueprint overridden function called by Calculation().
	 * @return this returns a float to change the value of the attribute.
	 */
	UFUNCTION(BlueprintNativeEvent, Category="Calculation", meta = (DisplayName = "Calculation"))
	float Calculation_BP();
};
