//  (c) Copyright 2023 cutycutyhyaline, cutycutyhyaline@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

class AMyActorAlpha;
class AMyActorBravo;
class AMyActorCharlie;
class AMyActorDelta;

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class HYALINEINTERFACETEST_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "AMyPlayerController")
	AMyActorAlpha* AlphaInstance;

	UPROPERTY(BlueprintReadWrite, Category = "AMyPlayerController")
	AMyActorBravo* BravoInstance;

	UPROPERTY(BlueprintReadWrite, Category = "AMyPlayerController")
	AMyActorCharlie* CharlieInstance;

	UPROPERTY(BlueprintReadWrite, Category = "AMyPlayerController")
	AMyActorDelta* DeltaInstance;

	UFUNCTION(BlueprintCallable, Category = "InterfaceTest", meta = (CallInEditor = "true"))
	void TestRunForUObject();
};
