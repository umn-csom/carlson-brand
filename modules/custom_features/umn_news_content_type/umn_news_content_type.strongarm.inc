<?php
/**
 * @file
 * umn_news_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function umn_news_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_enabled_news';
  $strongarm->value = 1;
  $export['date_popup_authored_enabled_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_format_news';
  $strongarm->value = 'j F Y - g:ia';
  $export['date_popup_authored_format_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_popup_authored_year_range_news';
  $strongarm->value = '3';
  $export['date_popup_authored_year_range_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__news';
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
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '7',
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
            'weight' => '7',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_news';
  $strongarm->value = array();
  $export['menu_options_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_news';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_news';
  $strongarm->value = array(
    0 => 'revision',
  );
  $export['node_options_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_news';
  $strongarm->value = '1';
  $export['node_preview_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_news';
  $strongarm->value = 0;
  $export['node_submitted_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_news';
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
  $export['panelizer_defaults_node_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:news_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:19:"panelizer_node:news";s:23:"allowed_layout_settings";a:40:{s:8:"flexible";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:6:"onecol";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:6:"twocol";b:1;s:17:"threecol_25_50_25";b:1;s:17:"threecol_33_34_33";b:1;s:6:"harris";b:1;s:4:"pond";b:1;s:6:"bryant";b:1;s:9:"sanderson";b:1;s:14:"taylor_flipped";b:1;s:6:"phelan";b:1;s:17:"sanderson_flipped";b:1;s:8:"mccoppin";b:1;s:15:"moscone_flipped";b:1;s:6:"boxton";b:1;s:4:"burr";b:1;s:12:"burr_flipped";b:1;s:5:"geary";b:1;s:7:"moscone";b:1;s:5:"selby";b:1;s:22:"bryant_flipped_flipped";b:1;s:5:"brown";b:1;s:6:"taylor";b:1;s:12:"sutro_double";b:1;s:15:"hewston_flipped";b:1;s:6:"whelan";b:1;s:7:"hewston";b:1;s:12:"webb_flipped";b:1;s:13:"selby_flipped";b:1;s:7:"brenham";b:1;s:5:"sutro";b:1;s:8:"bartlett";b:1;s:4:"webb";b:1;s:15:"brenham_flipped";b:1;s:5:"rolph";b:1;s:16:"bartlett_flipped";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:news_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:news_allowed_layouts_default';
  $strongarm->value = 1;
  $export['panelizer_node:news_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:news_allowed_types';
  $strongarm->value = array(
    'page_actions-page_actions' => 'page_actions-page_actions',
    'page_tabs-page_tabs' => 'page_tabs-page_tabs',
    'page_site_name-page_site_name' => 'page_site_name-page_site_name',
    'page_slogan-page_slogan' => 'page_slogan-page_slogan',
    'page_messages-page_messages' => 'page_messages-page_messages',
    'page_primary_links-page_primary_links' => 'page_primary_links-page_primary_links',
    'page_title-page_title' => 'page_title-page_title',
    'page_breadcrumb-page_breadcrumb' => 'page_breadcrumb-page_breadcrumb',
    'page_secondary_links-page_secondary_links' => 'page_secondary_links-page_secondary_links',
    'page_feed_icons-page_feed_icons' => 'page_feed_icons-page_feed_icons',
    'page_logo-page_logo' => 'page_logo-page_logo',
    'page_help-page_help' => 'page_help-page_help',
    'vocabulary_terms-vocabulary_terms' => 'vocabulary_terms-vocabulary_terms',
    'form-form' => 'form-form',
    'term_description-term_description' => 'term_description-term_description',
    'term_list-term_list' => 'term_list-term_list',
    'search_result-search_result' => 'search_result-search_result',
    'search_form-search_form' => 'search_form-search_form',
    'node_form_path-node_form_path' => 'node_form_path-node_form_path',
    'node_form_menu-node_form_menu' => 'node_form_menu-node_form_menu',
    'node_form_publishing-node_form_publishing' => 'node_form_publishing-node_form_publishing',
    'node_form_title-node_form_title' => 'node_form_title-node_form_title',
    'node_form_buttons-node_form_buttons' => 'node_form_buttons-node_form_buttons',
    'node_form_language-node_form_language' => 'node_form_language-node_form_language',
    'node_form_author-node_form_author' => 'node_form_author-node_form_author',
    'node_form_log-node_form_log' => 'node_form_log-node_form_log',
    'user_picture-user_picture' => 'user_picture-user_picture',
    'user_signature-user_signature' => 'user_signature-user_signature',
    'user_profile-user_profile' => 'user_profile-user_profile',
    'node-node' => 'node-node',
    'node_links-node_links' => 'node_links-node_links',
    'node_content-node_content' => 'node_content-node_content',
    'node_created-node_created' => 'node_created-node_created',
    'node_attachments-node_attachments' => 'node_attachments-node_attachments',
    'node_terms-node_terms' => 'node_terms-node_terms',
    'node_type_desc-node_type_desc' => 'node_type_desc-node_type_desc',
    'node_updated-node_updated' => 'node_updated-node_updated',
    'node_title-node_title' => 'node_title-node_title',
    'node_author-node_author' => 'node_author-node_author',
    'node_body-node_body' => 'node_body-node_body',
    'panels_layouts-panels_layouts' => 'panels_layouts-panels_layouts',
    'theme-theme' => 'theme-theme',
    'taxonomy-taxonomy' => 'taxonomy-taxonomy',
    'general_widgets-general_widgets' => 'general_widgets-general_widgets',
    'users-users' => 'users-users',
    'menus-menus' => 'menus-menus',
    'reusable_widgets-reusable_widgets' => 'reusable_widgets-reusable_widgets',
    'landing_pages-landing_pages' => 'landing_pages-landing_pages',
    'general_panes-general_panes' => 'general_panes-general_panes',
    'content-content' => 'content-content',
    'overridden_page_templates-overridden_page_templates' => 'overridden_page_templates-overridden_page_templates',
    'search_box-search_box' => 'search_box-search_box',
    'facet-facet' => 'facet-facet',
    'search_current-search_current' => 'search_current-search_current',
    'pm_existing_pages-pm_existing_pages' => 'pm_existing_pages-pm_existing_pages',
    'views_view-views_view' => 'views_view-views_view',
    'views_feed-views_feed' => 'views_feed-views_feed',
    'views_row-views_row' => 'views_row-views_row',
    'views_pager-views_pager' => 'views_pager-views_pager',
    'views_empty-views_empty' => 'views_empty-views_empty',
    'views_exposed-views_exposed' => 'views_exposed-views_exposed',
    'views_footer-views_footer' => 'views_footer-views_footer',
    'views_header-views_header' => 'views_header-views_header',
    'views_attachments-views_attachments' => 'views_attachments-views_attachments',
    'panelizer_form_default-panelizer_form_default' => 'panelizer_form_default-panelizer_form_default',
    'entity_form_field-fieldable_panels_pane:field_quick_links_links' => 'entity_form_field-fieldable_panels_pane:field_quick_links_links',
    'entity_form_field-fieldable_panels_pane:field_basic_file_file' => 'entity_form_field-fieldable_panels_pane:field_basic_file_file',
    'entity_form_field-fieldable_panels_pane:field_basic_file_text' => 'entity_form_field-fieldable_panels_pane:field_basic_file_text',
    'entity_form_field-fieldable_panels_pane:field_basic_image_caption' => 'entity_form_field-fieldable_panels_pane:field_basic_image_caption',
    'entity_form_field-fieldable_panels_pane:field_basic_image_image' => 'entity_form_field-fieldable_panels_pane:field_basic_image_image',
    'entity_form_field-fieldable_panels_pane:field_basic_text_text' => 'entity_form_field-fieldable_panels_pane:field_basic_text_text',
    'entity_form_field-fieldable_panels_pane:field_map_address' => 'entity_form_field-fieldable_panels_pane:field_map_address',
    'entity_form_field-fieldable_panels_pane:field_map_information' => 'entity_form_field-fieldable_panels_pane:field_map_information',
    'entity_form_field-fieldable_panels_pane:field_basic_table_table' => 'entity_form_field-fieldable_panels_pane:field_basic_table_table',
    'entity_form_field-fieldable_panels_pane:field_video_file' => 'entity_form_field-fieldable_panels_pane:field_video_file',
    'entity_form_field-fieldable_panels_pane:field_basic_spotlight_items' => 'entity_form_field-fieldable_panels_pane:field_basic_spotlight_items',
    'entity_form_field-node:body' => 'entity_form_field-node:body',
    'entity_form_field-node:field_featured_categories' => 'entity_form_field-node:field_featured_categories',
    'entity_form_field-node:field_featured_image' => 'entity_form_field-node:field_featured_image',
    'entity_form_field-node:field_featured_status' => 'entity_form_field-node:field_featured_status',
    'entity_form_field-node:field_body' => 'entity_form_field-node:field_body',
    'entity_form_field-node:field_catalog' => 'entity_form_field-node:field_catalog',
    'entity_form_field-node:field_campus_code' => 'entity_form_field-node:field_campus_code',
    'entity_form_field-node:field_term_code' => 'entity_form_field-node:field_term_code',
    'entity_form_field-node:field_course_subject' => 'entity_form_field-node:field_course_subject',
    'entity_form_field-node:field_course_subject_description' => 'entity_form_field-node:field_course_subject_description',
    'entity_form_field-node:field_course_description' => 'entity_form_field-node:field_course_description',
    'entity_form_field-node:field_uploaded_files' => 'entity_form_field-node:field_uploaded_files',
    'entity_form_field-node:field_course_title' => 'entity_form_field-node:field_course_title',
    'entity_form_field-node:field_path_slug' => 'entity_form_field-node:field_path_slug',
    'entity_form_field-node:field_block_quote' => 'entity_form_field-node:field_block_quote',
    'entity_form_field-node:field_portrait_picture' => 'entity_form_field-node:field_portrait_picture',
    'entity_form_field-node:field_landscape_picture' => 'entity_form_field-node:field_landscape_picture',
    'entity_form_field-node:field_person_givenname' => 'entity_form_field-node:field_person_givenname',
    'entity_form_field-node:field_person_familyname' => 'entity_form_field-node:field_person_familyname',
    'entity_form_field-node:field_email' => 'entity_form_field-node:field_email',
    'entity_form_field-node:field_person_address' => 'entity_form_field-node:field_person_address',
    'entity_form_field-node:field_lede' => 'entity_form_field-node:field_lede',
    'entity_form_field-node:field_related_content' => 'entity_form_field-node:field_related_content',
    'entity_form_field-node:field_additional_content' => 'entity_form_field-node:field_additional_content',
    'entity_form_field-node:field_phone' => 'entity_form_field-node:field_phone',
    'entity_form_field-node:field_publication_date' => 'entity_form_field-node:field_publication_date',
    'entity_form_field-node:field_image' => 'entity_form_field-node:field_image',
    'entity_form_field-file:field_file_image_alt_text' => 'entity_form_field-file:field_file_image_alt_text',
    'entity_form_field-file:field_file_image_title_text' => 'entity_form_field-file:field_file_image_title_text',
    'entity_form_field-file:field_editorial_section' => 'entity_form_field-file:field_editorial_section',
    'entity_form_field-taxonomy_term:field_featured_image' => 'entity_form_field-taxonomy_term:field_featured_image',
    'entity_form_field-user:field_user_about' => 'entity_form_field-user:field_user_about',
    'entity_form_field-user:field_user_picture' => 'entity_form_field-user:field_user_picture',
    'block-apps-manage_apps__panopoly' => 'block-apps-manage_apps__panopoly',
    'block-facetapi-1Cpx6naJU4Y3YvKVc0vcLK7Yo0ahaN0l' => 'block-facetapi-1Cpx6naJU4Y3YvKVc0vcLK7Yo0ahaN0l',
    'block-facetapi-fA1pg0Ubd1zgx1mvzHkFUGaNoMb4Gs0s' => 'block-facetapi-fA1pg0Ubd1zgx1mvzHkFUGaNoMb4Gs0s',
    'block-menu-devel' => 'block-menu-devel',
    'block-node-syndicate' => 'block-node-syndicate',
    'block-node-recent' => 'block-node-recent',
    'block-search-form' => 'block-search-form',
    'block-shortcut-shortcuts' => 'block-shortcut-shortcuts',
    'block-system-powered-by' => 'block-system-powered-by',
    'block-system-help' => 'block-system-help',
    'block-system-navigation' => 'block-system-navigation',
    'block-system-management' => 'block-system-management',
    'block-system-user-menu' => 'block-system-user-menu',
    'block-system-main-menu' => 'block-system-main-menu',
    'block-user-login' => 'block-user-login',
    'block-user-new' => 'block-user-new',
    'block-user-online' => 'block-user-online',
    'block-workbench-block' => 'block-workbench-block',
    'block-devel-execute_php' => 'block-devel-execute_php',
    'block-devel-switch_user' => 'block-devel-switch_user',
    'custom-custom' => 'custom-custom',
    'token-node:source' => 'token-node:source',
    'token-node:log' => 'token-node:log',
    'token-node:content-type' => 'token-node:content-type',
    'token-node:menu-link' => 'token-node:menu-link',
    'token-node:nid' => 'token-node:nid',
    'token-node:vid' => 'token-node:vid',
    'token-node:title' => 'token-node:title',
    'token-node:body' => 'token-node:body',
    'token-node:summary' => 'token-node:summary',
    'token-node:language' => 'token-node:language',
    'token-node:url' => 'token-node:url',
    'token-node:edit-url' => 'token-node:edit-url',
    'token-node:created' => 'token-node:created',
    'token-node:changed' => 'token-node:changed',
    'token-node:author' => 'token-node:author',
    'token-node:uuid' => 'token-node:uuid',
    'token-node:vuuid' => 'token-node:vuuid',
    'token-node:original' => 'token-node:original',
    'token-node:field_lede' => 'token-node:field_lede',
    'token-node:field_publication_date' => 'token-node:field_publication_date',
    'token-node:field_related_content' => 'token-node:field_related_content',
    'token-node:field_additional_content' => 'token-node:field_additional_content',
    'token-node:field_uploaded_files' => 'token-node:field_uploaded_files',
    'token-node:field_path_slug' => 'token-node:field_path_slug',
    'token-node:field_body' => 'token-node:field_body',
    'token-node:field_image' => 'token-node:field_image',
    'token-node:field_block_quote' => 'token-node:field_block_quote',
    'token-node:field_featured_image' => 'token-node:field_featured_image',
    'token-node:field_featured_categories' => 'token-node:field_featured_categories',
    'token-node:field_featured_status' => 'token-node:field_featured_status',
    'token-node:field_portrait_picture' => 'token-node:field_portrait_picture',
    'token-node:field_landscape_picture' => 'token-node:field_landscape_picture',
    'token-node:field_person_givenname' => 'token-node:field_person_givenname',
    'token-node:field_person_familyname' => 'token-node:field_person_familyname',
    'token-node:field_email' => 'token-node:field_email',
    'token-node:field_person_address' => 'token-node:field_person_address',
    'token-node:field_catalog' => 'token-node:field_catalog',
    'token-node:field_campus_code' => 'token-node:field_campus_code',
    'token-node:field_term_code' => 'token-node:field_term_code',
    'token-node:field_course_subject' => 'token-node:field_course_subject',
    'token-node:field_course_subject_description' => 'token-node:field_course_subject_description',
    'token-node:field_course_description' => 'token-node:field_course_description',
    'token-node:field_course_title' => 'token-node:field_course_title',
    'token-node:field_phone' => 'token-node:field_phone',
    'token-content-type:name' => 'token-content-type:name',
    'token-content-type:machine-name' => 'token-content-type:machine-name',
    'token-content-type:description' => 'token-content-type:description',
    'token-content-type:node-count' => 'token-content-type:node-count',
    'token-content-type:edit-url' => 'token-content-type:edit-url',
    'token-term:edit-url' => 'token-term:edit-url',
    'token-term:parents' => 'token-term:parents',
    'token-term:root' => 'token-term:root',
    'token-term:tid' => 'token-term:tid',
    'token-term:name' => 'token-term:name',
    'token-term:description' => 'token-term:description',
    'token-term:node-count' => 'token-term:node-count',
    'token-term:url' => 'token-term:url',
    'token-term:vocabulary' => 'token-term:vocabulary',
    'token-term:parent' => 'token-term:parent',
    'token-term:uuid' => 'token-term:uuid',
    'token-term:original' => 'token-term:original',
    'token-term:field_featured_image' => 'token-term:field_featured_image',
    'token-vocabulary:machine-name' => 'token-vocabulary:machine-name',
    'token-vocabulary:edit-url' => 'token-vocabulary:edit-url',
    'token-vocabulary:vid' => 'token-vocabulary:vid',
    'token-vocabulary:name' => 'token-vocabulary:name',
    'token-vocabulary:description' => 'token-vocabulary:description',
    'token-vocabulary:node-count' => 'token-vocabulary:node-count',
    'token-vocabulary:term-count' => 'token-vocabulary:term-count',
    'token-vocabulary:original' => 'token-vocabulary:original',
    'token-file:basename' => 'token-file:basename',
    'token-file:extension' => 'token-file:extension',
    'token-file:size-raw' => 'token-file:size-raw',
    'token-file:type' => 'token-file:type',
    'token-file:download-url' => 'token-file:download-url',
    'token-file:fid' => 'token-file:fid',
    'token-file:name' => 'token-file:name',
    'token-file:path' => 'token-file:path',
    'token-file:mime' => 'token-file:mime',
    'token-file:size' => 'token-file:size',
    'token-file:url' => 'token-file:url',
    'token-file:timestamp' => 'token-file:timestamp',
    'token-file:owner' => 'token-file:owner',
    'token-file:uuid' => 'token-file:uuid',
    'token-file:original' => 'token-file:original',
    'token-file:field_file_image_alt_text' => 'token-file:field_file_image_alt_text',
    'token-file:field_file_image_title_text' => 'token-file:field_file_image_title_text',
    'token-file:field_editorial_section' => 'token-file:field_editorial_section',
    'token-user:cancel-url' => 'token-user:cancel-url',
    'token-user:one-time-login-url' => 'token-user:one-time-login-url',
    'token-user:roles' => 'token-user:roles',
    'token-user:uid' => 'token-user:uid',
    'token-user:name' => 'token-user:name',
    'token-user:mail' => 'token-user:mail',
    'token-user:url' => 'token-user:url',
    'token-user:edit-url' => 'token-user:edit-url',
    'token-user:last-login' => 'token-user:last-login',
    'token-user:created' => 'token-user:created',
    'token-user:uuid' => 'token-user:uuid',
    'token-user:original' => 'token-user:original',
    'token-user:field_user_about' => 'token-user:field_user_about',
    'token-user:field_user_picture' => 'token-user:field_user_picture',
    'token-current-user:ip-address' => 'token-current-user:ip-address',
    'token-menu-link:mlid' => 'token-menu-link:mlid',
    'token-menu-link:title' => 'token-menu-link:title',
    'token-menu-link:url' => 'token-menu-link:url',
    'token-menu-link:parent' => 'token-menu-link:parent',
    'token-menu-link:parents' => 'token-menu-link:parents',
    'token-menu-link:root' => 'token-menu-link:root',
    'token-menu-link:menu' => 'token-menu-link:menu',
    'token-menu-link:edit-url' => 'token-menu-link:edit-url',
    'token-current-page:title' => 'token-current-page:title',
    'token-current-page:url' => 'token-current-page:url',
    'token-current-page:page-number' => 'token-current-page:page-number',
    'token-current-page:query' => 'token-current-page:query',
    'token-url:path' => 'token-url:path',
    'token-url:relative' => 'token-url:relative',
    'token-url:absolute' => 'token-url:absolute',
    'token-url:brief' => 'token-url:brief',
    'token-url:unaliased' => 'token-url:unaliased',
    'token-url:args' => 'token-url:args',
    'token-array:first' => 'token-array:first',
    'token-array:last' => 'token-array:last',
    'token-array:count' => 'token-array:count',
    'token-array:reversed' => 'token-array:reversed',
    'token-array:keys' => 'token-array:keys',
    'token-array:join' => 'token-array:join',
    'token-array:value' => 'token-array:value',
    'token-array:join-path' => 'token-array:join-path',
    'token-random:number' => 'token-random:number',
    'token-random:hash' => 'token-random:hash',
    'token-date-field-value:date' => 'token-date-field-value:date',
    'token-date-field-value:to-date' => 'token-date-field-value:to-date',
    'token-facetapi_results:keys' => 'token-facetapi_results:keys',
    'token-facetapi_results:page-number' => 'token-facetapi_results:page-number',
    'token-facetapi_results:page-limit' => 'token-facetapi_results:page-limit',
    'token-facetapi_results:page-total' => 'token-facetapi_results:page-total',
    'token-facetapi_results:offset' => 'token-facetapi_results:offset',
    'token-facetapi_results:start-count' => 'token-facetapi_results:start-count',
    'token-facetapi_results:end-count' => 'token-facetapi_results:end-count',
    'token-facetapi_results:result-count' => 'token-facetapi_results:result-count',
    'token-facetapi_active:active-value' => 'token-facetapi_active:active-value',
    'token-facetapi_active:active-value-raw' => 'token-facetapi_active:active-value-raw',
    'token-facetapi_active:active-pos' => 'token-facetapi_active:active-pos',
    'token-facetapi_active:facet-label' => 'token-facetapi_active:facet-label',
    'token-facetapi_active:facet-name' => 'token-facetapi_active:facet-name',
    'token-facetapi_facet:facet-label' => 'token-facetapi_facet:facet-label',
    'token-facetapi_facet:facet-name' => 'token-facetapi_facet:facet-name',
    'token-file-type:name' => 'token-file-type:name',
    'token-file-type:machine-name' => 'token-file-type:machine-name',
    'token-file-type:count' => 'token-file-type:count',
    'token-file-type:edit-url' => 'token-file-type:edit-url',
    'token-menu:name' => 'token-menu:name',
    'token-menu:machine-name' => 'token-menu:machine-name',
    'token-menu:description' => 'token-menu:description',
    'token-menu:menu-link-count' => 'token-menu:menu-link-count',
    'token-menu:edit-url' => 'token-menu:edit-url',
    'token-site:name' => 'token-site:name',
    'token-site:slogan' => 'token-site:slogan',
    'token-site:mail' => 'token-site:mail',
    'token-site:url' => 'token-site:url',
    'token-site:url-brief' => 'token-site:url-brief',
    'token-site:login-url' => 'token-site:login-url',
    'token-date:short' => 'token-date:short',
    'token-date:medium' => 'token-date:medium',
    'token-date:long' => 'token-date:long',
    'token-date:custom' => 'token-date:custom',
    'token-date:since' => 'token-date:since',
    'token-date:raw' => 'token-date:raw',
    'token-date:panopoly_time' => 'token-date:panopoly_time',
    'token-date:panopoly_day' => 'token-date:panopoly_day',
    'token-view:name' => 'token-view:name',
    'token-view:description' => 'token-view:description',
    'token-view:machine-name' => 'token-view:machine-name',
    'token-view:title' => 'token-view:title',
    'token-view:url' => 'token-view:url',
    'entity_field_extra-fieldable_panels_pane:title' => 'entity_field_extra-fieldable_panels_pane:title',
    'entity_field_extra-file:file' => 'entity_field_extra-file:file',
    'entity_field_extra-taxonomy_term:description' => 'entity_field_extra-taxonomy_term:description',
    'entity_field_extra-user:summary' => 'entity_field_extra-user:summary',
    'entity_field-fieldable_panels_pane:field_quick_links_links' => 'entity_field-fieldable_panels_pane:field_quick_links_links',
    'entity_field-fieldable_panels_pane:field_basic_file_file' => 'entity_field-fieldable_panels_pane:field_basic_file_file',
    'entity_field-fieldable_panels_pane:field_basic_file_text' => 'entity_field-fieldable_panels_pane:field_basic_file_text',
    'entity_field-fieldable_panels_pane:field_basic_image_caption' => 'entity_field-fieldable_panels_pane:field_basic_image_caption',
    'entity_field-fieldable_panels_pane:field_basic_image_image' => 'entity_field-fieldable_panels_pane:field_basic_image_image',
    'entity_field-fieldable_panels_pane:field_basic_text_text' => 'entity_field-fieldable_panels_pane:field_basic_text_text',
    'entity_field-fieldable_panels_pane:field_map_address' => 'entity_field-fieldable_panels_pane:field_map_address',
    'entity_field-fieldable_panels_pane:field_map_information' => 'entity_field-fieldable_panels_pane:field_map_information',
    'entity_field-fieldable_panels_pane:field_basic_table_table' => 'entity_field-fieldable_panels_pane:field_basic_table_table',
    'entity_field-fieldable_panels_pane:field_video_file' => 'entity_field-fieldable_panels_pane:field_video_file',
    'entity_field-fieldable_panels_pane:field_basic_spotlight_items' => 'entity_field-fieldable_panels_pane:field_basic_spotlight_items',
    'entity_field-node:body' => 'entity_field-node:body',
    'entity_field-node:field_featured_categories' => 'entity_field-node:field_featured_categories',
    'entity_field-node:field_featured_image' => 'entity_field-node:field_featured_image',
    'entity_field-node:field_featured_status' => 'entity_field-node:field_featured_status',
    'entity_field-node:field_body' => 'entity_field-node:field_body',
    'entity_field-node:field_catalog' => 'entity_field-node:field_catalog',
    'entity_field-node:field_campus_code' => 'entity_field-node:field_campus_code',
    'entity_field-node:field_term_code' => 'entity_field-node:field_term_code',
    'entity_field-node:field_course_subject' => 'entity_field-node:field_course_subject',
    'entity_field-node:field_course_subject_description' => 'entity_field-node:field_course_subject_description',
    'entity_field-node:field_course_description' => 'entity_field-node:field_course_description',
    'entity_field-node:field_uploaded_files' => 'entity_field-node:field_uploaded_files',
    'entity_field-node:field_course_title' => 'entity_field-node:field_course_title',
    'entity_field-node:field_path_slug' => 'entity_field-node:field_path_slug',
    'entity_field-node:field_block_quote' => 'entity_field-node:field_block_quote',
    'entity_field-node:field_portrait_picture' => 'entity_field-node:field_portrait_picture',
    'entity_field-node:field_landscape_picture' => 'entity_field-node:field_landscape_picture',
    'entity_field-node:field_person_givenname' => 'entity_field-node:field_person_givenname',
    'entity_field-node:field_person_familyname' => 'entity_field-node:field_person_familyname',
    'entity_field-node:field_email' => 'entity_field-node:field_email',
    'entity_field-node:field_person_address' => 'entity_field-node:field_person_address',
    'entity_field-node:field_lede' => 'entity_field-node:field_lede',
    'entity_field-node:field_related_content' => 'entity_field-node:field_related_content',
    'entity_field-node:field_additional_content' => 'entity_field-node:field_additional_content',
    'entity_field-node:field_phone' => 'entity_field-node:field_phone',
    'entity_field-node:field_publication_date' => 'entity_field-node:field_publication_date',
    'entity_field-node:field_image' => 'entity_field-node:field_image',
    'entity_field-file:field_file_image_alt_text' => 'entity_field-file:field_file_image_alt_text',
    'entity_field-file:field_file_image_title_text' => 'entity_field-file:field_file_image_title_text',
    'entity_field-file:field_editorial_section' => 'entity_field-file:field_editorial_section',
    'entity_field-taxonomy_term:field_featured_image' => 'entity_field-taxonomy_term:field_featured_image',
    'entity_field-user:field_user_about' => 'entity_field-user:field_user_about',
    'entity_field-user:field_user_picture' => 'entity_field-user:field_user_picture',
    'entity_view-fieldable_panels_pane' => 'entity_view-fieldable_panels_pane',
    'entity_view-node' => 'entity_view-node',
    'entity_view-search_api_server' => 'entity_view-search_api_server',
    'entity_view-search_api_index' => 'entity_view-search_api_index',
    'entity_view-file' => 'entity_view-file',
    'entity_view-taxonomy_term' => 'entity_view-taxonomy_term',
    'entity_view-user' => 'entity_view-user',
    'fieldable_panels_pane-fieldable_panels_pane' => 'fieldable_panels_pane-fieldable_panels_pane',
    'fieldable_panels_pane-quick_links' => 'fieldable_panels_pane-quick_links',
    'fieldable_panels_pane-basic_file' => 'fieldable_panels_pane-basic_file',
    'fieldable_panels_pane-image' => 'fieldable_panels_pane-image',
    'fieldable_panels_pane-text' => 'fieldable_panels_pane-text',
    'fieldable_panels_pane-map' => 'fieldable_panels_pane-map',
    'fieldable_panels_pane-table' => 'fieldable_panels_pane-table',
    'fieldable_panels_pane-video' => 'fieldable_panels_pane-video',
    'fieldable_panels_pane-spotlight' => 'fieldable_panels_pane-spotlight',
    'menu_tree-_active' => 'menu_tree-_active',
    'menu_tree-devel' => 'menu_tree-devel',
    'menu_tree-main-menu' => 'menu_tree-main-menu',
    'menu_tree-management' => 'menu_tree-management',
    'menu_tree-navigation' => 'menu_tree-navigation',
    'menu_tree-user-menu' => 'menu_tree-user-menu',
    'views_panes-site_manager_test-panel_pane_1' => 'views_panes-site_manager_test-panel_pane_1',
    'views_panes-panopoly_database_search-search_database_results' => 'views_panes-panopoly_database_search-search_database_results',
    'views_panes-panopoly_search-search_solr_results' => 'views_panes-panopoly_search-search_solr_results',
    'views_panes-panopoly_taxonomy-taxonomy_content' => 'views_panes-panopoly_taxonomy-taxonomy_content',
    'views_panes-panopoly_widgets_general_content-list_of_content' => 'views_panes-panopoly_widgets_general_content-list_of_content',
    'views_panes-panopoly_widgets_general_content-piece_of_content' => 'views_panes-panopoly_widgets_general_content-piece_of_content',
    'state_flow_entity_form-node' => 'state_flow_entity_form-node',
  );
  $export['panelizer_node:news_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:news_allowed_types_default';
  $strongarm->value = 1;
  $export['panelizer_node:news_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:news_default';
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
  $export['panelizer_node:news_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_pattern';
  $strongarm->value = 'news/[node:field_path_slug]';
  $export['pathauto_node_news_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_news';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_news';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_news';
  $strongarm->value = 0;
  $export['scheduler_publish_required_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_news';
  $strongarm->value = 1;
  $export['scheduler_publish_revision_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_news';
  $strongarm->value = 1;
  $export['scheduler_publish_touch_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_news';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_news';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_news';
  $strongarm->value = 1;
  $export['scheduler_unpublish_revision_news'] = $strongarm;

  return $export;
}
