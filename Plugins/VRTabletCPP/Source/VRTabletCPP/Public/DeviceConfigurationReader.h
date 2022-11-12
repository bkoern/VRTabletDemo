// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DeviceConfigurationReader.generated.h"

/**
 * 
 */
UCLASS()
class VRTABLETCPP_API UDeviceConfigurationReader : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "ReadConfigurationFile"))
		static bool ReadConfigurationFile(FString FileName, FString& FileContent);
};
