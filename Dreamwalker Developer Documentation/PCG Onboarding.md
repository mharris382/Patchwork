
# Contents
- [PCG Workflow Overview](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#pcg-workflow-overview)
	- [Advantages/Disadvantages](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#advantagesdisadvantages)
		- [Advantages](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#key-advantages-of-pcg)
		- [Warnings/Cautions](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#warningscautions-when-using-pcg)
- [PCG Workflows](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#pcg-workflows)
	- [Feature Requesting](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#feature-requesting)
	- [UE Splines](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#ue-splines)
	- [Using Erasers](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#using-erasers)
	- [Automatic vs Manual Generation Modes](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#automaticmanual-generation)
	- [PCG Architect](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#pcg-architect-generating-buildings)
	- [Random Transform Settings](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#random-transform-settings)
- [FAQ](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#faq)
	- [Wonky PCG Generation Artifacts](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#wonky-pcg-generation-artifacts)
	- [Eraser is not Working](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#eraser-is-not-working)

# PCG Workflow Overview
[This presentation covers what PCG is and how we strive to use it in our project.](https://docs.google.com/presentation/d/1tFCPGyEeI-ktZKFQNWSu9skRbhBWBtJESf1NlkHOJXE/edit?usp=sharing)

## Advantages/Disadvantages
If you don't care about *why* we use PCG and just want to jump into the how, feel free to skip this section.   


### Key Advantages of PCG
- **Non-Destructive Workflow:** 
	- Allows us retroactively alter the look/feel of anything the designers have built, without requiring any additional
- **Easily Combine with Traditional Hand Placement workflows**
	- PCG has incredible power to sample and react to actors placed in the scene.  This allows us to build tools that interact with traditional hand-placed static meshes and other custom hand placed actors.
- **Runtime Optimization (Instanced Static Mesh)**: ISMs are batched, regular static meshes are not
	- ISMs allows us to have *significantly* larger number of meshes rendered in the scene compared to static meshes.   
	- Converting static meshes to ISMs without PCG, locks them in place; making them extremely difficult to iterate with.  
- **Editor Optimization:** higher fidelity result in shorter time, less copy pasted. 
	- Spline workflow makes it easier and faster to iterate on large scale areas 
	- Skips greyboxing, increases the visual fidelity of iteration to something closer to a model pass
- **Easier Organic Variation**: Achieving organic variation from static mesh workflows requires significantly more time and effort than doing so with PCG workflows. 
- **Per Instance Custom Data**: this amazing hidden gem allows for insane amounts of dynamic customization per instanced
	- Allows each individual instance to have it's own specific properties; without incurring any of the usual performance cost associated with that level of customization. 
- **Spline Curves**: use of splines allows level designers to easily produce nice looking curves.   
	- Replicating this by hand would be difficult and tedious, and most likely the end result would look worse

### Warnings/Cautions when using PCG 
- **Storage Space**: Ensure your C: drive has plenty of space. 
	- PCG requires a lot of temporary space when generating, and will crash if you have limited storage space on your main drive. 
- **Wonky Leftovers**: one weird and annoying bug with PCG is that when you copy a PCG blueprint actor it sometimes leaves a copy of the previous generated ISMs and forgets about them.  
	- This results in having a weird generated leftover that won't go away.  The fix is simple. **TODO: insert link to section on Removing Leftovers**
- **Occasional Instability**:  while for the most part our PCG tools have been very reliable (provided you have enough storage space), we do occasionally encounter crashes with a tool.
	- It is important to let me know if this happens, especially if it happens more than once.
- **Heavy CPU Workload:** This largely depends on the specific tool as well as the size of the generation.  Typically the more meshes it spawns, the longer it will take to generate.   
	- If the generation time becomes and issue, I recommend disabling automatic regeneration in editor.  
	- [see section on automatic/manual generation](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#automaticmanual-generation)
	- **Requires Custom Tooling:** it will happen that the PCG tools currently in your toolchest are insufficient for what you are trying to do.    
	- This may be frustrating at first, since you will be used to having complete control of the level from your past workflows.  
	- While you are 100% free to supplement tools whenever is necessary, *always ask me first*.   Often times the change you want is trivial to implement and I'll be able to give it to you right away 
	- [See FEATURE REQUESTING](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#feature-requesting)

At the end of the day we recognize that PCG's benefits far exceed it's downsides and we make liberal use of PCG's rich feature set. 


# PCG Workflows
The following section describes the PCG Workflows that are provided with PCG and Unreal out of the box. 

Our workflow is a hybrid workflow that combines PCG tools with traditional handplaced assets.  We generally use PCG (and landscape tools) for the large scale forms and we suppliment with handplaced static meshes or small scale pcg tools for smaller details and specific unique designs.  This workflow balances the speed and efficiency of PCG with the designer freedom and precise control of traditional workflows. 

Many of our tools utilize Erasers to sculpt the spawned meshes.  The resulting workflow works similar to a voxel workflow, where we generate a big block and then chip away sections of it to sculpt into the shape we want.  [See Using Erasers](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#using-erasers)

## Feature Requesting
When working with PCG tools you will inevitably run into this situation.  You want to do something and the PCG tools currently in your toolchest are insufficient.     When this happens, you may instinctively revert back to a traditional non-PCG workflow.  

Instead you should first ping myself and/or Steph-Generalist in the discord.   Often times the changes you need are quite trivial and I will be able to provide them to you within a few minutes.   

I will most often tell you one of the following things: 
- The feature you want is already there, and tell you how to access it.
- The feature is trivial and I'll be able to implement it in 10-15 minutes, if you go grab a coffee i'll make the updates. 
- Use the hand placed workflow for now, i'll put your feature request in the docket
	- *easier features will usually get priority*
- That feature is a colossally difficult and we'll need to figure out a solution (usually hand placement if that is possible)
	- *I tend to like these kind of requests tho.  I'm a bit mad like that :P*


## UE Splines!  
*GIMME THOSE CURVES*

The majority of our PCG tools work with UE splines.   This video covers the basics for working with splines in UE. 

**TODO: add video**


### Closed Loop vs Open Loop Mode

Spline components operate in open loop or closed loop mode.  Many of our spline tools function in both modes, but there are several that will only work in closed loop mode.  

> NOTE:   In our project we use a base class which specifies whether a spline is in closed loop or open loop mode, so you will be unable to edit that toggle directly on the spline component as you would normally.  Instead use the `Is Closed Loop` toggle in the actor settings under the `00 - Core` category
![](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/attachments/Pasted%20image%2020250424163206.png)



## Using Erasers

95% of our PCG tools are integrated with the Eraser system.  This ensures that designers always have 100% control over the level.  If PCG spawns something undesirable, there is a way to remove it.   

The Eraser Actor class is technically a **BuildingCutter**.  This tool is part of the PCGArchitect plugin, but has utility graphs that make it extremely easy to integrate and use more broadly across many different PCG tools.   For the most part you don't need to bother with anything of the settings on this tool, unless you are working with PCGArchitect's BuildingSpline tools for generating buildings.  _Occassionally_, I will utilize the Door or Window modes in a custom PCG tool, if designers need degree of control over a particular tool; but generally the eraser mode (default) is the only mode used. 

### To add an eraser

![](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/attachments/Pasted%20image%2020250424172505.png)
- click the Add Actor button
- type `Building`
- select and drag `BuildingCutter`


> NOTE: Erasers must overlap with PCG Actor's Bounding Box in order for them to work on that actor. 
[See FAQ: Eraser not working](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#eraser-is-not-working)

### Building Cutter Modes

Most of the time you don't need to bother with any other mode besides Eraser, but occassionally some tools will use the other cutter modes: **Door, Window.**  Currently the primary tool that uses all 3 Modes is the BuildingSpline and BuildingSplineGrammar [See PCGArchitect](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/PCG%20Onboarding.md#pcg-architect-generating-buildings)

![PCG Architect Building Cutter in Door Mode vs Eraser Mode](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/attachments/Pasted%20image%2020250424172902.png)

### Advanced Eraser Settings

The other Cutter Settings are only applicable when using PCG Architect Building Splines 

![](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/attachments/Pasted%20image%2020250424173153.png)

- `Mode`: changes the cutter mode
- `Affect Walls`: allows disabling the eraser from deleting walls
- `Affect Floors`: allows disabling the eraser from deleting floors/ceilings
- `Override Recipe `(WIP): allows the cutter to supply a building recipe that will override the default one provided on the BuildingSpline.
	- *Currently disabled b/c it was causing performance issues, will fix soon.*

> Note: generate button does nothing b/c Cutters are generated via dependency.  Simple Explanation: they generate when a building spline uses them, so manual generation is not needed. 

## Automatic/Manual Generation

There are 2 generation options available PCG tools (not including runtime generation, which we are not currently using).    Automatic Generation or Manual Generation.

Changing generation modes is quite simple.  [This 30 second video shows the process for enabling automatic generation.](https://youtu.be/cjOSHc6tToU)

TLDR version
- use automatic generation for most cases and check out When to Manual Generation

### Automatic Generation

In Automatic Generation mode, the PCG tool will automatically regenerate if:
- it's constructor is called, b/c it was moved or any setting was changed
- any of it's scene dependencies are changed (example: a cutter is moved)
- any of it's asset dependencies are changed (example: modified a data asset)
- any of it's PCG code is modified

**TLDR: automatic mode is much more convenient and faster b/c it will always be updated.**
I would suggest using automatic mode for the majority of cases.  
### Manual Generation
In this mode, we have to trigger the PCG generation process manually.  In our tools there is a button called **Generate** used to trigger generation.

![](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/attachments/Pasted%20image%2020250424170007.png)

### When to Manual Generation
For most use cases automatic generation is better, however there are certain times that it is preferable to switch to Manual Generation.

**TLDR Version:**
- Long Generation Time
- Large Generation Area
- You want to modify the PCG outputs

**Long Version**
- **Generation Process for tool is very long**:  some complex tools can end up taking a long time to complete their generation process; this can become tedious if every edit you make results in a 45 second wait time.  
- **Tool Generates over a Massive Area**:  tools that generate for huge amounts of space, such as our Mushroom Forest Generator (generates forest across the entire landscape).   
- **If you wish to modify the output of the PCG generation**:  there are rare cases where you wish to modify the components that are generated by PCG.  In automatic generation mode, editing the actor will result in regeneration; so your edits will be overridden.  In manual mode, however, you will be able to modify them.  **Note: triggering any new generation will overwrite these modifications so it's better to put in a feature request.** 


## PCG Architect: *Generating Buildings*
PCG Architect is a plugin I developed during this project and intend to eventually publish either as FreeOpenSource or a paid Fab plugin.  

It was created for generating Buildings using PCG and modular assets.   Additionally a number of our PCG tools use utilities located inside this plugin.  Refer to the documentation for using BuildingSplines and creating BuildingRecipes.  [The (WIP) documentation for PCG Architect can be found here](https://better-faster-tech.gitbook.io/pcg-architect-documentation).  

> NOTE: The actual name of plugin is **ArchitectCore**.  


## Random Transform Settings
A lot of tools use a standard structure which enables easy transform randomization of PCG generated meshes.   This is a simple option for applying random weirdness to the generation. 


Comparison
![](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/attachments/Pasted%20image%2020250424173624.png)


![](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/attachments/Pasted%20image%2020250424174215.png)

- `UseRandomTransformations`: toggle off to disable the randomization
- `OffsetMin`: minimum offset to apply to each mesh. 
- `OffsetMax`: maximum offset to apply to each mesh.
- `AbsoluteOffset`: if true applies offset in world space instead of local (local is relative to it's prior orientation not actor's orientation)
- `RotationMin`: min random rotation 
- `RotationMax`: max random rotation
- `AbsoluteRotation`: if true applies rotation in world space instead of local (local is relative to it's prior orientation not actor's orientation)
- `ScaleMin`: min random scale
- `ScaleMax`: max random scale
- `Seed`: random seed (Note: this seed is added to the seed in the `00-Core` category)





# FAQ
Weird PCG Bugs & Fixes

### Wonky PCG Generation Artifacts
one weird and annoying bug with PCG is that when you copy a PCG blueprint actor it sometimes leaves a copy of the previous generated ISMs and forgets about them.    
- **Solution 1**: manually delete the copies, they will be ISM components on the actor and then regenerate
- **Solution 2 (be careful):** there is a python script in the repository that automatically performs this for every PCG actor in the level.   Be careful when using it, not recommended in large scenes.   The python script folder is located in the folder `[YOUR LOCAL REPOSITORY ROOT]/Python` and called `CleanupPCG.py`.  


### Eraser is not Working 
the most common reason an eraser stops working is because the eraser actor Centrepoint is not overlapping the bounding box of the PCG Actor.   If the cutter does not overlap with the bounds, it will not be applied to that PCG Actor, which can be confusing. 

![](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/attachments/Pasted%20image%2020250424165051.png)

![](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/attachments/Pasted%20image%2020250424165100.png)

