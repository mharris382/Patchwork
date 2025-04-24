

# Project Setup

1. Ensure you have Unreal Engine 5.5 installed 
2. Clone the repository from GitHub using CLI or your choice of git GUI. [Instructional Video Here](https://youtu.be/SSY1GSorOZo)  *my apologies on the bad audio quality*
3. Install the required plugins as [shown in this video]([https://youtu.be/mnD6L-tc-IA](https://youtu.be/mnD6L-tc-IA "https://youtu.be/mnD6L-tc-IA"))
	1. [link to the **FREE** required plugin PCGEx]([https://www.fab.com/listings/3f0bea1c-7406-4441-951b-8b2ca155f624](https://www.fab.com/listings/3f0bea1c-7406-4441-951b-8b2ca155f624 "https://www.fab.com/listings/3f0bea1c-7406-4441-951b-8b2ca155f624")) 
	2. NOTE: there are different steps for Mac users
4. Presto, project should now be ready to be opened and used


# Forewarning
This is a very large live project.  This started as a Game Jam, with Jam degree of project organization.   We have since improved on our practices and project organization, but we do occasionally find Jam leftovers.   We do also evolve our standards over time, and continue to improve.  At the current time (April 24, 2025), this document is up to date, but there may be changes made in the future.   Finally, while we do make our best effort to be adhere to good organizational practices and consistent conventions, we are not always 100% successful.  



# Contents
- Important Terms & Naming Conventions
	- Prefixes/Suffixes
- Data Layers (World Streaming Workflow)
	- Working with Data Layers
		- Data Layer Panel
		- Loaded/Visible/Unloaded
		- Add Actor(s) to Selected Data Layer(s)
		- Remove Actor(s) from Selected Data Layer(s)
	- 
- Procedural Content Generation (PCG) Workflows
	


# Important Terms & Naming Conventions




## Prefixes/Suffixes
Unless otherwise specified, we follow the [Epic Recommended Naming Conventions](https://dev.epicgames.com/documentation/en-us/unreal-engine/recommended-asset-naming-conventions-in-unreal-engine-projects).  

| Prefix       | Suffix  | Applicable Asset Type | Meaning                                                                                                                                                |
| ------------ | ------- | --------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------ |
| `DEP_`       |         | Any                   | Depricated.  This asset should no longer be used in development,  but references may still exist in the scenes.                                        |
| `EXP_`       |         | Blueprint             | Experimental.  This asset is in an experimental, don't use it in actual game level; but feel free to try it out and see what it does                   |
| `MI_MASTER_` |         | Material Instance     | Master material instance.  We use these when we have a set of related materials, allowing us to edit the parameters of that material set in one place. |
|              | `_BASE` | Blueprint             | This is a BP base class.  It should not be used directly in scene, likely it is abstract class and cannot be used.                                     |
| `EDL_`       |         | Data Layer            | This indicates an editor data layer, used to differentiate between Runtime Data Layers (for streaming).   See more on Data Layer workflow              |



## Key Asset Types 

### [**Data Asset**](https://dev.epicgames.com/documentation/en-us/unreal-engine/data-assets-in-unreal-engine) 
For those familiar with Unity, these translate to Scriptable Objects.   We use various data asset types throughout the project, primarily for supplying data for PCG tools. 

### Data Table

