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
	case 'a': {lr_output_message("������");break;}
	case 'b': {lr_output_message("����");break;}
	case 'c': {lr_output_message("����");break;}
	case 'd': {lr_output_message("����");break;}
		case 'e': {lr_output_message("���ݴ���");break;}
	}
	return 0;
}
