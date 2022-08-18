// Copyright by Chandler Cox 2022


#include "ExEffect.h"

#include "ExAbilityComponent.h"

UExEffect::UExEffect()
{
	ActivationType = EEffectActivationType::EAT_Instant;
	Duration = 5.0f;
	ActivationFiringRate = 0.01f;
	ActiveTime = 0.0f;
}

void UExEffect::StartEffect()
{
	UE_LOG(LogTemp, Display, TEXT("%s effect started"), *GetName());
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
	UE_LOG(LogTemp, Display, TEXT("%s effect running"), *GetName());

	// run for each attribute to modify
	for (auto AttributeToModify : ModifyAttribute)
	{
		if (OwnerInfo.OwningAbilityComponent->CheckIfHasAttributeByClass(AttributeToModify.Attribute))
		{
			UExAttribute* Attribute = OwnerInfo.OwningAbilityComponent->GetAttributeOfClass(AttributeToModify.Attribute);
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
								// not efficient to create instance everytime. TODO: make more efficient
								UExEffectCalculation* CustomCalculation = NewObject<UExEffectCalculation>(this, AttributeToModify.EffectCalculation);
								if (CustomCalculation)
								{
									CustomCalculation->ParentEffect = this;
									CustomCalculation->AttributeToModify = Attribute;
									Attribute->ChangeCurrentValue(CustomCalculation->Calculation());
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
								// not efficient to create instance everytime. TODO: make more efficient
								UExEffectCalculation* CustomCalculation = NewObject<UExEffectCalculation>(this, AttributeToModify.EffectCalculation);
								if (CustomCalculation)
								{
									CustomCalculation->ParentEffect = this;
									CustomCalculation->AttributeToModify = Attribute;
									Attribute->ChangeMinimumValue(CustomCalculation->Calculation());
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
								// not efficient to create instance everytime. TODO: make more efficient
								UExEffectCalculation* CustomCalculation = NewObject<UExEffectCalculation>(this, AttributeToModify.EffectCalculation);
								if (CustomCalculation)
								{
									CustomCalculation->ParentEffect = this;
									CustomCalculation->AttributeToModify = Attribute;
									Attribute->ChangeMaximumValue(CustomCalculation->Calculation());
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
			OwnerInfo.OwningAbilityComponent->RemoveEffect(this->GetClass());
			break;
		case EEffectActivationType::EAT_HasDuration:
			DurationCounter += ActivationFiringRate;
			if (DurationCounter >= Duration)
			{
				OwnerInfo.OwningAbilityComponent->RemoveEffect(this->GetClass());
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
	UE_LOG(LogTemp, Display, TEXT("%s effect ended"), *GetName());
	GetWorld()->GetTimerManager().ClearTimer(EffectTimerHandle);
}

void UExEffect::OnEffectRunning_Implementation()
{
	
}
