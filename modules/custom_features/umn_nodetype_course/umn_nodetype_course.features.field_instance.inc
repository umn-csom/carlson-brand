<?php
/**
 * @file
 * umn_nodetype_course.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function umn_nodetype_course_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-course-field_catalog_number'
  $field_instances['node-course-field_catalog_number'] = array(
    'bundle' => 'course',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a course number here. Typically a course number is a unique identifier like 3101 or 8001. It may contain letters.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'featured' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_catalog_number',
    'label' => 'Catalog number',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-course-field_course_type'
  $field_instances['node-course-field_course_type'] = array(
    'bundle' => 'course',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select a term to group courses within a degree. E.g. ARTS courses have course types like Photography, Ceramics etc.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'featured' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_course_type',
    'label' => 'Course type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-course-field_credits'
  $field_instances['node-course-field_credits'] = array(
    'bundle' => 'course',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the range of the number of credits that can be earned for this course.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'featured' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_credits',
    'label' => 'Credits',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-course-field_degree_type'
  $field_instances['node-course-field_degree_type'] = array(
    'bundle' => 'course',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose a term or terms to group by degree e.g. undergraduate, graduate studies, etc. If no options are available, please contact the administrator to create them.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'featured' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_degree_type',
    'label' => 'Degree type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-course-field_description'
  $field_instances['node-course-field_description'] = array(
    'bundle' => 'course',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a paragraph text describing the course.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'featured' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-course-field_subject'
  $field_instances['node-course-field_subject'] = array(
    'bundle' => 'course',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Subject or field of the course. Typically an acronym like ARTS or JOUR.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_subject',
    'label' => 'Subject',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Catalog number');
  t('Choose a term or terms to group by degree e.g. undergraduate, graduate studies, etc. If no options are available, please contact the administrator to create them.');
  t('Course type');
  t('Credits');
  t('Degree type');
  t('Description');
  t('Enter a course number here. Typically a course number is a unique identifier like 3101 or 8001. It may contain letters.');
  t('Enter a paragraph text describing the course.');
  t('Enter the range of the number of credits that can be earned for this course.');
  t('Select a term to group courses within a degree. E.g. ARTS courses have course types like Photography, Ceramics etc.');
  t('Subject');
  t('Subject or field of the course. Typically an acronym like ARTS or JOUR.');

  return $field_instances;
}
