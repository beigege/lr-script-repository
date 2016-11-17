char * test(char * str){

	int i =0;
	char * result;
	if(strlen(str)==0){
		
		return "str len is 0!\n";
	}
	while(isalpha(*(str+i))){
		i++;
	}
	result = str+i;

    lr_save_datetime("%Y%m%d%H%M%S", TIME_NOW, "time"); 
    lr_output_message("%s",strcat(result,lr_eval_string("{time}")));
	
	return strcat(result,lr_eval_string("{time}"));//±¨´í£ºillegal return type; found `int' expected `pointer to char'

	}

Action()
{
	char str[] = "";
	lr_output_message("s%",test(str));
		
	return 0;
}
