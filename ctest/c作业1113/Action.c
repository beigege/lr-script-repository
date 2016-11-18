Action()
{
    /*1*/
// 	int n =7;
// 	char str1[] = "hello world hello you";
// 	char * str2 = (char * )malloc(sizeof(char)*(strlen(str1)+1));
// 	lr_output_message("strncpy:%s",strncpy(str2,str1,n));
// 	lr_output_message("strncpy:%s",strncpy2(str2,str1,n));
//  free(str2);
	/*2*/
// 	int n = 3;
// 	char str[] = "192,000,123";
// 	char * str2 = (char * )malloc(100);
// 	lr_output_message("replace%:%s",replace(str2,str,n));
// 	free(str2);
	/*3*/
	int b = 2;
	int e = 4;
	char * str = (char * )malloc(sizeof(char)*(e-b+2));
	strcpy(str,"192,000,123");
	lr_output_message("substring:%s",substring(str,b,e));
	free(str);
	return 0;
}
/*
1.重写strncpy
*/
char * strncpy2(char * dest,char * src, int n){
	strcpy(dest,src);
	*(dest+n) = '\0';
	return dest;
}
/*
2.通过关联，我们获取到了一个字符串"192,000,123"，现在要求去掉字符串中的逗号，
并替换成n个%，即：192%%%000%%%123，%的个数根据传参来决定，请编写一个函数来实现它
char * replace(char * dest, char * src, int n)
*/
char * replace(char * dest, char * src, int n){
	int i,j;
	char * result = dest;
	for(i=0;*(src+i)!='\0';i++){
		j=n;
		if(*(src+i)!=','){
			*dest++=*(src+i);
		}else{
			while(j>0){
				*dest++='%';
				j--;
			}
		}
		
	}
	*dest='\0';
	return result;
}
/*
3.试写一函数，实现截取字符串的第n位到第m位(字符串从第0位开始算)
即：123456截取第二位到第四位，则结果为：234
char * substring(char * str, int beginIndex, int endIndex)
*/
char * substring(char * str, int beginIndex, int endIndex){
	
	*(str+endIndex)='\0';
	str = str + beginIndex-1;
    return str;
	
}
