<?php

// Plugin definition
$plugin = array(
  'title' => t('Two column stacked'),
  'category' => t('Columns: 2'),
  'icon' => 'pwtwocolstacked.png',
  'theme' => 'pwtwocolstacked',
  'css' => 'pwtwocolstacked.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'right' => t('Right side'),
    'bottom' => t('Bottom')
  ),
);
