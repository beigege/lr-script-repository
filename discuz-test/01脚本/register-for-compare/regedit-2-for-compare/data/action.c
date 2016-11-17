Action()
{

	web_url("live.gif", 
		"URL=http://www.g-fox.cn/live.gif?channelid=full.firefox.com.cn&fxversion=19.0.2&ceversion=2013.3&ver=4&actcode4=%7B2a100dca-5c93-4177-ae5b-8f62ec88e695%7D&uk=%7B5760b364-24e3-4deb-9069-1c9cd209c498%7D&dk=RSm3CvmslVzhlS0tFurXeFgRld4pIF6M9DMxr1QXve4UQvj4/lqFYw==&prevsessionlen=2&locale=zh-CN&moexts=cemigration,coba,cpmanager,livemargins,tabimprovelite,cehomepage,quicklaunch,share_all_cn", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("adu.gif", 
		"URL=http://adu.g-fox.cn/adu.gif?channelid=full.firefox.com.cn&fxversion=19.0.2&ceversion=2013.3&ver=1_0&pk=%7B2a100dca-5c93-4177-ae5b-8f62ec88e695%7D&uk=%7B5760b364-24e3-4deb-9069-1c9cd209c498%7D&locale=zh-CN&moexts=cemigration,coba,cpmanager,livemargins,tabimprovelite,cehomepage,quicklaunch,share_all_cn&now=1468198993234", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("appcenter.gif", 
		"URL=http://addons.g-fox.cn/appcenter.gif?t=0&a=002&d=0&r=0.829590062216429&cid=full.firefox.com.cn", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=", 
		"Snapshot=t3.inf", 
		LAST);

	web_add_cookie("__utma=265356880.1632274347.1466129867.1467779062.1468198715.12; DOMAIN=api.app.mozilla.com.cn");

	web_add_cookie("__utmz=265356880.1466129867.1.1.utmcsr=(direct)|utmccn=(direct)|utmcmd=(none); DOMAIN=api.app.mozilla.com.cn");

	web_add_cookie("uid=05e0lVdodyMmRCdqAwy1Ag==; DOMAIN=api.app.mozilla.com.cn");

	web_add_cookie("__utmb=265356880.1.10.1468198715; DOMAIN=api.app.mozilla.com.cn");

	web_add_cookie("__utmt=1; DOMAIN=api.app.mozilla.com.cn");

	web_url("inner", 
		"URL=http://api.app.mozilla.com.cn/inner/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://addons.g-fox.cn/tk.gif?when=run", "Referer=", ENDITEM, 
		"Url=http://www.google-analytics.com/__utm.gif?utmwv=5.6.7&utms=2&utmn=734671847&utmhn=api.app.mozilla.com.cn&utmcs=UTF-8&utmsr=1366x768&utmvp=1123x551&utmsc=24-bit&utmul=zh-cn&utmje=0&utmfl=-&utmdt=%E7%81%AB%E7%8B%90%E5%BA%94%E7%94%A8%E4%B8%AD%E5%BF%83&utmhid=1940812525&utmr=-&utmp=%2Finner%2F&utmht=1468199006030&utmac=UA-2826582-7&utmcc=__utma%3D265356880.1632274347.1466129867.1467779062.1468198715.12%3B%2B__utmz%3D265356880.1466129867.1.1.utmcsr%3D(direct)%7Cutmccn%3D(direct)%7Cutmcmd%3D(none)"
		"%3B&utmjid=&utmu=qBAAAAAAAAAAAAAAAAAAAAAE~", ENDITEM, 
		LAST);

	web_add_cookie("HE44_2132_saltkey=OIroZHI2; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastvisit=1466483900; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_ulastactivity=3138hCsnSz4CV7BngdwZRgS92bTfXScRYAgvscvdj4Objjk7H2o1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_nofavfid=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastcheckfeed=2%7C1466492472; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_editormode_e=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_smile=1D1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_visitedfid=2; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_sid=N64vvC; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastact=1468198819%09home.php%09spacecp; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_sendmail=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_onlineusernum=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_noticeTitle=1; DOMAIN=192.168.182.88");

	web_add_cookie("tjpctrl=1468200620196; DOMAIN=192.168.182.88");

	web_url("forum.php", 
		"URL=http://192.168.182.88/forum.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://addons.g-fox.cn/appcenter.gif?t=0&a=001&d=tab-install&r=0.9540980739836966&cid=full.firefox.com.cn", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_link("Á¢¼´×¢²á", 
		"Text=Á¢¼´×¢²á", 
		"Ordinal=1", 
		"Snapshot=t5.inf", 
		LAST);

	lr_think_time(6);

	web_url("forum.php_2", 
		"URL=http://192.168.182.88/forum.php?mod=ajax&inajax=yes&infloat=register&handlekey=register&ajaxmenu=1&action=checkusername&username=9108014", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/member.php?mod=register", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/js/ajax.js?G0S", "Referer=http://192.168.182.88/member.php?mod=register", ENDITEM, 
		LAST);

	web_submit_data("member.php", 
		"Action=http://192.168.182.88/member.php?mod=register&inajax=1", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/member.php?mod=register", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=regsubmit", "Value=yes", ENDITEM, 
		"Name=formhash", "Value=9dc4a0c6", ENDITEM, 
		"Name=referer", "Value=http://192.168.182.88/forum.php", ENDITEM, 
		"Name=activationauth", "Value=", ENDITEM, 
		"Name=Zn77wc", "Value=9108014", ENDITEM, 
		"Name=xHHqQA", "Value=123456", ENDITEM, 
		"Name=a5J1Z5", "Value=123456", ENDITEM, 
		"Name=JnxANS", "Value=9108014@163.com", ENDITEM, 
		LAST);

	web_add_cookie("HE44_2132_lastact=1468199026%09forum.php%09ajax; DOMAIN=192.168.182.88");

	web_url("forum.php_3", 
		"URL=http://192.168.182.88/forum.php?mod=ajax&inajax=yes&infloat=register&handlekey=register&ajaxmenu=1&action=checkemail&email=9108014@163.com", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/member.php?mod=register", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("forum.php_4", 
		"URL=http://192.168.182.88/forum.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.182.88/member.php?mod=register", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/js/common_extra.js?G0S", ENDITEM, 
		LAST);

	return 0;
}