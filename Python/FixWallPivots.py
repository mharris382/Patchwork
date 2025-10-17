import unreal
import math

TARGET_FOLDER = "/Game/Patchwork/Models/Forest/BathHouse/KhangBHRemodel"

ROTATION_DEGREES = 90
ROTATION_RADIANS = math.radians(ROTATION_DEGREES)

# Define rotation around Z axis (counterclockwise)
rotation_matrix = unreal.Matrix(
    [math.cos(ROTATION_RADIANS), -math.sin(ROTATION_RADIANS), 0, 0],
    [math.sin(ROTATION_RADIANS),  math.cos(ROTATION_RADIANS), 0, 0],
    [0,                           0,                          1, 0],
    [0,                           0,                          0, 1]
)

asset_registry = unreal.AssetRegistryHelpers.get_asset_registry()
assets = asset_registry.get_assets_by_path(TARGET_FOLDER, recursive=True)
print(len(assets))
for asset_data in assets:
    
    
    if asset_data.asset_class_path.asset_name != "StaticMesh":
        continue

    mesh = unreal.load_asset(asset_data.package_name)
    print(f"Processing {mesh.get_name()}...")
    print(type(mesh).__name__)
    # Access mesh description
    #if not mesh.is_editor_only_asset():
    #    print(f"Skipping {mesh.get_name()} (not editable)")
    #    continue
    
    #lod0 = unreal.StaticMeshEditorSubsystem().get_lod_data(mesh, 0)
    #if not lod0:
   #     print(f"Skipping {mesh.get_name()} (no LOD0)")
    #    continue

    mesh_desc = unreal.StaticMeshEditorSubsystem().get_mesh_description(mesh, 0)
    if not mesh_desc:
        print(f"Skipping {mesh.get_name()} (no mesh description)")
        continue

    vertices = mesh_desc.get_vertex_positions()
    new_positions = []

    for v in vertices:
        x, y, z = v.x, v.y, v.z
        new_x = x * math.cos(ROTATION_RADIANS) - y * math.sin(ROTATION_RADIANS)
        new_y = x * math.sin(ROTATION_RADIANS) + y * math.cos(ROTATION_RADIANS)
        new_positions.append(unreal.Vector(new_x, new_y, z))

    # Apply the rotated vertex positions
    for i, v in enumerate(mesh_desc.get_vertex_ids()):
        mesh_desc.set_vertex_position(v, new_positions[i])

    # Commit changes back
    unreal.StaticMeshEditorSubsystem().commit_mesh_description(mesh, 0)
    unreal.StaticMeshEditorSubsystem().build_mesh(mesh)
    mesh.mark_package_dirty()
    unreal.EditorAssetLibrary.save_loaded_asset(mesh)
    print(f"✅ Rotated pivot for {mesh.get_name()}")

print("All done!")