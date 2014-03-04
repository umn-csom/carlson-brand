<?php
/**
 * @file
 * umn_course_content_type.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function umn_course_content_type_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:course.
  $config['node:course'] = array(
    'instance' => 'node:course',
    'config' => array(
      'description' => array(
        'value' => '[node:field_description]',
      ),
      'og:description' => array(
        'value' => '[node:field_description]',
      ),
    ),
  );

  return $config;
}
