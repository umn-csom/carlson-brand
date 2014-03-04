<?php
/**
 * @file
 * umn_basic_settings.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function umn_basic_settings_defaultconfig_features() {
  return array(
    'umn_basic_settings' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function umn_basic_settings_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

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
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'panopoly_core' => array(
      'variable' => '8545bed2f6b2d2d71bfeb1eda8de0e3e',
      'defaultconfig' => 'b8f5440232af412909f6fc5402226015',
      'field_base' => 'fc2c2b67b8d3325135e283d9959e681a',
      'field_instance' => 'b2e6bfef823f86627ee4ccaafeb44632',
      'taxonomy' => 'd2f15459d669c4a745941066712ba7d5',
      'dependencies' => '94fee833f6cf5a6db73f4dc20a48412f',
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
      'views_view' => '583b72282701692925e4408e96fafc0a',
    ),
    'panopoly_admin' => array(
      'variable' => 'bf7a988d8d3a4b59b3ae5666959f6641',
      'defaultconfig' => '758d59bfbe01e8ef13123c5be22511e9',
      'dependencies' => 'f4b3a9b9dfbc00bc087e33c6d0c7c708',
      'page_manager_handlers' => '6cc88943c315bc81a9a5ee7ac547d23d',
      'page_manager_pages' => '4dc5fd794ab7b80b368441f71d82de3c',
    ),
    'panopoly_users' => array(
      'variable' => 'b1e1c8353d18794a099433fed8232d58',
      'defaultconfig' => 'deb8f81351875160425e191864e5ccfe',
      'field_base' => '35d12447dfe7ef3c00417f1947fe80e6',
      'field_instance' => '5004f30eaaeb5b2ce9c7fad507f0abad',
      'dependencies' => '89f97b695e85523cf8af0bf2ba959f5c',
    ),
    'panopoly_widgets' => array(
      'defaultconfig' => '403dc52dc6cdb9ce5a7f2392afae6e30',
      'field_base' => 'a46a3d739c58a34c07edacf713bba85a',
      'field_instance' => 'aec9b7c5c6aa9968a3f9f777cb168d3e',
      'dependencies' => '8743b416f69e00d6361fcf03ae8b91b4',
    ),
    'panopoly_wysiwyg' => array(
      'variable' => 'a5e8771db66cc93300613502a3cb8f8f',
      'defaultconfig' => 'e9719801f934a8817bb9fb267171a917',
      'filter' => '7f9e50b9033cd5cb71124f00517cc8bc',
      'wysiwyg' => '494b037b00a619ee62a167ac057c1870',
      'dependencies' => '4b9b5e82ab3888bd3d4c67a2e164da9c',
    ),
    'umn_basic_settings' => array(
      'variable' => 'c3e25940c5e50a9cbca56ee08260f518',
      'defaultconfig' => 'd54c37513cc9af0d03f7d676e1ca8606',
      'dependencies' => '5b51416f5617baa5670a3c4809608d9e',
      'page_manager_handlers' => '6b6bc9732af5b59eba266ea741e167bb',
    ),
    'umn_general_page_content_type' => array(
      'variable' => '519bfec7a6528b5bd4d1aef03ab64a4f',
      'defaultconfig' => 'c3bb0825f36cdf175176a01109cba603',
      'field_instance' => '5c2d2de820e5a01eb2a9916140b502ff',
      'user_permission' => '165bcf914429dbd42084329c7d957763',
      'dependencies' => '3035871a18a6385fd1e35cae3f3256a5',
    ),
    'umn_landing_page_content_type' => array(
      'variable' => 'bd4337285df94dceb211c7fd61418ddd',
      'defaultconfig' => '3470aa33af9d0ceb714434ded1611096',
      'field_instance' => '8b11a0569ce502fa3a0b9a070756c84d',
      'user_permission' => '94fe38e35ed7b45d43320b2f004bc2ae',
      'dependencies' => '178695693d4d0d3e9fd0b6f97096b4f3',
      'image' => '92ff1bfa7834f822cef1a8c6b5db805d',
      'node' => '04784e6e73b1463314ea59a15ba0e85f',
      'panelizer_defaults' => 'b20dd88a786d13a4ddd2872909c0a97f',
    ),
    'umn_wysiwyg' => array(
      'filter' => '8e60a5e6080149ce38ffbe4bf4ff7211',
      'wysiwyg' => '7c27ae20084ab84ddd0f25ac39cad52b',
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
    ),
    'panopoly_theme' => array(
      'dependencies' => 'b7b70561753ee326516201c10ea69d58',
    ),
    'panopoly_images' => array(
      'dependencies' => '3cc6ba4db9838a615021220e966b53c6',
    ),
    'panopoly_magic' => array(
      'dependencies' => 'ff25fdc6d874677b62f2a5ecfc6fa5bc',
    ),
    'umn_workbench' => array(
      'dependencies' => '414a7267851c162b6aa8217dbd3b1322',
      'workbench_workflows_events' => 'f2f3ae61f9c3fd82236ef6f00e88278f',
      'workbench_workflows_states' => 'e85ffbdb1ff5d5a9bbe772af62ce0893',
      'workbench_workflows_workflows' => 'dd43469727674536cf4a893415a98082',
    ),
    'umn_portal' => array(
      'dependencies' => '242d389f813a156ec0b8c564d5aff0c6',
    ),
    'umn_workbench_overrides' => array(
      'dependencies' => '034cc4a695d773b851eadab58c54a169',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = 1;
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '10800';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_mailattr';
  $strongarm->value = 'urn:oid:1.3.6.1.4.1.5923.1.1.1.6';
  $export['simplesamlphp_auth_mailattr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_unique_id';
  $strongarm->value = 'urn:oid:0.9.2342.19200300.100.1.1';
  $export['simplesamlphp_auth_unique_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplesamlphp_auth_user_name';
  $strongarm->value = 'urn:oid:0.9.2342.19200300.100.1.1';
  $export['simplesamlphp_auth_user_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'umn_subtheme';
  $export['theme_default'] = $strongarm;

  return $export;
}
