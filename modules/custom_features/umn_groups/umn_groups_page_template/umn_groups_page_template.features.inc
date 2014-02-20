<?php
/**
 * @file
 * umn_groups_page_template.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function umn_groups_page_template_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
