// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

int MyTestFunction()
{
	return 40; 
}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	int ReturnValue = MyTestFunction();
	UE_LOG(LogTemp, Warning, TEXT("MyTestFunction returned: %d"), ReturnValue);

	StartLocation = GetActorLocation();
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);
}

void AMovingPlatform::MovePlatform(float DeltaTime)
{
	DistanceMoved = GetDistanceMoved();
	
	if (DistanceMoved >= MoveDistance)
	{
		float Overshoot = DistanceMoved - MoveDistance;

		UE_LOG(LogTemp, Warning, TEXT("Overshoot: %f"), Overshoot);

		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		FVector NewStartLocation = StartLocation + MoveDirection * MoveDistance;
		SetActorLocation(NewStartLocation);
		StartLocation = NewStartLocation;

		PlatformVelocity = -PlatformVelocity;
	}
	else
	{
		FVector CurrentLocation = GetActorLocation();

		CurrentLocation = CurrentLocation + (PlatformVelocity * DeltaTime);

		SetActorLocation(CurrentLocation);
	}
}

void AMovingPlatform::RotatePlatform(float DeltaTime)
{
	// Rotation logic would go here
	FRotator RotatorToAdd = RotationVelocity * DeltaTime;
	AddActorLocalRotation(RotatorToAdd);
}

float AMovingPlatform::GetDistanceMoved()
{ 
	return FVector::Dist(StartLocation, GetActorLocation());
}
