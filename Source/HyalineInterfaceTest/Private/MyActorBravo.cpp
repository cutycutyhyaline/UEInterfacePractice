//  (c) Copyright 2023 cutycutyhyaline, cutycutyhyaline@gmail.com


#include "MyActorBravo.h"

void AMyActorBravo::InterfaceFunction_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("Bravo Implementation Passed"));
	if(GEngine)
	{
		if(const UWorld* World = GEngine->GetCurrentPlayWorld())
		{
			UE_LOG(LogTemp, Warning, TEXT("WorldName is : %s and MyNameIs: %s"), *World->GetName(), *GetName());
		}
	}
}
