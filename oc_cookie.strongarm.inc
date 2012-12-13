<?php
/**
 * @file
 * oc_cookie.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function oc_cookie_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_da';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_position' => 0,
    'popup_info' => array(
      'value' => 'Vi bruger cookies. Du accepterer brug af cookies når du klikker på hjemmesiden. Hvis du ikke vil tillade cookies, se vejledning og læs mere.',
      'format' => 'plain_text',
    ),
    'popup_agreed_enabled' => 1,
    'popup_hide_agreed' => 0,
    'popup_agreed' => array(
      'value' => 'Tak fordi du accepterede cookies. Du kan nu lukke denne besked eller læse mere.',
      'format' => 'plain_text',
    ),
    'popup_link' => 'cookies',
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '',
    'popup_text_hex' => 'FFF',
  );
  $export['eu_cookie_compliance_da'] = $strongarm;

  return $export;
}
