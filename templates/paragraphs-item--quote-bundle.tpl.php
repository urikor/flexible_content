<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <blockquote>
      <?php print render($field_quote_text[0]['safe_value']); ?>
    </blockquote>
    <?php if (!empty($field_quote_link_href) && !empty($field_quote_link_text)) : ?>
      <a href="<?php print render($field_quote_link_href[0]['safe_value']); ?>"><?php print render($field_quote_link_text[0]['safe_value']); ?></a>
    <?php endif; ?>
  </div>
</div>
