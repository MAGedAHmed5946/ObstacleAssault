// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatorCompnent.h"

// Sets default values
ARotatorCompnent::ARotatorCompnent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARotatorCompnent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotatorCompnent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Rotate(DeltaTime,Velocity,ShouldMove);
}
void ARotatorCompnent::Rotate(float deltatime, FRotator velocity, bool shouldmove)
{
	if(shouldmove){
		FRotator NewRotation = GetActorRotation();
		NewRotation = NewRotation + (velocity*deltatime);
		SetActorRotation(NewRotation);
	}
}
