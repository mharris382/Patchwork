
# Contents
- [Project Setup](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/Onboarding%20Document.md#project-setup)
- [Forewarning](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/Onboarding%20Document.md#forewarning)
- [Important Terms & Naming Conventions](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/Onboarding%20Document.md#important-terms--conventions)
	- [Gameplay Terms](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/Onboarding%20Document.md#gameplay-terms)
		- [Anomaly & Level Progression Terms](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/Onboarding%20Document.md#anomaly--level-progression-terms)
		- [Puzzle/Mechanism Related Terms](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/Onboarding%20Document.md#puzzle-related-terms)
		- [Spore Mechanic Terms](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/Onboarding%20Document.md#spore-terminology)
	- [Technical Terms](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/Onboarding%20Document.md#technical-terms)
	- [Prefixes/Suffixes](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/Onboarding%20Document.md#prefixessuffixes)
- [Levels](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/Onboarding%20Document.md#levels)
- [Procedural Content Generation (PCG) Workflows](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/Onboarding%20Document.md#pcg-workflows)
- [Plugins](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/Onboarding%20Document.md#plugins)
	- [List of Custom Plugins](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/Onboarding%20Document.md#list-of-custom-plugins)




# Project Setup

1. Ensure you have Unreal Engine 5.5 installed 
2. Clone the repository from GitHub using CLI or your choice of git GUI. [Instructional Video Here](https://youtu.be/SSY1GSorOZo)  *my apologies on the bad audio quality*
3. Install the required plugins as [shown in this video](https://youtu.be/mnD6L-tc-IA](https://youtu.be/mnD6L-tc-IA "https://youtu.be/mnD6L-tc-IA")
	1. [link to the **FREE** required plugin PCGEx](https://www.fab.com/listings/3f0bea1c-7406-4441-951b-8b2ca155f624](https://www.fab.com/listings/3f0bea1c-7406-4441-951b-8b2ca155f624 "https://www.fab.com/listings/3f0bea1c-7406-4441-951b-8b2ca155f624") 
	2. NOTE: there are different steps for Mac users
4. Presto, project should now be ready to be opened and used


# Forewarning
This is a very large live project.  This started as a Game Jam, with Jam degree of project organization.   We have since improved on our practices and project organization, but we do occasionally find Jam leftovers.   

We do also evolve our standards over time, and continue to improve.  At the current time (April 24, 2025), this document is up to date, but there may be changes made in the future.   

Finally, while we do make our best effort to be adhere to good organizational practices and consistent conventions, we are not always 100% successful.  





# Important Terms & Conventions

## Gameplay Terms

### Anomaly & Level Progression Terms
- **Anomaly**: This is the physical representation of the dreamer's trauma.  It becomes the final boss at the end of each level. 
- **Trauma Image**: The image that represents the source of the Dreamer's trauma (which the player is trying to resolve).  Unlocked as the player completes the level
- **Fragment**: Player's primary goal is to hunt down all fragments, which reveal parts of the trauma image.
- **Dream Syncronization**: percentage of overall level completion. At 30%,60%, and 90% the player will earn an ability upgrade. 
- **Secret Puzzle**: This is a special type of optional side-puzzle that unlocks a dreamer memory.  Contributes to dream syncronization.  See [Secret Puzzle Doc](https://docs.google.com/document/d/1hitr5KhHoZEgqmMMY5NNWPBWQKFHhUWH7s9dKvjZ6dw/edit?usp=sharing) for more info
- **Collectable**: This is a optional collectable item that has significance to the dreamer. Contributes to dream syncronization.
- **Ratman Note**: A note left behind by the previous dreamwalker. Last type of optional objective.  
### Puzzle Related Terms
- **Pickup**: A physically simulated actor that the player can pickup and carry around. 
- **Heavy Pickup**:  This pickup cannot be thrown and constrains the player's ability to jump with it.  Only heavy pickups can be used to weigh down pressure plates.
- **Breakable**: An object that breaks if a strong enough collision occurs on it.  Example: **SporeJar**


- **Puzzle Mechanism**:  mechanisms are actor/device that is somehow triggered by player action and produces a reaction to it's listeners.  A mechanism may have more than one listener.
	- *Continuous Mechanism*: Mechanism that operates between a continuous range of 0-1.  Not yet introduced in-game.
- **Puzzle Listener**:  something that reacts to a puzzle mechanism. 

> **NOTE**: its worth noting that under the hood, all mechanisms and listeners are implemented as continuous values.  Binary mechanism simply fire 0 and 1 values. 

- **Puzzle**: recent organizational addition.  This is a group of actors that are connected to a specific puzzle.  A puzzle can be completed permanently  (typically by reaching an trigger box), at which point the puzzle elements that are no longer relevant will be removed.  This will help players avoid confusion or having to resolve previously solved puzzles
- **Reset Button**: All puzzles will have a reset button, which reverts all puzzle elements back to their original state.  This allows player to recover from an incorrect solution, or somehow loosing a key item or pickup. 

> NOTE: the puzzle actor ***IS*** the reset button.  Because they are fundamentally linked, they are not implemented as separate actors.  You cannot have a puzzle without a reset button.

### Spore Terminology

- **Spore Effect**: This refers to the spore effect mechanics system in the game.  These are referred to generally as Spore Effects.
- **Spore Carrier**:  refers to anything that can acquire spores. Examples: Player, CubePickup, JarPickup
- **Spore Region**: This refers to spore sources, anything that applies spores to actors

> NOTE: in the first level these appear as mushroom, but that changes in future levels.  Level 2 will replace them with vents.  However, this change is entirely cosmetic the functionality is identical.


## Technical Terms

- **DataLayer**:  Use for world streaming.  See Data Layer Documentation **(TODO: add link)**
- **PLA**: stands for Packed Level Actor.  This is an efficient way to combine multiple meshes into an actor that can be used for level creation.   More commonly in this project, PLAs are used as inputs for PCG tools, which give us the ability to apply random variations and procedural adjustments to the PLA.

> The image below shows an example of a PLA in-action.  The left most column contains the set of PLAs used as input to the PCG tool.  The other columns demonstrate how PCG can be used to procedurally modify the inputs for variation and additional control.
![](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/attachments/PLAExample.png)


## Prefixes/Suffixes
Unless otherwise specified, we follow the [Epic Recommended Naming Conventions](https://dev.epicgames.com/documentation/en-us/unreal-engine/recommended-asset-naming-conventions-in-unreal-engine-projects).  

| Prefix/Suffix | Applicable Asset Type | Meaning                                                                                                                                                |
| ------------- | --------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------ |
| `DEP_`        | Any                   | Depricated.  This asset should no longer be used in development,  but references may still exist in the scenes.                                        |
| `EXP_`        | Blueprint Class       | Experimental.  This asset is in an experimental, don't use it in actual game level; but feel free to try it out and see what it does                   |
| `MI_MASTER_`  | Material Instance     | Master material instance.  We use these when we have a set of related materials, allowing us to edit the parameters of that material set in one place. |
| `EDL_`        | Data Layer            | This indicates an editor data layer, used to differentiate between Runtime Data Layers (for streaming).   See more on Data Layer workflow              |
| `_BASE`       | Blueprint Class       | This is a BP base class.  It should not be used directly in scene, likely it is abstract class and cannot be used.                                     |




# Levels 
All levels that we regularly work on can be accessed from the favorites in the content drawer.
![](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/attachments/LevelFavorites.png)

> NOTE: in the FeatureTestingRoom folder, the most current testing room is called `PhysicsTestingRoom`.  The original `FeatureTestingRoom` is still available and may be helpful, but it grew very large and chaotic. 

> NOTE: in the NewHub folder, the current version is called `Hub_ONEiRA_Alt`

# PCG Workflows
PCG, Procedural Content Generation, is a framework for spawning and manipulating meshes from code. We rely heavily on PCG throughout this project. [See PCG Onboarding Document](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md) for more Details


# Plugins

This section details the *custom* plugins in the project.   Plugins are a reliable way to organize our codebase in a modular way.  This separates reusable groups of code and allows it to be imported from other projects.


> Note For Level Designers: The primary plugins that concern level designers will be **ArchitectCore** , **PuzzleCore**, and **WaterCore**

### How to Access Plugins From Content Drawer

![](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/attachments/AccessPlugins.png)

If you do not see this option in your content drawer, you will have to enable it from the settings in the top right corner of your content drawer.

![](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/attachments/ShowPluginContent.png)


## List of Custom Plugins

- **AIEmotes**: this plugin implements a database driven system for loading emote effects and exposes a gameplay tag based API for triggering AI Emotes
- **ArchitectCore (aka PCGArchitect**): PCG Plugin for creating Buildings.  See Details in [PCG Onboarding](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#pcg-architect-generating-buildings)
- **AudioTools**: our audio database framework for feedbacks and music
- **DreamSporeEffects (WIP)**: expanded system that will eventually be used for all Spore Effects Niagara implementation 
- **LaserLightningVFX**: plugin I migrated from a different project.  Implements magic lighting VFX
- **MeshBaker** (WIP):  used for automatically baking and optimization of packed level actors into single static meshes
- **PCGNatureGen**: migrated from another project.  Framework for organic spawning systems in PCG.
- **PuzzleCore**: Contains our base framework for all puzzle mechanisms, such as pressure plates, switches, levers.   
- **WaterCore (EXP)**: contains some optimized physically interacting water systems


