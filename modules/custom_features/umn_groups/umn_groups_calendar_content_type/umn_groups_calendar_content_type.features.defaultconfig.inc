<?php
/**
 * @file
 * umn_groups_calendar_content_type.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function umn_groups_calendar_content_type_defaultconfig_features() {
  return array(
    'umn_groups_calendar_content_type' => array(
      'field_default_fields' => 'field_default_fields',
      'metatag_config_default' => 'metatag_config_default',
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function umn_groups_calendar_content_type_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'node-calendar-field_google_calendar'.
  $fields['node-calendar-field_google_calendar'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_google_calendar',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => 0,
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => 0,
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'calendar',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => 'Place a url for a google calendar. <ol><li>Go to <a target="_blank" href=\'https://www.google.com/calendar\'>www.google.com/calendar</a> and choose a calendar from the left sidebar.  </li><li>Go to calendar settings for your chosen calendar and select the HTML option form the \'Calendar Address\' area.  </li><li>Copy the url from the pop-up into this field. </li></ol>Private google calendars can <strong>not</strong> be embedded; the node will save with but no calendar will be displayed. ',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'umn_gcalendar',
          'settings' => array(
            'calendar_timezone' => 'America/Chicago',
            'ctz' => 'America/Chicago',
            'mode' => 'MONTH',
            'showCalendars' => 1,
            'showDate' => 1,
            'showNav' => 1,
            'showPrint' => 1,
            'showTabs' => 1,
            'showTitle' => 1,
            'showTz' => 1,
            'show_calendars' => TRUE,
            'show_date' => TRUE,
            'show_nav' => TRUE,
            'show_print' => TRUE,
            'show_tabs' => TRUE,
            'show_timezone' => TRUE,
            'show_title' => TRUE,
            'week_start_day' => 1,
            'wkst' => 1,
          ),
          'type' => 'google_calendar',
          'weight' => 0,
        ),
        'featured' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_google_calendar',
      'label' => 'Google calendar',
      'required' => 1,
      'settings' => array(
        'linkit' => array(
          'enable' => 0,
          'insert_plugin' => '',
        ),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 41,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Google calendar');
  t('Place a url for a google calendar. <ol><li>Go to <a target="_blank" href=\'https://www.google.com/calendar\'>www.google.com/calendar</a> and choose a calendar from the left sidebar.  </li><li>Go to calendar settings for your chosen calendar and select the HTML option form the \'Calendar Address\' area.  </li><li>Copy the url from the pop-up into this field. </li></ol>Private google calendars can <strong>not</strong> be embedded; the node will save with but no calendar will be displayed. ');

  return $fields;
}

/**
 * Implements hook_defaultconfig_metatag_config_default().
 */
function umn_groups_calendar_content_type_defaultconfig_metatag_config_default() {
  $export = array();

  $config = new stdClass();
  $config->disabled = FALSE; /* Edit this to true to make a default config disabled initially */
  $config->api_version = 1;
  $config->instance = 'node';
  $config->config = array(
    'title' => array(
      'value' => '[node:title] | [site:name]',
    ),
    'description' => array(
      'value' => '[node:field_body]',
    ),
    'dcterms.title' => array(
      'value' => '[node:title]',
    ),
    'dcterms.creator' => array(
      'value' => '[node:author]',
    ),
    'dcterms.date' => array(
      'value' => '[node:created:custom:Y-m-d\\TH:iP]',
    ),
    'dcterms.identifier' => array(
      'value' => '[current-page:url:absolute]',
    ),
    'dcterms.language' => array(
      'value' => '[node:language]',
    ),
    'og:title' => array(
      'value' => '[node:title]',
    ),
    'og:description' => array(
      'value' => '[node:field_body]',
    ),
  );
  $export['node'] = $config;

  return $export;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function umn_groups_calendar_content_type_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_calendar_enable';
  $strongarm->value = 1;
  $export['easy_social_calendar_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_calendar';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_calendar';
  $strongarm->value = 0;
  $export['scheduler_publish_required_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_calendar';
  $strongarm->value = 1;
  $export['scheduler_publish_revision_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_calendar';
  $strongarm->value = 1;
  $export['scheduler_publish_touch_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_calendar';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_calendar';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_calendar';
  $strongarm->value = 1;
  $export['scheduler_unpublish_revision_calendar'] = $strongarm;

  return $export;
}
