//  (c) Copyright 2023 cutycutyhyaline, cutycutyhyaline@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "MyActorAlpha.h"
#include "MyActorBravo.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class HYALINEINTERFACETEST_API AMyActorBravo : public AMyActorAlpha
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "InterfaceTest", meta = (CallInEditor = "true"))
	void InterfaceFunction();
	virtual void InterfaceFunction_Implementation() override;
	
};
