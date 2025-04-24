- PCG Workflow Overview
- Built-In PCG Workflows
	- Manual/Automatic Generation Modes
	- Working with UE Splines
- Custom PCG Workflows/Tools
	- BPCG Base Classes
		- BPCG_ActorBase
		- BPCG_SplineBase
- Working with Erasers (BuildingCutters)
	- Door/Window Modes
# PCG Workflow Overview
[This presentation covers what PCG is and how we strive to use it in our project.](https://docs.google.com/presentation/d/1tFCPGyEeI-ktZKFQNWSu9skRbhBWBtJESf1NlkHOJXE/edit?usp=sharing)

## Key Advantages of PCG over Static Mesh
- **Non-Destructive Workflow:** 
	- Allows us retroactively alter the look/feel of anything the designers have built, without requiring any additional
- **Runtime Optimization (Instanced Static Mesh)**:
- **Editor Optimization:** higher fidelity result in shorter time, less copy pasted 


## Warnings/Cautions when using PCG 
- **Storage Space**: Ensure your C: drive has plenty of space. 
	- PCG requires a lot of temporary space when generating, and will crash if you have limited storage space on your main drive. 
- **Occasional Instability**:  while for the most part our PCG tools have been very reliable (provided you have enough storage space), we do occasionally encounter crashes with a tool.
	- It is important to let me know if this happens, especially if it happens more than once.
- **Heavy CPU Workload:** This largely depends on the specific tool as well as the size of the generation.  Typically the more meshes it spawns, the longer it will take to generate.   If the generation time becomes and issue, I recommend disabling automatic regeneration in editor.  

TODO: add link to section on automatic/manual generation
# Built-In PCG Workflows
The following section describes the PCG Workflows that are provided with PCG and Unreal out of the box. 


## Splines!  GIMME THOSE CURVES

The majority of our PCG tools work with UE splines.   This video covers the basics for working with splines in UE. 

TODO: add video

Spline components operate in open loop or closed loop mode.  Many of our spline tools function in both modes, but there are several that will only work in closed loop mode.  

> NOTE:   In our project we use a base class which specifies whether a spline is in closed loop or open loop mode, so you will be unable to edit that toggle directly on the spline component. 


