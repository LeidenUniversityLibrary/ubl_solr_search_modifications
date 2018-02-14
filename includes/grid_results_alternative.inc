<?php
/**
 * @file
 * Class override for grid display
 */
/**
 * Extension of IslandoraSolrResultsGrid to create an alternative display type.
 */
class IslandoraSolrResultsGridAlternative extends IslandoraSolrResults {
  /**
   * Renders the Solr results as a responsive grid view.
   *
   * Markup and styling is based on the Islandora collection grid view. Some
   * styling is inherited from it.
   *
   * @see IslandoraSolrResults::displayResults()
   *
   * @param array $solr_results
   *   The processed Solr results from
   *   IslandoraSolrQueryProcessor::islandoraSolrResult.
   *
   * @return string
   *   Rendered Solr results.
   */
  public function printResults($solr_results) {
    $solr_results = islandora_solr_prepare_solr_results($solr_results);
    $object_results = $solr_results['response']['objects'];
    $object_results = islandora_solr_prepare_solr_doc($object_results);

    $elements = array();
    $elements['solr_total'] = $solr_results['response']['numFound'];
    $elements['solr_start'] = $solr_results['response']['start'];

    // Return themed search results.
    return theme('islandora_solr_grid', array('results' => $object_results, 'elements' => $elements));
  }
}