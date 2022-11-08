// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RenderTargetAutoResize.generated.h"

/**
 * 
 */
UCLASS()
class TESTINTERACTIONVR_API URenderTargetAutoResize : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "RenderTargetAutoResize")
	static void ResizeRenderTarget(UTextureRenderTarget2D* render_target, float size_x, float size_y);
};
