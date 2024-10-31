// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/Collectable/Collectable.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/KismetSystemLibrary.h" // for print strings

ACollectable::ACollectable()
{
	CollectableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollectableMesh"));
	RootComponent = CollectableMesh;

	InteractionText = FText::FromString("Collect");
}

void ACollectable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void ACollectable::BeginPlay()
{
	Super::BeginPlay();
	
}
