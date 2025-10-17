import unreal

import unreal

# ---- CONFIG ----
SOURCE_FOLDER = "/Game/Patchwork/Models/Forest/BathHouse/KhangBHRemodel/Walls/RecipeParts"
TARGET_FOLDER = "/Game/Patchwork/Models/Forest/BathHouse/KhangBHRemodel/Walls/Recipes"
BP_OBJECT_PATH = "/ArchitectCore/Core/ArchitectAssets/ArchitectFullRecipe.ArchitectFullRecipe"
BP_PACKAGE_PATH = "/ArchitectCore/Core/ArchitectAssets/ArchitectFullRecipe"
STRUCT_PATH = "/ArchitectCore/Core/ArchitectAssets/Setup/ArchitectAsset.ArchitectAsset"

NAME_PREFIX = "BR_"  # Prefix for generated recipe assets

default_wall_name = "WallPlainV2"
default_door_name = "WallV1"
default_window_name = "Wall"

# ---------------- SETUP ----------------
asset_tools = unreal.AssetToolsHelpers.get_asset_tools()
editor_asset_lib = unreal.EditorAssetLibrary()

# Load the Blueprint struct asset



architect_struct_asset = unreal.load_object(None, STRUCT_PATH)
if not architect_struct_asset:
    raise RuntimeError(f"Could not load struct asset: {STRUCT_PATH}")

# Get the actual ScriptStruct type from the asset
print(str(architect_struct_asset))



# Create a new instance of that struct


# ---------------- Load Blueprint class robustly ----------------
def load_bp_class(object_path):
    """
    Try to load the blueprint asset and return its generated_class (UClass).
    object_path should be the full object path like:
    '/ArchitectCore/Core/ArchitectAssets/ArchitectFullRecipe.ArchitectFullRecipe'
    """
    blueprint_generated = unreal.EditorAssetLibrary.load_blueprint_class(object_path)
    if blueprint_generated:
        unreal.log("Loaded Blueprint asset via load_object(): {}".format(object_path))
        return blueprint_generated

    # Try load_object (works if the path is exactly correct)
    bp_asset = unreal.load_object(None, object_path)
    if bp_asset:
        unreal.log("Loaded Blueprint asset via load_object(): {}".format(object_path))
        # If it's a Blueprint, it will have generated_class
        if hasattr(bp_asset, "generated_class") and bp_asset.generated_class:
            return bp_asset.generated_class
        # If it's already a class, return it
        if isinstance(bp_asset, unreal.UClass):
            return bp_asset

    # Fallback: search for asset by package path with EditorAssetLibrary
    # Convert object path to package path if possible: package is before the dot
    package_path = object_path.split(".", 1)[0] if "." in object_path else object_path
    # EditorAssetLibrary expects a /Game/ style path, but your plugin path starts with /ArchitectCore
    # We'll look for assets under that package path
    assets = editor_asset_lib.list_assets(package_path, recursive=False, include_folder=False)
    for asset_path in assets:
        ad = editor_asset_lib.find_asset_data(asset_path)
        if not ad:
            continue
        asset_obj = ad.get_asset()
        if not asset_obj:
            continue
        if hasattr(asset_obj, "generated_class") and asset_obj.generated_class:
            unreal.log("Found Blueprint asset via EditorAssetLibrary: {} -> using generated_class".format(asset_path))
            return asset_obj.generated_class
        # sometimes the asset itself *is* a class (rare)
        if isinstance(asset_obj, unreal.UClass):
            return asset_obj

    # Last resort: try to load by package path using load_class (not common but try)
    try:
        loaded = unreal.load_class(None, object_path)
        if loaded:
            return loaded
    except Exception as e:
        unreal.log_warning("load_class attempt failed: {}".format(e))

    return None

ASSET_CLASS = load_bp_class(BP_OBJECT_PATH)

if not ASSET_CLASS:
    unreal.log_error("Could not load Blueprint class for ArchitectFullRecipe. "
                     "Please check BP_OBJECT_PATH and package/object paths. Aborting script.")
    raise SystemExit("Blueprint class not found")

unreal.log("Using asset class: {}".format(str(ASSET_CLASS)))

foundAssets = {}  # { "BH_WallV1": {"wall": <mesh>, "door": <mesh>, "window": <mesh>} }

# The factory type for DataAssets
factory = unreal.DataAssetFactory()

factory.set_editor_property("data_asset_class", ASSET_CLASS)

# ---------------- HELPERS ----------------



def parse_name(asset_name):
    """
    Splits names like 'BH_WallV1_Wall' into ('BH', 'WallV1', 'Wall').
    Returns (group_prefix, asset_name, type).
    """
    asset_name = unreal.StringLibrary.conv_name_to_string(asset_name)
    print(str(asset_name))
    parts = asset_name.split("_")
    if len(parts) < 3:
        return None
    group_prefix = parts[0]
    asset_name_core = parts[1]
    mesh_type = parts[2].lower()
    return group_prefix, asset_name_core, mesh_type


def get_default_mesh(default_name):
    """Finds and returns the StaticMesh with the given name (searching all assets)."""
    search_results = unreal.EditorAssetLibrary.list_assets(SOURCE_FOLDER, recursive=True, include_folder=False)
    for asset_path in search_results:
        asset_data = unreal.EditorAssetLibrary.find_asset_data(asset_path)
        if asset_data.asset_class_path.asset_name == "StaticMesh" and asset_data.asset_name == default_name:
            return asset_data.get_asset()
    unreal.log_warning(f"⚠️ Could not find default mesh: {default_name}")
    return None


# ---------------- MAIN SCRIPT ----------------



# Step 1: Gather all static meshes
all_assets = editor_asset_lib.list_assets(SOURCE_FOLDER, recursive=True, include_folder=False)

for asset_path in all_assets:
    asset_data = unreal.EditorAssetLibrary.find_asset_data(asset_path)
    if not asset_data or asset_data.asset_class_path.asset_name != "StaticMesh":
        continue

    mesh_name = asset_data.asset_name
    parsed = parse_name(mesh_name)
    if not parsed:
        unreal.log_warning(f"Skipping {mesh_name}: name doesn't follow pattern GroupPrefix_AssetName_Type")
        continue

    group_prefix, asset_name_core, mesh_type = parsed
    key = f"{group_prefix}_{asset_name_core}"
    mesh_asset = asset_data.get_asset()

    if key not in foundAssets:
        foundAssets[key] = {"wall": None, "door": None, "window": None}

    if mesh_type in foundAssets[key]:
        foundAssets[key][mesh_type] = mesh_asset
    else:
        unreal.log_warning(f"Skipping {mesh_name}: unrecognized type '{mesh_type}'")

# Step 2: Load default meshes
default_wall = get_default_mesh(default_wall_name)
default_door = get_default_mesh(default_door_name)
default_window = get_default_mesh(default_window_name)


print(str(default_wall))
print(str(default_door))
print(str(default_window))

# Step 3: Create data assets
created_count = 0
for key, mesh_dict in foundAssets.items():
    recipe_name = NAME_PREFIX + key
    recipe_path = f"{TARGET_FOLDER}/{recipe_name}"

   # if editor_asset_lib.does_asset_exist(recipe_path):
   #     unreal.log(f"Skipping existing recipe: {recipe_name}")
   #     continue

    recipe_asset = asset_tools.create_asset(recipe_name, TARGET_FOLDER, ASSET_CLASS, factory)
    print(str(recipe_asset.get_editor_property("wall")))
    
    wsm = mesh_dict["wall"] or default_wall
    dsm = mesh_dict["door"] or default_door
    wism = mesh_dict["window"] or default_window

    wl = recipe_asset.set_editor_property("wall", recipe_asset.get_editor_property("wall"))

    #print(str(wl.get_editor_property("StaticMesh")))   
    #wl.set_editor_property("static_mesh", wsm)
    #recipe_asset.set_editor_property("wall", wl)

    #thing = recipe_asset.get_editor_property("wall").get_editor_property("StaticMesh")
    



    
    # Save
    unreal.EditorAssetLibrary.save_loaded_asset(recipe_asset)
    created_count += 1
 #   unreal.log(f"✅ Created recipe {recipe_name} with meshes: {str(recipe_asset)}"
 #              f"Wall={recipe_asset.wall.static_mesh.get_name() if recipe_asset.wall.static_mesh else 'None'}, "
 #              f"Door={recipe_asset.door.static_mesh.get_name() if recipe_asset.door.static_mesh else 'None'}, "
 #              f"Window={recipe_asset.window.static_mesh.get_name() if recipe_asset..static_mesh else 'None'}")

unreal.log(f"🎉 Done! Created {created_count} BuildingRecipe assets in {TARGET_FOLDER}")