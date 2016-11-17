Action()
{

	web_url("live.gif", 
		"URL=http://www.g-fox.cn/live.gif?channelid=full.firefox.com.cn&fuod=true&fxversion=19.0.2&ceversion=2013.3&ver=4&actcode4=%7B2a100dca-5c93-4177-ae5b-8f62ec88e695%7D&uk=%7B5760b364-24e3-4deb-9069-1c9cd209c498%7D&dk=RSm3CvmslVzhlS0tFurXeFgRld4pIF6M9DMxr1QXve4UQvj4/lqFYw==&prevsessionlen=1&locale=zh-CN&moexts=cemigration,coba,cpmanager,livemargins,tabimprovelite,cehomepage,quicklaunch,share_all_cn", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("adu.gif", 
		"URL=http://adu.g-fox.cn/adu.gif?channelid=full.firefox.com.cn&fxversion=19.0.2&ceversion=2013.3&ver=1_0&pk=%7B2a100dca-5c93-4177-ae5b-8f62ec88e695%7D&uk=%7B5760b364-24e3-4deb-9069-1c9cd209c498%7D&locale=zh-CN&moexts=cemigration,coba,cpmanager,livemargins,tabimprovelite,cehomepage,quicklaunch,share_all_cn&now=1468198691041", 
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
		"Snapshot=t3.inf", 
		LAST);

	web_url("appcenter.gif", 
		"URL=http://addons.g-fox.cn/appcenter.gif?t=0&a=002&d=0&r=0.22007301272623014&cid=full.firefox.com.cn", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_cookie("__utma=265356880.1632274347.1466129867.1467177729.1467779062.11; DOMAIN=api.app.mozilla.com.cn");

	web_add_cookie("__utmz=265356880.1466129867.1.1.utmcsr=(direct)|utmccn=(direct)|utmcmd=(none); DOMAIN=api.app.mozilla.com.cn");

	web_add_cookie("uid=05e0lVdRRXAaIZpPAxOEAg==; DOMAIN=api.app.mozilla.com.cn");

	web_url("inner", 
		"URL=http://api.app.mozilla.com.cn/inner/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://addons.g-fox.cn/appcenter.gif?t=0&a=001&d=tab-install&r=0.8233408489896152&cid=full.firefox.com.cn", "Referer=", ENDITEM, 
		"Url=../static/images/banner/douban.jpg?v=7d440", ENDITEM, 
		"Url=http://www.google-analytics.com/ga.js", ENDITEM, 
		"Url=../static/images/banner/pptv.jpg?v=67639", ENDITEM, 
		"Url=../static/images/banner/meitu.jpg?v=c88c7", ENDITEM, 
		"Url=../static/images/banner/gleasy.jpg?v=91cdd", ENDITEM, 
		"Url=http://i1.7k7kimg.cn/7k7knewyeah/fl_9/ipad/5770.jpg", ENDITEM, 
		"Url=http://i4.7k7kimg.cn/7k7knewyeah/fl_8/ipad2/26096.jpg", ENDITEM, 
		"Url=http://i5.7k7k.com/7k7knewyeah/fl_9/20110512/bird.jpg", ENDITEM, 
		"Url=http://i2.7k7kimg.cn/7k7knewyeah/fl_8/ipad2/33092.jpg", ENDITEM, 
		"Url=http://i1.7k7kimg.cn/7k7knewyeah/fl_8/ipad2/20970.jpg", ENDITEM, 
		"Url=../static/images/banner/douban_tb.png?v=11f6b", ENDITEM, 
		"Url=../static/images/banner/pptv_tb.png?v=7fed2", ENDITEM, 
		"Url=../static/images/banner/meitu_tb.png?v=88c41", ENDITEM, 
		"Url=http://www.google-analytics.com/r/__utm.gif?utmwv=5.6.7&utms=1&utmn=610477660&utmhn=api.app.mozilla.com.cn&utmcs=UTF-8&utmsr=1366x768&utmvp=1123x551&utmsc=24-bit&utmul=zh-cn&utmje=0&utmfl=-&utmdt=%E7%81%AB%E7%8B%90%E5%BA%94%E7%94%A8%E4%B8%AD%E5%BF%83&utmhid=1312574988&utmr=-&utmp=%2Finner%2F&utmht=1468198714710&utmac=UA-2826582-7&utmcc=__utma%3D265356880.1632274347.1466129867.1467779062.1468198715.12%3B%2B__utmz%3D265356880.1466129867.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)"
		"%3B&utmjid=964587742&utmredir=1&utmu=qBAAAAAAAAAAAAAAAAAAAAAE~", ENDITEM, 
		"Url=../static/images/banner/gleasy_tb.png?v=08b6c", ENDITEM, 
		"Url=../static/upload/2012/10/11/13499428001666449.png", ENDITEM, 
		"Url=../static/upload/2011/11/11/13210067715017025.png", ENDITEM, 
		"Url=../static/upload/2012/08/02/13438842499449681.png", ENDITEM, 
		"Url=../static/upload/2012/02/22/13298848054222287.jpg", ENDITEM, 
		"Url=../static/upload/2012/03/19/13321528982310748.png", ENDITEM, 
		"Url=../static/upload/2013/07/09/13733496364482841.png", ENDITEM, 
		"Url=../static/upload/2013/04/18/13662527639145807.png", ENDITEM, 
		"Url=../static/upload/2013/04/16/13661040564010865.png", ENDITEM, 
		"Url=../static/upload/2013/03/11/13629817049423205.png", ENDITEM, 
		"Url=../static/upload/2013/03/11/13629815871148399.png", ENDITEM, 
		"Url=../static/upload/2013/03/11/13629814495190976.png", ENDITEM, 
		"Url=../static/upload/2013/03/11/13629814929646712.png", ENDITEM, 
		"Url=../static/upload/2013/03/06/13625578236520762.png", ENDITEM, 
		"Url=../static/upload/2011/11/11/13209857292129241.gif", ENDITEM, 
		LAST);

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
		"Url=http://i.g-fox.cn/notification/coba_official.json", "Referer=", ENDITEM, 
		"Url=http://i.firefoxchina.cn/bookmarks/updates-22.json", "Referer=", ENDITEM, 
		"Url=http://i.firefoxchina.cn/newtab/master-ii/quickdialdata-0.json", "Referer=", ENDITEM, 
		"Url=http://api.app.mozilla.com.cn/static/images/banner/bg.png", "Referer=http://api.app.mozilla.com.cn/static/style/appcenter.css?v=59118", ENDITEM, 
		"Url=http://api.app.mozilla.com.cn/static/images/html5.png", "Referer=http://api.app.mozilla.com.cn/static/style/appcenter.css?v=59118", ENDITEM, 
		"Url=http://api.app.mozilla.com.cn/static/images/score.png", "Referer=http://api.app.mozilla.com.cn/static/style/appcenter.css?v=59118", ENDITEM, 
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