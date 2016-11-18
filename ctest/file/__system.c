/*
	使用system创建文件
*/
__system()
{
	char command[1024]; 
    char new_file[] = "D:\\roadTest\\roadTest.txt"; 

    sprintf(command, "fsutil file createnew %s 0",new_file); 
	/*写入格式化的string数据——马莹
	fsutil file createnew，Windows命令行下创建文件的命令。0表示大小。
	
	fsutil file createnew new.txt 300

创建一个大小为300字节的new.txt
	*/
	system(command); //执行操作系统命令

	return 0;
}
