<?php
/**
 * @file
 * umn_workbench.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function umn_workbench_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "workbench_workflows" && $api == "workbench_workflows") {
    return array("version" => "1");
  }
}
