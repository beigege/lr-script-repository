/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 8859
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("live.gif", 
		"URL=http://www.g-fox.cn/live.gif?channelid=full.firefox.com.cn&fxversion=19.0.2&ceversion=2013.3&ver=4&actcode4=%7B2a100dca-5c93-4177-ae5b-8f62ec88e695%7D&uk=%7B5760b364-24e3-4deb-9069-1c9cd209c498%7D&dk=RSm3CvmslVzhlS0tFurXeFgRld4pIF6M9DMxr1QXve4UQvj4/lqFYw==&prevsessionlen=0&locale=zh-CN&moexts=cemigration,coba,cpmanager,livemargins,tabimprovelite,cehomepage,quicklaunch,share_all_cn", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("adu.gif", 
		"URL=http://adu.g-fox.cn/adu.gif?channelid=full.firefox.com.cn&fxversion=19.0.2&ceversion=2013.3&ver=1_0&pk=%7B2a100dca-5c93-4177-ae5b-8f62ec88e695%7D&uk=%7B5760b364-24e3-4deb-9069-1c9cd209c498%7D&locale=zh-CN&moexts=cemigration,coba,cpmanager,livemargins,tabimprovelite,cehomepage,quicklaunch,share_all_cn&now=1466489497835", 
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

	web_url("appcenter.gif", 
		"URL=http://addons.g-fox.cn/appcenter.gif?t=0&a=002&d=0&r=0.37047642813636394&cid=full.firefox.com.cn", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t3.inf", 
		LAST);

	web_add_cookie("__utma=265356880.1632274347.1466129867.1466138475.1466487506.4; DOMAIN=api.app.mozilla.com.cn");

	web_add_cookie("__utmz=265356880.1466129867.1.1.utmcsr=(direct)|utmccn=(direct)|utmcmd=(none); DOMAIN=api.app.mozilla.com.cn");

	web_add_cookie("__utmb=265356880.2.10.1466487506; DOMAIN=api.app.mozilla.com.cn");

	web_add_cookie("__utmt=1; DOMAIN=api.app.mozilla.com.cn");

	web_url("inner", 
		"URL=http://api.app.mozilla.com.cn/inner/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://www.google-analytics.com/ga.js", ENDITEM, 
		"Url=http://www.google-analytics.com/r/__utm.gif?utmwv=5.6.7&utms=3&utmn=1395274557&utmhn=api.app.mozilla.com.cn&utmcs=UTF-8&utmsr=1366x768&utmvp=1123x525&utmsc=24-bit&utmul=zh-cn&utmje=0&utmfl=-&utmdt=%E7%81%AB%E7%8B%90%E5%BA%94%E7%94%A8%E4%B8%AD%E5%BF%83&utmhid=857139813&utmr=-&utmp=%2Finner%2F&utmht=1466489514413&utmac=UA-2826582-7&utmcc=__utma%3D265356880.1632274347.1466129867.1466138475.1466487506.4%3B%2B__utmz%3D265356880.1466129867.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)"
		"%3B&utmjid=1158145040&utmredir=1&utmu=qBAAAAAAAAAAAAAAAAAAAAAE~", ENDITEM, 
		LAST);

	web_add_cookie("HE44_2132_saltkey=OIroZHI2; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastvisit=1466483900; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_sid=LfuwUu; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastact=1466488917%09misc.php%09patch; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_ulastactivity=1b99UEDN%2FrOgSJYOdUlEyJb%2Fe3iZfUDxg4o7L%2BZQkwDt1O%2FJYmzP; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_nofavfid=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastcheckfeed=2%7C1466488917; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_noticeTitle=1; DOMAIN=192.168.182.88");

	web_add_cookie("uid=38oGFVdjXZYvzlh6GsMOAg==; DOMAIN=i.firefoxchina.cn");

	web_add_cookie("Hm_lvt_dd4738b5fb302cb062ef19107df5d2e4=1466136155,1466138477; DOMAIN=i.firefoxchina.cn");

	web_add_cookie("HE44_2132_lastact=1466489509%09forum.php%09; DOMAIN=192.168.182.88");

	web_url("forum.php", 
		"URL=http://192.168.182.88/forum.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://addons.g-fox.cn/appcenter.gif?t=0&a=001&d=tab-install&r=0.34117054290721816&cid=full.firefox.com.cn", "Referer=", ENDITEM, 
		"Url=http://i.firefoxchina.cn/newtab/master-ii/quickdialdata-0.json", "Referer=", ENDITEM, 
		"Url=/static/image/common/background.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/switch_width.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/search.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/pt_item.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/titlebg.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/chart.png", "Referer=http://192.168.182.88/data/cache/style_1_forum_index.css?G0S", ENDITEM, 
		"Url=/static/image/common/nv.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/qmenu.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/pn.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/px.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/scrolltop.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/nv_a.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/newarow.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/js/ajax.js?G0S", ENDITEM, 
		LAST);

	web_submit_data("member.php", 
		"Action=http://192.168.182.88/member.php?mod=logging&action=login&loginsubmit=yes&infloat=yes&lssubmit=yes&inajax=1", 
		"Method=POST", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/forum.php", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=fastloginfield", "Value=username", ENDITEM, 
		"Name=username", "Value=9108001", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=quickforward", "Value=yes", ENDITEM, 
		"Name=handlekey", "Value=ls", ENDITEM, 
		LAST);

	web_add_cookie("HE44_2132_checkfollow=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastact=1466489529%09forum.php%09; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_checkpm=1; DOMAIN=192.168.182.88");

	web_add_cookie("MANYOU_SESSIONID=792bec0370e2e523c9d19e56c24f642e; DOMAIN=cp.discuz.qq.com");

	web_add_cookie("MANYOU_AUTH=c4515fd2d0bf246ecad839be64a2d6ea; DOMAIN=cp.discuz.qq.com");

	web_add_cookie("MANYOU_DATA=yv9AWhFPhBfwJGS%2FuNzJBgpJkGVPY1v%2BW55B4AEo6x6y2FWt7a3JiIvWE1MZK0qThsWvpPHJORcwYWowUINbKw%3D%3D; DOMAIN=cp.discuz.qq.com");

	web_url("forum.php_2", 
		"URL=http://192.168.182.88/forum.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.182.88/forum.php", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/image/common/switch_style.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/notice.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/user_online.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/arrwd.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=/static/image/common/ico_notice.png", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/close.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=http://cp.discuz.qq.com/tips/get?rand=2114&s_id=&product_version=X3.2&product_release=&fix_bug=&is_founder=&s_url=http%3A%2F%2F192.168.182.88%2F&last_send_time=&ts=1466489529&sig=&admin_id=0&group_id=10&open_id=&uid=2&callback=discuzTipsCallback", ENDITEM, 
		LAST);

	return 0;
}
