<?php

function accounting_settings_form($form, &$form_state) {
  $form['accounting_emails'] = array(
    '#type' => 'textfield',
    '#title' => t('E-mail Recipients'),
    '#description' => t('Enter email addresses separated by commas.'),
  );

  $form['accounting_from_email'] = array(
    '#type' => 'textfield', 
    '#title' => t('E-mail Sender '),
    '#description' => t('Enter the email address of sender.')
  );

  $form['submit'] = array(
    '#type' => 'submit', 
    '#value' => 'Set Variables',
  );

  return $form;
}

function accounting_settings_form_submit($form, &$form_state) {
  variable_set('accounting_emails', $form_state['values']['accounting_emails']);
  variable_set('accounting_from_email', $form_state['value']['accounting_from_email']);
}