ActionGrade()
{
	lr_output_message("等级是：%c",getGrade(50));
	lr_output_message("分数范围是：%s",getScope('B'));
	return 0;
}

char getGrade(int score){
	char grade;
	if(score>=85 && score<=100){
		grade='A';
	}else if(score>=60 && score<=84){
		grade='B';
	}else if(score>=0 && score<60){
		grade='C';
	}else{
		return 'N';
	}
	return grade;

}
char * getScope(char c){
	
	switch(c){
		case 'A':{return "85-100";break;}
		case 'B':{return "60-84";break;}
		case 'C':{return "60以下";break;}
	}
}

