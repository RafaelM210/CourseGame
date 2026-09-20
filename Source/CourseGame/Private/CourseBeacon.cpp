// Fill out your copyright notice in the Description page of Project Settings.


#include "CourseBeacon.h"

// Sets default values
ACourseBeacon::ACourseBeacon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ACourseBeacon::BeginPlay()
{
	Super::BeginPlay();

	Charge = FMath::Clamp(Charge, 0.0f, 100.0f);

	OnChargeChanged(Charge);
}

// Called every frame
void ACourseBeacon::AddCharge(float Amount)
{
	const float NewCharge =
		FMath::Clamp(Charge + Amount, 0.0f, 100.0f);
	if (NewCharge != Charge) {
		Charge = NewCharge;
		OnChargeChanged(Charge);
	}

}

