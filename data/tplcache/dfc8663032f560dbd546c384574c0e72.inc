<div class="l_news">
        <div class="l_title">{dede:field name='typename'/}<font>{dede:field name='typenameen'/}</font><a href="{dede:field name='typeurl'/}" title="更多">更多></a></div>
        <ul class="pointer">
          {dede:arclist titlelen=80 orderby='id' row='5'}
          <li><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a></li>
          {/dede:arclist}  
        </ul>
      </div>