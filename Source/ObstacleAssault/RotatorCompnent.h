// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatorCompnent.generated.h"

UCLASS()
class OBSTACLEASSAULT_API ARotatorCompnent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatorCompnent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
	FRotator Velocity = {0,0,0};

	UPROPERTY(EditAnywhere)
	bool ShouldMove;

	void Rotate(float deltatime, FRotator velocity, bool shouldmove);
};
