/*
	���ļ�
*/
__fread()
{
	char * filename = "D:\\roadTest\\roadTest1.txt"; 
    long file, thefile; 
	int a=0,count=0,total=0;
    char s[32]; 
	char st[32];

    if ((file = fopen(filename, "r" )) == NULL) { 
        lr_output_message ("Unable Read %s", filename); 
        return -1; 
    } 

    fscanf(file, "%s", s); //����s������
	lr_output_message ("%s",s); 

	rewind(file);
    while (!feof(file)) { 
        count = fread(st, sizeof(char),50, file); //���ļ��ж�ȡ50�������ַ���st
        total += count; 
    } 
	lr_output_message("%d",total);
	lr_output_message("%s",st);

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
int readFile( FILE *file_pointer, const char *format string [, args] ); 
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
/*
��ȡ�Ǹ�ʽ������
size_t fread( void *buffer, size_t size, size_t count, FILE *file_pointer ); 
								Ŀ��,����Size��	Ŀ�곤�ȣ�				�ļ�ָ��
*/

