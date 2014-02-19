<?php
/**
 * @file
 * umn_groups_landing_page_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function umn_groups_landing_page_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function umn_groups_landing_page_content_type_node_info() {
  $items = array(
    'landing_page' => array(
      'name' => t('Landing page'),
      'base' => 'node_content',
      'description' => t('This is a content type with no fields of its own that is intended purely to be a container for panes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
