<div class="quote">
  <blockquote>
    <?php print render($quote); ?>
  </blockquote>
  <?php if (!empty($link) && !empty($link_text)) : ?>
    <a href="<?php print render($link); ?>"><?php print render($link_text); ?></a>
  <?php endif; ?>
</div>
