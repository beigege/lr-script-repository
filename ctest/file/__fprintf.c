/*
	�����ļ���д������
*/
__fprintf()
{
    char * filename = "D:\\roadTest\\roadTest1.txt"; 
    long file; //������File������֡�������Ө
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
��w�� - д,��д��ʱ��.����ļ�����,�͸��Ǹ��ļ�
����ļ�������,�򴴽����ļ� 
��r�� �C��,����Ҫ�ж��ļ��Ĵ���
��a�� �C���ӵ�ԭ�ļ�����
��rw�� �C����д
	�����ļ���д������

r+, w+, a+ ��ʾ�ļ��������
*/
/*
д�ļ�
int fprintf( FILE *file_pointer, const char *format_string ,[args ] );
				�ļ�ָ�룬��ʽ���������
*/
