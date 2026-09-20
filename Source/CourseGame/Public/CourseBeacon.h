// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CourseBeacon.generated.h"

UCLASS()
class COURSEGAME_API ACourseBeacon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACourseBeacon();

	UFUNCTION(BlueprintPure, Category = "Beacon")
	float GetCharge() const { return Charge; }

	UFUNCTION(BlueprintCallable, Category = "Beacon")
	void AddCharge(float Amount);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Beacon")
	void OnChargeChanged(float NewCharge);

private:
	UPROPERTY(EditAnywhere, Category = "Beacon",
		meta = (CLampMin = "0.0", CLampMax = "100.0"))
	float Charge = 0.0f;

};
