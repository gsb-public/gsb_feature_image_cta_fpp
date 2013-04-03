<?php
/**
 * @file
 * gsb_feature_image_cta_fpp.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function gsb_feature_image_cta_fpp_defaultconfig_features() {
  return array(
    'gsb_feature_image_cta_fpp' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function gsb_feature_image_cta_fpp_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__image_cta';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__image_cta'] = $strongarm;

  return $export;
}
