<?php
/**
 * @file
 * umn_vocabularies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function umn_vocabularies_taxonomy_default_vocabularies() {
  return array(
    'blogs' => array(
      'name' => 'Blogs',
      'machine_name' => 'blogs',
      'description' => 'Each term represents a different blog to which a post may belong.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'course_type' => array(
      'name' => 'Course type',
      'machine_name' => 'course_type',
      'description' => 'Sub-categories of courses within departments, e.g. "Ceramics" is a category in the ARTS department.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'degree_type' => array(
      'name' => 'Degree type',
      'machine_name' => 'degree_type',
      'description' => 'Degree types such as "Undergrad", "Graduate studies", etc.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
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
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Enter a comma-separated list of words to describe your content.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
