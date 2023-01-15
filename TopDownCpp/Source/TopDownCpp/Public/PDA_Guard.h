// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "PDA_Guard.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNCPP_API UPDA_Guard : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int healtPoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int armorPoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int armorDamageReduction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float walkSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float runSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FGameplayTag gp_tag;
	
};
