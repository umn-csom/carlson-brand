<?php
/**
 * @file
 * umn_faculty_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function umn_faculty_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function umn_faculty_content_type_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function umn_faculty_content_type_node_info() {
  $items = array(
    'faculty' => array(
      'name' => t('Faculty'),
      'base' => 'node_content',
      'description' => t('An individual faculty member.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
