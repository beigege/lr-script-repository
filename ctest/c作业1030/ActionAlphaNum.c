ActionAlphaNum()
{
	char *str="jie123ofAoo)345";
	char *p = (char*)malloc(sizeof(char)*strlen(str));
	int i=0;
	lr_output_message("%s",str);
	while(*str){
		if(isalpha(*str)){
			*(p+i)=5+*str;
		}else if(isdigit(*str)){
			*(p+i)=*str;
		}else{
			break;
		}
		i++;
		str++;

	}
	lr_output_message("%s",p);
	return 0;
}
