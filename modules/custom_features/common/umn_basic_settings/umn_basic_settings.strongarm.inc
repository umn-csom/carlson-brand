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
  $strongarm->name = 'cache';
  $strongarm->value = 1;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '3600';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_umn_subtheme_palette';
  $strongarm->value = array(
    'page' => '#ffffff',
    'global_text' => '#3b3b3b',
    'pull_quote_bg' => '#ffffff',
    'pull_quote_text' => '#333333',
    'blockquote_bg' => '#ffffff',
    'blockquote_text' => '#333333',
    'table_bg' => '#ffffff',
    'table_text' => '#333333',
    'form_bg' => '#ffffff',
    'form_text' => '#333333',
    'accordion_header_bg' => '#ffcc33',
    'accordion_header_text' => '#990021',
    'accordion_content_bg' => '#ffffff',
    'accordion_content_text' => '#333333',
    'tab_header_bg' => '#ffcc33',
    'tab_header_text' => '#333333',
    'tab_content_bg' => '#ffffff',
    'tab_content_text' => '#333333',
    'department_header_bg' => '#ffffff',
    'department_header_text' => '#333333',
    'department_footer_bg' => '#ffffff',
    'department_footer_color' => '#333333',
    'quick_links_bg' => '#ffffff',
    'quick_links_text' => '#333333',
  );
  $export['color_umn_subtheme_palette'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_safe_threshold';
  $strongarm->value = '0';
  $export['cron_safe_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'panopoly_core' => array(
      'variable' => '8545bed2f6b2d2d71bfeb1eda8de0e3e',
      'defaultconfig' => 'b8f5440232af412909f6fc5402226015',
      'field_base' => 'fc2c2b67b8d3325135e283d9959e681a',
      'field_instance' => 'b2e6bfef823f86627ee4ccaafeb44632',
      'taxonomy' => 'd2f15459d669c4a745941066712ba7d5',
      'dependencies' => '94fee833f6cf5a6db73f4dc20a48412f',
      'panelizer_defaults' => '61afb5bbeefb971b5a16b33dce0457ca',
      'views_view' => '9a9b4cb665b4ffebb954896e7f1df636',
    ),
    'umn_vocabularies' => array(
      'taxonomy' => '4fde32a42a82e5c1e730d64cb4a0a7eb',
      'dependencies' => '527d6d95ea1328d369bc2f6a635f9386',
    ),
    'umn_field_definitions' => array(
      'field_base' => '2578fd083cbff895fe50f6bec09ae98e',
      'dependencies' => 'c10e5956ab5a51fb389af2d9958e598c',
    ),
    'media_metadata' => array(
      'defaultconfig' => 'ded8e4d8cab6f7626e6701e23ba8c9b0',
      'field_instance' => '7a59e525def6dc64b2dd643d3f1f774b',
      'dependencies' => '98997db5b31dc3b64322f70bbd5df0c4',
      'views_view' => 'bbee74c68c28091d7ba657cd436c3623',
    ),
    'panopoly_admin' => array(
      'variable' => 'bf7a988d8d3a4b59b3ae5666959f6641',
      'defaultconfig' => '758d59bfbe01e8ef13123c5be22511e9',
      'dependencies' => 'f4b3a9b9dfbc00bc087e33c6d0c7c708',
      'page_manager_handlers' => '9da9ea28dfb4667aabc6e03b1242e3c1',
      'page_manager_pages' => 'a5daa5cd4236c058cbd6e99c961c4c74',
    ),
    'panopoly_users' => array(
      'variable' => 'b1e1c8353d18794a099433fed8232d58',
      'defaultconfig' => 'deb8f81351875160425e191864e5ccfe',
      'field_base' => '35d12447dfe7ef3c00417f1947fe80e6',
      'field_instance' => 'e5e9dc5d3f8ab6f9d9185a150f387ea6',
      'dependencies' => '89f97b695e85523cf8af0bf2ba959f5c',
      'field_group' => 'a252f0ae1aafbe85adc460f6464aab70',
      'page_manager_existing_pages' => 'c593f30dbf2d5a5614d27a06e9d753ad',
      'page_manager_handlers' => 'ec4ff622a140eca987cc0100946d1c96',
      'panelizer_defaults' => '3d095ec629daed1ed9ebb093aafa493c',
    ),
    'panopoly_widgets' => array(
      'defaultconfig' => '403dc52dc6cdb9ce5a7f2392afae6e30',
      'field_base' => 'a46a3d739c58a34c07edacf713bba85a',
      'field_instance' => '69c7be2239914a7ab7322123be20d89a',
      'dependencies' => '8743b416f69e00d6361fcf03ae8b91b4',
      'views_view' => '7a245a26e287987b7c1ff0b4c668dd9d',
    ),
    'panopoly_wysiwyg' => array(
      'variable' => '9c85a92724a2fd1b5878ddbdf6ded97c',
      'defaultconfig' => 'e9719801f934a8817bb9fb267171a917',
      'filter' => '7f9e50b9033cd5cb71124f00517cc8bc',
      'wysiwyg' => '494b037b00a619ee62a167ac057c1870',
      'dependencies' => '5a57f8f2762b73d1986aaaf0b00c1f18',
      'linkit_profiles' => 'ffe7a0901035c2a56b42916404526cc9',
    ),
    'umn_basic_settings' => array(
      'variable' => '1ce00948b0af4c2041c146ef6603d2b8',
      'defaultconfig' => 'd54c37513cc9af0d03f7d676e1ca8606',
      'dependencies' => '5b51416f5617baa5670a3c4809608d9e',
      'page_manager_handlers' => '6b6bc9732af5b59eba266ea741e167bb',
    ),
    'umn_general_page_content_type' => array(
      'variable' => '519bfec7a6528b5bd4d1aef03ab64a4f',
      'defaultconfig' => '904fccd16b856da78754b470a2c5df7a',
      'field_instance' => '5c2d2de820e5a01eb2a9916140b502ff',
      'user_permission' => 'b52ccf14dcca5e008d90c2849406fcd6',
      'dependencies' => '3035871a18a6385fd1e35cae3f3256a5',
      'node' => '6d84e7b66ae0aba68964d49f606d9acc',
    ),
    'umn_landing_page_content_type' => array(
      'variable' => 'bd4337285df94dceb211c7fd61418ddd',
      'defaultconfig' => 'f81691f6bb094e6704d87deb97d04396',
      'field_instance' => '77c78d2dbdb060a9c8a40d5c9f99720f',
      'user_permission' => '94fe38e35ed7b45d43320b2f004bc2ae',
      'dependencies' => '178695693d4d0d3e9fd0b6f97096b4f3',
      'image' => '92ff1bfa7834f822cef1a8c6b5db805d',
      'node' => '04784e6e73b1463314ea59a15ba0e85f',
      'panelizer_defaults' => 'b20dd88a786d13a4ddd2872909c0a97f',
      'metatag' => '8c51e60c4fa65f0040c8279a2d3e3e63',
    ),
    'umn_wysiwyg' => array(
      'filter' => '89099ddd8dbeca93f12d2ae828b735cf',
      'wysiwyg' => '51cd34337c48587240e2d1f23b702283',
      'dependencies' => '974b0c2a6a0d5ef180895add8182e599',
    ),
    'umn_user' => array(
      'user_role' => '374cf5cd37472decf7cdf2f0106770fa',
      'user_permission' => 'b0f08a14c432a03e7b4b44fb9d824ef2',
      'dependencies' => 'a92ffc387b9f163db4b5eb1be8212709',
    ),
    'umn_responsive_menu_settings' => array(
      'variable' => '125bc96ae00df65c525a4d279fabc60b',
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'umn_import_content_type' => array(
      'variable' => '350f0535701af5c9a08e4a43826074ff',
      'field_instance' => 'db9bac1c8b046ed87f1e20036b232a95',
      'dependencies' => '556ec7ee433da055f4838855f8fe194f',
      'node' => '256f0cef2f490ee5916e51def7454ebc',
    ),
    'panopoly_theme' => array(
      'dependencies' => 'b7b70561753ee326516201c10ea69d58',
    ),
    'panopoly_images' => array(
      'dependencies' => 'dbf42a7c8bdfa119b59a6a37cda2007f',
      'defaultconfig' => 'e1b0c1e81f6c28972e62d7317227757c',
      'image' => 'cb98548d0db15b44ca175f73aa797221',
    ),
    'panopoly_magic' => array(
      'dependencies' => 'ff25fdc6d874677b62f2a5ecfc6fa5bc',
    ),
    'umn_workbench' => array(
      'dependencies' => '414a7267851c162b6aa8217dbd3b1322',
      'workbench_workflows_events' => '35ac68537c4f0e8d37d813358b1e16d7',
      'workbench_workflows_states' => '763a150b21ad955d8ea78344019cff3b',
      'workbench_workflows_workflows' => '46f2405bc2bdb23494d55607b2e79310',
    ),
    'umn_portal' => array(
      'dependencies' => '242d389f813a156ec0b8c564d5aff0c6',
      'views_view' => 'e885b74bd1a9991cdd18c669664b4a67',
    ),
    'umn_workbench_overrides' => array(
      'dependencies' => '034cc4a695d773b851eadab58c54a169',
    ),
    'umn_calendar_content_type' => array(
      'variable' => 'ae9aacd789f721bd2cf2423d4260cf51',
      'defaultconfig' => '4d700d1f73495a4ec509a3a389e0b798',
      'field_instance' => '1be6f444aca63e96e190837921312cea',
      'metatag' => 'b4888667e2e82054e6113e40dabef78c',
      'user_permission' => '8fae081e76264ae59edb69d3bde7cf6a',
      'dependencies' => '04e62bd0d0c51a8efc6c9a7e40eba5c3',
      'node' => '3884f3deef3fe9a2c99796994953d397',
    ),
    'umn_course_content_type' => array(
      'variable' => '5452ac9126111f4c87a46701d59092af',
      'defaultconfig' => '78de25782b4106c02617f8ef4f1deb2a',
      'field_instance' => '4f85007e19c19e010959aa29f53a4ccc',
      'metatag' => 'db9ef85e9f52c557b6c0ebe2b9626317',
      'user_permission' => 'd70c2f24a3338a677b0b779f84b2399b',
      'dependencies' => '6c537e5877b31844dfa5d87a62b16d15',
      'node' => '187fc1a6fab2de1afcf1dbfa452d5253',
    ),
    'umn_faculty_content_type' => array(
      'variable' => 'ec87dc5b109e05b8561105ef14c624e3',
      'defaultconfig' => '222ad48efbf130c19ddb060c83bade9a',
      'field_instance' => '6b1d4780b3c46619435ed7c3ecf051d9',
      'metatag' => '02371b29b655b555fba76b7510ec894f',
      'user_permission' => '043d121816865b28cab55dffee247472',
      'dependencies' => '329d34fbe489461cb1e8f04beea18821',
      'node' => '20b2b8d7c50633a514289f4403881203',
      'views_view' => '35d76f749c69e27603c725102cd2b338',
    ),
    'umn_news_content_type' => array(
      'variable' => 'c6fb4c29becebaf4e62d3197ab0bc3a2',
      'defaultconfig' => '7327173d29d91f905e869ac7df2cdf64',
      'field_instance' => '6243a7e8e7b76b98b6643dd842c7b443',
      'metatag' => 'c830e0d6534d37fdfcd09b395fcc2740',
      'user_permission' => '62fb4577d2c68fea4043f57b925f0fde',
      'dependencies' => '4337ab14227d51082db3dcca50147967',
      'node' => '084116cdfed9fd1fd7a48b3379e569cc',
      'views_view' => 'f5042371a4df45f074cf7898c8965fda',
    ),
    'umn_staff_content_type' => array(
      'variable' => '1ec47c8781c775338432882f4a78e26d',
      'defaultconfig' => '84405aa8007ef799361b00f3c711c427',
      'field_instance' => '80aa15ac5b301508fb09c06fa8b921ae',
      'metatag' => '1461183705162b621daeeafc6a09a811',
      'user_permission' => 'f86c4cd8ccd983a023022e298de74c53',
      'dependencies' => '329d34fbe489461cb1e8f04beea18821',
      'node' => '8c1f3bf25125edece2613246891695e9',
      'views_view' => 'ef46f100a2ed1f83dd7605266af64c6a',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'footer_left_text';
  $strongarm->value = '<p>&copy; 2014 Regents of the University of Minnesota. All rights reserved.</p><p><span class="eeoc-responsive-hide">The University of Minnesota is an</span><span class="eeoc-responsive-upcase"> equal</span> opportunity educator and employer.<span class="privacy-statement-responsive"> <a href="http://www1.umn.edu/twincities/privacy/">Privacy</a></span></p>';
  $export['footer_left_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'footer_right_text';
  $strongarm->value = '<span>Twin Cities Campus:</span>
      <ul class=\'umnhf\'>
          <li class=\'umnhf\'><a class=\'umnhf\' href=\'http://www.umn.edu/twincities/maps/index.html\'>Maps&nbsp;&amp;&nbsp;Directions</a></li>
          <li class=\'umnhf\'><a class=\'umnhf\' href=\'http://www1.umn.edu/pts/\'>Parking&nbsp;&amp;&nbsp;Transportation</a></li>
          <li class=\'umnhf\'><a class=\'umnhf\' href=\'http://www.umn.edu/twincities/contact/\'>Contact&nbsp;U&nbsp;of&nbsp;M</a></li>
          <li class=\'umnhf\'><a class=\'umnhf\' href=\'http://www1.umn.edu/twincities/privacy/\'>Privacy</a></li>
          <li class=\'umnhf\'><a class=\'umnhf\' href=\'http://www.directory.umn.edu/\'>Directories</a></li>
      </ul>
    ';
  $export['footer_right_text'] = $strongarm;

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
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '10800';
  $export['page_cache_maximum_age'] = $strongarm;

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
