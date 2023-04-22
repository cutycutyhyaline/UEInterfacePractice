//  (c) Copyright 2023 cutycutyhyaline, cutycutyhyaline@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MyInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class HYALINEINTERFACETEST_API IMyInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "InterfaceTest", meta = (CallInEditor = "true"))
	void InterfaceFunction();
	virtual void InterfaceFunction_Implementation();
	//만일 위의 기본구현 함수를 없애면, 엔진이 위의 이름으로 비어있는 내용의 함수를 집어넣어놓는다.
	//If you remove the default implementation function above, the engine inserts an empty function as that name.
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "InterfaceTest", meta = (CallInEditor = "true"))
	void InterfaceFunctionOther();
	virtual void InterfaceFunctionOther_Implementation();
};
