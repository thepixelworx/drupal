<?php

// Plugin definition
$plugin = array(
  'title' => t('Three column stacked'),
  'category' => t('Columns: 3'),
  'icon' => 'pwthreecolstacked.png',
  'theme' => 'pwthreecolstacked',
  'css' => 'pwthreecolstacked.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'middle' => t('Middle column'),
    'right' => t('Right side'),
    'bottom' => t('Bottom')
  ),
);
