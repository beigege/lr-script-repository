Action()
{

		

	web_add_cookie("HE44_2132_saltkey=OIroZHI2; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastvisit=1466483900; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_sid=PWnaGf; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastact=1466487550%09home.php%09spacecp; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_ulastactivity=1b99UEDN%2FrOgSJYOdUlEyJb%2Fe3iZfUDxg4o7L%2BZQkwDt1O%2FJYmzP; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_nofavfid=1; DOMAIN=192.168.182.88");

	web_add_cookie("tjpctrl=1466489351504; DOMAIN=192.168.182.88");

	//web_add_cookie("uid=38oGFVdjXZYvzlh6GsMOAg==; DOMAIN=i.firefoxchina.cn");

	//web_add_cookie("Hm_lvt_dd4738b5fb302cb062ef19107df5d2e4=1466136155,1466138477; DOMAIN=i.firefoxchina.cn");

	web_add_cookie("HE44_2132_lastact=1466488895%09forum.php%09; DOMAIN=192.168.182.88");

	web_url("forum.php", 
		"URL=http://192.168.182.88/forum.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://addons.g-fox.cn/appcenter.gif?t=0&a=001&d=tab-install&r=0.1879624448269147&cid=full.firefox.com.cn", "Referer=", ENDITEM, 
		"Url=http://i.firefoxchina.cn/newtab/master-ii/quickdialdata-0.json", "Referer=", ENDITEM, 
		"Url=http://i.firefoxchina.cn/bookmarks/updates-22.json", "Referer=", ENDITEM, 
		"Url=/static/image/common/titlebg.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/chart.png", "Referer=http://192.168.182.88/data/cache/style_1_forum_index.css?G0S", ENDITEM, 
		"Url=/static/image/common/background.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/switch_width.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/search.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/pt_item.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/nv.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/pn.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/qmenu.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/nv_a.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/newarow.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/px.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/scrolltop.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/js/ajax.js?G0S", ENDITEM, 
		LAST);

	lr_start_transaction("login");

	web_submit_data("member.php", 
		"Action=http://192.168.182.88/member.php?mod=logging&action=login&loginsubmit=yes&infloat=yes&lssubmit=yes&inajax=1", 
		"Method=POST", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/forum.php", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=fastloginfield", "Value=username", ENDITEM, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=quickforward", "Value=yes", ENDITEM, 
		"Name=handlekey", "Value=ls", ENDITEM, 
		LAST);

	web_add_cookie("HE44_2132_lastact=1466488917%09forum.php%09; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_noticeTitle=1; DOMAIN=192.168.182.88");

	web_url("forum.php_2", 
		"URL=http://192.168.182.88/forum.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.182.88/forum.php", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/image/common/switch_style.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/user_online.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/arrwd.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/notice.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/js/ajax.js?G0S", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

    
	web_find("web_find",
		"What=�˳�",
		LAST);


	lr_end_transaction("login", LR_AUTO);

	web_url("misc.php", 
		"URL=http://192.168.182.88/misc.php?mod=patch&action=ipnotice&_r=0.49128864272567696&inajax=1&ajaxtarget=ip_notice", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/forum.php", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/image/common/ico_notice.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/close.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		LAST);

	return 0;
}