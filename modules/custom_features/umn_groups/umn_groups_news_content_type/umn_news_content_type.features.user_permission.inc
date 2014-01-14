<?php
/**
 * @file
 * umn_groups_news_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function umn_groups_news_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node news breadcrumbs'.
  $permissions['administer panelizer node news breadcrumbs'] = array(
    'name' => 'administer panelizer node news breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news content'.
  $permissions['administer panelizer node news content'] = array(
    'name' => 'administer panelizer node news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news context'.
  $permissions['administer panelizer node news context'] = array(
    'name' => 'administer panelizer node news context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news defaults'.
  $permissions['administer panelizer node news defaults'] = array(
    'name' => 'administer panelizer node news defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news layout'.
  $permissions['administer panelizer node news layout'] = array(
    'name' => 'administer panelizer node news layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news overview'.
  $permissions['administer panelizer node news overview'] = array(
    'name' => 'administer panelizer node news overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node news settings'.
  $permissions['administer panelizer node news settings'] = array(
    'name' => 'administer panelizer node news settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news content'.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
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
