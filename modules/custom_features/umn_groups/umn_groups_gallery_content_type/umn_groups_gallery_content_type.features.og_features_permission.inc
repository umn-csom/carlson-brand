<?php
/**
 * @file
 * umn_groups_gallery_content_type.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function umn_groups_gallery_content_type_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:group:create gallery content'
  $permissions['node:group:create gallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete any gallery content'
  $permissions['node:group:delete any gallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:delete own gallery content'
  $permissions['node:group:delete own gallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update any gallery content'
  $permissions['node:group:update any gallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update own gallery content'
  $permissions['node:group:update own gallery content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
