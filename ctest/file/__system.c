/*
	ʹ��system�����ļ�
*/
__system()
{
	char command[1024]; 
    char new_file[] = "D:\\roadTest\\roadTest.txt"; 

    sprintf(command, "fsutil file createnew %s 0",new_file); 
	/*д���ʽ����string���ݡ�����Ө
	fsutil file createnew��Windows�������´����ļ������0��ʾ��С��
	
	fsutil file createnew new.txt 300

����һ����СΪ300�ֽڵ�new.txt
	*/
	system(command); //ִ�в���ϵͳ����

	return 0;
}
