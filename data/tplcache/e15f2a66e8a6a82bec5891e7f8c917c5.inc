<li> <a href="[field:arcurl/]" title="[field:title/]"><span class="fl">[field:title/]</span><span class="fr">[field:pubdate function="MyDate('Y-m-d',@me)"/]</span></a> </li>
        [field:global runphp='yes' name=autoindex]
        $a="
        <div class='news_line'></div>
        ";
        $b="";
        if ((@me%5)==0 && @me!=30) @me=$a;
        else  @me=$b;
        [/field:global]