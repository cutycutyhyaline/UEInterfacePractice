//  (c) Copyright 2023 cutycutyhyaline, cutycutyhyaline@gmail.com


#include "MyPlayerController.h"

#include "MyActorAlpha.h"
#include "MyActorBravo.h"
#include "MyActorCharlie.h"
#include "MyActorDelta.h"
#include "MyInterface.h"

void AMyPlayerController::TestRunForUObject()
{
	if(AlphaInstance && BravoInstance && CharlieInstance && DeltaInstance)
	{
		UE_LOG(LogTemp, Warning, TEXT("Test Start"));

		UObject* AlphaAsUObject = Cast<UObject>(AlphaInstance);
		UObject* BravoAsUObject = Cast<UObject>(BravoInstance);
		UObject* CharlieAsUObject = Cast<UObject>(CharlieInstance);
		UObject* DeltaAsUObject = Cast<UObject>(DeltaInstance);
		
		IMyInterface::Execute_InterfaceFunction(AlphaAsUObject);
		IMyInterface::Execute_InterfaceFunction(BravoAsUObject);
		IMyInterface::Execute_InterfaceFunction(CharlieAsUObject);
		IMyInterface::Execute_InterfaceFunction(DeltaAsUObject);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Check Instances"));
	}
}
