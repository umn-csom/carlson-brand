<?php
/**
 * @file
 * umn_basic_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function umn_basic_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'securepages_enable';
  $strongarm->value = '1';
  $export['securepages_enable'] = $strongarm;

  return $export;
}
