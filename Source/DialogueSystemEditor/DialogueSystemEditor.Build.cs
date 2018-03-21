using UnrealBuildTool;

public class DialogueSystemEditor : ModuleRules
{
	public DialogueSystemEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(new string[]{"DialogueSystem/Public"});

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG", "GameplayTasks", "GameplayTags" });

        PrivateDependencyModuleNames.AddRange(new string[] { "UnrealEd", "GenericGraphRuntime", "DialogueSystem" });
    }
}
