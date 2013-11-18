<?php
/**
 * @file
 * umn_acquia_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function umn_acquia_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_identifier';
  $strongarm->value = 'DIVZ-42937';
  $export['acquia_identifier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_key';
  $strongarm->value = 'b380e4b0944ef2c99b0f23915c890f06';
  $export['acquia_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_subscription_data';
  $strongarm->value = array(
    'timestamp' => 1383865223,
    'active' => '1',
    'href' => 'https://insight.acquia.com/node/uuid/a5fd3597-5767-7d14-ddd5-bdd507467185/dashboard',
    'uuid' => 'a5fd3597-5767-7d14-ddd5-bdd507467185',
    'expiration_date' => array(
      'value' => '2014-09-25T00:00:00',
    ),
    'product' => array(
      'view' => 'Acquia Network',
    ),
    'derived_key_salt' => '190fb6810c3e6abe163b36479e8ab6df',
    'update_service' => '1',
    'search_service_enabled' => 1,
    'update' => array(),
    'heartbeat_data' => array(
      'search_service_enabled' => 1,
    ),
  );
  $export['acquia_subscription_data'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_subscription_name';
  $strongarm->value = 'University of Minnesota Office of IT - sandbox (LC)';
  $export['acquia_subscription_name'] = $strongarm;

  return $export;
}
