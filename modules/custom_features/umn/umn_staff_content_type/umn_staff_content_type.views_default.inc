<?php
/**
 * @file
 * umn_staff_content_type.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function umn_staff_content_type_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'staff';
  $view->description = 'A list of faculty members';
  $view->tag = 'umn';
  $view->base_table = 'node';
  $view->human_name = 'Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Landscape picture */
  $handler->display->display_options['fields']['field_landscape_picture']['id'] = 'field_landscape_picture';
  $handler->display->display_options['fields']['field_landscape_picture']['table'] = 'field_data_field_landscape_picture';
  $handler->display->display_options['fields']['field_landscape_picture']['field'] = 'field_landscape_picture';
  $handler->display->display_options['fields']['field_landscape_picture']['label'] = '';
  $handler->display->display_options['fields']['field_landscape_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landscape_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landscape_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Portrait picture */
  $handler->display->display_options['fields']['field_portrait_picture']['id'] = 'field_portrait_picture';
  $handler->display->display_options['fields']['field_portrait_picture']['table'] = 'field_data_field_portrait_picture';
  $handler->display->display_options['fields']['field_portrait_picture']['field'] = 'field_portrait_picture';
  $handler->display->display_options['fields']['field_portrait_picture']['label'] = '';
  $handler->display->display_options['fields']['field_portrait_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portrait_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portrait_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_person_address']['id'] = 'field_person_address';
  $handler->display->display_options['fields']['field_person_address']['table'] = 'field_data_field_person_address';
  $handler->display->display_options['fields']['field_person_address']['field'] = 'field_person_address';
  $handler->display->display_options['fields']['field_person_address']['label'] = '';
  $handler->display->display_options['fields']['field_person_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_person_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['type'] = 'invisimail_html_entities';
  $handler->display->display_options['fields']['field_email']['settings'] = array(
    'chunk' => 0,
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_email']['delta_offset'] = '0';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_lede']['id'] = 'field_lede';
  $handler->display->display_options['fields']['field_lede']['table'] = 'field_data_field_lede';
  $handler->display->display_options['fields']['field_lede']['field'] = 'field_lede';
  $handler->display->display_options['fields']['field_lede']['label'] = '';
  $handler->display->display_options['fields']['field_lede']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Family name (field_person_familyname) */
  $handler->display->display_options['sorts']['field_person_familyname_value']['id'] = 'field_person_familyname_value';
  $handler->display->display_options['sorts']['field_person_familyname_value']['table'] = 'field_data_field_person_familyname';
  $handler->display->display_options['sorts']['field_person_familyname_value']['field'] = 'field_person_familyname_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'staff' => 'staff',
  );

  /* Display: CP: Staff list */
  $handler = $view->new_display('panel_pane', 'CP: Staff list', 'faculty_list');
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $export['staff'] = $view;

  return $export;
}
