<?php
/**
 * @file
 * umn_groups_blog_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function umn_groups_blog_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node blog_post breadcrumbs'.
  $permissions['administer panelizer node blog_post breadcrumbs'] = array(
    'name' => 'administer panelizer node blog_post breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog_post content'.
  $permissions['administer panelizer node blog_post content'] = array(
    'name' => 'administer panelizer node blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog_post context'.
  $permissions['administer panelizer node blog_post context'] = array(
    'name' => 'administer panelizer node blog_post context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog_post defaults'.
  $permissions['administer panelizer node blog_post defaults'] = array(
    'name' => 'administer panelizer node blog_post defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog_post layout'.
  $permissions['administer panelizer node blog_post layout'] = array(
    'name' => 'administer panelizer node blog_post layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog_post overview'.
  $permissions['administer panelizer node blog_post overview'] = array(
    'name' => 'administer panelizer node blog_post overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog_post settings'.
  $permissions['administer panelizer node blog_post settings'] = array(
    'name' => 'administer panelizer node blog_post settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'convert from blog_post'.
  $permissions['convert from blog_post'] = array(
    'name' => 'convert from blog_post',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to blog_post'.
  $permissions['convert to blog_post'] = array(
    'name' => 'convert to blog_post',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_convert',
  );

  // Exported permission: 'create blog_post content'.
  $permissions['create blog_post content'] = array(
    'name' => 'create blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog_post content'.
  $permissions['delete any blog_post content'] = array(
    'name' => 'delete any blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog_post content'.
  $permissions['delete own blog_post content'] = array(
    'name' => 'delete own blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any blog_post content'.
  $permissions['edit any blog_post content'] = array(
    'name' => 'edit any blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog_post content'.
  $permissions['edit own blog_post content'] = array(
    'name' => 'edit own blog_post content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
