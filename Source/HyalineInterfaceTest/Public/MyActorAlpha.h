//  (c) Copyright 2023 cutycutyhyaline, cutycutyhyaline@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "MyInterface.h"
#include "GameFramework/Actor.h"
#include "MyActorAlpha.generated.h"

UCLASS(BlueprintType, Blueprintable)
class HYALINEINTERFACETEST_API AMyActorAlpha : public AActor, public IMyInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorAlpha();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
