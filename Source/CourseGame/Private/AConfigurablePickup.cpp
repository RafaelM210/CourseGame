// Fill out your copyright notice in the Description page of Project Settings.


#include "AConfigurablePickup.h"

// Sets default values
AAConfigurablePickup::AAConfigurablePickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AAConfigurablePickup::BeginPlay()
{
	Super::BeginPlay();
	if (ScoreValue <= 0.0f)
	{
		UE_LOG(LogTemp, Error, TEXT("Score Must be more than 0"));
	}
	
}

// Called every frame
float AAConfigurablePickup::GetScoreValue() const
{
	return ScoreValue;

}

