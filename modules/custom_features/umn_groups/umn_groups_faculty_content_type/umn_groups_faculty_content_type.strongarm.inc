<?php
/**
 * @file
 * umn_groups_faculty_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function umn_groups_faculty_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_faculty';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_faculty';
  $strongarm->value = 'j F Y - g:ia';
  $export['date_popup_authored_format_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_faculty';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__faculty';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => TRUE,
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
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'metatags' => array(
          'weight' => '8',
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
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_faculty';
  $strongarm->value = array();
  $export['menu_options_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_faculty';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_faculty';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_faculty';
  $strongarm->value = '1';
  $export['node_preview_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_faculty';
  $strongarm->value = 0;
  $export['node_submitted_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_faculty';
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
  $export['panelizer_defaults_node_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:faculty_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:22:"panelizer_node:faculty";s:23:"allowed_layout_settings";a:40:{s:8:"flexible";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:6:"onecol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:6:"twocol";b:1;s:17:"threecol_25_50_25";b:1;s:17:"threecol_33_34_33";b:1;s:6:"harris";b:1;s:4:"pond";b:1;s:6:"bryant";b:1;s:9:"sanderson";b:1;s:14:"taylor_flipped";b:1;s:6:"phelan";b:1;s:17:"sanderson_flipped";b:1;s:8:"mccoppin";b:1;s:15:"moscone_flipped";b:1;s:6:"boxton";b:1;s:4:"burr";b:1;s:12:"burr_flipped";b:1;s:5:"geary";b:1;s:7:"moscone";b:1;s:5:"selby";b:1;s:22:"bryant_flipped_flipped";b:1;s:5:"brown";b:1;s:6:"taylor";b:1;s:12:"sutro_double";b:1;s:15:"hewston_flipped";b:1;s:6:"whelan";b:1;s:7:"hewston";b:1;s:12:"webb_flipped";b:1;s:13:"selby_flipped";b:1;s:7:"brenham";b:1;s:5:"sutro";b:1;s:8:"bartlett";b:1;s:4:"webb";b:1;s:15:"brenham_flipped";b:1;s:5:"rolph";b:1;s:16:"bartlett_flipped";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:faculty_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:faculty_allowed_layouts_default';
  $strongarm->value = 1;
  $export['panelizer_node:faculty_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:faculty_allowed_types_default';
  $strongarm->value = 1;
  $export['panelizer_node:faculty_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:faculty_default';
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
    'views' => 'views',
    'views_panes' => 'views_panes',
    'state_flow_entity_form' => 'state_flow_entity_form',
    'other' => 'other',
  );
  $export['panelizer_node:faculty_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_faculty_pattern';
  $strongarm->value = 'faculty/[node:title]';
  $export['pathauto_node_faculty_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_faculty';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_faculty';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_faculty';
  $strongarm->value = 0;
  $export['scheduler_publish_required_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_faculty';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_faculty';
  $strongarm->value = 1;
  $export['scheduler_publish_touch_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_faculty';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_faculty';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_faculty'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_faculty';
  $strongarm->value = 1;
  $export['scheduler_unpublish_revision_faculty'] = $strongarm;

  return $export;
}
