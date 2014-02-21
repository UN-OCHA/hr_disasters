<?php
/**
 * @file
 * hr_disasters.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function hr_disasters_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:hr_operation:create hr_disaster content'
  $permissions['node:hr_operation:create hr_disaster content'] = array(
    'roles' => array(
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_operation:delete any hr_disaster content'
  $permissions['node:hr_operation:delete any hr_disaster content'] = array(
    'roles' => array(
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_operation:delete own hr_disaster content'
  $permissions['node:hr_operation:delete own hr_disaster content'] = array(
    'roles' => array(
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_operation:update any hr_disaster content'
  $permissions['node:hr_operation:update any hr_disaster content'] = array(
    'roles' => array(
      'manager' => 'manager',
    ),
  );

  // Exported og permission: 'node:hr_operation:update own hr_disaster content'
  $permissions['node:hr_operation:update own hr_disaster content'] = array(
    'roles' => array(
      'manager' => 'manager',
    ),
  );

  return $permissions;
}
