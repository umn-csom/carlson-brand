<?php
/**
 * @file
 * umn_course_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function umn_course_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function umn_course_content_type_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('This type of node holds information about individual courses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Enter a course title. A typical course has a title like "Studies in Mass Communication I"'),
    ),
  );
  return $items;
}
