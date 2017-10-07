<div class="l_pro">
        <div class="l_title">{dede:field name='typename'/}<font>{dede:field name='typenameen'/}</font></div>
        <ul class="l_procon">
        {dede:channel type='son' row='5' currentstyle="<li class='proOne'><a href='~typelink~' class='thisclass'>~typename~</a> </li>" }
          <li class="proOne"><a href="[field:typeurl/]" class="">[field:typename/]</a></li>
        {/dede:channel} 
        </ul>
      </div>