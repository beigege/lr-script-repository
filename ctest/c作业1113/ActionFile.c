ActionFile()
{
// 	char * dirpath="d://roadTest";
// 	lr_output_message("%d",mkdirTest(filepath));

// 	char * filepath="d://roadTest//test.txt";
// 	lr_output_message("%d",mkfileTest(filepath));
 
// 	__fprintf();
// 	__fread();
// 	__fread2();

	return 0;
}

int mkdirTest(char * filepath){
	return mkdir(filepath);//����һ��Ŀ¼�����ɹ��򷵻�0�����򷵻�-1
	
}

int mkfileTest(char * filepath){
// 	char *commond;//Warning: Invalid parameter detected in function.
	char commond[1024];
	sprintf(commond,"fsutil file createnew %s 0",filepath);
	system(commond);
	return 0;
	
}

void openfile(char * filepath,char * mod){
	fopen(filepath,mod);
	return ;
}
/*
	�����ļ���д������
*/
__fprintf()
{
    char * filename = "D:\\roadTest\\roadTest3.txt"; 
    long file; 
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
__fread()
{
	char * filename = "D:\\roadTest\\roadTest2.txt"; 
    long file, thefile; 
	int a=0,count=0,total=0;
    char s[32]; 
	char st[32];

    if ((file = fopen(filename, "r" )) == NULL) { 
        lr_output_message ("Unable Read %s", filename); 
        return -1; 
    } 

    fscanf(file, "%s", s); //����s������,ֻ����log��������û������
						   // fscanf(file, "s���飺%s", s); //���ˡ�s���顰�⼸���ֺ󣬴�ӡ�����ǿ��ˡ���Ϊ�⼸���ֲ��Ǹ�ʽ�ַ�
	lr_output_message ("s���飺%s",s); 

	rewind(file);
    while (!feof(file)) { 
        count = fread(st, sizeof(char),50, file); //���ļ��ж�ȡ50�������ַ���st
        total += count; 
    } 
	lr_output_message("total:%d",total);
	lr_output_message("st���飺%s",st);

    fclose(file); 
	return 0;
}
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
