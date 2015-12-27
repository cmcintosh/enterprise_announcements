<?php
/**
 * @file
 * enterprise_announcements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function enterprise_announcements_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function enterprise_announcements_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function enterprise_announcements_node_info() {
  $items = array(
    'announcements' => array(
      'name' => t('Announcements'),
      'base' => 'node_content',
      'description' => t('Create a new Enterprise Announcement. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
