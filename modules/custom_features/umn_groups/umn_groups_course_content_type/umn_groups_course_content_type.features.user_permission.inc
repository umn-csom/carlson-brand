<?php
/**
 * @file
 * umn_groups_course_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function umn_groups_course_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node course breadcrumbs'.
  $permissions['administer panelizer node course breadcrumbs'] = array(
    'name' => 'administer panelizer node course breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node course content'.
  $permissions['administer panelizer node course content'] = array(
    'name' => 'administer panelizer node course content',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node course context'.
  $permissions['administer panelizer node course context'] = array(
    'name' => 'administer panelizer node course context',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node course defaults'.
  $permissions['administer panelizer node course defaults'] = array(
    'name' => 'administer panelizer node course defaults',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node course layout'.
  $permissions['administer panelizer node course layout'] = array(
    'name' => 'administer panelizer node course layout',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node course overview'.
  $permissions['administer panelizer node course overview'] = array(
    'name' => 'administer panelizer node course overview',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node course settings'.
  $permissions['administer panelizer node course settings'] = array(
    'name' => 'administer panelizer node course settings',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'convert from course'.
  $permissions['convert from course'] = array(
    'name' => 'convert from course',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to course'.
  $permissions['convert to course'] = array(
    'name' => 'convert to course',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'create course content'.
  $permissions['create course content'] = array(
    'name' => 'create course content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any course content'.
  $permissions['delete any course content'] = array(
    'name' => 'delete any course content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own course content'.
  $permissions['delete own course content'] = array(
    'name' => 'delete own course content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any course content'.
  $permissions['edit any course content'] = array(
    'name' => 'edit any course content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own course content'.
  $permissions['edit own course content'] = array(
    'name' => 'edit own course content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
