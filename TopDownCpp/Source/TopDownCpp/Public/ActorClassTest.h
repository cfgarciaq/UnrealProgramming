// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "GameplayTagContainer.h"
#include "ActorClassTest.generated.h"

UCLASS()
class TOPDOWNCPP_API AActorClassTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorClassTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/*
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FVector v3_location;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FGameplayTag tag;*/

};
