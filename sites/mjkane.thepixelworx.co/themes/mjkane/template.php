<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * MJ Kane theme.
 */


function mjkane_menu_tree($variables) {
  if (preg_match("/\main-submenu\b/i", $variables['tree'])){
    return '<ul class="menu main-menu">' . $variables['tree'] . '</ul>';
  } else {
    return '<ul class="menu main-submenu">' . $variables['tree'] . '</ul>';
  }
}

function mjkane_preprocess_html(&$vars) {
    drupal_add_library('system', 'ui');
 drupal_add_library('system', 'jquery');
}
