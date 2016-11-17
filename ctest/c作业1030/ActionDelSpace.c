ActionDelSpace()
{
	char str[] ="abc def g";
	int len =strlen(str)*sizeof(char);
	
	//lr_output_message("%s",str);//这行会报错，要放在下面才行，原因调用函数了，就不能再定义变量了

	char * p=(char *)malloc(len);
	lr_output_message("%s",str);
	lr_output_message("%s",delSpace(p,str));
	return 0;
}

char * delSpace(char * dest,char * str){
	int i=0;
	while(*str){
		if(*str!=' '){
			*(dest+i)=*str;
			i++;
		}
		str++;
	}
	*(dest+i)='\0';
	return dest;
}
