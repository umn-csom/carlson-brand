<?php
/**
 * @file
 * umn_groups_slideshow_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function umn_groups_slideshow_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node slideshow breadcrumbs'.
  $permissions['administer panelizer node slideshow breadcrumbs'] = array(
    'name' => 'administer panelizer node slideshow breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slideshow content'.
  $permissions['administer panelizer node slideshow content'] = array(
    'name' => 'administer panelizer node slideshow content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slideshow context'.
  $permissions['administer panelizer node slideshow context'] = array(
    'name' => 'administer panelizer node slideshow context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slideshow defaults'.
  $permissions['administer panelizer node slideshow defaults'] = array(
    'name' => 'administer panelizer node slideshow defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slideshow layout'.
  $permissions['administer panelizer node slideshow layout'] = array(
    'name' => 'administer panelizer node slideshow layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slideshow overview'.
  $permissions['administer panelizer node slideshow overview'] = array(
    'name' => 'administer panelizer node slideshow overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node slideshow settings'.
  $permissions['administer panelizer node slideshow settings'] = array(
    'name' => 'administer panelizer node slideshow settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'convert from slideshow'.
  $permissions['convert from slideshow'] = array(
    'name' => 'convert from slideshow',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to slideshow'.
  $permissions['convert to slideshow'] = array(
    'name' => 'convert to slideshow',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'create slideshow content'.
  $permissions['create slideshow content'] = array(
    'name' => 'create slideshow content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any slideshow content'.
  $permissions['delete any slideshow content'] = array(
    'name' => 'delete any slideshow content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own slideshow content'.
  $permissions['delete own slideshow content'] = array(
    'name' => 'delete own slideshow content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any slideshow content'.
  $permissions['edit any slideshow content'] = array(
    'name' => 'edit any slideshow content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own slideshow content'.
  $permissions['edit own slideshow content'] = array(
    'name' => 'edit own slideshow content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
