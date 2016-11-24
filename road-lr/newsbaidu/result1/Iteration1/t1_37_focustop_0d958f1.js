define("focustop:widget/col_house/col_house.js",function(e,t,i){var s=e("common:widget/ui/vs/DynamicList/DynamicList.js"),l=e("common:widget/ui/vs/vs.js"),n=baidu=e("common:widget/lib/tangram/base/base.js"),a=n.dom.g,o=n.event.on,c=e("common:widget/ui/vs/citylist/citylist.js"),d=n.event.stopPropagation,u=new Date;u.setTime(u.getTime()+31536e6);var y=e("common:widget/ui/jquery/jquery.js"),r={loading:"���ڼ��أ����Ժ�...",failed_1:"����ʧ�ܣ����Ժ�����...",failed_2:"����ʧ�ܣ����Ժ�����...",failed_3:"����ʧ�ܣ����Ժ�����...",failed_4:"��Ǹ��û���ҵ���ص�������������...",failed_5:"��Ǹ��û���ҵ���ص�������������...",success:"���سɹ���"};i.exports=initLocalHouseNews=function(e){function t(t){for(var i=t.house,s=i.rows,l=(i.result_num,[]),n=0,o=s.length;o>n&&n<e.maxItemsShown;n++)l.push(baidu.string.format(LocalNewsConfig.htmlTpl.house_news,{url:s[n].url,title:s[n].title}));if(window.clearTimeout(w),window.clearTimeout(D),0<l.length){var c=i.name;a(e.statusID).style.display="none",a(e.cityNameID).innerHTML=c,a(e.localNewsID).innerHTML=l.join(""),a(e.localNewsID).style.display="block",m=!1}else f?(a(e.statusID).innerHTML=r.failed_5,window.setTimeout(function(){a(e.statusID).style.display="none",a(e.localNewsID).style.display="block",m=!1},r.delayTime)):(a(e.statusID).innerHTML=r.failed_4,window.setTimeout(function(){a(e.statusID).style.display="none",a(e.cityNameID).innerHTML=LocalNewsConfig.defaultFailedHouseCity,a(e.localNewsID).style.display="block",m=!1},r.delayTime))}function i(){m||l.XSAjax.send({url:e.request.url+(f?"&lochouse="+I.split("|")[1]:"")+"&callback="+e.request.callback,onbeforesend:function(){a(e.statusID).innerHTML=r.loading,a(e.statusID).style.display="block",a(e.localNewsID).style.display="none",w=window.setTimeout(function(){a(e.statusID).innerHTML=r.failed_3,D=window.setTimeout(function(){a(e.statusID).style.display="none",a(e.localNewsID).style.display="block",m=!1},r.delayTime)},e.timeout),m=!0},onsuccess:function(){}})}function n(){var t=y("#"+e.changeCityID).data("toggle")||"hide";return t}function u(){var t=y("#"+e.changeCityID),i=t.data("toggle")||"hide";"hide"===i?t.data("toggle","show"):"show"===i&&t.data("toggle","hide")}var w,D,m=!1,I=null,f=!1;l.XSAjax.send({url:e.request.url+"&callback="+e.request.callback,onbeforesend:function(){a(e.statusID).innerHTML=r.loading,a(e.statusID).style.display="block",a(e.localNewsID).style.display="none",w=window.setTimeout(function(){a(e.statusID).innerHTML=r.failed_2,D=window.setTimeout(function(){a(e.statusID).style.display="none",a(e.localNewsID).style.display="block",a(e.cityNameID).innerHTML=LocalNewsConfig.defaultFailedHouseCity,m=!1},r.delayTime)},e.timeout),m=!0},onsuccess:function(){}});var b={frameObj:a(e.cityViewID),contentObj:a(e.cityViewID).getElementsByTagName("DIV")[0],navObj:a(e.cityViewID).getElementsByTagName("DIV")[1],data:c.houseCities,template:LocalNewsConfig.htmlTpl.city_list,triggerLevel:e.triggerLevel,callback:function(t){f=!0,a(e.cityViewID).style.visibility="hidden",y("#"+e.changeCityID).removeClass("select-btn-selected"),u(),l.XSAjax.send({url:e.request.url+(f?"&lochouse="+t.split("|")[1]:"")+"&callback="+e.request.callback,onbeforesend:function(){a(e.statusID).innerHTML=r.loading,a(e.statusID).style.display="block",a(e.localNewsID).style.display="none",w=window.setTimeout(function(){a(e.statusID).innerHTML=r.failed_3,D=window.setTimeout(function(){a(e.statusID).style.display="none",a(e.localNewsID).style.display="block",m=!1},r.delayTime)},e.timeout),m=!0,I=t},onsuccess:function(){}})}},g=new s(b);o(a(e.changeCityID),"click",function(t){var i=n();m||("show"===i?(a(e.cityViewID).style.visibility="hidden",a(e.backBtnID).style.visibility="hidden",y("#"+e.changeCityID).removeClass("select-btn-selected")):"hide"===i&&(a(e.cityViewID).style.visibility="visible",a(e.backBtnID).style.visibility="visible",y("#"+e.changeCityID).addClass("select-btn-selected"),g.handleMessage({type:"SHOW_CHILDREN"})),u()),d(t)}),o(a(e.closeBtnID),"click",function(t){a(e.cityViewID).style.visibility="hidden",a(e.backBtnID).style.visibility="hidden",y("#"+e.changeCityID).removeClass("select-btn-selected"),d(t)}),o(document,"click",function(){a(e.cityViewID).style.visibility="hidden",a(e.backBtnID).style.visibility="hidden",y("#"+e.changeCityID).removeClass("select-btn-selected"),u()}),window.reloadHouseNews=i,window[e.request.callback]=t}});
;define("focustop:widget/col_localnews/col_localnews.js",function(i,e,t){var n=i("common:widget/ui/vs/DynamicList/DynamicList.js"),l=i("common:widget/ui/vs/vs.js"),a=baidu=i("common:widget/lib/tangram/base/base.js"),s=a.dom.g,o=a.event.on,c=i("common:widget/ui/vs/citylist/citylist.js"),d=a.event.stopPropagation,u=new Date;u.setTime(u.getTime()+31536e6);var r=i("common:widget/ui/jquery/jquery.js"),y={loading:"���ڼ��أ����Ժ�...",failed_1:"����ʧ�ܣ����Ժ�����...",failed_2:"����ʧ�ܣ����Ժ�����...",failed_3:"����ʧ�ܣ����Ժ�����...",failed_4:"��Ǹ��û���ҵ���ص�������������...",failed_5:"��Ǹ��û���ҵ���ص�������������...",success:"���سɹ���"};y.delayTime=2e3,t.exports=initLocalHotNews=function(i){function e(i){var e={},t="",n="";if(0!==i.city.rows.pic.length){baidu.dom.hide("local_default"),baidu.dom.show("local_current");var l=document.getElementById("local_default").getElementsByTagName("img");if(l&&l[0]){var a=l[0].getAttribute("r_src");a&&(l[0].setAttribute("src",a),l[0].removeAttribute("r_src"))}return e=i.city.rows.pic,t=i.city.cityid,n=encodeURIComponent(i.city.name),e.locID=t,e.city_name=n,baidu.string.format(LocalNewsConfig.htmlTpl.pic,e)}baidu.dom.show("local_default"),baidu.dom.hide("local_current")}function t(i,e,t){for(var n=i.city.rows.first||i.city.rows.frist,l=i.city.cityid,a=encodeURIComponent(i.city.name),s=[],o=0;o<n.length;o++)n[o].locID=l,n[o].city_name=a,9>o&&s.push(0===o?baidu.string.format(t,n[o]):baidu.string.format(e,n[o]));return s.join("")}function a(i,e){for(var t=i.city.rows.second,n=i.city.cityid,l=encodeURIComponent(i.city.name),a=['<ul class="ulist">'],s=0;s<t.length;s++)7>s&&(t[s].locID=n,t[s].city_name=l,a.push(baidu.string.format(e,t[s])));return a.push("</ul>"),a.join("")}function u(n){var l=t(n,LocalNewsConfig.htmlTpl.focus,LocalNewsConfig.htmlTpl.focus_bold),o=e(n,LocalNewsConfig.htmlTpl.pic),c=a(n,LocalNewsConfig.htmlTpl.other);window.clearTimeout(w),window.clearTimeout(b);var d=n.city.rows.first||n.city.rows.frist;if(0<d.length){var u=n.city.cityid,r=n.city.name,m=r;if(s(i.localNewsID.focus).innerHTML=l,s(i.localNewsID.pic).innerHTML=o,s(i.localNewsID.other).innerHTML=c,5>d.length)s(i.statusID).style.display="none",s(i.moreLinkID).style.visibility="hidden",s(i.cityNameID).innerHTML=baidu.string.format(LocalNewsConfig.htmlTpl.city_name_no_link,{city_name:m}),I=!1;else{if("2354"===u||2354===u?(baidu.hide("channel-all"),baidu.show("channel-shanghai"),s(i.pmoreLinkID).innerHTML=baidu.string.format(LocalNewsConfig.htmlTpl.more_link_sh,{city_name:m,locID:"2354"})):(baidu.hide("channel-shanghai"),baidu.show("channel-all"),s(i.pmoreLinkID).innerHTML=baidu.string.format(LocalNewsConfig.htmlTpl.more_link,{city_name:m,locID:n.city.cityid})),s(i.statusID).style.display="none",s(i.moreLinkID).style.visibility="visible",9969===u)var f="special_city";s(i.cityNameID).innerHTML="2354"===u||2354===u?baidu.string.format(LocalNewsConfig.htmlTpl.city_name_link_sh,{city_name:r,locID:"2354",class_name:f}):baidu.string.format(LocalNewsConfig.htmlTpl.city_name_link,{city_name:r,locID:n.city.cityid,class_name:f}),I=!1}}else h?(s(i.statusID).innerHTML=y.failed_5,window.setTimeout(function(){s(i.statusID).style.display="none",I=!1},y.delayTime)):(s(i.statusID).innerHTML=y.failed_4,window.setTimeout(function(){s(i.statusID).style.display="none",s(i.moreLinkID).style.visibility="visible",s(i.cityNameID).innerHTML=baidu.string.format(LocalNewsConfig.htmlTpl.city_name_link,{city_name:LocalNewsConfig.defaultFailedLocalCity,locID:LocalNewsConfig.defaultLocalCityID}),I=!1},y.delayTime))}function m(){I||l.XSAjax.send({url:i.request.url+"&loc="+D.split("|")[1]+"&callback="+i.request.callback,onbeforesend:function(){s(i.statusID).innerHTML=y.loading,s(i.statusID).style.display="block",w=window.setTimeout(function(){s(i.statusID).innerHTML=y.failed_3,b=window.setTimeout(function(){s(i.statusID).style.display="none",I=!1},y.delayTime)},i.timeout),I=!0},onsuccess:function(){}})}function f(){var e=r("#"+i.changeCityID).data("toggle")||"hide";return e}function g(){var e=r("#"+i.changeCityID),t=e.data("toggle")||"hide";"hide"===t?e.data("toggle","show"):"show"===t&&e.data("toggle","hide")}var w,b,I=!1,D=null,h=!1;l.XSAjax.send({url:i.request.url+"&callback="+i.request.callback,onbeforesend:function(){s(i.statusID).innerHTML=y.loading,s(i.statusID).style.display="block",w=window.setTimeout(function(){s(i.statusID).innerHTML=y.failed_1,b=window.setTimeout(function(){s(i.statusID).style.display="none","TOP"===i.pageType?s(i.cityNameID).innerHTML=baidu.string.format(LocalNewsConfig.htmlTpl.city_name_link,{city_name:LocalNewsConfig.defaultFailedLocalCity,locID:LocalNewsConfig.defaultLocalCityID}):(s(i.cityNameID).innerHTML=LocalNewsConfig.defaultFailedLocalCity,document.title="�ٶ�������������"+LocalNewsConfig.defaultFailedLocalCity+"����"),I=!1},y.delayTime)},i.timeout),I=!0},onsuccess:function(){}});var L={frameObj:s(i.cityViewID),contentObj:s(i.cityViewID).getElementsByTagName("DIV")[0],navObj:s(i.cityViewID).getElementsByTagName("DIV")[1],data:c.localCities,template:LocalNewsConfig.htmlTpl.city_list,triggerLevel:i.triggerLevel,callback:function(e){h=!0,s(i.cityViewID).style.visibility="hidden",r("#"+i.changeCityID).removeClass("select-btn-selected"),g();var t;l.XSAjax.send({url:t||i.request.url+"&loc="+e.split("|")[1]+"&callback="+i.request.callback,onbeforesend:function(){s(i.statusID).innerHTML=y.loading,s(i.statusID).style.display="block",w=window.setTimeout(function(){s(i.statusID).innerHTML=y.failed_3,b=window.setTimeout(function(){s(i.statusID).style.display="none",I=!1},y.delayTime)},i.timeout),I=!0,D=e},onsuccess:function(){}})}},T=new n(L);o(s(i.changeCityID),"click",function(e){var t=baidu.dom.getPosition(this),n=f();I||("show"===n?(s(i.cityViewID).style.visibility="hidden",s(i.backBtnID).style.visibility="hidden",r("#"+i.changeCityID).removeClass("select-btn-selected")):"hide"===n&&(baidu.dom.setStyles(i.cityViewID,{left:t.left,top:t.top+18}),s(i.cityViewID).style.visibility="visible",s(i.backBtnID).style.visibility="visible",r("#"+i.changeCityID).addClass("select-btn-selected"),T.handleMessage({type:"SHOW_CHILDREN"})),g()),d(e)}),o(s(i.closeBtnID),"click",function(e){s(i.cityViewID).style.visibility="hidden",s(i.backBtnID).style.visibility="hidden",r("#"+i.changeCityID).removeClass("select-btn-selected"),d(e)}),o(document,"click",function(){s(i.cityViewID).style.visibility="hidden",s(i.backBtnID).style.visibility="hidden",r("#"+i.changeCityID).removeClass("select-btn-selected"),g()}),window.bdNewsJsonCallBack=u,window.reloadLocalNews=m}});
;define("focustop:widget/col_media/col_media.js",function(t,e,i){var o=function(){this.$parent=$(".media-navbar"),this.option={blockWidth:187,blockHeight:140}};o.fn=o.prototype,o.fn.init=function(){this._initEvent()},o.fn._initEvent=function(){this.$parent.delegate("li a","mouseenter",$.proxy(this.maskSlideIn,this)),this.$parent.delegate("li a","mouseleave",$.proxy(this.maskSlideOut,this))},o.fn.maskSlideIn=function(t){var e=$(t.currentTarget).find(".detail-mask");this.slide("enter",e),this.showOrHideElementWhenSlide("enter",$(t.currentTarget))},o.fn.maskSlideOut=function(t){var e=this.getDirection(t),i=$(t.currentTarget).find(".detail-mask");this.slide(e,i),this.showOrHideElementWhenSlide("leave",$(t.currentTarget))},o.fn.getDirection=function(t){var e="down",i=this.getMousePosition(t),o=this.getElementPosition($(t.currentTarget));return i.x<=o.leftTopX&&i.y>=o.leftTopY&&i.y<=o.rightBottomY&&(e="left"),i.x>=o.rightBottomX&&i.y>=o.leftTopY&&i.y<=o.rightBottomY&&(e="right"),i.y<=o.leftTopY&&i.x>=o.leftTopX&&i.x<=o.rightBottomX&&(e="up"),i.y>=o.rightBottomY&&i.x>=o.leftTopX&&i.x<=o.rightBottomX&&(e="down"),e},o.fn.getMousePosition=function(t){return{x:t.pageX,y:t.pageY}},o.fn.getElementPosition=function(t){var e=t.offset();return{leftTopX:e.left,leftTopY:e.top,rightBottomX:e.left+this.option.blockWidth,rightBottomY:e.top+this.option.blockHeight}},o.fn.slide=function(t,e){switch(t){case"up":e.css({left:"0",top:"-100%"});break;case"down":e.css({left:"0",top:"100%"});break;case"left":e.css({left:"-100%",top:"0"});break;case"right":e.css({left:"100%",top:"0"});break;case"enter":e.css({left:"0",top:"0"})}},o.fn.showOrHideElementWhenSlide=function(t,e){var i=e.find(".logo-left-top"),o=e.find(".title");"enter"===t&&(i.fadeOut(300),o.fadeOut(300)),"leave"===t&&(i.fadeIn(300),o.fadeIn(300))},i.exports=o});
;define("focustop:widget/hotrollnews/hotrollnews.js",function(t,e,n){var o=t("common:widget/lib/tangram/base/base.js");n.exports.init=function(){function t(t){function e(){"transition"in document.documentElement.style&&t.addClass("transition")}function n(){Math.abs(r-a)>=s?(t.removeClass("transition"),r=0,t.css("margin-top",r),setTimeout(e,200)):(r-=a,t.css("margin-top",r+"px")),o=setTimeout(n,i)}var o,i=3e3,s=t.outerHeight(),a=t.find("a").first().outerHeight(),r=0;t.on("mouseenter",function(){clearTimeout(o)}).on("mouseleave",function(){o=setTimeout(n,i)}),e(),o=setTimeout(n,i)}var e="_showScrollNews",n="http://news.baidu.com/n?tn=json&cmd=1&class=civilnews&rn=20&datano=7&x="+e,i='<a href="#{url}" target="_blank" mon="c=top&ct=1&col=23" title="#{title}">#{title}</a>';window[e]=function(e){var n=$("#toparea_rollnews_mask").find("div"),s=[];$.each(e.feed.entry,function(t,e){var n=e.url,a=e.title;n&&a&&s.push(o.string.format(i,{url:e.url,title:e.title}))}),n.html(s.join("\n")),$("#toparea_rollnews_tip").hide(),t(n)};var s=document.createElement("script");s.type="text/javascript",s.src=n,document.body.appendChild(s)}});
;define("focustop:widget/hotwords/hotwords.js",function(o,t,i){function s(){var o=1500,t=r(".hotwords li"),i=r(".hotwords .hotwords_li_a");n(i),setTimeout(function(){e(t)},o)}function n(o){var t=o,i=88;t.each(function(o,t){var s=(i-t.offsetHeight)/2+"px";r(t).css("top",s)})}function e(o){var t=o,i=500;t.each(function(o,t){r(t).addClass("hotwords-slide")}),setTimeout(function(){t.each(function(o,t){r(t).removeClass("hotwords-slide")})},i)}var r=o("common:widget/ui/jquery/jquery.js");i.exports={init:s}});
;define("focustop:widget/hx_stock/hx_stock.js",function(t,e,i){var s=(baidu=t("common:widget/lib/tangram/base/base.js"),t("common:widget/ui/vs/vs.js"),"����/����/ƴ��");i.exports=hxSuggestion=function(){function t(t){window.suggestManager||(window.suggestManager=[]),window.suggestManager.push(this),this.config=t,this.dataBuffer={},this.noResultKeys=[],this.start(),this.config.input.setAttribute("autocomplete","off")}return t.prototype={parseData:function(t,e){var i=["<table>"],s=this.queryKey.substr(0,1),n=null;n=s>=0&&9>=s?"code":s>="a"&&"z">=s?"pinyin":"name",this.activeData=t;for(var a=t.Result.length,u=-1;++u<a;){var o=t.Result[u][n].indexOf(this.queryKey),c=this.queryKey.length;e||(0===o?t.Result[u][n]="<em>"+t.Result[u][n].substr(0,c)+"</em>"+t.Result[u][n].substr(c):o>0&&(t.Result[u][n]=t.Result[u][n].substr(0,o)+"<em>"+t.Result[u][n].substr(o,c)+"</em>"+t.Result[u][n].substr(o+c))),i.push("<tr><td>",t.Result[u].code,"</td><td>",t.Result[u].name,"</td><td>",t.Result[u].pinyin,"</td></tr>")}return i.join("")},displayData:function(t,e){var i=this;if(0===t.Result.length)return this.noResultKeys.push(this.queryKey),this.suggestPanel.style.display="none",void(this.suggestItems=null);this.dataBuffer[this.queryKey]=t,this.suggestPanel.innerHTML=this.parseData(t,e),this.suggestPanel.style.display="block",this.suggestItems=this.suggestPanel.getElementsByTagName("tr"),this.activeItemIndex=-1;for(var s=0,n=this.suggestItems.length;n>s;s++)this.suggestItems[s].onmouseover=function(t){return function(){try{baidu.dom.removeClass(i.suggestItems[i.activeItemIndex],"cur")}catch(e){}baidu.dom.addClass(i.suggestItems[t],"cur"),i.activeItemIndex=t}}(s),function(t){baidu.on(i.suggestItems[t],"click",function(){i.suggestPanel.style.display="none";{var e=i.activeData.Result[t].code.replace(/<\/?em>/gi,"");i.activeData.Result[t].name}i.config.mutipleSupport?i.doMutipleSupport(e+","):i.config.input.value=e,i.config.needSubmitForm?(i.config.input.value=i.config.input.value.replace(/,$/i,""),i.config.form.submit()):i.config.form.onsubmit()})}(s),function(t){baidu.on(i.suggestItems[t],"mousedown",function(e){var s=i.activeData.Result[t].code.replace(/<\/?em>/gi,"");UserMonitor.send(e,5,{col:501,t:s,pn:6})})}(s)},hasNoResult:function(t){for(var e=0,i=this.noResultKeys.length;i>e;e++)if(t.substr(0,this.noResultKeys[e].length)===this.noResultKeys[e])return!0;return!1},getData:function(t){return t in this.dataBuffer?void this.displayData(this.dataBuffer[t],!0):this.hasNoResult(t)?(this.suggestPanel.style.display="none",void(this.suggestItems=null)):(this.dataScript&&(this.dataScript.parentNode.removeChild(this.dataScript),this.dataScript=null),this.dataScript=document.createElement("script"),this.dataScript.setAttribute("type","text/javascript"),this.dataScript.src=this.config.url+t,void document.getElementsByTagName("head")[0].appendChild(this.dataScript))},doSelect:function(t){if(this.suggestItems){try{baidu.dom.removeClass(this.suggestItems[this.activeItemIndex],"cur")}catch(e){}switch(t){case 40:try{baidu.dom.addClass(this.suggestItems[++this.activeItemIndex],"cur")}catch(e){this.activeItemIndex=-1}break;case 38:try{baidu.dom.addClass(this.suggestItems[--this.activeItemIndex],"cur")}catch(e){this.activeItemIndex=this.suggestItems.length}}return this.activeItemIndex>=0&&this.activeItemIndex<this.suggestItems.length?this.activeData.Result[this.activeItemIndex].code.replace(/<\/?em>/gi,""):!1}},doMutipleSupport:function(t){var e=new RegExp(",?[^,]*,?$"),i=this;this.config.input.value=this.config.input.value.replace(e,","+t),this.config.input.value=this.config.input.value.replace(/^,/i,""),baidu.on(this.config.form,"submit",function(){i.config.input.value=i.config.input.value.replace(/,$/i,"")})},registEvent:function(){var t=this;this.config.input.onkeydown=function(e){var e=e||window.event,i=e.keyCode;if(40===i||38===i){var s=t.doSelect(i);s&&t.config.mutipleSupport?t.doMutipleSupport(s+","):t.queryKey&&t.doMutipleSupport(t.queryKey);try{e.preventDefault()}catch(n){}}if(13===i){try{window.activeSuggest.suggestPanel.style.display="none"}catch(n){}UserMonitor.send(e,4,{col:"501",pn:6})}},baidu.on(this.config.input,"focus",function(){for(var t=0,e=window.suggestManager.length;e>t;t++)window.suggestManager[t].suggestPanel.style.display="none"}),baidu.on(this.config.input,"mousedown",function(t){var e=t||window.event,i=e.srcElement||e.target;i.value===s?(i.value="",i.style.color="#000"):i.style.color="#000"}),baidu.on(this.config.input,"blur",function(t){var e=t||window.event,i=e.srcElement||e.target;""===baidu.string.trim(i.value)&&(i.value=s,i.style.color="#bbb")}),this.config.input.onkeyup=function(e){if(""!==this.value){window.activeSuggest=t;var e=e||window.event,i=e.keyCode;if(40===i||38===i){try{e.preventDefault()}catch(s){}return!1}if(13===i)return void(window.activeSuggest.suggestPanel.style.display="none");var n=baidu.string.trim(this.value).toLowerCase();if(""===n)return void(t.suggestPanel.style.display="none");t.queryKey=n,t.config.mutipleSupport&&-1!==n.lastIndexOf(",")&&(t.queryKey=n.substr(n.lastIndexOf(",")+1));var a=t.queryKey.replace(/(\..*)$|,$/gi,"");t.getData(a)}else try{window.activeSuggest.suggestPanel.style.display="none"}catch(s){}}},createSuggestPanel:function(){var t=document.createElement("div");t.className="suggest_panel",t.id=this.config.id,t.style.width=this.config.width?this.config.width+"px":this.config.input.offsetWidth-2+"px",this.config.form.style.position="relative",t.style.position="absolute",t.style.left=this.config.input.offsetLeft+"px",t.style.top=this.config.input.offsetTop+this.config.input.offsetHeight-1+"px",t.style.display="none",this.suggestPanel=t,this.config.form.appendChild(t)},start:function(){this.registEvent(),this.createSuggestPanel()}},window.AutoSuggest=t,Baidu=window.Baidu||{},Baidu.Finance=Baidu.Finance||{},Baidu.Finance.Suggest=Baidu.Finance.Suggest||{},Baidu.Finance.Suggest.GetResult=function(t){window.activeSuggest.displayData(t)},baidu.on(document,"click",function(t){var t=t||window.event,e=t.srcElement||t.target;window.activeSuggest&&e!==window.activeSuggest.config.input&&(window.activeSuggest.suggestPanel.style.display="none")}),{init:function(e){baidu.on(window,"load",function(){window.as2=new t(e)})}}}()});
;define("focustop:widget/mod_baijia/mod_baijia.js",function(t,e,n){var a=t("common:widget/lib/tangram/base/base.js");n.exports=tab=function(t){var e=this;e.container=a.dom.g(t.container),e.tags=a.dom.query(".wgt-tab-tag li",e.container),e.ctns=a.dom.query(".wgt-tab-ctns .wgt-tab-ctn",e.container),e.event=t.event||"click",e.active=t.active||"active",e.index=t.start||0,e.setup=function(){e.tags.length;return a.each(e.tags,function(t,n){n!==e.index?(a.hide(e.ctns[n]),a.dom.removeClass(e.tags[n],e.active)):(a.dom.addClass(e.tags[n],e.active),a.show(e.ctns[n])),a.on(t,e.event,function(){e.index!==n&&(a.dom.removeClass(e.tags[e.index],e.active),a.dom.addClass(e.tags[n],e.active),a.hide(e.ctns[e.index]),a.show(e.ctns[n]),e.index=n)})}),e},e.dispose=function(){a.each(e.tags,function(t){a.un(t,e.event)}),a.dom.remove(e.container)}}});
;define("focustop:widget/mod_headline_tab/mod_headline_recommend.js",function(e,n,t){var i=e("common:widget/ui/jquery/jquery.js"),o=function(){function e(){n(),setTimeout(function(){t()},1e3),A=setInterval(F,500)}function n(){L.on("click",".tip-wrapper .mod-headline-tip",y),L.on("click","#tab-login",{from:"recommend"},a),L.on("click","#feeds-more",{from:"recommend"},a),U()||i(window).scroll(o)}function t(){if(q=window.News_passPortPop,!q)var e=setInterval(function(){q=window.News_passPortPop,q&&clearInterval(e)},500)}function o(){P.bounder.min=O.offset().top+O.height(),P.bounder.max=P.bounder.min+C.height()-E.height();var e=D();R=i(window).scrollTop(),S&&1===e&&(R<P.bounder.min?(G.slideDown(P.slidetime),N.slideUp(P.slidetime)):R>=P.bounder.min&&R<P.bounder.max?(G.slideUp(P.slidetime),N.slideDown(P.slidetime)):R>=P.bounder.max&&(G.slideUp(P.slidetime),N.slideUp(P.slidetime)))}function a(e){k()?location.href="http://jian.news.baidu.com":(q.show(),"recommend"===e.data.from&&(window.psptFrom=e.data.from))}function r(e){var n=e?P.firstFlush:P.interval;X=setInterval(p,n)}function s(e){var n=j(e);C.prepend(n)}function d(){i.ajax({url:"/n?m=rddata",type:"GET",dataType:"json",data:{v:"chosen_news",act:"flush",rn:12,t:(new Date).getTime()},timeout:P.timeout}).done(u)}function l(e){var n=c(e);i.ajax({url:"/n?m=rddata&v=log",type:"POST",data:{v:"log",type:"chosen",layout:1,refresh:!0,data:n},timeout:P.timeout})}function c(e){var n=[];return i.each(e,function(e,t){n.push({nid:t.nid,log_mark:t.log_mark})}),n}function u(e){if(0===e.errno){if(e.list&&e.list.length>0){var n=f(e.list);n.length>0&&(m(n),l(n),s(n))}}else _()}function m(e){i.each(e,function(e,n){H.push({nid:n.nid,log_mark:n.log_mark})})}function f(e){var n,t,o=[];return i.each(e,function(a,r){n=r.nid,t=!1,i.each(H,function(e,i){return i.nid===n?(t=!0,!1):void 0}),t||o.push(e[a])}),o}function p(){U()?G.slideDown(500):R>=P.bounder.min&&R<=P.bounder.max?N.slideDown(500):G.slideDown(500),S=!0,clearInterval(X),X=-1}function v(){G.slideUp(500),N.slideUp(500)}function h(e){if(0===e.errno){var n=e.list;n&&n.length>0&&(s(n),m(n),w(),setTimeout(function(){x(),r(!0)},500))}else _()}function w(){g(),b()}function g(){var e=i(".mod-tab-content .mod-tab-loading");e.fadeOut(500)}function b(){setTimeout(function(){E.show()},1e3)}function j(e){var n=[];return n+='<div class="feeds-group">',i.each(e,function(e,t){n+=['<div class="feeds-item">','<div class="feeds-item-detail'+(t.imageurls?" hasImg ":" ")+(e?" ":" notb ")+'">'].join(""),t.imageurls&&(n+=['<p class="feeds-item-pic">','<a href="'+t.display_url+'" target="_blank"  mon="m=53&a=6">','<img src="'+t.imageurls+'" onload="checkimg(this)"/>',"</a>","</p>"].join("")),n+=['<div class="feeds-item-paragraph">',"<h3>",'<a href="'+t.display_url+'" target="_blank" mon="m=53&a=6">'+I(t.title)+"</a>","</h3>",'<p class="feeds-item-text">'+I(t.abs)+"</p>","</div>",'<div class="feeds-item-info">','<p class="labels">'].join(""),t.topic.length>0&&i.each(t.topic,function(e,t){n+=['<span class="label">'+t+"</span>"].join("")}),n+=["</p>","</div>","</div>","</div>"].join("")}),n+="</div>"}function _(e){console.log(e)}function T(){i("html,body").animate({scrollTop:P.bounder.min-40},500),G.slideUp(200),N.slideUp(200)}function y(){M++,M>1&&!k()?(q.show(),window.psptFrom="normal"):(d(),v(),setTimeout(function(){x()},500),S=!1,T(),r(!1))}function k(){var e=window.isLogin;if(!e)var n=setInterval(function(){e=window.isLogin,e&&clearInterval(n)},500);return e}function x(){var e=C.find(".feeds-group:first");e.slideDown(1e3)}function I(e){return e.replace(/\&/g,"&amp;").replace(/\"/g,"&quot;").replace(/\'/g,"&#39;").replace(/</g,"&lt;").replace(/>/g,"&gt;")}function D(){var e=-1;if(O.length>0){var n=O.find("ul li");n.each(function(n,t){var o=i(t);return o.hasClass("active")?(e=n,!1):void 0})}return e}function U(){var e=!!window.ActiveXObject,n=e&&!window.XMLHttpRequest;return n}function F(){var e=i("#tab-login");void 0!==k()&&(k()&&e.addClass("tab-enter-recommend"),e.fadeIn(),clearInterval(A),A=-1)}var P={firstFlush:15e3,interval:3e4,bounder:{min:215,max:1150},timeout:5e3,slidetime:200};window.psptFrom="normal";var q,L=i("#left-col-wrapper"),O=i("#headline-tabs"),C=i("#feeds"),E=i("#feeds-more"),G=i(".mod-tab-content .tip-wrapper"),N=i(".recommend-tip-wrapper .tip-wrapper"),X=-1,A=-1,H=[],M=0,R=0,S=!1,z={};return e(),z.render=function(){i.ajax({url:"/n?m=rddata",type:"GET",dataType:"json",data:{v:"chosen_news",act:"first",rn:12,log:1,t:(new Date).getTime()},timeout:5e3}).done(h).fail(_)},z}();t.exports=o});
;define("focustop:widget/mod_headline_tab/mod_headline_tab.js",function(t,i,s){var e=t("common:widget/ui/jquery/jquery.js");t("common:widget/ui/jquery/jquery.cookie.js")(e);var n=t("focustop:widget/mod_headline_tab/mod_headline_recommend.js"),a=function(t){this.$root=e("#headline-tabs"),this.tabs=this.$root.find("ul li a"),this.tabContents=e(".mod-tab-content .mod-tab-pane"),this.cur=e.cookie("tabindex")||"0",this.cur=parseInt(this.cur,10),this.cur=t,this.$curTab=this.tabs.eq(this.cur),this.lock=!1,this.isFirstRequest=!0};a.fn=a.prototype,a.fn.init=function(){this._initEvent(),this.initCurTab(this.cur)},a.fn._initEvent=function(){this.tabs.click(e.proxy(this.swiftTab,this)),this.tabs.click(e.proxy(this.swiftTab,this))},a.fn.swiftTab=function(t){var i=e(t.currentTarget),s=i.parents("li"),n=i.attr("data-control"),a=e("#"+n),o=e("#"+this.$curTab.attr("data-control"));this.lock||n!==this.$curTab.attr("data-control")&&(this.lock=!0,"pane-recommend"===n?(this.sendLog(1),this.isFirstRequest&&this.requestFirstScreenData()):"pane-news"===n&&this.sendLog(0),this.$curTab.parents("li").removeClass("active"),s.addClass("active"),this.cur=0===this.cur?1:0,e.cookie("tabindex",this.cur),this.swiftTabContent(o,a),this.$curTab=i)},a.fn.swiftTabContent=function(t,i){var s=this;this.isIe6()?(this.tabContents.hide(),i.show(),this.lock=!1):t.fadeOut(200,function(){i.fadeIn(200,function(){s.tabContents.removeClass("active"),i.addClass("active"),s.lock=!1})})},a.fn.isIe6=function(){var t=!!window.ActiveXObject,i=t&&!window.XMLHttpRequest;return i},a.fn.requestFirstScreenData=function(){n.render(),this.isFirstRequest&&(this.isFirstRequest=!1)},a.fn.initCurTab=function(){var t=this.cur;1===t&&(n.render(),this.isFirstRequest=!1)},a.fn.sendLog=function(t){var i=53,s=window.NEWSLOGURL+"?pid=107&m="+i+"&a="+t+"&t="+(new Date).getTime();e("<img/>").attr("src",s)},s.exports=a});
;define("focustop:widget/mod_pagination/mod_pagination.js",function(t,n,a){var e=function(t,n){this.$target=$(t),this.$root=$(".mod-pagenation"),this.btns={forwardBtn:$(".turn-forward"),backwardBtn:$(".turn-backward"),pagenations:$(".pagenation")},this.cur=0,this.intervalId=0,this.option={pageCount:n,interval:5e3}};e.fn=e.prototype,e.fn.init=function(){this._initEvent(),this.startCarousel()},e.fn._initEvent=function(){this.$root.delegate(".turn-btn","click",$.proxy(this.goTo,this,"preOrNext")),this.$root.delegate(".pagenation","mouseover",$.proxy(this.goTo,this,"certainPage")),this.$target.on("mouseenter",$.proxy(this.stopCarousel,this)),this.$target.on("mouseleave",$.proxy(this.startCarousel,this))},e.fn.goTo=function(t,n){var a=$(n.currentTarget);if("preOrNext"===t){var e,r=a.attr("class");e=/forward/.test(r)?"forward":"backward",this.goToPreOrNext(e)}if("certainPage"===t){var i=parseInt(a.attr("data-pn"));this.goToCertainPage(i)}},e.fn.goToPreOrNext=function(t){var n,a,e=/left\s*:\s*([-]?[0-9]+)/g,r=this.$target.attr("style"),i=e.exec(r);$.isArray(i)?(n=parseInt(i[1]),a=Math.abs(n)/100):n=a=0,"forward"===t&&(a+=1),"backward"===t&&(a-=1),this.touchBoundary(a)||(this.bidClick(a),this.$target.css("left",100*-a+"%"),this.changeTabStyleWhenJump(a))},e.fn.goToCertainPage=function(t){this.$target.css("left",100*-t+"%"),this.changeTabStyleWhenJump(t),this.bidClick(t)},e.fn.touchBoundary=function(t){var n=this.getLen()-1,a=!1;return(t>n||0>t)&&(a=!0),a},e.fn.getLen=function(){return this.btns.pagenations.length},e.fn.changeTabStyleWhenJump=function(t){var n=this.btns.pagenations.eq(this.cur),a=this.btns.pagenations.eq(t);n.removeClass("cur"),a.addClass("cur"),this.cur=t},e.fn.bidClick=function(t){var n=this.getLen();0===t?(this.btns.backwardBtn.addClass("bid"),this.btns.forwardBtn.removeClass("bid")):t===n-1?(this.btns.forwardBtn.addClass("bid"),this.btns.backwardBtn.removeClass("bid")):(this.btns.forwardBtn.removeClass("bid"),this.btns.backwardBtn.removeClass("bid"))},e.fn.startCarousel=function(){var t=this;this.intervalId=setInterval(function(){var n=(t.cur+1)%t.option.pageCount;t.goToCertainPage(n),t.cur=n},this.option.interval)},e.fn.stopCarousel=function(){clearInterval(this.intervalId)},a.exports=e});