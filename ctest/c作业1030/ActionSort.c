//按从小到大的顺序排列，并截取前5位数
ActionSort()
{
	char str[]="zhEshIgekenDiedeTimu";
	lr_output_message("%s",str);
	lr_output_message("%s",mysort(str));
	lr_output_message("%s",substring(mysort(str),5));
	return 0;
}
char * mysort(char * str){
	int i,j;
	char tmp;
	
	for(i=0;i<strlen(str);i++){
		for(j=i+1;j<strlen(str);j++){
			if(*(str+i)>*(str+j)){
				tmp=*(str+i);
				*(str+i)=*(str+j);
				*(str+j)=tmp;
			}
		}

	}
	return str;
}
char * substring(char * str ,int len){
	int i=0;
	char * result = (char *)malloc(sizeof(char)*len);
	while(i<len){
		*(result+i)=*(str+i);
		i++;
	}
	*(result+len)='\0';
	return result;
}

