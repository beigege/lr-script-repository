/*
	读文件
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

    fscanf(file, "%s", s); //读到s数组中
	lr_output_message ("%s",s); 

	rewind(file);
    while (!feof(file)) { 
        count = fread(st, sizeof(char),50, file); //从文件中读取50个长度字符到st
        total += count; 
    } 
	lr_output_message("%d",total);
	lr_output_message("%s",st);

    fclose(file); 
	return 0;
}
/*
写文件
int fprintf( FILE *file_pointer, const char *format_string [, args ] );
				文件指针，格式，输入变量
*/
/*
读取指定格式字符到变量
int readFile( FILE *file_pointer, const char *format string [, args] ); 
				文件指针，格式，输出变量
*/
/*
void rewind( FILE *file_pointer );
指针反转，从当前位置回到开始处
*/
/*
int feof( FILE *file_pointer ); 
文件指针是否已经到最后位置,0:最未,非零：未结束
*/
/*
读取非格式化数据
size_t fread( void *buffer, size_t size, size_t count, FILE *file_pointer ); 
								目标,类型Size，	目标长度，				文件指针
*/

