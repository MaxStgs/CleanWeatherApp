// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InterfaceProvider.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class UInterfaceProvider : public UObject
{
	GENERATED_BODY()

	UFUNCTION()
	void OnConstruct();
};
