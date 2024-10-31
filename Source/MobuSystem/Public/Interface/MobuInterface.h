// Fill out your copyright       notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MobuInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UMobuInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MOBUSYSTEM_API IMobuInterface : public IInterface
{
	GENERATED_BODY()
	
public:
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnMobuInteract();
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnMobuInteractionRangeEnter();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnMobuInteractionRangeExit();
	
	
};
