<?php

/**
 * @file
 * @copyright Copyright (c) 2014 Palantir.net
 */


class CbsMigrationWorkbench extends Migration {

  /**
   * Class constructor.
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Workbench Taxonomy to Group Nodes');

    $source_fields = array(
      'tid' => t('The ID of the terms being transferred.'),
      'description' => t('Description of the term.'),
    );

    $query = Database::getConnection('default', 'cbs_old')
      ->select('taxonomy_term_data', 'td');
    $query->join('taxonomy_vocabulary', 'tv', 'td.vid = tv.vid');
    $query->condition('tv.machine_name', 'workbench_access')
      ->fields('td', array('name', 'description', 'tid'));

    $this->source = new MigrateSourceSQL($query, $source_fields);
    $this->destination = new MigrateDestinationNode('group');
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => 'D7 Unique Term ID',
          'alias' => 'td',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->addFieldMapping('title', 'name');
    $this->addFieldMapping('is_new')->defaultValue(TRUE);
    $this->addFieldMapping('uid')->defaultValue(1);
    $this->addFieldMapping('translate')->defaultValue(0);
    $this->addFieldMapping('revision')->defaultValue(TRUE);
    $this->addFieldMapping('revision_uid')->defaultValue(1);
    $this->addFieldMapping('created')->defaultValue(date('U'));
    $this->addFieldMapping('changed')->defaultValue(date('U'));
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('promote')->defaultValue(0);
    $this->addFieldMapping('comment')->defaultValue(0);
    $this->addFieldMapping('sticky')->defaultValue(0);
    $this->addFieldMapping('path')->issueGroup(t('DNM'));


    $body_arguments = MigrateTextFieldHandler::arguments(NULL, filter_default_format(), NULL);
    $this->addFieldMapping('body', 'description')
      ->arguments($body_arguments);
  }

  /**
   * Modifies the current row before it is used.
   *
   * @param object $current_row
   *   The current row.
   *
   * @return bool
   *   Always true.
   */
  public function prepareRow($current_row) {
    return TRUE;
  }
}
