Action()
{

	web_url("live.gif", 
		"URL=http://www.g-fox.cn/live.gif?channelid=full.firefox.com.cn&fuod=true&fxversion=19.0.2&ceversion=2013.3&ver=4&actcode4=%7B2a100dca-5c93-4177-ae5b-8f62ec88e695%7D&uk=%7B5760b364-24e3-4deb-9069-1c9cd209c498%7D&dk=RSm3CvmslVzhlS0tFurXeFgRld4pIF6M9DMxr1QXve4UQvj4/lqFYw==&prevsessionlen=114&locale=zh-CN&moexts=cemigration,coba,cpmanager,livemargins,tabimprovelite,cehomepage,quicklaunch,share_all_cn", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("adu.gif", 
		"URL=http://adu.g-fox.cn/adu.gif?channelid=full.firefox.com.cn&fxversion=19.0.2&ceversion=2013.3&ver=1_0&pk=%7B2a100dca-5c93-4177-ae5b-8f62ec88e695%7D&uk=%7B5760b364-24e3-4deb-9069-1c9cd209c498%7D&locale=zh-CN&moexts=cemigration,coba,cpmanager,livemargins,tabimprovelite,cehomepage,quicklaunch,share_all_cn&now=1466487488452", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("tk.gif", 
		"URL=http://addons.g-fox.cn/tk.gif?when=run", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		LAST);

	web_add_cookie("__utma=265356880.1632274347.1466129867.1466136152.1466138475.3; DOMAIN=api.app.mozilla.com.cn");

	web_add_cookie("__utmz=265356880.1466129867.1.1.utmcsr=(direct)|utmccn=(direct)|utmcmd=(none); DOMAIN=api.app.mozilla.com.cn");

	web_url("inner", 
		"URL=http://api.app.mozilla.com.cn/inner/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://addons.g-fox.cn/appcenter.gif?t=0&a=002&d=0&r=0.25488466878728333&cid=full.firefox.com.cn", "Referer=", ENDITEM, 
		"Url=http://www.google-analytics.com/ga.js", ENDITEM, 
		"Url=http://www.google-analytics.com/r/__utm.gif?utmwv=5.6.7&utms=1&utmn=1020875885&utmhn=api.app.mozilla.com.cn&utmcs=UTF-8&utmsr=1366x768&utmvp=1123x525&utmsc=24-bit&utmul=zh-cn&utmje=0&utmfl=-&utmdt=%E7%81%AB%E7%8B%90%E5%BA%94%E7%94%A8%E4%B8%AD%E5%BF%83&utmhid=1971920051&utmr=-&utmp=%2Finner%2F&utmht=1466487505673&utmac=UA-2826582-7&utmcc=__utma%3D265356880.1632274347.1466129867.1466138475.1466487506.4%3B%2B__utmz%3D265356880.1466129867.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)"
		"%3B&utmjid=764350463&utmredir=1&utmu=qBAAAAAAAAAAAAAAAAAAAAAE~", ENDITEM, 
		LAST);

	web_add_cookie("uid=38oGFVdjXZYvzlh6GsMOAg==; DOMAIN=i.firefoxchina.cn");

	web_add_cookie("Hm_lvt_dd4738b5fb302cb062ef19107df5d2e4=1466136155,1466138477; DOMAIN=i.firefoxchina.cn");

	web_add_cookie("HE44_2132_lastact=1466487500%09member.php%09register; DOMAIN=192.168.182.88");

	web_url("member.php", 
		"URL=http://192.168.182.88/member.php?mod=register", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://i.g-fox.cn/notification/coba_official.json", "Referer=", ENDITEM, 
		"Url=http://addons.g-fox.cn/appcenter.gif?t=0&a=001&d=tab-install&r=0.14515886561809932&cid=full.firefox.com.cn", "Referer=", ENDITEM, 
		"Url=http://addons.g-fox.cn/notification.gif?r=0.4368094678715063&c=notification&t=daytip&d=share_all_cn%40mozillaonline.com__share-all-cn-bar&a=show&cid=full.firefox.com.cn", "Referer=", ENDITEM, 
		"Url=http://i.firefoxchina.cn/bookmarks/updates-22.json", "Referer=", ENDITEM, 
		"Url=http://i.firefoxchina.cn/newtab/master-ii/quickdialdata-0.json", "Referer=", ENDITEM, 
		"Url=/static/image/common/background.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/switch_width.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/nv.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/qmenu.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/search.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/nv_a.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/newarow.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/px.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/pn.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		LAST);

	web_add_cookie("HE44_2132_lastact=1466487505%09home.php%09misc; DOMAIN=192.168.182.88");

	web_url("forum.php", 
		"URL=http://192.168.182.88/forum.php?mod=ajax&inajax=yes&infloat=register&handlekey=register&ajaxmenu=1&action=checkusername&username=9108001", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/member.php?mod=register", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/image/common/scrolltop.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=http://addons.g-fox.cn/notification.gif?r=0.9771505181143455&c=notification&t=daytip&d=share_all_cn%40mozillaonline.com__share-all-cn-bar&a=auto_hide&cid=full.firefox.com.cn", "Referer=", ENDITEM, 
		"Url=/static/image/common/check_right.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/passlevel.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=/static/image/common/px_e.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/js/ajax.js?G0S", "Referer=http://192.168.182.88/member.php?mod=register", ENDITEM, 
		LAST);

	web_url("forum.php_2", 
		"URL=http://192.168.182.88/forum.php?mod=ajax&inajax=yes&infloat=register&handlekey=register&ajaxmenu=1&action=checkemail&email=9108001@163.com", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/member.php?mod=register", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("HE44_2132_lastact=1466487512%09forum.php%09ajax; DOMAIN=192.168.182.88");

	lr_think_time(6);

	web_submit_data("member.php_2", 
		"Action=http://192.168.182.88/member.php?mod=register&inajax=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/member.php?mod=register", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=regsubmit", "Value=yes", ENDITEM, 
		"Name=formhash", "Value=9dc4a0c6", ENDITEM, 
		"Name=referer", "Value=http://192.168.182.88/./", ENDITEM, 
		"Name=activationauth", "Value=", ENDITEM, 
		"Name=hoboW6", "Value=9108001", ENDITEM, 
		"Name=X23LFG", "Value=123456", ENDITEM, 
		"Name=R7EJo7", "Value=123456", ENDITEM, 
		"Name=MVlBY0", "Value=9108001@163.com", ENDITEM, 
		EXTRARES, 
		"Url=/static/image/common/right.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		LAST);

	web_add_cookie("HE44_2132_lastact=1466487550%09forum.php%09; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_noticeTitle=1; DOMAIN=192.168.182.88");

	web_add_cookie("tjpctrl=1466489351504; DOMAIN=192.168.182.88");

	web_url("192.168.182.88", 
		"URL=http://192.168.182.88/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.182.88/member.php?mod=register", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/image/common/switch_style.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/notice.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/pt_item.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/chart.png", "Referer=http://192.168.182.88/data/cache/style_1_forum_index.css?G0S", ENDITEM, 
		"Url=/static/image/common/user_online.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/titlebg.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/arrwd.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/js/common_extra.js?G0S", "Referer=http://192.168.182.88/forum.php", ENDITEM, 
		"Url=/static/image/common/popupcredit_bg.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=http://cp.discuz.qq.com/tips/get?rand=2113&s_id=&product_version=X3.2&product_release=&fix_bug=&is_founder=&s_url=http%3A%2F%2F192.168.182.88%2F&last_send_time=&ts=1466487550&sig=&admin_id=0&group_id=10&open_id=&uid=2&callback=discuzTipsCallback", "Referer=http://192.168.182.88/forum.php", ENDITEM, 
		"Url=/static/image/common/ico_notice.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/close.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		LAST);

	return 0;
}