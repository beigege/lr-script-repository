/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 8859
   ------------------------------------------------------------------------------- */

vuser_init()
{



	web_add_cookie("HE44_2132_saltkey=OIroZHI2; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastvisit=1466483900; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_sid=LfuwUu; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastact=1466488917%09misc.php%09patch; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_ulastactivity=1b99UEDN%2FrOgSJYOdUlEyJb%2Fe3iZfUDxg4o7L%2BZQkwDt1O%2FJYmzP; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_nofavfid=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastcheckfeed=2%7C1466488917; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_noticeTitle=1; DOMAIN=192.168.182.88");

	//web_add_cookie("uid=38oGFVdjXZYvzlh6GsMOAg==; DOMAIN=i.firefoxchina.cn");

	//web_add_cookie("Hm_lvt_dd4738b5fb302cb062ef19107df5d2e4=1466136155,1466138477; DOMAIN=i.firefoxchina.cn");

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
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=quickforward", "Value=yes", ENDITEM, 
		"Name=handlekey", "Value=ls", ENDITEM, 
		LAST);

	web_add_cookie("HE44_2132_checkfollow=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_lastact=1466489529%09forum.php%09; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_checkpm=1; DOMAIN=192.168.182.88");

	//web_add_cookie("MANYOU_SESSIONID=792bec0370e2e523c9d19e56c24f642e; DOMAIN=cp.discuz.qq.com");

	//web_add_cookie("MANYOU_AUTH=c4515fd2d0bf246ecad839be64a2d6ea; DOMAIN=cp.discuz.qq.com");

	//web_add_cookie("MANYOU_DATA=yv9AWhFPhBfwJGS%2FuNzJBgpJkGVPY1v%2BW55B4AEo6x6y2FWt7a3JiIvWE1MZK0qThsWvpPHJORcwYWowUINbKw%3D%3D; DOMAIN=cp.discuz.qq.com");

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
