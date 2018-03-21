#pragma once

#include "CoreMinimal.h"
#include "GenericGraph.h"
#include "DialogueSession.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UDialogueSession: public UGenericGraph
{
	GENERATED_BODY()

public:
	UDialogueSession();

	UPROPERTY(EditDefaultsOnly, Category = "DialogueSession")
	FLinearColor LeftDialoguerBgColor;

	UPROPERTY(EditDefaultsOnly, Category = "DialogueSession")
	FLinearColor RightDialoguerBgColor;
};
