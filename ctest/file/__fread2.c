__fread2()
{
	char * filename = "D:\\roadTest\\roadTest1.txt"; 
    long file, thefile; 
	int a=0,count=0,total=0;
    char s[32]; 


    if ((file = fopen(filename, "r" )) == NULL) { 
        lr_output_message ("Unable to create %s", filename); 
        return -1; 
    } 

    fscanf(file, "%s", s); 
	lr_output_message ("%s",s); 

	rewind(file);
    while (!feof(file)) { 
        count = fread(s, sizeof(char), 32, file); 
        lr_output_message ("%3d read", count); 
		lr_output_message("%s",s);
		if (ferror(file)) { //���IO�������Ƿ��д�����
            lr_output_message ("Error reading file %s", filename); 
			break; 
        } 
        total += count;  
    } 
	lr_output_message("%s",s);

    fclose(file); 
	return 0;
}

/*
д�ļ�
int fprintf( FILE *file_pointer, const char *format_string [, args ] );
				�ļ�ָ�룬��ʽ���������
*/
/*
��ȡָ����ʽ�ַ�������
int scanf( FILE *file_pointer, const char *format string [, args] ); 
				�ļ�ָ�룬��ʽ���������
*/
/*
void rewind( FILE *file_pointer );
ָ�뷴ת���ӵ�ǰλ�ûص���ʼ��
*/
/*
int feof( FILE *file_pointer ); 
�ļ�ָ���Ƿ��Ѿ������λ��,0:��δ,���㣺δ����
*/

