Action()
{
	/*第一题*/
// 	char * src = "ab cd ef";
// 	char * dst = (char *)malloc(10);
// 	char * result = (char *)trim(dst, src);
// 	lr_output_message(result);
// 	free(dst);

	/*第三题*/
// 	char * str = "123,456,789";
// 	char * dst = (char *)malloc(10);
// 	char * result = (char *)substitute(dst, str);
// 	lr_output_message("%s", result);
// 	free(dst);

	/*第四题*/
// 	int result[10000];
// 	findNum(result);

    /*第五题*/
// 	char * src = "abAb123%cd ef";
// 	char * dst = (char *)malloc(10);
// 	char * result = (char *)format(dst, src);
// 	lr_output_message(result);
// 	free(dst);

    /*第六题*/
	char * src = "zhEshIgekenDiedeTaimu";
	char * dst = (char *)malloc(10);
	char * result = (char *)sortFive(dst, src);
	lr_output_message(result);
	free(dst);
    return 0;

}

/*
	1.试编一函数:删除字符串中的所有空格;
*/
char * trim(char * dst, char * src) {
	char * start = dst;

	while (*src) {
		if (*src == ' ') {
			src++;
			continue;
		}

// 		*dst++ = *src++;
		*dst = *src;
		dst++;
		src++;
		*dst = '\0';
	}


	return dst;
}

/*
	2.请编写一个函数，要求实现如下功能：
	对字符串“jieofAoo)))eEe**7dfUe^^fds^%dfs%”进行处理，统计出非法字符的个数（字母，数字以外的字符都为非法字符）。
*/
int countIleagle(char * str){
	int len, sum = 0;
	len = strlen(str);

	while (*str) {
		if (isBetween(*str, 'a', 'z') || isBetween(*str, 'A', 'Z') || isBetween(*str, '0', '9')) {
			sum++;
		}

		str++;
	}


	return len - sum;
}

int isBetween(char c, char left, char right){
	if (c >= left && c <= right) {
		return 1;
	}

	return 0;
}

/*
	3. 通过关联，我们获取到了一个字符串"192,000,123"，现在要求去掉字符串中的逗号，
	并替换成两个%%，即：192%%000%%123请编写一个函数来实现它
*/
char * substitute(char * dst, char * src) {
	char * start = dst;

	while (*src) {
		if (*src == ',') {
			*dst = '%';
			dst++;
			*dst = '%';
			dst++;

		} else{
			*dst++ = *src;
		}

		*src++;
	}

	*dst = 0;

	return start;
}

/*
	4. 编写一个函数，查到1至10000内，能被7或者11整除，同时不能被7和11同时整除的数，并放到数组中打印出来
*/
void findNum(int result[]){

	int i, count, j = 0;

	for (i = 1; i <= 10000; i++) {
		count = 0;
		if (i % 7 == 0) {
			count++;
		}
		if (i % 11 == 0) {
			count++;
		}

		if (count == 1) {
			result[j] = i;
			lr_output_message("%d", i);
			j++;
		}
	}

}

/*
	5. 定义一个函数，实现对字符串做如下操作：当字符为字母时，对应的ASCII值加5，
	当字符为数字时，原样输出，当有其它字符出现时，结束操作，返回已处理的字符串（需要用指针的方式来实现）
*/
char * format(char * dst, char * src) {
	char * start = dst;

	while (*src) {
		if (isBetween(*src, 'a', 'z') || isBetween(*src, 'A', 'Z')) {
			*dst = *src + 5;
			dst++;
			src++;
		} else if(isBetween(*src, '0', '9')){
// 			*dst++ = *src++;
			*dst = *src;
			dst++;
			src++;
		} else {
			break;
		}

		*dst = 0;
		
	}

	return start;

}

/*
	6.定义一个函数，对字符串“zhEshIgekenDiedeTimu”按从小到大的顺序排列，并截取前5位数
*/
char * sortFive(char * dst, char * src) {
    char * start = dst;
    int i, j;
    char tmp;
    int len = strlen(src);
    strcpy(dst, src);

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < len; j++) {
            if (dst[j] < dst[i]) {
                tmp = dst[j];
                dst[j] = dst[i];
                dst[i] = tmp;
            }
        }
    }

    dst[5] = 0;

    return start;
}
