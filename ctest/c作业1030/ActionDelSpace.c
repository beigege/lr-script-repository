ActionDelSpace()
{
	char str[] ="abc def g";
	int len =strlen(str)*sizeof(char);
	
	//lr_output_message("%s",str);//���лᱨ��Ҫ����������У�ԭ����ú����ˣ��Ͳ����ٶ��������

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
