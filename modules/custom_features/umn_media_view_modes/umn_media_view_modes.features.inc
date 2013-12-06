<?php
/**
 * @file
 * umn_media_view_modes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function umn_media_view_modes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}
