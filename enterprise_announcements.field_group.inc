<?php
/**
 * @file
 * enterprise_announcements.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function enterprise_announcements_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_announcement|node|announcements|form';
  $field_group->group_name = 'group_announcement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'announcements';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_announcement_body',
      1 => 'field_announcement_category',
      2 => 'field_announcement_date',
      3 => 'title',
      4 => 'field_announcement_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-announcement field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_announcement|node|announcements|form'] = $field_group;

  return $export;
}
