<?php
/**
 * @file
 * umn_groups_staff_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function umn_groups_staff_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_staff';
  $strongarm->value = 'edit-scheduler';
  $export['additional_settings__active_tab_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_staff';
  $strongarm->value = '[node:field_person_givenname] [node:field_person_familyname]';
  $export['ant_pattern_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_staff';
  $strongarm->value = 0;
  $export['ant_php_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_staff';
  $strongarm->value = '1';
  $export['ant_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_staff';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_staff';
  $strongarm->value = 'm/d/Y - H:i';
  $export['date_popup_authored_format_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_staff';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_staff_enable';
  $strongarm->value = 1;
  $export['easy_social_staff_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__staff';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '8',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'easy_social_1' => array(
          'default' => array(
            'weight' => '101',
            'visible' => TRUE,
          ),
          'rss' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '101',
            'visible' => FALSE,
          ),
          'featured' => array(
            'weight' => '101',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_staff';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_staff';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_staff';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_staff';
  $strongarm->value = '1';
  $export['node_preview_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_staff';
  $strongarm->value = 0;
  $export['node_submitted_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_staff';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 0,
        'default' => 1,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'rss' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:staff_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:20:"panelizer_node:staff";s:23:"allowed_layout_settings";a:40:{s:8:"flexible";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:6:"onecol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:6:"twocol";b:1;s:17:"threecol_25_50_25";b:1;s:17:"threecol_33_34_33";b:1;s:6:"harris";b:1;s:4:"pond";b:1;s:6:"bryant";b:1;s:9:"sanderson";b:1;s:14:"taylor_flipped";b:1;s:6:"phelan";b:1;s:17:"sanderson_flipped";b:1;s:8:"mccoppin";b:1;s:15:"moscone_flipped";b:1;s:6:"boxton";b:1;s:4:"burr";b:1;s:12:"burr_flipped";b:1;s:5:"geary";b:1;s:7:"moscone";b:1;s:5:"selby";b:1;s:22:"bryant_flipped_flipped";b:1;s:5:"brown";b:1;s:6:"taylor";b:1;s:12:"sutro_double";b:1;s:15:"hewston_flipped";b:1;s:6:"whelan";b:1;s:7:"hewston";b:1;s:12:"webb_flipped";b:1;s:13:"selby_flipped";b:1;s:7:"brenham";b:1;s:5:"sutro";b:1;s:8:"bartlett";b:1;s:4:"webb";b:1;s:15:"brenham_flipped";b:1;s:5:"rolph";b:1;s:16:"bartlett_flipped";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:staff_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:staff_allowed_layouts_default';
  $strongarm->value = 1;
  $export['panelizer_node:staff_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:staff_allowed_types_default';
  $strongarm->value = 1;
  $export['panelizer_node:staff_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:staff_default';
  $strongarm->value = array(
    'entity_form_field' => 'entity_form_field',
    'block' => 'block',
    'custom' => 'custom',
    'token' => 'token',
    'entity_field_extra' => 'entity_field_extra',
    'entity_field' => 'entity_field',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'state_flow_entity_form' => 'state_flow_entity_form',
    'other' => 'other',
  );
  $export['panelizer_node:staff_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_staff_pattern';
  $strongarm->value = 'staff/[node:title]';
  $export['pathauto_node_staff_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_staff';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_staff';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_staff';
  $strongarm->value = 0;
  $export['scheduler_publish_required_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_staff';
  $strongarm->value = 1;
  $export['scheduler_publish_revision_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_staff';
  $strongarm->value = 1;
  $export['scheduler_publish_touch_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_staff';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_staff';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_staff'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_staff';
  $strongarm->value = 1;
  $export['scheduler_unpublish_revision_staff'] = $strongarm;

  return $export;
}
