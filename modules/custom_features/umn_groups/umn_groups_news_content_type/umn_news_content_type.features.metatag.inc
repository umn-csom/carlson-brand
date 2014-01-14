<?php
/**
 * @file
 * umn_groups_news_content_type.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function umn_groups_news_content_type_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:news.
  $config['node:news'] = array(
    'instance' => 'node:news',
    'config' => array(
      'description' => array(
        'value' => '[node:field_lede]',
      ),
      'dcterms.date' => array(
        'value' => '[node:field_publication_date]',
      ),
    ),
  );

  return $config;
}
