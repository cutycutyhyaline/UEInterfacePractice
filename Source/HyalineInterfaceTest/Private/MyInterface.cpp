//  (c) Copyright 2023 cutycutyhyaline, cutycutyhyaline@gmail.com


#include "MyInterface.h"

// Add default functionality here for any IMyInterface functions that are not pure virtual.
void IMyInterface::InterfaceFunction_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("IMyInterface::InterfaceFunction_Implementation Called"));
	/*if(GEngine)
	{
		if(UWorld* World = GEngine->GetCurrentPlayWorld())
		{
			UE_LOG(LogTemp, Warning, TEXT("WorldName is : %s"), *World->GetName());
		}
	}*/

	//아래는 컴파일 에러. 
	//Below makes error : "Cannot convert IMyInterface* to parameter type UObject*"
	//Execute_InterfaceFunctionOther(this);
	
	UObject* AsUObject = Cast<UObject>(this);
	if(AsUObject && AsUObject->Implements<UMyInterface>())
	{
		Execute_InterfaceFunctionOther(AsUObject);
	}
}

void IMyInterface::InterfaceFunctionOther_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("IMyInterface::InterfaceFunctionOther_Implementation Called"));
}
