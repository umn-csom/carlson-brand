<?php

/**
 * @file
 * @copyright Copyright (c) 2014 Palantir.net
 */

/**
 * Registers the migration with the migration module.
 */
function umn_migration_cbs_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'CbsMigrationUser' => array('class_name' => 'CbsMigrationUser'),
      'CbsMigrationWorkbench' => array('class_name' => 'CbsMigrationWorkbench'),
    ),
  );
  return $api;
}
