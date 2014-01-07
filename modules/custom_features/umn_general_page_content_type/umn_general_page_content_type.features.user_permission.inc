<?php
/**
 * @file
 * umn_general_page_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function umn_general_page_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node general_page breadcrumbs'.
  $permissions['administer panelizer node general_page breadcrumbs'] = array(
    'name' => 'administer panelizer node general_page breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node general_page content'.
  $permissions['administer panelizer node general_page content'] = array(
    'name' => 'administer panelizer node general_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node general_page context'.
  $permissions['administer panelizer node general_page context'] = array(
    'name' => 'administer panelizer node general_page context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node general_page defaults'.
  $permissions['administer panelizer node general_page defaults'] = array(
    'name' => 'administer panelizer node general_page defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node general_page layout'.
  $permissions['administer panelizer node general_page layout'] = array(
    'name' => 'administer panelizer node general_page layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node general_page overview'.
  $permissions['administer panelizer node general_page overview'] = array(
    'name' => 'administer panelizer node general_page overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node general_page settings'.
  $permissions['administer panelizer node general_page settings'] = array(
    'name' => 'administer panelizer node general_page settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create general_page content'.
  $permissions['create general_page content'] = array(
    'name' => 'create general_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any general_page content'.
  $permissions['delete any general_page content'] = array(
    'name' => 'delete any general_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own general_page content'.
  $permissions['delete own general_page content'] = array(
    'name' => 'delete own general_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any general_page content'.
  $permissions['edit any general_page content'] = array(
    'name' => 'edit any general_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own general_page content'.
  $permissions['edit own general_page content'] = array(
    'name' => 'edit own general_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
