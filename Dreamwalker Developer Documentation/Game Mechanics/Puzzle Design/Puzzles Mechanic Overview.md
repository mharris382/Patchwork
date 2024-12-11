# Terms

```ad-attention
These are just abstract gameplay concepts, they don't necessarily need to be used.
```

## Core Mechanic Terms
- **Spore** **Carrier**: anything that can "acquire" a spore effect by passing through a spore field
- **Spore** **Field**: An area that applies a spore effect onto  spore carriers that overlap with it.
- **Puzzle Elements**: Pickups, Spore Effects, and the Bounce Mushroom
- **Pickup**: a physical object that can be grabbed and carried/thrown by the player
- **Spore Carrier**: Something that can acquire spore effects on overlap with a spore region
- **Reset** **Field**: An area that puzzle elements cannot pass though
- **Cleansing** **Field**: An area that removes spore effects from spore carriers that overlap with it
- **Interactable**: something that the player can interact with
### Categories of Spore Fields
- Static Field: a field that never changes locations under any conditions
- Spawned Field: a spore field that is spawned as a result of the player's actions, i.e. by the bounce mushroom or breaking a spore jar.
- Temporary Field: a field that dissipates after a set amount of time
- Permanent Field: a field that has no time limit

## Pickups
- **Heavy Pickup**: a pickup that is heavy enough that it limits the player's movement
- **Reality Pickup**: a pickup that is only available to be picked up while the player has the reality spore active
- **Active Carrier Pickup**: a pickup which has a set of unique behaviors relating to physics for each spore effect
- **Fragile Pickups**:  these are pickups that will be broken and reset upon receiving a collision that has enough force to break the pickup.  
- **Key Pickup & Port Objects:** a pickup that fits with a specific object.  When the pickup is physically moved (by any means) into the Lock object's port area; the pickup is affixed to the object. 
	- Permanent Ports: these are ports where there is no reason to remove the key pickup once it has been placed there, as such there will be no way or benefit to retrieving the key once is is affixed.
	- Conditional Ports: these are ports that require a specific key or the key must be in a specific state in order for them to accept the pickup
	- Temporary Ports: (not sure if needed) these are ports where the key pickup can be removed after being placed

## Events
- **World Reset**: an event that resets all transient gameplay mechanisms back to their default state (this will occur on a load)
- **Reload**: player triggering a reload to an earlier save.  Also triggers a world reset.
- **World State Change:** permanent change in the world's state due to story or gameplay progression  
## Spore Carriers
- **active spore carrier:** this is a spore carrier object that is directly effected by acquiring/losing spore effect
	- Examples: **Player**, **Bounce Mushroom**
- **passive spore carrier**: this is a spore carrier object does not have it's behavior directly modified due to the spore effect(s) it is carrying.  Instead the consequence of the effect is delayed until later.  
	- Examples: **Mushroom Projectile**, **Spore Jar****
- **multi-carrier:** a spore carrier that can acquire more than one effect at a time
	- Examples: **Player**
- **timed-carrier:** a spore carrier that acquires spore effects for a limited amount of time
	- Example: **Player**

# Other Elements
- **button**: interactable that can be pressed to trigger an event
- **lever**: interactable that can be switched between two states
- **pressure plate**: triggers an event when physically weighed down by physical objects or the player's mass
- collapsing floor: something that breaks when the player stands on it.  This will be reset on world resets
# Pickup Rules
- you cannot throw the bounce mushroom while also carrying a pickup
- non fragile pickups bounce off the bounce mushroom
- fragile pickups respawn after breaking
- all pickups can be respawned if they are still useful/relevant





# Puzzles
# A. Temporary Spore (Jar) into Permanent Spore (Mushroom)
(Jar -> Mushroom) 

Advantage: Using the bounce mushroom the player is able to spawn a permeant spore region from a temporary spore region by throwing the mushroom through the temporary region.  
- Using the spore jar + Bounce Mushroom
	1. Collect effect in jar
	2. Transport Jar to new location
	3. Break jar to spawn **temporary spore field**
	4. (Optional) acquire the spore from the temporary field or do any additional actions during the time period *before the field dissipates**
	5. At any time before the spore field dissipates, throw a bounce shroom through the temporary spore field, this results in a pseudo-permanent spore field at the mushroom's location
# B. Mushroom as Source for Spore Jar
(Mushroom -> Jar) 

- Using the spore jar + Bounce Mushroom
	1.  Fire the mushroom through a static spore field to spawn a permanent field elsewhere, somewhere that you are able to reach with a spore jar
	2. Carry the spore jar to the spawned spore field to acquire the spore effect
	4. Now you have a spore jar at this new location
# C. Hidden Platform to Move Pickups without Carrying them
- using a reality spore and a moving hidden platform, we can transport a pickup (or multiple pickups) without carrying them
	1. Identify hidden platforms that intersect with floors
	2. carry a pickup to a **floor** location where the hidden platform will be spawn
	3. acquire the reality spore, the platform will become "real" and move the pickup
	4. (if necessary) grab the pickup off the moving platform at the desired location
## C.1.  Stack Pickups to create floor under a hidden platform that does not intersect with a floor inherently
- if you need to transport a pickup on a moving platform, but the platform has no intersection with floors; you can "create" a floor by stacking other pickups on top of each other until they overlap with the hidden platform's movement path
	1. Identify hidden platforms that intersect above the floors
	1. carry additional pickups to the location beneath the floor where the hidden platform appears, until the stack provides a floor to place the pickup being transported
	3. acquire the reality spore, the platform will become "real" and move the pickup
	4. (if necessary) grab the pickup off the moving platform at the desired location

# D. prop a gate open?
- use a heavy pickup
- use bounce mushroom
# E. use heavy pickup as surface to spawn bounce mushroom above water
- in order to spawn the bounce mushroom somewhere you cannot, such as in shallow water, you can use a large pickup as the spawn surface for the bounce mushroom.
# F. use bounce mushroom to jump while carrying a pickup
- in a situation where you would need to ledge grab to climb up, you can instead use the bounce mushroom to avoid needing the ledge grab.  This allows you to traverse the obstacle without putting down the pickup.
# G.  use bounce mushroom to launch pickups to transport them past obstacles when you are unable to carry them

- The bounce mushroom will be able to propel unbreakable pickups much further than you are able to throw them.  Using this fact as well as utilizing surface angles, you can propel pickups (even heavy pickups) much further **and harder** than you could throw them.
## G.1.  Same concept but also apply a spore effect
for active spore carrier pickups, we can apply the same concept again; but this time using a mushroom that is emitting a specific spore effect.

# H. Using Bounce Mushroom to dislodge pickups that are otherwise out of reach
- using the force from the bounce mushroom spawning, you can knock a precariously placed pickup down so that you are able to pick it up
## H.1. Do this again but with a breakable pickup
- simplest way to handle this is to catch the pickup as it falls before it hits the ground


# J. Use Bounce Mushroom to move a pickup off a pressure plate from a distance
- using the force the bounce mushroom applies , it is simple to move a cube off of a pressure plate thereby deactivating the pressure plate, without having to physically carry the object

## J.1. Use Bounce Mushroom to move a pickup **onto** a pressure plate from a distance
- sound *really* hard but still possible.  A physics object just needs to be knocked onto a pressure plate, so the bounce mushroom force can be used to accomplish that from a distance; though as a physics simulation doing so will be *interesting*....  The level design can be used to make this challenge easier through the placement of walls

## J.2. Use Heavy Pickup with gravity spore to create a count down timer on a pressure plate when the spore wears off

1. place a heavy pickup on a pressure plate
2. apply the gravity spore to the heavy pickup, causing it to lighten and deactivate the pressure plate
3. stop applying the gravity spore to the pickup
4. move or perform actions before the gravity spore wears off the pickup
5. once the gravity spore wears off, it will switch the pressure plate back on
## J.3.  Activate a pressure plate using multiple light pickups
- pressure plates are triggered by the cumulative weight of all the objects on it.  this means that multiple small objects may be enough to activate the pressure plate.  Therefore you can activate a pressure plate without using a heavy object, if you can obtain multiple small objects instead.
# K.  ~~Use Bounce Mushroom to block an object that is floating in water.  ~~

# L.  Use Bounce Mushroom on ceiling to fill gaps in a gravity spore path 
use the bounce mushroom to spawn a gravity spore on the ceiling in order to get through a path

## L.1. Use the gravity spore path as source for the mushroom while floating with the spore active
the same as the first challenge except it must be performed in the air with anti-gravity spore active

## L.2. do this while carrying a spore jar
increased challenge here is to overcome an obstacle while also transporting a spore jar part of the way through the path.   break the spore jar around yourself to re-up the spore effect and make it to the end of the path


# ~~M.  Container Pickup Mechanic~~
~~basically this is a pickup that is also a port that accepts fragile objects.  Putting a fragile object in the container will protect the object from breaking.  The container can then be transported.  Interacting with the container opening will safely disconnect the fragile pickup without breaking it~~
- ~~this can be used to move a spore jar as if it were a heavy object~~




