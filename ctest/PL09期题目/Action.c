Action()
{
	/*��һ��*/
// 	__exam_1();

    /*������*/
    char * src = "www.baidu.com,www.sina.com,www.cctv.com,";
    char * dst = (char *)malloc(100);
	char url[100] = "http://";
//     char * result = (char *)__exam_5(dst, src, 3);
	char * result = (char *)__exam_5_1(dst, src, 3);

	strcat(url, result);
	lr_save_string(url, "url");

	web_url("xx", "URL={url}", LAST);

//     lr_output_message(url);
	return 0;
}

/*
	һ���ַ���char str[]=��testroad������дһ��С���򣬷ֱ�����str��strlen��sizeof()
*/
void __exam_1(){
	char str[] = "testroad";
	lr_output_message("strlen:%d", strlen(str));
	lr_output_message("sizeof:%d", sizeof(str));


}
/*
	��������һ���������飬������������ֵ������ƽ���������������15�֣�
*/
float __exam_2(int arr[], int len){
	int i = 0, sum;

	for (; i < len; i++) {
		sum += arr[i];
	}

	return sum * 1.0 / len;
}

/*
	�ġ���C ���Լ��� a+bc*2=30, a+bc*3=50, a+bc*4=90 ��a,b,c ��εó����� ��15��
*/
void __exam_4(){
	int a, b, c;

	for (a = 0; a <= 30; a++) {
		for (b = 0; b <= 30; b++) {
			for (c = 0; c <= 30; c++) {
				if (a + b * c * c == 30 && a + b * c * c *c == 50 && a + b * c * c * c * c == 90) {
					lr_output_message("a=%d,b=%d,c=%d", a, b, c);
				}
			}
		}
	}
}

/*
	�塢������ͨ����������õ����µ��ַ�����www.baidu.com,www.sina.com,www.cctv.com��,��Դ��ַ����������´���28�֣�: 
	1. ͨ����,����ȡ�������ַ����� 
	2. ѡȡһ����������ַ�����ƴ�ӳɡ�http://www.XXX.com������ʽ�� 
	3. ͨ��web_url�����ܷ��ʵ���URL�� 
	α�������£� 
	char *str="www.baidu.com,www.sina.com,www.cctv.com"; 
	char *url1,url2,url3; 
	char *url�� 
	ͨ����Ĵ���ʵ��url1��ֵ��ɣ�www.baidu.com��������������
	ͨ����Ĵ���ʵ�֣���url1��ֵ��ɡ�http://www.baidu.com��,����url
	��url��ɿ��Ա�web_url()����ʹ�ã���ʵ�ַ������url
*/
char * __exam_5(char * dst, char * src, int i){
    char * start, * end;

    strcpy(dst, src);

    if (i == 1) {
        start = dst;
        end = (char *)strchr(dst, ',');
        *end = 0;
    }

	if (i == 2) {
		start = (char *)strchr(dst, ',') + 1;
		end = (char *)strrchr(dst, ',');
        *end = 0;
	}

	if (i == 3) {
		start = (char *)strrchr(dst, ',') + 1;
	}

	return start;

}
/*
	char *str="www.baidu.com,www.sina.com,www.cctv.com"; 
*/
char * __exam_5_1(char * dst, char * src, int j){
    char * start = dst, * end;
	int i;
    strcpy(dst, src);

	for (i = 0; i < j - 1; i++) {
		start = (char *)strchr(start, ',') + 1;
	}

	end = (char *)strchr(start, ',');
	*end = 0;

	return start;
}


/*
	�����ٶ��ȼ��ͷ��������¶�Ӧ��ϵ����22�֣�
	�ȼ���A			 ������85����100
	�ȼ���B          ������60����84
	�ȼ���C          ������60����
	���дһ�γ��򣬶�ָ���ķ�����������ڵĵȼ�����86�֣������A����
	���дһ�γ��򣬶�ָ���ĵȼ�������������ķ���������A�������������85����100����
*/
void __exam_6_1(int score){
	if (i <= 100 && i>= 85) {
		lr_output_message("A");
	}

	if (i <= 84 && i>= 60) {
		lr_output_message("B");
	}

	if (i < 60) {
		lr_output_message("C");
	}

}

void __exam_6_2(char c){

	if (c = 'A') {
		lr_output_message("������85����100");
	}
	if (c = 'B') {
		lr_output_message("������60����84");
	}
	if (c = 'C') {
		lr_output_message("������60����");
	}

}
