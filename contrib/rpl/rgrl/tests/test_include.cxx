#include <rgrl/rgrl_fwd.h>
#include <rgrl/rgrl_internal_util.h>

#include <rgrl/rgrl_command_sptr.h>
#include <rgrl/rgrl_converge_status_sptr.h>
#include <rgrl/rgrl_convergence_tester_sptr.h>
#include <rgrl/rgrl_data_manager_sptr.h>
#include <rgrl/rgrl_estimator_sptr.h>
#include <rgrl/rgrl_evaluator_sptr.h>
#include <rgrl/rgrl_event_sptr.h>
#include <rgrl/rgrl_feature_face_pt_sptr.h>
#include <rgrl/rgrl_feature_set_sptr.h>
#include <rgrl/rgrl_feature_sptr.h>
#include <rgrl/rgrl_initializer_sptr.h>
#include <rgrl/rgrl_invariant_match_sptr.h>
#include <rgrl/rgrl_invariant_sptr.h>
#include <rgrl/rgrl_mask_sptr.h>
#include <rgrl/rgrl_match_set_sptr.h>
#include <rgrl/rgrl_matcher_sptr.h>
#include <rgrl/rgrl_object_sptr.h>
#include <rgrl/rgrl_scale_estimator_sptr.h>
#include <rgrl/rgrl_scale_sptr.h>
#include <rgrl/rgrl_spline_sptr.h>
#include <rgrl/rgrl_transformation_sptr.h>
#include <rgrl/rgrl_view_sptr.h>
#include <rgrl/rgrl_weighter_sptr.h>

#include <rgrl/rgrl_cast.h>
#include <rgrl/rgrl_command.h>
#include <rgrl/rgrl_converge_status.h>
#include <rgrl/rgrl_converge_status_nas.h>
#include <rgrl/rgrl_convergence_on_median_error.h>
#include <rgrl/rgrl_convergence_on_weighted_error.h>
#include <rgrl/rgrl_convergence_tester.h>
#include <rgrl/rgrl_copyright.h>
#include <rgrl/rgrl_data_manager.h>
#include <rgrl/rgrl_debug_util.h>
#include <rgrl/rgrl_est_affine.h>
#include <rgrl/rgrl_est_dis_homo2d_lm.h>
#include <rgrl/rgrl_est_homography2d.h>
#include <rgrl/rgrl_est_homo2d_lm.h>
#include <rgrl/rgrl_est_homo2d_proj.h>
#include <rgrl/rgrl_est_homo2d_proj_rad.h>
#include <rgrl/rgrl_est_proj_func.h>
#include <rgrl/rgrl_est_proj_rad_func.h>
#include <rgrl/rgrl_est_quadratic.h>
#include <rgrl/rgrl_est_reduced_quad2d.h>
#include <rgrl/rgrl_est_rigid.h>
#include <rgrl/rgrl_est_similarity2d.h>
#include <rgrl/rgrl_est_spline.h>
#include <rgrl/rgrl_est_translation.h>
#include <rgrl/rgrl_estimator.h>
#include <rgrl/rgrl_evaluator.h>
#include <rgrl/rgrl_evaluator_ssd.h>
#include <rgrl/rgrl_event.h>
#include <rgrl/rgrl_feature.h>
#include <rgrl/rgrl_feature_based_registration.h>
#include <rgrl/rgrl_feature_face_pt.h>
#include <rgrl/rgrl_feature_face_region.h>
#include <rgrl/rgrl_feature_landmark.h>
#include <rgrl/rgrl_feature_point.h>
#include <rgrl/rgrl_feature_point_region.h>
#include <rgrl/rgrl_feature_reader.h>
#include <rgrl/rgrl_feature_region.h>
#include <rgrl/rgrl_feature_set.h>
#include <rgrl/rgrl_feature_set_bins.h>
#include <rgrl/rgrl_feature_set_bins_2d.h>
#include <rgrl/rgrl_feature_set_location.h>
#include <rgrl/rgrl_feature_set_location_masked.h>
#include <rgrl/rgrl_feature_trace_pt.h>
#include <rgrl/rgrl_feature_trace_region.h>
#include <rgrl/rgrl_initializer.h>
#include <rgrl/rgrl_initializer_inv_indexing.h>
#include <rgrl/rgrl_initializer_prior.h>
#include <rgrl/rgrl_initializer_ran_sam.h>
#include <rgrl/rgrl_initializer_reader.h>
#include <rgrl/rgrl_invariant.h>
#include <rgrl/rgrl_invariant_match.h>
#include <rgrl/rgrl_invariant_set.h>
#include <rgrl/rgrl_invariant_set_sptr.h>
#include <rgrl/rgrl_invariant_single_landmark.h>
#include <rgrl/rgrl_mask.h>
#include <rgrl/rgrl_mask_oriented_box.h>
#include <rgrl/rgrl_mask_3d_image.h>
#include <rgrl/rgrl_match_set.h>
#include <rgrl/rgrl_matcher.h>
#include <rgrl/rgrl_matcher_fixed.h>
#include <rgrl/rgrl_matcher_k_nearest.h>
#include <rgrl/rgrl_matcher_k_nearest_adv.h>
#include <rgrl/rgrl_matcher_k_nearest_boundary.h>
#include <rgrl/rgrl_matcher_k_nearest_pick_one.h>
#include <rgrl/rgrl_matcher_k_nearest_random.h>
#include <rgrl/rgrl_matcher_pseudo.h>
#include <rgrl/rgrl_matcher_pseudo_3d.h>
#include <rgrl/rgrl_matcher_pseudo_int_3d.h>
#include <rgrl/rgrl_object.h>
#include <rgrl/rgrl_scale.h>
#include <rgrl/rgrl_scale_est_all_weights.h>
#include <rgrl/rgrl_scale_est_closest.h>
#include <rgrl/rgrl_scale_est_null.h>
#include <rgrl/rgrl_scale_estimator.h>
#include <rgrl/rgrl_set_of.h>
#include <rgrl/rgrl_spline.h>
#include <rgrl/rgrl_trans_affine.h>
#include <rgrl/rgrl_trans_couple.h>
#include <rgrl/rgrl_trans_homo2d_proj_rad.h>
#include <rgrl/rgrl_trans_homography2d.h>
#include <rgrl/rgrl_trans_mixed_spline.h>
#include <rgrl/rgrl_trans_quadratic.h>
#include <rgrl/rgrl_trans_rad_dis_homo2d.h>
#include <rgrl/rgrl_trans_reader.h>
#include <rgrl/rgrl_trans_reduced_quad.h>
#include <rgrl/rgrl_trans_rigid.h>
#include <rgrl/rgrl_trans_similarity.h>
#include <rgrl/rgrl_trans_spline.h>
#include <rgrl/rgrl_trans_translation.h>
#include <rgrl/rgrl_transformation.h>
#include <rgrl/rgrl_util.h>
#include <rgrl/rgrl_view.h>
#include <rgrl/rgrl_weighter.h>
#include <rgrl/rgrl_weighter_indiv_scale.h>
#include <rgrl/rgrl_weighter_m_est.h>
#include <rgrl/rgrl_weighter_unit.h>

#include <rgrl/rgrl_macros.h>

int main() { return 0; }
