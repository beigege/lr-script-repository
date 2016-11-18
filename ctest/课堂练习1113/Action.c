Action()
{
    char * str = "tid=2314&fid=322";
    char * result = (char *)getstr3(str);
    lr_output_message(result);
	return 0;
}

/*
	2. 重写srtrchr函数，实现查找字符串中指定字符最后一次出现时，所有的字符输出，
	将其中指定字符串的小写字母变成对应的大写字母并输出。如字符串“testroad”,指定字符串为't'，则输出"Troad";
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
	3. 当我们通过关联，会得到如下的字符串“tid=2314&fid=322”，其中tid的值有可能是三位数，也有可能是2位数，不能确定，
	请编写一个函数，截取出“fid＝322”的值。（请注意这两个ID的值位数都是不可预知的)
*/
char * getstr3(char * str){

// 	return (char *)strrchr(str, '=') + 1;
// 	return (char *)strstr(str, "fid=") + 4;
	return (char *)strchr(str, '&') + 5;

}

