/*
	����Ŀ¼
*/
__mkdir()
{
    char new_dir[] = "D:\\roadTest"; 

    if (mkdir(new_dir)) //����һ��Ŀ¼�����ɹ��򷵻�0�����򷵻�-1������Ө
        lr_output_message ("Create directory %s failed", new_dir); 
    else 
        lr_output_message ("Created new directory %s", new_dir); 

	return 0;
}
