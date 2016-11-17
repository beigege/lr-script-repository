ActionSplitStr()
{
	char str[]="www.baidu.com,www.sina.com,www.cctv.com";
	char * url1 =  (char *)malloc(sizeof(char)*20);
	char * url2 =  (char *)malloc(sizeof(char)*20);
	char * url3 =  (char *)malloc(sizeof(char)*20);
	splitStr(url1,url2,url3,str,',');
	lr_output_message("url1:%s",url1);
	lr_output_message("url2:%s",url2);
	lr_output_message("url3:%s",url3);
	return 0;
}

void splitStr(char * url1,char * url2,char * url3,char * str,char c){
	
	int * indexs = (int *)malloc(sizeof(int)*3);
	int i=0,j,n,m=0;
	
	for(j=0;*(str+j)!='\0';j++){
		if(*(str+j)==c){
			lr_output_message("j:%d",j);
			lr_output_message("i:%d",i);
			*(indexs+i)=j;
			i++;
		}
		
	}
lr_output_message("j:%d",j);
lr_output_message("i:%d",i);

	strncpy(url1,str,*(indexs));
	
	str=str+*(indexs)+1;
	strncpy(url2,str,*(indexs+1)-*(indexs)-1);
	
	str=str+*(indexs+1)-*(indexs);
	strcpy(url3,str);
	

	
return ;
	
}
/*
void splitStr(char * url1,char * url2,char * url3,char * str,char c){
	
	int * indexs = (int *)malloc(sizeof(int)*3);
	int i=0,j,n,m=0;
	url1 =  (char *)malloc(sizeof(char)*20);
	url2 =  (char *)malloc(sizeof(char)*20);
	url3 =  (char *)malloc(sizeof(char)*20);
	for(j=0;*(str+j)!='\0';j++){
		if(*(str+j)==c){
			lr_output_message("j:%d",j);
			lr_output_message("i:%d",i);
			*(indexs+i)=j;
			i++;
		}
		
	}
lr_output_message("j:%d",j);
lr_output_message("i:%d",i);

	strncpy(url1,str,*(indexs));
	lr_output_message("url1:%s",url1);
	str=str+*(indexs)+1;
	strncpy(url2,str,*(indexs+1));
	lr_output_message("url2:%s",url2);
	str=str+*(indexs+1)+1;
	strcpy(url2,str);
	lr_output_message("url3:%s",url3);

	
return ;
	
}
*/
/*
char * * splitStr(char * str,char c){
	char * * result=(char **)malloc(sizeof(char*)*3);
	//char  result[3][30];
	int * indexs = (int *)malloc(sizeof(int)*3);
	int i=0,j,n,m=0;
	for(j=0;*(str+j)!='\0';j++){
		if(*(str+j)==c){
			lr_output_message("j:%d",j);
			lr_output_message("i:%d",i);
			*(indexs+i)=j;
			i++;
		}
		
	}
lr_output_message("j:%d",j);
lr_output_message("i:%d",i);

	for(n=0;n<=i;n++){
		strncpy(**(result+n),str,*(indexs+m));
		str=str+(*(indexs+m+1));
		m++;
	}

return result;
	
}
*/
