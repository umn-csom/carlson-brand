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
  $strongarm->name = 'on_the_web_delicious_page';
  $strongarm->value = '';
  $export['on_the_web_delicious_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_facebook_page';
  $strongarm->value = 'https://www.facebook.com/UofMN';
  $export['on_the_web_facebook_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_flickr_page';
  $strongarm->value = '';
  $export['on_the_web_flickr_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_friendfeed_page';
  $strongarm->value = '';
  $export['on_the_web_friendfeed_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_google_page';
  $strongarm->value = '';
  $export['on_the_web_google_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_itunes_page';
  $strongarm->value = '';
  $export['on_the_web_itunes_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_linkedin_page';
  $strongarm->value = '';
  $export['on_the_web_linkedin_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_myspace_page';
  $strongarm->value = '';
  $export['on_the_web_myspace_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_pinterest_page';
  $strongarm->value = 'http://pinterest.com/umnpins/';
  $export['on_the_web_pinterest_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_rss_page';
  $strongarm->value = '';
  $export['on_the_web_rss_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_sitename';
  $strongarm->value = 0;
  $export['on_the_web_sitename'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_size';
  $strongarm->value = 'sm';
  $export['on_the_web_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_target';
  $strongarm->value = 1;
  $export['on_the_web_target'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_twitter_page';
  $strongarm->value = 'http://twitter.com/#!/UMNews';
  $export['on_the_web_twitter_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'on_the_web_youtube_page';
  $strongarm->value = 'http://www.youtube.com/user/UniversityofMinn';
  $export['on_the_web_youtube_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled';
  $strongarm->value = TRUE;
  $export['panels_everywhere_site_template_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_default';
  $strongarm->value = array(
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'entity_view' => 'entity_view',
    'fieldable_panels_pane' => 'fieldable_panels_pane',
    'menu_tree' => 'menu_tree',
    'views_panes' => 'views_panes',
    'other' => 'other',
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'custom' => 'custom',
    'block' => 'block',
  );
  $export['panels_page_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'securepages_enable';
  $strongarm->value = '1';
  $export['securepages_enable'] = $strongarm;

  return $export;
}
