// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ProfileExecutionMode.generated.h"

UENUM(BlueprintType)
enum class EProfileExecutionMode : uint8
{
	RepeatIndefinitely UMETA(DisplayName = "Repeat Indefinitely"),
	ReturnHome UMETA(DisplayName = "Return Home"),
	LoopLastTaskIndefinitely UMETA(DisplayName = "Loop Last Task Indefinitely"),
	//Hidden UMETA(Hidden)
};
