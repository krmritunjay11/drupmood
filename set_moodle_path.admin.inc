<?php
/**
 * @file
 * System settings file.
 */

/**
 * System_settings_form.
 */
function set_lms_path_form() {
  $form['set_lms_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Path :'),
    '#default_value' => variable_get('set_lms_path', '#'),
    '#description' => t('Enter full path of moodle site. Like: http://example.com/moodle.'),
  );
  $form['websevices_token'] = array(
    '#type' => 'textfield',
    '#title' => t('Token :'),
    '#default_value' => variable_get('websevices_token', '2x3f'),
    '#description' => t('Enter token for web services use.'),
  );
  return system_settings_form($form);
}
