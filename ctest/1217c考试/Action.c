void saveUser(char * , char * , char * );

Action()
{

	/*��1�⣬���ַ���ֵ��д��*/
// 	int arr[]={1,3,5};
// 	lr_output_message("����������Ԫ�ص�ƽ���ĺ�:%d",getSquareSum(arr,sizeof(arr)/sizeof(int)));
 	int arr[]={1,3,5};
	char * result = (char *)getSquareSumstr(arr,sizeof(arr)/sizeof(int));
	lr_output_message("����������Ԫ�ص�ƽ���ĺ�:%s",result);
	free(result);

	/*��2��*/
// 	char src[]="efgh";
// 	char * dest = (char * )malloc(100 * sizeof(char));
// 	lr_output_message("��дstrncat:%s",mystrncat(dest,src,3));
// 	strcpy(dest,"abcd");
// 	lr_output_message("��дstrncat:%s",mystrncat(dest,src,3));
// 	free(dest);

	/*��3��*/
// 	char src[]="abcbe";
// 	char new[]="123";
// 	char * dest = (char * )malloc(100 * sizeof(char));
// 	lr_output_message("substitute:%s",substitute(dest, src, 'b', new));
// 	free(dest);

	/*��4��*/
// 	char * filename="D:\\2016study\\git-space\\lr-script-repository\\ctest\\1217c����\\users.txt";
// 	char * username="user1";
// 	char * password="pwd1";
//     saveUser(filename,username,password);

	/*��5��*/
// 	char src[]="ab0ab123cd45cd";
// 	char left[]="ab";
// 	char right[]="cd";
// 	char * dest = (char * )malloc(100 * sizeof(char));
// // 	lr_output_message("format+1 :%s",format(dest, src, left,right, 1));
// //	lr_output_message("format-1 :%s",format(dest, src, left,right, -1));
//  	lr_output_message("format+0 :%s",format(dest, src, left,right, 0));
// 	free(dest);

	/*��6��*/
// 	char src[]="{\"access_token\":\"4f7487f9-077c-4246-94f5-8ed59e87a0fc\",\"product_id\":\"pen_001\",\"price\":10.00,\"desc\":null}";
// 	char * dest = (char * )malloc(1000 * sizeof(char));
//  	lr_output_message("transform:%s",transform(dest, src));
// 	free(dest);

	return 0;
}

/*
1.	��һ������������Ԫ�ص�ƽ���ĺͣ���{1,3,5}�����Ϊ1^2 + 3^2 + 5^2 = 35
����ԭ��char * getSquareSum(int * arr, int len)��10�֣�
--����C�����Զ��庯���Ļ���Ӧ�ü�������Ĳ�����

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
2.	���дһ��������Ҫ��ʵ�����¹��ܣ�
��дstrncat����(����ԭ�Ͳ���F1����)�� ��15�֣�
--����C�����Զ��庯���Ļ���Ӧ�ã����ַ����Ĳ�����

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
3.	��дһ��������Ҫ��ʵ�ֽ��ַ�����ָ�����ַ� �滻��ָ���� �ַ�������abcbe����b�滻��123�������к���Ϊa123c123e��
����ԭ��char * substitute(char * dst, char * src, char old, char * new)��15�֣� 
--����C���Զ��ַ����Ĵ���������

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
4.	��һ��ע��ű��У����Ƕ��û������˲���������������û�����ݿ�ķ���Ȩ�ޣ������Ҫ��ע����û��������뱣�����ļ���
Ҫ�� ����һ�����������ļ������ڽű���Ŀ¼�£�һ���û��������м��Զ��Ÿ�������ÿ�н�����һ����¼��
(����һ�����������д��һ���û��������룬�ű���Ŀ¼����Action.cͬһĿ¼���ļ�д���ʽ�ɲο���ͼ)
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
5.	����һ��������
����ԭ��char * format (char * dst, char * src, char * left, char * right, int offset)
��ʵ�ֶ��ַ�����ǰ���ȡ,���ڽ�β�����ж�Ӧ��ƫ�ƣ���char * format (dst, "ab123cd", "ab", "cd", 1)��
���ȡ��һ�γ���ab�������ֱ������cdΪֹ���������ƫ��1���ַ�λ�ã�����Ϊ"123c"�� 
���char * format (dst, "ab123cd", "ab", "cd", -1)������Ϊ"12"��ע:�����char * format (dst, "ab0ab123cd45cd", "ab", "cd", 0)�������Ӧ��Ϊ0ab123
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
6.	��һ��ѡ���Ʒ�ű��Ĵ�������У����ǵõ����������µ�json�ַ���"{"access_token":"4f7487f9-077c-4246-94f5-8ed59e87a0fc","product_id":"pen_001","price":10.00,"desc":null}"
����"access_token"��ֵÿ�ζ���һ�����ҳ��Ȳ�����"product_id"��ֵ�����˲�Ʒ�ı��(���Ȳ�ȷ��)��"price"��ֵ�����˲�Ʒ�ļ۸�(���Ȳ�ȷ��)�����ڽű���Ҫ�ύһ���������������ݣ�
"access_token=4f7487f9-077c-4246-94f5-8ed59e87a0fc&product_id=pen_001&price=10.00&expires_at=2016-12-01_23:30:48"
����access_token��product_id��price��֮ǰ��json�ַ����л�ȡ��expires_atΪ��ǰʱ���һ�죬��������2016-12-01_23:30:48����expires_atΪ2016-12-02_23:30:48��

*/
char * transform(char * dest, char * src){
	char * start = dest;
	char * tmp ;
	
	src = src+2;//ȥ����ͷ��{"
	tmp = (char *)strstr(src,",\"desc\":null}");
	*tmp='\0';//ȥ����β��,"desc":null}
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
