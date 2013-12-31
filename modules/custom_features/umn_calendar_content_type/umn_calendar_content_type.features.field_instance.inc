<?php
/**
 * @file
 * umn_calendar_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function umn_calendar_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-calendar-field_google_calendar'
  $field_instances['node-calendar-field_google_calendar'] = array(
    'bundle' => 'calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Place a url for a google calendar. Go to <a target="_blank" href=\'https://www.google.com/calendar\'>www.google.com/calendar</a> and choose a calendar from the left sidebar. Go to calendar settings for your chosen calendar and select the HTML option form the \'Calendar Address\' area. Copy the url from the pop-up into this field. Private google calendars can <strong>not</strong> be embedded; the node will save with but no calendar will be displayed. ',
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
  );

  // Exported field_instance: 'node-calendar-field_parent'
  $field_instances['node-calendar-field_parent'] = array(
    'bundle' => 'calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This data was imported from UMContent. It will not be visible to site visitors. This field may be used to help determine parent-child relationships between nodes for a menu.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
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
    'field_name' => 'field_parent',
    'label' => 'Parent',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-calendar-field_path_slug'
  $field_instances['node-calendar-field_path_slug'] = array(
    'bundle' => 'calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a "slug" string that will be used as a fragment of the URL. It should be short, generally 1-2 words. The string will be automatically lower-cased.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
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
    'field_name' => 'field_path_slug',
    'label' => 'Path slug',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-calendar-field_related_content'
  $field_instances['node-calendar-field_related_content'] = array(
    'bundle' => 'calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the title of content that is related to this content. The system will suggest pieces of content that match the title via autocomplete.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_content',
    'label' => 'Related content',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-calendar-field_tags'
  $field_instances['node-calendar-field_tags'] = array(
    'bundle' => 'calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please add tags related to the content in this node, separated by commas. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
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
    'field_name' => 'field_tags',
    'label' => 'Free tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 43,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Enter a "slug" string that will be used as a fragment of the URL. It should be short, generally 1-2 words. The string will be automatically lower-cased.');
  t('Enter the title of content that is related to this content. The system will suggest pieces of content that match the title via autocomplete.');
  t('Free tags');
  t('Google calendar');
  t('Parent');
  t('Path slug');
  t('Place a url for a google calendar. Go to <a target="_blank" href=\'https://www.google.com/calendar\'>www.google.com/calendar</a> and choose a calendar from the left sidebar. Go to calendar settings for your chosen calendar and select the HTML option form the \'Calendar Address\' area. Copy the url from the pop-up into this field. Private google calendars can <strong>not</strong> be embedded; the node will save with but no calendar will be displayed. ');
  t('Please add tags related to the content in this node, separated by commas. ');
  t('Related content');
  t('This data was imported from UMContent. It will not be visible to site visitors. This field may be used to help determine parent-child relationships between nodes for a menu.');

  return $field_instances;
}
