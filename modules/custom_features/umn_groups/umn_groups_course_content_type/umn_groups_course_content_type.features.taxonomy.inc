<?php
/**
 * @file
 * umn_groups_course_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function umn_groups_course_content_type_taxonomy_default_vocabularies() {
  return array(
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
  );
}
