<?php
/**
 * @file
 * umn_groups_import_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function umn_groups_import_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function umn_groups_import_content_type_node_info() {
  $items = array(
    'import' => array(
      'name' => t('Imported content'),
      'base' => 'node_content',
      'description' => t('This content type is only for unsorted imported content. It should never be created directly.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
