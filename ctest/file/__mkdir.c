/*
	创建目录
*/
__mkdir()
{
    char new_dir[] = "D:\\roadTest"; 

    if (mkdir(new_dir)) //创建一个目录，若成功则返回0，否则返回-1——马莹
        lr_output_message ("Create directory %s failed", new_dir); 
    else 
        lr_output_message ("Created new directory %s", new_dir); 

	return 0;
}
