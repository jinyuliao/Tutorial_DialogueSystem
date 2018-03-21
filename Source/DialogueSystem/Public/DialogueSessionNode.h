#pragma once

#include "CoreMinimal.h"
#include "GenericGraphNode.h"
#include "DialogueSessionNode.generated.h"

UENUM(BlueprintType)
enum class EDialoguerPostion : uint8
{
	Left,
	Right
};

UCLASS(Blueprintable)
class UDialogueSessionNode : public UGenericGraphNode
{
	GENERATED_BODY()

public:
	UDialogueSessionNode();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DialogueSession")
	FText Paragraph;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DialogueSession")
	EDialoguerPostion DialoguerPostion;

#if WITH_EDITOR
	virtual FText GetNodeTitle() const override;

	virtual void SetNodeTitle(const FText& NewTitle) override;

	virtual FLinearColor GetBackgroundColor() const override;
#endif
};

