Action()
{


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