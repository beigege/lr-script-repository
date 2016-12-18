void saveUser(char * , char * , char * );

Action()
{

	/*第1题，两种返回值都写了*/
// 	int arr[]={1,3,5};
// 	lr_output_message("数组中所有元素的平方的和:%d",getSquareSum(arr,sizeof(arr)/sizeof(int)));
 	int arr[]={1,3,5};
	char * result = (char *)getSquareSumstr(arr,sizeof(arr)/sizeof(int));
	lr_output_message("数组中所有元素的平方的和:%s",result);
	free(result);

	/*第2题*/
// 	char src[]="efgh";
// 	char * dest = (char * )malloc(100 * sizeof(char));
// 	lr_output_message("重写strncat:%s",mystrncat(dest,src,3));
// 	strcpy(dest,"abcd");
// 	lr_output_message("重写strncat:%s",mystrncat(dest,src,3));
// 	free(dest);

	/*第3题*/
// 	char src[]="abcbe";
// 	char new[]="123";
// 	char * dest = (char * )malloc(100 * sizeof(char));
// 	lr_output_message("substitute:%s",substitute(dest, src, 'b', new));
// 	free(dest);

	/*第4题*/
// 	char * filename="D:\\2016study\\git-space\\lr-script-repository\\ctest\\1217c考试\\users.txt";
// 	char * username="user1";
// 	char * password="pwd1";
//     saveUser(filename,username,password);

	/*第5题*/
// 	char src[]="ab0ab123cd45cd";
// 	char left[]="ab";
// 	char right[]="cd";
// 	char * dest = (char * )malloc(100 * sizeof(char));
// // 	lr_output_message("format+1 :%s",format(dest, src, left,right, 1));
// //	lr_output_message("format-1 :%s",format(dest, src, left,right, -1));
//  	lr_output_message("format+0 :%s",format(dest, src, left,right, 0));
// 	free(dest);

	/*第6题*/
// 	char src[]="{\"access_token\":\"4f7487f9-077c-4246-94f5-8ed59e87a0fc\",\"product_id\":\"pen_001\",\"price\":10.00,\"desc\":null}";
// 	char * dest = (char * )malloc(1000 * sizeof(char));
//  	lr_output_message("transform:%s",transform(dest, src));
// 	free(dest);

	return 0;
}

/*
1.	求一个数组中所有元素的平方的和，如{1,3,5}，结果为1^2 + 3^2 + 5^2 = 35
函数原型char * getSquareSum(int * arr, int len)（10分）
--考察C语言自定义函数的基础应用及对数组的操作；

*/
int getSquareSum(int * arr, int len){
	int sum=0,i;
	for(i=0;i<len;i++){
		sum+=(arr[i]*arr[i]);
	}
	return sum;
}
char * getSquareSumstr(int * arr, int len){
	char * result = (char *) malloc(100*sizeof(char));
	int sum=0,i;
	for(i=0;i<len;i++){
		sum+=(arr[i]*arr[i]);
	}
	itoa(sum,result,10);
	return result;
}
/*
2.	请编写一个函数，要求实现如下功能：
重写strncat函数(函数原型参照F1帮助)。 （15分）
--考察C语言自定义函数的基础应用，对字符串的操作；

*/
char * mystrncat( char * dest,  char *str, int n){
	int i=0;
	char * start = dest;
	int len = strlen(dest);
	dest = dest+len;
	while(n--){
		*dest++ = *(str+i);
		i++;
	}
	*dest='\0';
	return start;
}
/*
3.	编写一个函数，要求实现将字符串中指定的字符 替换成指定的 字符串，如abcbe，将b替换成123，则运行后结果为a123c123e。
函数原型char * substitute(char * dst, char * src, char old, char * new)（15分） 
--考察C语言对字符串的处理能力；

*/
char * substitute(char * dst, char * src, char old, char * new){
	char * start = dst;
	char * tmp = new;
	while(*src!='\0'){
		
		if(*src == old){
			new = tmp;
			while(*new!='\0'){
				*dst++ = *new++;
			}
			
		}else{
			*dst++ = *src;
			
		}
		src++;
 		
		
	}
	*dst='\0';
	return start;

}
/*
4.	在一个注册脚本中，我们对用户名做了参数化，但是由于没有数据库的访问权限，因此需要将注册的用户名和密码保存至文件。
要求： 定义一个函数，将文件保存在脚本根目录下，一组用户名密码中间以逗号隔开，且每行仅保存一条记录。
(调用一次这个函数，写入一组用户名及密码，脚本根目录即和Action.c同一目录，文件写入格式可参考下图)
*/
void saveUser(char * fileName, char * username, char * password){
	long file;

    // If not exist then create it
    if ((file = fopen(fileName, "a+" )) == NULL) { 
       lr_output_message("Unable to create %s", fileName); 
//         return "open file error!";
    } 
    
    fprintf(file, "%s,%s\n", username, password); 

    fclose(file);
}

/*
5.	定义一个函数：
函数原型char * format (char * dst, char * src, char * left, char * right, int offset)
，实现对字符串的前后截取,并在结尾处进行对应的偏移，如char * format (dst, "ab123cd", "ab", "cd", 1)，
则截取第一次出现ab后的内容直到出现cd为止，并且向后偏移1个字符位置，则结果为"123c"， 
如果char * format (dst, "ab123cd", "ab", "cd", -1)，则结果为"12"。注:如果是char * format (dst, "ab0ab123cd45cd", "ab", "cd", 0)，则处理后应该为0ab123
*/

char * format (char * dst, char * src, char * left, char * right, int offset){
	char * start = dst;
	char * begin = (char *)strstr(src,left);
	char * end = (char *)strstr(src,right);
	
	while(begin<end){
		*dst++ = *begin++;
	}
	*dst='\0';
	start = start + strlen(left);
	dst = start;
	 


	if(offset>0){
		strncat(dst,right,offset);
	}else if(offset<0){
		dst = dst +strlen(dst)+offset;
		*dst ='\0';
	}



	return start;
}
/*
6.	在一个选择产品脚本的处理过程中，我们得到了类似如下的json字符串"{"access_token":"4f7487f9-077c-4246-94f5-8ed59e87a0fc","product_id":"pen_001","price":10.00,"desc":null}"
其中"access_token"的值每次都不一样，且长度不定，"product_id"的值代表了产品的编号(长度不确定)，"price"的值代表了产品的价格(长度不确定)。现在脚本需要提交一段类似这样的内容：
"access_token=4f7487f9-077c-4246-94f5-8ed59e87a0fc&product_id=pen_001&price=10.00&expires_at=2016-12-01_23:30:48"
其中access_token，product_id，price从之前的json字符串中获取，expires_at为当前时间后一天，如现在是2016-12-01_23:30:48，则expires_at为2016-12-02_23:30:48。

*/
char * transform(char * dest, char * src){
	char * start = dest;
	char * tmp ;
	
	src = src+2;//去掉开头的{"
	tmp = (char *)strstr(src,",\"desc\":null}");
	*tmp='\0';//去掉结尾：,"desc":null}
	//":"
	while(*src){
		if(*src=='\"'){

		}else if(*src==':'){
			*dest++ = '=';
		}else if(*src==','){
			*dest++ = '&';
		}else{
			*dest++ =*src;
		}
		src++;
	}
	*dest='\0';

	strcat(start,"&expires_at=");
    lr_save_datetime("%Y-%m-%d_%H:%M:%S", DATE_NOW + ONE_DAY, "next"); //2016-12-02_23:30:48

	lr_output_message(lr_eval_string("{next}")); 
	strcat(start,lr_eval_string("{next}"));




	return start;
}
