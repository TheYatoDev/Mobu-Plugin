// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/MobuOscillator.h"


// Sets default values for this component's properties
UMobuOscillator::UMobuOscillator()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UMobuOscillator::BeginPlay()
{
	Super::BeginPlay();
	
	
}

float UMobuOscillator::TransformedSin()
{
	return Amplitude * FMath::Sin(RunningTime * TimeConstant);
}

float UMobuOscillator::TransformedCos()
{
	return Amplitude * FMath::Cos(RunningTime * TimeConstant);
}


// Called every frame
void UMobuOscillator::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Rotation effect
	GetOwner()->AddActorWorldRotation(Rotation * DeltaTime);
	
	//Oscillation effect
	RunningTime += DeltaTime;
	float DeltaZ = Amplitude * FMath::Sin(RunningTime * TimeConstant);
	GetOwner()->AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));
}

