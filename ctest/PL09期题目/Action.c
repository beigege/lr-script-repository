Action()
{
	/*第一题*/
// 	__exam_1();

    /*第五题*/
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
	一、字符串char str[]=”testroad”，编写一个小程序，分别计算出str的strlen和sizeof()
*/
void __exam_1(){
	char str[] = "testroad";
	lr_output_message("strlen:%d", strlen(str));
	lr_output_message("sizeof:%d", sizeof(str));


}
/*
	二、定义一个整数数组，对组内所有数值进行求平均数，并输出；（15分）
*/
float __exam_2(int arr[], int len){
	int i = 0, sum;

	for (; i < len; i++) {
		sum += arr[i];
	}

	return sum * 1.0 / len;
}

/*
	四、用C 语言计算 a+bc*2=30, a+bc*3=50, a+bc*4=90 求a,b,c 如何得出？？ （15）
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
	五、当我们通过关联，会得到如下的字符串“www.baidu.com,www.sina.com,www.cctv.com”,请对此字符串进行如下处理（28分）: 
	1. 通过“,”截取成三个字符串； 
	2. 选取一个处理过的字符串，拼接成“http://www.XXX.com”的形式； 
	3. 通过web_url函数能访问到该URL； 
	伪代码如下： 
	char *str="www.baidu.com,www.sina.com,www.cctv.com"; 
	char *url1,url2,url3; 
	char *url； 
	通过你的代码实现url1的值变成：www.baidu.com，其它两个类似
	通过你的代码实现，把url1的值变成“http://www.baidu.com”,存入url
	把url变成可以被web_url()函数使用，并实现访问这个url
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
	六、假定等级和分数有以下对应关系：（22分）
	等级：A			 分数：85——100
	等级：B          分数：60——84
	等级：C          分数：60以下
	请编写一段程序，对指定的分数输出其所在的等级（如86分，则输出A）；
	请编写一段程序，对指定的等级输出其所包含的分数（输入A，则输出分数：85——100）；
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
		lr_output_message("分数：85——100");
	}
	if (c = 'B') {
		lr_output_message("分数：60——84");
	}
	if (c = 'C') {
		lr_output_message("分数：60以下");
	}

}
