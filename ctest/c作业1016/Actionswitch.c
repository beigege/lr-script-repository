Actionswitch()
{
	int score =-80;
	char m;
	if(score>0 && score<60){
		m='a';
	}else if(score>=60 && score<70){
		m='b';
	}else if(score>=70 && score<90){
		m='c';
	}else if(score>=90 && score<=100){
		m='d';
	}else{
		m='e';
	}
	switch(m){
	case 'a': {lr_output_message("不及格");break;}
	case 'b': {lr_output_message("及格");break;}
	case 'c': {lr_output_message("良好");break;}
	case 'd': {lr_output_message("优秀");break;}
		case 'e': {lr_output_message("数据错误");break;}
	}
	return 0;
}
