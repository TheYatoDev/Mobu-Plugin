// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interface/MobuInterface.h"
#include "MobuItemBase.generated.h"

class USphereComponent;

UCLASS(Abstract)
class MOBUSYSTEM_API AMobuItemBase : public AActor, public IMobuInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMobuItemBase();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void OnMobuInteract_Implementation() override;
	virtual void OnMobuInteractionRangeEnter_Implementation() override;
	virtual void OnMobuInteractionRangeExit_Implementation() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction", meta = (AllowPrivateAccess = "true"))
	FText InteractionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction", meta = (AllowPrivateAccess = "true"))
	USceneComponent* TextAttach;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* InteractionRange;
	
	UFUNCTION(Blueprintable, Category = "Interaction")
	FText GetInteractionText();
	UFUNCTION(Blueprintable, Category = "Interaction")
	USceneComponent* GetInteractionTextAttach() const;

private:
	


	
};
