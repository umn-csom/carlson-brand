<?php
/**
 * @file
 * umn_groups_general_page_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function umn_groups_general_page_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function umn_groups_general_page_content_type_node_info() {
  $items = array(
    'general_page' => array(
      'name' => t('General page'),
      'base' => 'node_content',
      'description' => t('This is a content type for generic content that doesn\'t fit into one of the more specified types.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
