/* SPDX-License-Identifier: GPL-2.0 */
/* List each unit test as selftest(function)
 *
 * The name is used as both an enum and expanded as igt__name to create
 * a module parameter. It must be unique and legal for a C identifier.
 *
 * Tests are executed in order by igt/drm_mm
 */

#define cmdline_test(test)	selftest(test, test)

cmdline_test(drm_cmdline_test_force_d_only)
cmdline_test(drm_cmdline_test_force_D_only_dvi)
cmdline_test(drm_cmdline_test_force_D_only_hdmi)
cmdline_test(drm_cmdline_test_force_D_only_not_digital)
cmdline_test(drm_cmdline_test_force_e_only)
cmdline_test(drm_cmdline_test_margin_only)
cmdline_test(drm_cmdline_test_interlace_only)
cmdline_test(drm_cmdline_test_res)
cmdline_test(drm_cmdline_test_res_missing_x)
cmdline_test(drm_cmdline_test_res_missing_y)
cmdline_test(drm_cmdline_test_res_bad_y)
cmdline_test(drm_cmdline_test_res_missing_y_bpp)
cmdline_test(drm_cmdline_test_res_vesa)
cmdline_test(drm_cmdline_test_res_vesa_rblank)
cmdline_test(drm_cmdline_test_res_rblank)
cmdline_test(drm_cmdline_test_res_bpp)
cmdline_test(drm_cmdline_test_res_bad_bpp)
cmdline_test(drm_cmdline_test_res_refresh)
cmdline_test(drm_cmdline_test_res_bad_refresh)
cmdline_test(drm_cmdline_test_res_bpp_refresh)
cmdline_test(drm_cmdline_test_res_bpp_refresh_interlaced)
cmdline_test(drm_cmdline_test_res_bpp_refresh_margins)
cmdline_test(drm_cmdline_test_res_bpp_refresh_force_off)
cmdline_test(drm_cmdline_test_res_bpp_refresh_force_on_off)
cmdline_test(drm_cmdline_test_res_bpp_refresh_force_on)
cmdline_test(drm_cmdline_test_res_bpp_refresh_force_on_analog)
cmdline_test(drm_cmdline_test_res_bpp_refresh_force_on_digital)
cmdline_test(drm_cmdline_test_res_bpp_refresh_interlaced_margins_force_on)
cmdline_test(drm_cmdline_test_res_margins_force_on)
cmdline_test(drm_cmdline_test_res_vesa_margins)
cmdline_test(drm_cmdline_test_res_invalid_mode)
cmdline_test(drm_cmdline_test_res_bpp_wrong_place_mode)
cmdline_test(drm_cmdline_test_name)
cmdline_test(drm_cmdline_test_name_bpp)
cmdline_test(drm_cmdline_test_name_refresh)
cmdline_test(drm_cmdline_test_name_bpp_refresh)
cmdline_test(drm_cmdline_test_name_refresh_wrong_mode)
cmdline_test(drm_cmdline_test_name_refresh_invalid_mode)
cmdline_test(drm_cmdline_test_name_option)
cmdline_test(drm_cmdline_test_name_bpp_option)
cmdline_test(drm_cmdline_test_rotate_0)
cmdline_test(drm_cmdline_test_rotate_90)
cmdline_test(drm_cmdline_test_rotate_180)
cmdline_test(drm_cmdline_test_rotate_270)
cmdline_test(drm_cmdline_test_rotate_multiple)
cmdline_test(drm_cmdline_test_rotate_invalid_val)
cmdline_test(drm_cmdline_test_rotate_truncated)
cmdline_test(drm_cmdline_test_hmirror)
cmdline_test(drm_cmdline_test_vmirror)
cmdline_test(drm_cmdline_test_margin_options)
cmdline_test(drm_cmdline_test_multiple_options)
cmdline_test(drm_cmdline_test_invalid_option)
cmdline_test(drm_cmdline_test_bpp_extra_and_option)
cmdline_test(drm_cmdline_test_extra_and_option)
cmdline_test(drm_cmdline_test_freestanding_options)
cmdline_test(drm_cmdline_test_freestanding_force_e_and_options)
cmdline_test(drm_cmdline_test_panel_orientation)
