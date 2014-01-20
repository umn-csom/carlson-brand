<?php
/**
 * @file
 * umn_groups_faculty_content_type.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function umn_groups_faculty_content_type_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:faculty.
  $config['node:faculty'] = array(
    'instance' => 'node:faculty',
    'config' => array(
      'og:type' => array(
        'value' => 'profile',
      ),
    ),
  );

  return $config;
}
