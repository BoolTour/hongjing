<div class="product">
  <div class="main">
    <div class="ititle">
      <p> {dede:field name='typename'/} </p>
      <font>{dede:field name='typenameen'/}</font> </div>
    <ul class="list">
      {dede:arclist titlelen=80 orderby='id' row='3'}
      <li> <a href="[field:arcurl/]" class="proimg"><img src="[field:picname/]" width="300" height="225" ></a> <a href="[field:arcurl/]" class="proname"> [field:title/] </a> </li>
      {/dede:arclist}
    </ul>
    <p class="more"><a href="{dede:field name='typeurl'/}"><img src="/skin/img/more.png" alt="查看更多"></a></p>
  </div>
</div>