<?php
/**
 * @file
 * enterprise_announcements.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function enterprise_announcements_taxonomy_default_vocabularies() {
  return array(
    'announcement_category' => array(
      'name' => 'Announcement Category',
      'machine_name' => 'announcement_category',
      'description' => 'Create categories for Announcments',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
