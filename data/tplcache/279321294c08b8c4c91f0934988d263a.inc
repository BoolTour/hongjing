<div class="case">
  <div class="main">
    <div class="ititle">
      <p> {dede:field name='typename'/} </p>
      <font>{dede:field name='typenameen'/} </font> </div>
    <p class="pronav"> {dede:channel type='son' row='6'} <a href="[field:typeurl/]">[field:typename/]</a> {/dede:channel} </p>
    <ul>
      {dede:arclist titlelen=80 orderby='id' row='6'}
      <li> <a href="[field:arcurl/]" class="iproimg"><font class="caseborder"></font><img src="[field:picname/]" width="300" height="225" >
        <p>　[field:description function="cn_substr(@me,160)"/]...</p>
        </a> <a href="[field:arcurl/]" class="iproname">[field:title/]</a> </li>
      {/dede:arclist}
    </ul>
    <p class="more"><a href="{dede:field name='typeurl'/}" title="查看更多"><img src="/skin/img/more.png" alt="查看更多"></a></p>
  </div>
</div>