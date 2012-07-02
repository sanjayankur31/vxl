#ifndef boxm2_processes_h_
#define boxm2_processes_h_

#include <bprb/bprb_func_process.h>
#include <bprb/bprb_macros.h>

//the init functions
DECLARE_FUNC_CONS(boxm2_load_scene_process);
DECLARE_FUNC_CONS(boxm2_create_cache_process);
DECLARE_FUNC_CONS(boxm2_create_scene_process);
DECLARE_FUNC_CONS(boxm2_write_scene_xml_process);
DECLARE_FUNC_CONS(boxm2_add_block_process);
DECLARE_FUNC_CONS(boxm2_export_textured_mesh_process);
DECLARE_FUNC_CONS(boxm2_export_mesh_process);
DECLARE_FUNC_CONS(boxm2_texture_mesh_process);
DECLARE_FUNC_CONS(boxm2_describe_scene_process);
DECLARE_FUNC_CONS(boxm2_create_stream_cache_process);
DECLARE_FUNC_CONS(boxm2_roi_init_process);
DECLARE_FUNC_CONS(boxm2_scene_illumination_info_process);
DECLARE_FUNC_CONS(boxm2_persp_cam_from_scene_process);
DECLARE_FUNC_CONS(boxm2_write_cache_process);
DECLARE_FUNC_CONS(boxm2_stream_cache_close_files_process);
DECLARE_FUNC_CONS(boxm2_compute_sun_affine_camera_process);
DECLARE_FUNC_CONS(boxm2_mask_sift_features_process);
DECLARE_FUNC_CONS(boxm2_bundle_to_scene_process);
DECLARE_FUNC_CONS(boxm2_clear_cache_process);
DECLARE_FUNC_CONS(boxm2_blob_change_detection_process);
DECLARE_FUNC_CONS(boxm2_blob_precision_recall_process);
DECLARE_FUNC_CONS(boxm2_export_oriented_point_cloud_process);
DECLARE_FUNC_CONS(boxm2_scene_bbox_process);
DECLARE_FUNC_CONS(boxm2_transform_model_process);
DECLARE_FUNC_CONS(boxm2_create_scene_mask_process);
DECLARE_FUNC_CONS(boxm2_paint_mesh_process);
DECLARE_FUNC_CONS(boxm2_extract_point_cloud_process);
DECLARE_FUNC_CONS(boxm2_dem_to_xyz_process);
#if HAS_GEOTIFF
DECLARE_FUNC_CONS(boxm2_roi_init_geotiff_process);
#endif
DECLARE_FUNC_CONS(boxm2_scene_lvcs_process);
DECLARE_FUNC_CONS(boxm2_create_scene_and_blocks_process);
DECLARE_FUNC_CONS(boxm2_add_aux_info_to_ply_process);

#endif
