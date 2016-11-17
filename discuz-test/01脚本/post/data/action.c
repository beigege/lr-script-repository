Action()
{

	web_add_cookie("tjpctrl=1466491331249; DOMAIN=192.168.182.88");

	lr_think_time(15);

	web_url("forum.php_3", 
		"URL=http://192.168.182.88/forum.php?mod=guide&view=my", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.182.88/forum.php", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/image/common/arw_l.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/js/ajax.js?G0S", "Referer=http://192.168.182.88/forum.php?mod=guide&view=my", ENDITEM, 
		LAST);

	web_url("forum.php_4", 
		"URL=http://192.168.182.88/forum.php?mod=misc&action=nav&infloat=yes&handlekey=nav&inajax=1&ajaxtarget=fwin_content_nav", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/forum.php?mod=guide&view=my", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/image/common/cls.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		"Url=/static/image/common/arrow.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		LAST);

	web_add_cookie("HE44_2132_lastact=1466489568%09forum.php%09post; DOMAIN=192.168.182.88");

	lr_think_time(5);

	web_url("forum.php_5", 
		"URL=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.182.88/forum.php?mod=guide&view=my", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/image/editor/editor.gif", "Referer=http://192.168.182.88/data/cache/style_1_editor.css?G0S", ENDITEM, 
		"Url=/static/image/common/card_btn.png", "Referer=http://192.168.182.88/data/cache/style_1_editor.css?G0S", ENDITEM, 
		"Url=/static/image/common/dot.gif", "Referer=http://192.168.182.88/data/cache/style_1_forum_post.css?G0S", ENDITEM, 
		LAST);

	web_add_cookie("HE44_2132_editormode_e=1; DOMAIN=192.168.182.88");

	web_add_cookie("HE44_2132_smile=1D1; DOMAIN=192.168.182.88");

	web_url("misc.php", 
		"URL=http://192.168.182.88/misc.php?css=1_wysiwyg&G0S", 
		"Resource=0", 
		"RecContentType=text/css", 
		"Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/js/smilies.js?G0S", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/data/cache/common_postimg.js?G0S", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/data/cache/common_smilies_var.js?G0S", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/biggrin.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/cry.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/sad.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/huffy.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/smile.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/shocked.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/tongue.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/shy.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/titter.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/sweat.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/loveliness.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/funk.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/curse.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/dizzy.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/mad.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/lol.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/shutup.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/sleepy.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/hug.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/victory.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/handshake.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/call.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/time.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		"Url=/static/image/smiley/default/kiss.gif", "Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", ENDITEM, 
		LAST);

	lr_think_time(32);

	web_url("forum.php_6", 
		"URL=http://192.168.182.88/forum.php?mod=ajax&action=checkpostrule&ac=newthread&inajax=yes", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("HE44_2132_lastact=1466489618%09forum.php%09viewthread; DOMAIN=192.168.182.88");

	lr_think_time(6);

	web_submit_data("forum.php_7", 
		"Action=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2&extra=&topicsubmit=yes", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.182.88/forum.php?mod=post&action=newthread&fid=2", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=formhash", "Value=2c378799", ENDITEM, 
		"Name=posttime", "Value=1466489568", ENDITEM, 
		"Name=wysiwyg", "Value=1", ENDITEM, 
		"Name=subject", "Value=9108001post001-title", ENDITEM, 
		"Name=message", "Value=9108001post001-content\r\n", ENDITEM, 
		"Name=allownoticeauthor", "Value=1", ENDITEM, 
		"Name=usesig", "Value=1", ENDITEM, 
		"Name=save", "Value=", ENDITEM, 
		EXTRARES, 
		"Url=/data/cache/style_1_forum_moderator.css?G0S", "Referer=http://192.168.182.88/forum.php?mod=viewthread&tid=1&extra=", ENDITEM, 
		"Url=/static/js/smilies.js?G0S", "Referer=http://192.168.182.88/forum.php?mod=viewthread&tid=1&extra=", ENDITEM, 
		"Url=/static/image/common/fastreply.gif", "Referer=http://192.168.182.88/data/cache/style_1_forum_viewthread.css?G0S", ENDITEM, 
		"Url=/static/image/common/share_btn.png", "Referer=http://192.168.182.88/data/cache/style_1_forum_viewthread.css?G0S", ENDITEM, 
		"Url=/static/image/common/ico_jdt.png", "Referer=http://192.168.182.88/data/cache/style_1_forum_viewthread.css?G0S", ENDITEM, 
		"Url=/static/image/common/edit.gif", "Referer=http://192.168.182.88/data/cache/style_1_forum_viewthread.css?G0S", ENDITEM, 
		"Url=/static/image/common/midavt_shadow.gif", "Referer=http://192.168.182.88/data/cache/style_1_forum_viewthread.css?G0S", ENDITEM, 
		"Url=/data/cache/common_smilies_var.js?G0S", "Referer=http://192.168.182.88/forum.php?mod=viewthread&tid=1&extra=", ENDITEM, 
		"Url=http://s.pc.qq.com/discuz/js/filter_utf-8_zh_cn.js?v=1", "Referer=http://192.168.182.88/forum.php?mod=viewthread&tid=1&extra=", ENDITEM, 
		"Url=http://s.pc.qq.com/discuz/image/v2/header_tri.png", "Referer=http://192.168.182.88/forum.php?mod=viewthread&tid=1&extra=", ENDITEM, 
		"Url=/static/js/common_extra.js?G0S", "Referer=http://192.168.182.88/forum.php?mod=viewthread&tid=1&extra=", ENDITEM, 
		"Url=/static/image/common/popupcredit_bg.gif", "Referer=http://192.168.182.88/data/cache/style_1_common.css?G0S", ENDITEM, 
		LAST);

	return 0;
}