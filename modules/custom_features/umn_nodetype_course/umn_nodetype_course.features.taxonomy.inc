<?php
/**
 * @file
 * umn_nodetype_course.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function umn_nodetype_course_taxonomy_default_vocabularies() {
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
