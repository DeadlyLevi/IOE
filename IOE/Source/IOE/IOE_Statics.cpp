// Fill out your copyright notice in the Description page of Project Settings.


#include "IOE_Statics.h"

const UItemStaticData* UIOE_Statics::GetItemStaticData(TSubclassOf<UItemStaticData> ItemDataClass)
{
	if(IsValid(ItemDataClass))
	{
		return GetDefault<UItemStaticData>(ItemDataClass);
	}
	return nullptr;
}
