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
1.��дstrncpy
*/
char * strncpy2(char * dest,char * src, int n){
	strcpy(dest,src);
	*(dest+n) = '\0';
	return dest;
}
/*
2.ͨ�����������ǻ�ȡ����һ���ַ���"192,000,123"������Ҫ��ȥ���ַ����еĶ��ţ�
���滻��n��%������192%%%000%%%123��%�ĸ������ݴ��������������дһ��������ʵ����
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
3.��дһ������ʵ�ֽ�ȡ�ַ����ĵ�nλ����mλ(�ַ����ӵ�0λ��ʼ��)
����123456��ȡ�ڶ�λ������λ������Ϊ��234
char * substring(char * str, int beginIndex, int endIndex)
*/
char * substring(char * str, int beginIndex, int endIndex){
	
	*(str+endIndex)='\0';
	str = str + beginIndex-1;
    return str;
	
}
