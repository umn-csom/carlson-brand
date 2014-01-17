<?php
/**
 * @file
 * umn_user.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function umn_user_defaultconfig_features() {
  return array(
    'umn_user' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function umn_user_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: use text format markup.
  $permissions['use text format markup'] = array(
    'name' => 'use text format markup',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format umn_wysiwyg.
  $permissions['use text format umn_wysiwyg'] = array(
    'name' => 'use text format umn_wysiwyg',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'senior editor' => 'senior editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
