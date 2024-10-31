// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MobuAIController.generated.h"

class UMobuRoutineTree;

UCLASS()
class MOBUSYSTEM_API AMobuAIController : public AAIController
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMobuAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	UMobuRoutineTree* MobuRoutineTree;
	
};
