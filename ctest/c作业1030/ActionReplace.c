ActionReplace()
{
	char str[]="192,000,123";
	char * dest;//=(char*)malloc(sizeof(char)*strlen(str));
	lr_output_message("%s",replace(dest,str));
	return 0;
}

char * replace(char * dest,char * str){
	
	dest=str;
	while(*str){
		if(*str==','){
			*str='%';
		}
		str++;
	}
	
	return dest;
}
