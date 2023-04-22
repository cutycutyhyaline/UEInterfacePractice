//  (c) Copyright 2023 cutycutyhyaline, cutycutyhyaline@gmail.com


#include "MyActorCharlie.h"

void AMyActorCharlie::InterfaceFunction_Implementation()
{
	//Super::InterfaceFunction_Implementation();

	UE_LOG(LogTemp, Warning, TEXT("Charlie Implementation Passed"));
	if(GEngine)
	{
		if(const UWorld* World = GEngine->GetCurrentPlayWorld())
		{
			UE_LOG(LogTemp, Warning, TEXT("WorldName is : %s and MyNameIs: %s"), *World->GetName(), *GetName());
		}
	}
}
