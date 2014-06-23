<?php

/**
 * @file
 * Administration pages and functions for placeholder module
 */

/**
 * Configuration form.
 */
function placeholder_config_form() {
  $form = array();

  $form['placeholder_auto'] = array(
    '#type' => 'fieldset',
    '#title' => t('Automatic placeholders'),
    '#collapsible' => FALSE,
  );

  $form['placeholder_auto']['placeholder_use_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Automatically use label as placeholder'),
    '#description' => t('Automatically use the field label (#title) for all textfield and textarea fields if an explicit #placeholder is not set.'),
    '#default_value' => variable_get('placeholder_use_title', FALSE),
  );

  $form['placeholder_auto']['placeholder_include_admin'] = array(
    '#type' => 'checkbox',
    '#title' => t('Include admin forms?'),
    '#description' => t('Also automatically use field labels as placeholders for administration page forms'),
    '#default_value' => variable_get('placeholder_include_admin', FALSE),
  );

  return system_settings_form($form);
}
