<?php

/**
 * @file
 * Holds the migration classes for DrupalHub migrate module.
 */

/**
 * Migrating elements.
 */
class DrupalHubIdeas extends DrupalHubMigrate {
  public $entityType = 'node';
  public $bundle = 'ideas';

  public $csvColumns = array(
    array('id', 'Unique ID'),
    array('title', 'Title'),
    array('body', 'Body'),
    array('user', 'User'),
  );

  public $dependencies = array('DrupalCampUsers');

  public function __construct() {
    parent::__construct();

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body');

    // TODO: When finishing the migrate of users.
//    $this->addFieldMapping('field_user', 'users')
//      ->sourceMigration(array('DrupalHubUsers'));
  }
}
