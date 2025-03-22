// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MoverComponent.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMoverComponent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoverComponent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
	FVector Velocity = {0,0,0};

	UPROPERTY(EditAnywhere)
	bool ShouldMove = false;

	UPROPERTY(EditAnywhere)
	FVector Displacement = {0,0,0};

	FVector StartLocation ;

	UPROPERTY(EditAnywhere)
	float Distance = 0.0f;

	UPROPERTY(EditAnywhere)
	FVector EndLocation ;
	void Move(float deltatime, FVector &velocity, bool shouldmove, float &distance, FVector &Displayment);

};
