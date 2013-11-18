<?php
/**
 * @file
 * umn_calendar_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function umn_calendar_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node calendar breadcrumbs.
  $permissions['administer panelizer node calendar breadcrumbs'] = array(
    'name' => 'administer panelizer node calendar breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node calendar content.
  $permissions['administer panelizer node calendar content'] = array(
    'name' => 'administer panelizer node calendar content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node calendar context.
  $permissions['administer panelizer node calendar context'] = array(
    'name' => 'administer panelizer node calendar context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node calendar defaults.
  $permissions['administer panelizer node calendar defaults'] = array(
    'name' => 'administer panelizer node calendar defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node calendar layout.
  $permissions['administer panelizer node calendar layout'] = array(
    'name' => 'administer panelizer node calendar layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node calendar overview.
  $permissions['administer panelizer node calendar overview'] = array(
    'name' => 'administer panelizer node calendar overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node calendar settings.
  $permissions['administer panelizer node calendar settings'] = array(
    'name' => 'administer panelizer node calendar settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: create calendar content.
  $permissions['create calendar content'] = array(
    'name' => 'create calendar content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any calendar content.
  $permissions['delete any calendar content'] = array(
    'name' => 'delete any calendar content',
    'roles' => array(
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own calendar content.
  $permissions['delete own calendar content'] = array(
    'name' => 'delete own calendar content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any calendar content.
  $permissions['edit any calendar content'] = array(
    'name' => 'edit any calendar content',
    'roles' => array(
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own calendar content.
  $permissions['edit own calendar content'] = array(
    'name' => 'edit own calendar content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
