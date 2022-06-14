// Fill out your copyright notice in the Description page of Project Settings.


#include "LoadTxtFile.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool ULoadTxtFile::LoadTxt(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}

