Action()
{


	web_add_cookie("HE44_2132_saltkey=OIroZHI2; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastvisit=1466483900; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_ulastactivity=1b99UEDN%2FrOgSJYOdUlEyJb%2Fe3iZfUDxg4o7L%2BZQkwDt1O%2FJYmzP; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_nofavfid=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastcheckfeed=2%7C1466492472; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_editormode_e=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_smile=1D1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_visitedfid=2; DOMAIN=192.168.182.88");

	web_add_cookie("uid=38oGFVdjXZYvzlh6GsMOAg==; DOMAIN=i.firefoxchina.cn");

	web_add_cookie("Hm_lvt_dd4738b5fb302cb062ef19107df5d2e4=1467177733,1467178967,1467179795,1467780467; DOMAIN=i.firefoxchina.cn");

	web_add_cookie("uid=05e0lVdZKkAmRCdqAwQaAg==; DOMAIN=api.app.mozilla.com.cn");

	web_add_cookie("HE44_2132_lastact=1468198703%09forum.php%09; DOMAIN=192.168.182.88");

	web_url("forum.php", 
		"URL=http://192.168.182.88/forum.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/image/common/pn.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/newarow.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/background.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/switch_width.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/px.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/nv.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/chart.png", "Referer=http://192.168.182.88/data/cache/style_1_forum_index.css?G0S", ENDITEM, 
		"Url=/static/image/common/search.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/qmenu.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/nv_a.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/pt_item.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/titlebg.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/scrolltop.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(26);

	web_link("Á¢¼´×¢²á", 
		"Text=Á¢¼´×¢²á", 
		"Ordinal=1", 
		"Snapshot=t7.inf", 
		LAST);

	lr_think_time(12);

	web_url("forum.php_2", 
		"URL=http://192.168.182.88/forum.php?mod=ajax&inajax=yes&infloat=register&handlekey=register&ajaxmenu=1&action=checkusername&username=9108013", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/member.php?mod=register", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/image/common/check_right.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/passlevel.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/px_e.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/js/ajax.js?G0S", "Referer=http://192.168.182.88/member.php?mod=register", ENDITEM, 
		LAST);

	web_url("forum.php_3", 
		"URL=http://192.168.182.88/forum.php?mod=ajax&inajax=yes&infloat=register&handlekey=register&ajaxmenu=1&action=checkemail&email=9108013@163.com", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/member.php?mod=register", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("HE44_2132_lastact=1468198768%09forum.php%09ajax; DOMAIN=192.168.182.88");

	lr_think_time(6);

	web_submit_data("member.php", 
		"Action=http://192.168.182.88/member.php?mod=register&inajax=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/member.php?mod=register", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=regsubmit", "Value=yes", ENDITEM, 
		"Name=formhash", "Value=9dc4a0c6", ENDITEM, 
		"Name=referer", "Value=http://192.168.182.88/forum.php", ENDITEM, 
		"Name=activationauth", "Value=", ENDITEM, 
		"Name=Zn77wc", "Value=9108013", ENDITEM, 
		"Name=xHHqQA", "Value=123456", ENDITEM, 
		"Name=a5J1Z5", "Value=123456", ENDITEM, 
		"Name=JnxANS", "Value=9108013@163.com", ENDITEM, 
		EXTRARES, 
		"Url=/static/image/common/right.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		LAST);

	web_add_cookie("HE44_2132_lastact=1468198819%09forum.php%09; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_noticeTitle=1; DOMAIN=192.168.182.88");

	web_add_cookie("tjpctrl=1468200620196; DOMAIN=192.168.182.88");

	web_url("forum.php_4", 
		"URL=http://192.168.182.88/forum.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.182.88/member.php?mod=register", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/image/common/switch_style.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/arrwd.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/user_online.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/notice.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/js/common_extra.js?G0S", ENDITEM, 
		"Url=/static/image/common/popupcredit_bg.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=http://cp.discuz.qq.com/tips/get?rand=119&s_id=&product_version=X3.2&product_release=&fix_bug=&is_founder=&s_url=http%3A%2F%2F192.168.182.88%2F&last_send_time=&ts=1468198819&sig=&admin_id=0&group_id=10&open_id=&uid=14&callback=discuzTipsCallback", ENDITEM, 
		"Url=/static/image/common/ico_notice.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/close.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		LAST);

	return 0;
}