Action()
{
    char * str = "tid=2314&fid=322";
    char * result = (char *)getstr3(str);
    lr_output_message(result);
	return 0;
}

/*
	2. ��дsrtrchr������ʵ�ֲ����ַ�����ָ���ַ����һ�γ���ʱ�����е��ַ������
	������ָ���ַ�����Сд��ĸ��ɶ�Ӧ�Ĵ�д��ĸ����������ַ�����testroad��,ָ���ַ���Ϊ't'�������"Troad";
*/
char * __strrchr(char * dst, char * src, char c){
	char * start = src;

	while (*src++)
		;

	while (--src != start && *src != c)
		;

	if (*src == c) {
		strcpy(dst, src);
		if (*dst >= 'a' && *dst <= 'z') {
			*dst -= 32;
		}

		return dst;
	}

	return NULL;

}


/*
	3. ������ͨ����������õ����µ��ַ�����tid=2314&fid=322��������tid��ֵ�п�������λ����Ҳ�п�����2λ��������ȷ����
	���дһ����������ȡ����fid��322����ֵ������ע��������ID��ֵλ�����ǲ���Ԥ֪��)
*/
char * getstr3(char * str){

// 	return (char *)strrchr(str, '=') + 1;
// 	return (char *)strstr(str, "fid=") + 4;
	return (char *)strchr(str, '&') + 5;

}

