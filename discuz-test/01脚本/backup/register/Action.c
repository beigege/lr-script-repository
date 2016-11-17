Action()
{

	

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

	lr_start_transaction("register");

	web_url("forum.php", 
		"URL=http://192.168.182.88/forum.php?mod=ajax&inajax=yes&infloat=register&handlekey=register&ajaxmenu=1&action=checkusername&username={username}", 
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
		"URL=http://192.168.182.88/forum.php?mod=ajax&inajax=yes&infloat=register&handlekey=register&ajaxmenu=1&action=checkemail&email={username}@163.com", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/member.php?mod=register", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("HE44_2132_lastact=1466487512%09forum.php%09ajax; DOMAIN=192.168.182.88");

	//lr_think_time(6);

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
		"Name=hoboW6", "Value={username}", ENDITEM, 
		"Name=X23LFG", "Value=123456", ENDITEM, 
		"Name=R7EJo7", "Value=123456", ENDITEM, 
		"Name=MVlBY0", "Value={username}@163.com", ENDITEM, 
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

	lr_end_transaction("register", LR_AUTO);

	return 0;
}