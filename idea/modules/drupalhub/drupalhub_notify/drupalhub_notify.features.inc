<?php
/**
 * @file
 * drupalhub_notify.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalhub_notify_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function drupalhub_notify_default_message_type() {
  $items = array();
  $items['comment_on_followed_node'] = entity_import('message_type', '{
    "name" : "comment_on_followed_node",
    "description" : "Comment on followed node",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "he",
    "arguments" : null,
    "message_text" : {
      "en" : [
        {
          "value" : "Hello [message:user:name] - new comment",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EHello [message:user:name] - new comment\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Hello [message:user:name],\\n\\nThe user [message:field_user:name] has made a comment on the question [message:field_node:title] which you asked to followed.",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EHello [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003EThe user [message:field_user:name] has made a comment on the question [message:field_node:title] which you asked to followed.\\u003C\\/p\\u003E\\n"
        }
      ],
      "he" : [
        {
          "value" : "\\u05e9\\u05dc\\u05d5\\u05dd [message:user:name] - \\u05ea\\u05d2\\u05d5\\u05d1\\u05d4 \\u05d7\\u05d3\\u05e9\\u05d4",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E\\u05e9\\u05dc\\u05d5\\u05dd [message:user:name] - \\u05ea\\u05d2\\u05d5\\u05d1\\u05d4 \\u05d7\\u05d3\\u05e9\\u05d4\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "\\u05e9\\u05dc\\u05d5\\u05dd [message:user:name],\\r\\n\\r\\n\\u05d4\\u05de\\u05e9\\u05ea\\u05de\\u05e9 [message:field_user:name] \\u05d4\\u05d2\\u05d9\\u05d1 \\u05dc\\u05e9\\u05d0\\u05dc\\u05d4 [message:field_node:title] \\u05d0\\u05e9\\u05e8 \\u05d1\\u05d9\\u05e7\\u05e9\\u05ea \\u05dc\\u05e2\\u05e7\\u05d5\\u05d1 \\u05d0\\u05d7\\u05e8\\u05d9\\u05d4.",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003E\\u05e9\\u05dc\\u05d5\\u05dd [message:user:name],\\u003C\\/p\\u003E\\n\\u003Cp\\u003E\\u05d4\\u05de\\u05e9\\u05ea\\u05de\\u05e9 [message:field_user:name] \\u05d4\\u05d2\\u05d9\\u05d1 \\u05dc\\u05e9\\u05d0\\u05dc\\u05d4 [message:field_node:title] \\u05d0\\u05e9\\u05e8 \\u05d1\\u05d9\\u05e7\\u05e9\\u05ea \\u05dc\\u05e2\\u05e7\\u05d5\\u05d1 \\u05d0\\u05d7\\u05e8\\u05d9\\u05d4.\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
