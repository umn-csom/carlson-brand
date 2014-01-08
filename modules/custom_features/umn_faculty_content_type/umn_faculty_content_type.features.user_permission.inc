<?php
/**
 * @file
 * umn_faculty_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function umn_faculty_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node faculty breadcrumbs'.
  $permissions['administer panelizer node faculty breadcrumbs'] = array(
    'name' => 'administer panelizer node faculty breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faculty content'.
  $permissions['administer panelizer node faculty content'] = array(
    'name' => 'administer panelizer node faculty content',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faculty context'.
  $permissions['administer panelizer node faculty context'] = array(
    'name' => 'administer panelizer node faculty context',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faculty defaults'.
  $permissions['administer panelizer node faculty defaults'] = array(
    'name' => 'administer panelizer node faculty defaults',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faculty layout'.
  $permissions['administer panelizer node faculty layout'] = array(
    'name' => 'administer panelizer node faculty layout',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faculty overview'.
  $permissions['administer panelizer node faculty overview'] = array(
    'name' => 'administer panelizer node faculty overview',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node faculty settings'.
  $permissions['administer panelizer node faculty settings'] = array(
    'name' => 'administer panelizer node faculty settings',
    'roles' => array(
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create faculty content'.
  $permissions['create faculty content'] = array(
    'name' => 'create faculty content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any faculty content'.
  $permissions['delete any faculty content'] = array(
    'name' => 'delete any faculty content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own faculty content'.
  $permissions['delete own faculty content'] = array(
    'name' => 'delete own faculty content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any faculty content'.
  $permissions['edit any faculty content'] = array(
    'name' => 'edit any faculty content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own faculty content'.
  $permissions['edit own faculty content'] = array(
    'name' => 'edit own faculty content',
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
