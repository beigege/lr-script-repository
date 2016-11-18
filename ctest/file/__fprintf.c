/*
	创建文件并写入内容
*/
__fprintf()
{
    char * filename = "D:\\roadTest\\roadTest1.txt"; 
    long file; //不能用File，好奇怪。——马莹
    int id; 
    char * groupname; 

    // If not exist then create it
    if ((file = fopen(filename, "w+" )) == NULL) { 
       lr_output_message("Unable to create %s", filename); 
        return -1; 
    } 
    // Write the Vuser ID and group to the log file 
	lr_whoami(&id, &groupname, NULL); 

    fprintf(file, "log file of virtual user ID: %d group: %s\n", id, groupname); 

    fclose(file);
}


/*
fopen()
“w” - 写,当写的时候.如果文件存在,就覆盖该文件
如果文件不存在,则创建新文件 
“r” –读,先需要判断文件的存在
“a” –附加到原文件后面
“rw” –读和写
	创建文件并写入内容

r+, w+, a+ 表示文件必须存在
*/
/*
写文件
int fprintf( FILE *file_pointer, const char *format_string ,[args ] );
				文件指针，格式，输入变量
*/
