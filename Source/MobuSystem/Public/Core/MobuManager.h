// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MobuManager.generated.h"

class UBillboardComponent;

UCLASS()
class MOBUSYSTEM_API AMobuManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMobuManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UBillboardComponent	*MobuBillboard;
	
};
