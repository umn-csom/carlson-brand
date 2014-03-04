<?php
/**
 * @file
 * umn_landing_page_content_type.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function umn_landing_page_content_type_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:landing_page.
  $config['node:landing_page'] = array(
    'instance' => 'node:landing_page',
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
