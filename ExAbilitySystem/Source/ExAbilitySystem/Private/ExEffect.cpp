// Copyright by Chandler Cox 2022


#include "ExEffect.h"

#include "ExAbilityComponent.h"
#include "ExAbilitySystem/ExAbilitySystemLogging.h"

UExEffect::UExEffect()
{
	ActivationType = EEffectActivationType::EAT_Instant;
	Duration = 5.0f;
	ActivationFiringRate = 0.01f;
	ActiveTime = 0.0f;
}

void UExEffect::StartEffect()
{
	UE_EXABILITY_LOG("%s effect started", *GetName());
	EffectTimerHandle.Invalidate();
	DurationCounter = 0.f;

	// based on activation type set a different timer.
	switch (ActivationType)
	{
		case EEffectActivationType::EAT_Instant:
			RunEffect();
			break;
		case EEffectActivationType::EAT_HasDuration:
			GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this, &UExEffect::RunEffect, ActivationFiringRate, true, 0.0f);
			break;
		case EEffectActivationType::EAT_Infinite:
			GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this, &UExEffect::RunEffect, ActivationFiringRate, true, 0.0f);
			break;
		default:
			break;
	}
}

void UExEffect::RunEffect()
{
	UE_EXABILITY_LOG("%s effect running", *GetName());
	
	// run for each attribute to modify
	for (auto AttributeToModify : ModifyAttribute)
	{
		if (OwnerInfo.OwningAbilityComponent.Get()->CheckIfHasAttributeByClass(AttributeToModify.Attribute))
		{
			UExAttribute* Attribute = OwnerInfo.OwningAbilityComponent.Get()->GetAttributeOfClass(AttributeToModify.Attribute);
			if (!Attribute)
			{
				continue;
			}

			// TODO: simplify via functions
			switch (AttributeToModify.AttributeValueToChange)
			{
				case EAttributeValueToChange::AVC_CurrentValue:
					{
						switch (AttributeToModify.ModifyType)
						{
						case EEffectModifyType::EMT_Add:
							Attribute->ChangeCurrentValue(Attribute->GetCurrentValue() + AttributeToModify.ModifyValue);
							break;
						case EEffectModifyType::EMT_Multiply:
							Attribute->ChangeCurrentValue(Attribute->GetCurrentValue() * AttributeToModify.ModifyValue);
							break;
						case EEffectModifyType::EMT_Divide:
							Attribute->ChangeCurrentValue(Attribute->GetCurrentValue() / AttributeToModify.ModifyValue);
							break;
						case EEffectModifyType::EMT_CustomCalculation:
							{
								bool bAlreadyContains = false;
								for	(auto Calculation : CustomEffectCalculation)
								{
									if (Calculation->GetClass() == AttributeToModify.EffectCalculation)
									{
										bAlreadyContains = true;
										Attribute->ChangeCurrentValue(Calculation->Calculation());
										break;
									}
								}
								
								if (!bAlreadyContains)
								{
									UExEffectCalculation* EffectCalculation = NewObject<UExEffectCalculation>(this, AttributeToModify.EffectCalculation);
									if (EffectCalculation)
									{
										EffectCalculation->ParentEffect = this;
										EffectCalculation->AttributeToModify = Attribute;
										CustomEffectCalculation.Add(EffectCalculation);
										Attribute->ChangeCurrentValue(EffectCalculation->Calculation());
									}
								}
							}
							break;
						default:
							break;
						}
					}
					break;
				case EAttributeValueToChange::AVC_MinimumValue:
					{
						switch (AttributeToModify.ModifyType)
						{
						case EEffectModifyType::EMT_Add:
							Attribute->ChangeMinimumValue(Attribute->GetMinimumValue() + AttributeToModify.ModifyValue);
							break;
						case EEffectModifyType::EMT_Multiply:
							Attribute->ChangeMinimumValue(Attribute->GetMinimumValue() * AttributeToModify.ModifyValue);
							break;
						case EEffectModifyType::EMT_Divide:
							Attribute->ChangeMinimumValue(Attribute->GetMinimumValue() / AttributeToModify.ModifyValue);
							break;
						case EEffectModifyType::EMT_CustomCalculation:
							{
								bool bAlreadyContains = false;
								for	(auto Calculation : CustomEffectCalculation)
								{
									if (Calculation->GetClass() == AttributeToModify.EffectCalculation)
									{
										bAlreadyContains = true;
										Attribute->ChangeMinimumValue(Calculation->Calculation());
										break;
									}
								}
								
								if (!bAlreadyContains)
								{
									UExEffectCalculation* EffectCalculation = NewObject<UExEffectCalculation>(this, AttributeToModify.EffectCalculation);
									if (EffectCalculation)
									{
										EffectCalculation->ParentEffect = this;
										EffectCalculation->AttributeToModify = Attribute;
										CustomEffectCalculation.Add(EffectCalculation);
										Attribute->ChangeMinimumValue(EffectCalculation->Calculation());
									}
								}
							}
							break;
						default:
							break;
						}
					}
					break;
				case EAttributeValueToChange::AVC_MaximumValue:
					{
						switch (AttributeToModify.ModifyType)
						{
						case EEffectModifyType::EMT_Add:
							Attribute->ChangeMaximumValue(Attribute->GetMaximumValue() + AttributeToModify.ModifyValue);
							break;
						case EEffectModifyType::EMT_Multiply:
							Attribute->ChangeMaximumValue(Attribute->GetMaximumValue() * AttributeToModify.ModifyValue);
							break;
						case EEffectModifyType::EMT_Divide:
							Attribute->ChangeMaximumValue(Attribute->GetMaximumValue() / AttributeToModify.ModifyValue);
							break;
						case EEffectModifyType::EMT_CustomCalculation:
							{
								bool bAlreadyContains = false;
								for	(auto Calculation : CustomEffectCalculation)
								{
									if (Calculation->GetClass() == AttributeToModify.EffectCalculation)
									{
										bAlreadyContains = true;
										Attribute->ChangeMaximumValue(Calculation->Calculation());
										break;
									}
								}
								
								if (!bAlreadyContains)
								{
									UExEffectCalculation* EffectCalculation = NewObject<UExEffectCalculation>(this, AttributeToModify.EffectCalculation);
									if (EffectCalculation)
									{
										EffectCalculation->ParentEffect = this;
										EffectCalculation->AttributeToModify = Attribute;
										CustomEffectCalculation.Add(EffectCalculation);
										Attribute->ChangeMaximumValue(EffectCalculation->Calculation());
									}
								}
							}
							break;
						default:
							break;
						}
					}
					break;
				default:
					break;
			}
			
		}
	}

	// timing and removing effect based on conditions and types.
	switch (ActivationType)
	{
		case EEffectActivationType::EAT_Instant:
			OwnerInfo.OwningAbilityComponent.Get()->RemoveEffect(this);
			break;
		case EEffectActivationType::EAT_HasDuration:
			DurationCounter += ActivationFiringRate;
			if (DurationCounter >= Duration)
			{
				OwnerInfo.OwningAbilityComponent.Get()->RemoveEffect(this);
			}
			break;
		case EEffectActivationType::EAT_Infinite:
			
			break;
		default:
			EndEffect();
			break;
	}
	ActiveTime += ActivationFiringRate;
	OnEffectRunning();
}

void UExEffect::EndEffect()
{
	UE_EXABILITY_LOG("%s effect ended", *GetName());
	CustomEffectCalculation.Empty();
	GetWorld()->GetTimerManager().ClearTimer(EffectTimerHandle);
}

void UExEffect::OnEffectRunning_Implementation()
{
	
}
