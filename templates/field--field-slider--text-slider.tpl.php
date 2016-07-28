<div class="<?php print $classes; ?>">
  <div class="field-items">
    <?php if (!empty($items)) : ?>
      <div id="slider-wrapper">
        <div id="owl-carousel" class="owl-carousel">
          <?php foreach ($items as $image) : ?>
            <div>
              <?php print render($image); ?>
            </div>
          <?php endforeach; ?>
        </div>
      </div>
    <?php endif; ?>
  </div>
</div>
