<?php
/**
 * @file
 * umn_groups_group_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function umn_groups_group_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function umn_groups_group_content_type_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('A group to which other types of content can belong.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Give this group a name.'),
    ),
  );
  return $items;
}
