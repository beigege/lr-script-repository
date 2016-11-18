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
		if (ferror(file)) { //检查IO过程中是否有错误发生
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
写文件
int fprintf( FILE *file_pointer, const char *format_string [, args ] );
				文件指针，格式，输入变量
*/
/*
读取指定格式字符到变量
int scanf( FILE *file_pointer, const char *format string [, args] ); 
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

