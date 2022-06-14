// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LoadTxtFile.generated.h"

/**
 * 
 */
UCLASS()
class GRA_API ULoadTxtFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Text File", meta = (Keywords = "Load Text File"))
	static bool LoadTxt(FString FileNameA, FString& SaveTextA);
	//const bool ULoadTxtFile::LoadTxt(FString FileNameA, FString& SaveTextA);
	
};
