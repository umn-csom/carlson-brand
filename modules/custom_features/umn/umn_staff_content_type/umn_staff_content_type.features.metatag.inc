<?php
/**
 * @file
 * umn_staff_content_type.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function umn_staff_content_type_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:staff.
  $config['node:staff'] = array(
    'instance' => 'node:staff',
    'config' => array(
      'description' => array(
        'value' => '[node:field_lede]',
      ),
      'og:description' => array(
        'value' => '[node:field_lede]',
      ),
    ),
  );

  return $config;
}
