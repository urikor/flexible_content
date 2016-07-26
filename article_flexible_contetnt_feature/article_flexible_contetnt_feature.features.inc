<?php
/**
 * @file
 * article_flexible_contetnt_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function article_flexible_contetnt_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function article_flexible_contetnt_feature_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function article_flexible_contetnt_feature_paragraphs_info() {
  $items = array(
    'paragraph_bundle_1' => array(
      'name' => '2 Columnes',
      'bundle' => 'paragraph_bundle_1',
      'locked' => '1',
    ),
    'quote_bundle' => array(
      'name' => 'Quote',
      'bundle' => 'quote_bundle',
      'locked' => '1',
    ),
    'text_slider' => array(
      'name' => 'Text&slider',
      'bundle' => 'text_slider',
      'locked' => '1',
    ),
  );
  return $items;
}
