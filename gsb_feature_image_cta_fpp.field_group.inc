<?php
/**
 * @file
 * gsb_feature_image_cta_fpp.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_image_cta_fpp_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|fieldable_panels_pane|image_cta|default';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'image_cta';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_body',
      1 => 'field_link_single',
      2 => 'field_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper|fieldable_panels_pane|image_cta|default'] = $field_group;

  return $export;
}
