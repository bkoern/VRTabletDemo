// Fill out your copyright notice in the Description page of Project Settings.


#include "DeviceConfigurationReader.h"

bool UDeviceConfigurationReader::ReadConfigurationFile(FString FileName, FString& FileContent)
{
	return FFileHelper::LoadFileToString(FileContent, *(FPaths::GameDir() + FileName));
}