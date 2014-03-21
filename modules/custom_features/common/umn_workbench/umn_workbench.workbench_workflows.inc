<?php
/**
 * @file
 * umn_workbench.workbench_workflows.inc
 */

/**
 * Implements hook_default_workbench_workflows_events().
 */
function umn_workbench_default_workbench_workflows_events() {
  $export = array();

  $event = new stdClass();
  $event->disabled = FALSE; /* Edit this to true to make a default event disabled initially */
  $event->api_version = 1;
  $event->name = 'draft';
  $event->editor_title = '';
  $event->admin_title = 'Draft';
  $event->admin_description = '';
  $event->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
  $event->contexts = array();
  $event->relationships = array();
  $event->access = array(
    'logic' => 'and',
    'plugins' => array(),
  );
  $event->weight = 0;
  $event->target_state = 'draft';
  $event->origin_states = array(
    'draft' => 'draft',
    'needs_review' => 'needs_review',
    'published' => 'published',
  );
  $export['draft'] = $event;

  $event = new stdClass();
  $event->disabled = FALSE; /* Edit this to true to make a default event disabled initially */
  $event->api_version = 1;
  $event->name = 'needs_review';
  $event->editor_title = '';
  $event->admin_title = 'Needs Review';
  $event->admin_description = '';
  $event->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
  $event->contexts = array();
  $event->relationships = array();
  $event->access = array(
    'logic' => 'and',
  );
  $event->weight = 0;
  $event->target_state = 'needs_review';
  $event->origin_states = array(
    'draft' => 'draft',
    'needs_review' => 'needs_review',
    'published' => 'published',
  );
  $export['needs_review'] = $event;

  $event = new stdClass();
  $event->disabled = FALSE; /* Edit this to true to make a default event disabled initially */
  $event->api_version = 1;
  $event->name = 'published';
  $event->editor_title = '';
  $event->admin_title = 'Published';
  $event->admin_description = '';
  $event->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
  $event->contexts = array();
  $event->relationships = array();
  $event->access = array(
    'logic' => 'and',
  );
  $event->weight = 0;
  $event->target_state = 'published';
  $event->origin_states = array(
    'draft' => 'draft',
    'needs_review' => 'needs_review',
    'published' => 'published',
  );
  $export['published'] = $event;

  return $export;
}

/**
 * Implements hook_default_workbench_workflows_states().
 */
function umn_workbench_default_workbench_workflows_states() {
  $export = array();

  $state = new stdClass();
  $state->disabled = FALSE; /* Edit this to true to make a default state disabled initially */
  $state->api_version = 1;
  $state->name = 'draft';
  $state->editor_title = '';
  $state->admin_title = 'Draft';
  $state->admin_description = '';
  $state->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
  $state->contexts = array();
  $state->relationships = array();
  $state->access = array(
    'plugins' => array(),
  );
  $state->weight = 0;
  $export['draft'] = $state;

  $state = new stdClass();
  $state->disabled = FALSE; /* Edit this to true to make a default state disabled initially */
  $state->api_version = 1;
  $state->name = 'needs_review';
  $state->editor_title = '';
  $state->admin_title = 'Needs Review';
  $state->admin_description = '';
  $state->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
  $state->contexts = array();
  $state->relationships = array();
  $state->access = array();
  $state->weight = 0;
  $export['needs_review'] = $state;

  $state = new stdClass();
  $state->disabled = FALSE; /* Edit this to true to make a default state disabled initially */
  $state->api_version = 1;
  $state->name = 'published';
  $state->editor_title = '';
  $state->admin_title = 'Published';
  $state->admin_description = '';
  $state->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
  $state->contexts = array();
  $state->relationships = array();
  $state->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role_name',
        'settings' => array(
          'role_names' => array(
            0 => 'editor',
            1 => 'senior editor',
            2 => 'administrator',
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $state->weight = 0;
  $export['published'] = $state;

  return $export;
}

/**
 * Implements hook_default_workbench_workflows_workflows().
 */
function umn_workbench_default_workbench_workflows_workflows() {
  $export = array();

  $workflow = new stdClass();
  $workflow->disabled = FALSE; /* Edit this to true to make a default workflow disabled initially */
  $workflow->api_version = 1;
  $workflow->name = 'default_workflow';
  $workflow->editor_title = '';
  $workflow->admin_title = 'Default Workflow';
  $workflow->admin_description = '';
  $workflow->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
  $workflow->contexts = array();
  $workflow->relationships = array();
  $workflow->access = array(
    'plugins' => array(),
  );
  $workflow->weight = 2;
  $workflow->category = '';
  $workflow->states = array(
    'draft' => 'draft',
    'needs_review' => 'needs_review',
    'published' => 'published',
  );
  $workflow->events = array(
    'draft' => 'draft',
    'needs_review' => 'needs_review',
    'published' => 'published',
  );
  $export['default_workflow'] = $workflow;

  return $export;
}
