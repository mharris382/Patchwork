# ONEiRA
![screen3](https://github.com/mharris382/Patchwork/assets/20174390/a6b9f2f5-f726-443c-abff-3a54aced46f8)
You are the dreamwalker.  3 Dreamers are trapped in prisons of their own mind.  You must journey into each dream and awaken the dreamer from their dream.  Explore 3 mysterious dreamworks. Meet and talk to dreamfolk. Solve puzzles. 

# [For Onboarding Starts Here](https://github.com/mharris382/Patchwork/blob/main/Dreamwalker%20Developer%20Documentation/Onboarding%20Document.md)


## Gameplay Tags
most tags work as either component tags or actor tags. 

| Tag | Functionality |
|----|----------------|
| No Mush | Prevents Bounce Mushroom from sticking to actor or component |
| NoGrab | Prevents ledge grabbing | 
| No Grapple | Prevents grapple from attaching to actor or component |
| NoFall | Prevents long falls from occuring on specific surfaces |
| NoSave | Prevents long fall reset from respawning on the actor/component |
| ConveyorMoveable | Allows rainbow bridge conveyor to move this actor (only on actors) |

## Asset Naming Conventions

### Static Meshes Naming Conventions
Static Meshes should conform to the format: `SM_[GROUP][ASSET]_[MODIFIER]_[NUMBER]`
- GROUP: use a group prefix for assets that are visual related. 
    - example: `SM_TempleBrick`, `SM_TemplePillar`
- ASSET: what the mesh is (should be a noun).  *Use full names, NOT abbreviations*; it should be reasonable easy to search for the name of the mesh without needing to know it's exact folder location
- MODIFIER: if there are alternate version of a mesh, modifier to differentiate between them. (should be adjective)
    - example: `SM_TemplePillar_Damaged`
- NUMBER: if there are multiple versions of the same thing, number them
- example: `SM_TemplePillar_Damaged_1`, `SM_TemplePillar_Damaged_2`

Examples: `SM_Pillar_Damaged_1`, `SM_TempleBrick`, `SM_TempleBrick_Large`

### Material Instance Naming Conventions
Material Instances should conform to the format: `MI_[STYLE]_[ASSET]_[MODIFIER]`
- Style: used when a mesh has several different skins.  example: Temple of Father vs Temple of The Mother - `MI_ToF_TempleBrick`, `MI_ToM_TempleBrick`
- Asset: should refer to the specific static mesh (if the MI is specific to a mesh, i.e. not triplanar/tiled)
- Modifier: if there are multiple versions, for example mossy or non-mossy.  `MI_ToF_TempleBrick_Mossy`

### Texture Naming Conventions
Textures should conform to the format `T_[ASSET]_[MODIFIER]_[USEAGE]`
- ASSET: if this texture is specific to a mesh, the name should match the name of the mesh.  Otherwise it should describe the texture
- MODIFIER: use if there are alternate versions of a texture
- USEAGE: what is the material usage of this texture.  i.e.  Color, Normal, ARM, ARD, ARDF, ARMF


## Developer Tutorials
- [Github Setup - Getting Started](https://youtu.be/SSY1GSorOZo): how to get the project on your computer, share (push) your changes, and recieve (pull) other's changes

### PCG/Spline Tutorials
- [PCG Spline Basics](https://drive.google.com/file/d/1XyUS_TNJkIwBEPGysXkdBDmUEDSMxy2n/view?usp=sharing): how to use unreal splines to drive PCG tools
- [PCG Spline Generation Panel](https://drive.google.com/file/d/1pSgB_K5Fwsr8T4nWcEIsx20yZmcm-67k/view?usp=drive_link): using the spline generation panel to create geometrically perfect spline shapes like circles, arcs, rectangles, ect.

### Material/Artist Tutorials
- [Material Instances & Decals](https://drive.google.com/file/d/1EJButo1KU2iEu4rwVy26Y1fW3uFP9FJ5/view?usp=drive_link): how to setup material instances 
- [Tripping Effect on Material Instances and Decals](https://youtu.be/eXk4doBa2y0): how to customize the tripping spore visual effect on material instances, and how to setup and use decal materials


## Controls
| Controls | Keyboard | Controller |
| -----|--------|------|
| Move | WASD | LS |
| Look | Mouse | RS |
| Jump | Space | A |
| Interact | E | B |
| Sprint | Shift | LS (press) |
| Drop | G | Y |
| Crouch | C | X |
| Toggle Camera | Tab | RS (press) |


# Dream Worlds


## The Monochrome Wilderness
![screen4](https://github.com/mharris382/Patchwork/assets/20174390/0cd3d6c9-5305-41b1-a000-c033074bab2e)
![screen9](https://github.com/mharris382/Patchwork/assets/20174390/5d0f5d2e-24d0-4f27-92cc-80649e548b10)

## Corrupted Forest
![image1](https://github.com/mharris382/Patchwork/assets/20174390/2f789ab4-281e-4fbc-9795-fcf3e4e09198)
![image4](https://github.com/mharris382/Patchwork/assets/20174390/1eb97ea2-92d4-4096-8c6a-a090f00cb05e)

## Techno Reverie (Coming Soon)
