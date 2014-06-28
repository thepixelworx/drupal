<?php

// Plugin definition
$plugin = array(
  'title' => t('Pixelworx Two column stacked'),
  'category' => t('Columns: 2'),
  'icon' => 'twocol_stacked.png',
  'theme' => 'pw_twocol_stacked',
  'css' => 'pw_twocol_stacked.css',
  'regions' => array(
    'top' => t('Top'),
    'top-two' => t('Top Two'),
    'left' => t('Left side'),
    'right' => t('Right side'),
    'bottom' => t('Bottom')
  ),
);
