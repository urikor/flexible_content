<?php

/**
 * Copy source dir to destination dir.
 * @param string $src
 * @param string $dst
 */
function fc_recurse_copy($src, $dst) {
  $dir = opendir($src);
  try {
    @mkdir($dst);
    chmod($dst, 0777);
    while (false !== ($file = readdir($dir))) {
      if (($file != '.') && ($file != '..')) {
        if (is_dir($src . '/' . $file)) {
          fc_recurse_copy($src . '/' . $file, $dst . '/' . $file);
        } else {
          copy($src . '/' . $file, $dst . '/' . $file);
          chmod($dst . '/' . $file, 0777);
        }
      }
    }
  } catch (Exception $e) {
    watchdog('warning', $e->getMessage());
  } finally {
    closedir($dir);
  }
}

/**
 * Makes dir.
 * @param string $dir
 */
function fc_mkdir($dir) {
  if (!file_exists($dir)) {
    @mkdir($dir);
    @chmod($dir, 0777);
  }
}
