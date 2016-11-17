Action()
{
	char str[] = "GZPI655768";
	int i =0;
	char * result;
	if(strlen(str)==0){
		
		lr_output_message("str len is 0!\n");
	}
	while(isalpha(*(str+i))){
		i++;
	}
	result = str+i;

    lr_save_datetime("%Y%m%d%H%M%S", TIME_NOW, "time"); 

lr_output_message("************");

	lr_output_message("%s",strcat(result,lr_eval_string("{time}")));//这样写不会报错
	
	
	return 0;
}

