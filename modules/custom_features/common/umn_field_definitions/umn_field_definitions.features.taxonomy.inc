<?php
/**
 * @file
 * umn_field_definitions.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function umn_field_definitions_taxonomy_default_vocabularies() {
  return array(
    'editorial_sections' => array(
      'name' => 'Editorial Sections',
      'machine_name' => 'editorial_sections',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'media_tags' => array(
      'name' => 'Media Tags',
      'machine_name' => 'media_tags',
      'description' => 'Free form tags to help categorize media',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
