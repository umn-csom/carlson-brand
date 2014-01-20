<?php
/**
 * @file
 * umn_groups_staff_content_type.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function umn_groups_staff_content_type_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:staff.
  $config['node:staff'] = array(
    'instance' => 'node:staff',
    'config' => array(
      'og:type' => array(
        'value' => 'profile',
      ),
    ),
  );

  return $config;
}
