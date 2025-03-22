// Fill out your copyright notice in the Description page of Project Settings.


#include "MoverComponent.h"

// Sets default values
AMoverComponent::AMoverComponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMoverComponent::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
	EndLocation = StartLocation + Displacement;
}

// Called every frame
void AMoverComponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move(DeltaTime, Velocity, ShouldMove, Distance, Displacement);

}
void AMoverComponent::Move(float deltatime, FVector &velocity, bool shouldmove, float &distance, FVector &Displayment)
{

	if(shouldmove){
		FVector NewLocation = GetActorLocation();
		NewLocation = NewLocation + (velocity*deltatime);
		SetActorLocation(NewLocation);
		distance = (NewLocation - StartLocation).Size();
		if (distance >= Displayment.Size())
		{
			velocity = -velocity;
		}
	}
}
