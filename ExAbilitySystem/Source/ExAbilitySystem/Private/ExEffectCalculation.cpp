// Copyright by Chandler Cox 2022


#include "ExEffectCalculation.h"

#include "ExAttribute.h"
#include "ExEffect.h"

UExEffectCalculation::UExEffectCalculation()
{
}

float UExEffectCalculation::Calculation()
{
	return Calculation_BP();
}

float UExEffectCalculation::Calculation_BP_Implementation()
{
	return 0.0f;
}
