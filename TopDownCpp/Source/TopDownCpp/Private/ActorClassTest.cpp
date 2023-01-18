// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorClassTest.h"

// Sets default values
AActorClassTest::AActorClassTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	/*AActorClassTest::v3_location = FVector(0.f, 0.f, 0.f);
	SetActorLocation(&v3_location,false);*/

}

// Called when the game starts or when spawned
void AActorClassTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActorClassTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}