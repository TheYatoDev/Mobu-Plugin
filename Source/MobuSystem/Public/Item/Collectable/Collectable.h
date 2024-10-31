// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/MobuItemBase.h"
#include "Collectable.generated.h"

/**
 * 
 */

class UStaticMeshComponent;

UCLASS()
class MOBUSYSTEM_API ACollectable : public AMobuItemBase
{
	GENERATED_BODY()

public:
	ACollectable();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* CollectableMesh;
	
};
