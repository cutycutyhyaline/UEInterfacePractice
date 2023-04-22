//  (c) Copyright 2023 cutycutyhyaline, cutycutyhyaline@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "MyActorBravo.h"
#include "MyActorCharlie.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class HYALINEINTERFACETEST_API AMyActorCharlie : public AMyActorBravo
{
	GENERATED_BODY()
	//void InterfaceFunction();
	virtual void InterfaceFunction_Implementation() override;
};
