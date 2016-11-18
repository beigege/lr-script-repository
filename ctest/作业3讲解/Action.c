Action()
{
	/*��һ��*/
// 	char * src = "ab cd ef";
// 	char * dst = (char *)malloc(10);
// 	char * result = (char *)trim(dst, src);
// 	lr_output_message(result);
// 	free(dst);

	/*������*/
// 	char * str = "123,456,789";
// 	char * dst = (char *)malloc(10);
// 	char * result = (char *)substitute(dst, str);
// 	lr_output_message("%s", result);
// 	free(dst);

	/*������*/
// 	int result[10000];
// 	findNum(result);

    /*������*/
// 	char * src = "abAb123%cd ef";
// 	char * dst = (char *)malloc(10);
// 	char * result = (char *)format(dst, src);
// 	lr_output_message(result);
// 	free(dst);

    /*������*/
	char * src = "zhEshIgekenDiedeTaimu";
	char * dst = (char *)malloc(10);
	char * result = (char *)sortFive(dst, src);
	lr_output_message(result);
	free(dst);
    return 0;

}

/*
	1.�Ա�һ����:ɾ���ַ����е����пո�;
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
	2.���дһ��������Ҫ��ʵ�����¹��ܣ�
	���ַ�����jieofAoo)))eEe**7dfUe^^fds^%dfs%�����д���ͳ�Ƴ��Ƿ��ַ��ĸ�������ĸ������������ַ���Ϊ�Ƿ��ַ�����
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
	3. ͨ�����������ǻ�ȡ����һ���ַ���"192,000,123"������Ҫ��ȥ���ַ����еĶ��ţ�
	���滻������%%������192%%000%%123���дһ��������ʵ����
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
	4. ��дһ���������鵽1��10000�ڣ��ܱ�7����11������ͬʱ���ܱ�7��11ͬʱ�������������ŵ������д�ӡ����
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
	5. ����һ��������ʵ�ֶ��ַ��������²��������ַ�Ϊ��ĸʱ����Ӧ��ASCIIֵ��5��
	���ַ�Ϊ����ʱ��ԭ����������������ַ�����ʱ�����������������Ѵ�����ַ�������Ҫ��ָ��ķ�ʽ��ʵ�֣�
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
	6.����һ�����������ַ�����zhEshIgekenDiedeTimu������С�����˳�����У�����ȡǰ5λ��
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
