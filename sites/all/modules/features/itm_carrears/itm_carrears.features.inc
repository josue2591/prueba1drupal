<?php
/**
 * @file
 * itm_carrears.features.inc
 */

/**
 * Implements hook_views_api().
 */
function itm_carrears_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function itm_carrears_node_info() {
  $items = array(
    'carrera' => array(
      'name' => t('Carrera'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
