<?php
/**
 * @file
 * umn_groups_news_content_type.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function umn_groups_news_content_type_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'umn';
  $view->base_table = 'node';
  $view->human_name = 'News';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'news_nodequeue' => 'news_nodequeue',
    'news_queue' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_lede']['id'] = 'field_lede';
  $handler->display->display_options['fields']['field_lede']['table'] = 'field_data_field_lede';
  $handler->display->display_options['fields']['field_lede']['field'] = 'field_lede';
  $handler->display->display_options['fields']['field_lede']['label'] = '';
  $handler->display->display_options['fields']['field_lede']['element_label_colon'] = FALSE;
  /* Field: Content: Free tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Related content */
  $handler->display->display_options['fields']['field_related_content']['id'] = 'field_related_content';
  $handler->display->display_options['fields']['field_related_content']['table'] = 'field_data_field_related_content';
  $handler->display->display_options['fields']['field_related_content']['field'] = 'field_related_content';
  $handler->display->display_options['fields']['field_related_content']['label'] = '';
  $handler->display->display_options['fields']['field_related_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_content']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_content']['delta_offset'] = '0';
  /* Field: Content: Uploaded files */
  $handler->display->display_options['fields']['field_uploaded_files']['id'] = 'field_uploaded_files';
  $handler->display->display_options['fields']['field_uploaded_files']['table'] = 'field_data_field_uploaded_files';
  $handler->display->display_options['fields']['field_uploaded_files']['field'] = 'field_uploaded_files';
  $handler->display->display_options['fields']['field_uploaded_files']['label'] = '';
  $handler->display->display_options['fields']['field_uploaded_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uploaded_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_uploaded_files']['delta_offset'] = '0';
  /* Field: Content: Pull quote */
  $handler->display->display_options['fields']['field_pull_quote']['id'] = 'field_pull_quote';
  $handler->display->display_options['fields']['field_pull_quote']['table'] = 'field_data_field_pull_quote';
  $handler->display->display_options['fields']['field_pull_quote']['field'] = 'field_pull_quote';
  $handler->display->display_options['fields']['field_pull_quote']['label'] = '';
  $handler->display->display_options['fields']['field_pull_quote']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['sorts']['position']['order'] = 'DESC';
  /* Sort criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
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
    'news' => 'news',
  );

  /* Display: News Archive */
  $handler = $view->new_display('panel_pane', 'News Archive', 'panel_pane_1');

  /* Display: Recent News */
  $handler = $view->new_display('panel_pane', 'Recent News', 'panel_pane_2');

  /* Display: News by Month */
  $handler = $view->new_display('panel_pane', 'News by Month', 'panel_pane_3');
  $export['news'] = $view;

  return $export;
}
