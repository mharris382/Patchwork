import unreal

level = unreal.EditorLevelLibrary.get_editor_world()

all_actors = unreal.GameplayStatics.get_all_actors_of_class(level, unreal.Actor)

for actor in all_actors:
    # Get all components attached to the actor
    components = actor.get_components_by_class(unreal.ActorComponent)

    # Check if the actor has a PCGComponent
    has_pcg_component = any(isinstance(component, unreal.PCGComponent) for component in components)
    
    if has_pcg_component:
        print(f"Actor '{actor.get_name()}' has a PCGComponent.")
        for component in components:
            if component.component_has_tag("PCG Generated Component"):
                component.destroy_component(component)
                #parent_component = component.get_attach_parent()
                #if not parent_component:
        
    for component in components:
        if isinstance(component, unreal.PCGComponent):
            print(f"Actor '{actor.get_name()}' has a PCGComponent.")
            component.generate(True)
            print(f"  Called generate() on PCGComponent of actor '{actor.get_name()}'.")
    


# # Optional: Select all actors that meet the criteria in the Editor
# actors_to_select = [actor for actor in all_actors if any(isinstance(comp, unreal.PCGComponent) for comp in actor.get_components_by_class(unreal.ActorComponent))]
# unreal.EditorLevelLibrary.set_selected_level_actors(actors_to_select)