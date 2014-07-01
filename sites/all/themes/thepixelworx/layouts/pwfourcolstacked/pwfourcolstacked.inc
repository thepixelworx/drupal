<?php

// Plugin definition
$plugin = array(
  'title' => t('Four column stacked'),
  'category' => t('Columns: 4'),
  'icon' => 'pwfourcolstacked.png',
  'theme' => 'pwfourcolstacked',
  'css' => 'pwfourcolstacked.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'middle-left' => t('Middle Left column'),
    'middle-right' => t('Middle Right column'),
    'right' => t('Right side'),
    'bottom' => t('Bottom')
  ),
);
