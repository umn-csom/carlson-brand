<?php

/**
 * @file
 * @copyright Copyright (c) 2014 Palantir.net
 */

/**
 * Class CbsMigrationUser
 */
class CbsMigrationUser extends Migration {

  /**
   * Construct function.
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate legacy users');

    $source_fields = array(
      'uid' => t('User ID'),
    );

    $fields = array(
      'uid',
      'name',
      'pass',
      'mail',
      'created',
      'access',
      'login',
      'status',
      'init',
    );

    $query = Database::getConnection('default', 'cbs_old')
      ->select('users', 'u')
      ->fields('u', $fields)
      ->condition('u.uid', 1, '>');
    $this->source = new MigrateSourceSQL($query, $source_fields);
    $this->destination = new MigrateDestinationUser();

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'uid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'Unique User ID',
          'alias' => 'u',
        ),
      ),
    MigrateDestinationUser::getKeySchema()
    );
    $this->addFieldMapping('name', 'name')->dedupe('users', 'name');
    $this->addFieldMapping('pass', 'pass');
    $this->addFieldMapping('mail', 'mail');
    $this->addFieldMapping('language')->defaultValue('');
    $this->addFieldMapping('theme')->defaultValue('');
    $this->addFieldMapping('signature')->defaultValue('');
    $this->addFieldMapping('signature_format')->defaultValue('umn_wysiwyg');
    $this->addFieldMapping('timezone')->defaultValue(NULL);
    $this->addFieldMapping('picture')->defaultValue(0);
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('access', 'access');
    $this->addFieldMapping('login', 'login');
    $this->addFieldMapping('status', 'status')->defaultValue(1);
    $this->addFieldMapping('init', 'init')->defaultValue('');
    $this->addFieldMapping('roles')->defaultValue(2);
  }

  /**
   * Modifies the current row before it is output.
   */
  public function prepareRow($current_row) {
    return TRUE;
  }
}
