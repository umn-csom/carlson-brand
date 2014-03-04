<?php
/**
 * @file
 * umn_news_content_type.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function umn_news_content_type_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:news.
  $config['node:news'] = array(
    'instance' => 'node:news',
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
