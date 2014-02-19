<?php
/**
 * @file
 * umn_groups_calendar_content_type.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function umn_groups_calendar_content_type_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:calendar.
  $config['node:calendar'] = array(
    'instance' => 'node:calendar',
    'config' => array(
      'description' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => '',
      ),
    ),
  );

  return $config;
}
