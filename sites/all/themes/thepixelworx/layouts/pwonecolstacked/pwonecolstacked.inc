<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('Single column stacked'),
  'category' => t('Columns: 1'),
  'icon' => 'pwonecolstacked.png',
  'theme' => 'pwonecolstacked',
  'css' => 'onecol.css',
  'regions' => array(
    'top' => t('Top'),
    'middle' => t('Middle Column'),
    'bottom' => t('Bottom')
  ),
);
