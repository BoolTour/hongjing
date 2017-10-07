<div class="news">
  <div class="main">
    <div class="news_t"><img src="/skin/img/news_t.jpg" alt="{dede:field name='typename'/}"> </div>
    <div class="newsintr"> {dede:arclist titlelen=80 orderby='id' limit='0,1'}
      <h2><a href="[field:arcurl/]"> [field:title/] </a></h2>
      <p class="title_intr"> 　[field:description function="cn_substr(@me,120)"/]... </p>
      {/dede:arclist}
      <ul class="pointer">
        {dede:arclist titlelen=80 orderby='id' limit='1,3'}
        <li><a href="[field:arcurl/]" title="[field:title/]"><span class="fl"> [field:title/] </span><span class="fr"> [field:pubdate function="MyDate('Y-m-d',@me)"/] </span></a></li>
        {/dede:arclist}
      </ul>
    </div>
    <a href="{dede:field name='typeurl'/}" class="newsmore"><img src="/skin/img/newsmore.gif" alt="更多"></a> </div>
</div>