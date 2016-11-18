/*
	写文件，并做检查
	size_t fwrite( const void *buffer, size_t size, size_t count, FILE *file_pointer ); 
						目标，目标长度,类型Size，文件指针
*/
__fwrite()
{
	int is_exists;
	char *string="the test string to write";
	char *file="D:\\roadTest\\roadTest2.txt";

	is_exists= lr_file_exists(file);
	 if (is_exists) {
		lr_output_message("the file is already exists");
	}
	 else 
	{
		lr_save_file(file,string,strlen(string));
		lr_output_message("the file is have been saved");
	 }  
	return 0;
}

//check  file_name exists or not
	int lr_file_exists(char * file_name)
	{
       int fp;
	   fp=fopen(file_name,"rb+"); //binary  t  text
	   if(fp==NULL) 
		   { 
		   return FALSE;
             }
	   else 
	   {
		   fclose(fp);
		   return TRUE;
		   }
   	}

// save the file to disk

int lr_save_file(char * file_name, void *file_content,unsigned int file_size)
{ 
  int rc;
  int fp;
  if (file_name==NULL) {
	  lr_error_message("file name is null");
  return -1;
  }
  else if (file_content==NULL) {
	  lr_error_message("file content is null");
  return -1;
  }
  else if (file_size<1) {
	  lr_error_message("invalid file size:%d", file_size);
  return -1;
	  }
  if (lr_file_exists(file_name)==TRUE) {
	  lr_error_message("File %s already exists");
      return -1;
  }
   fp= fopen (file_name,"wb");//b二进制模式，即写入的是二进制模式，还可以以文件写入，把b改为t
   if (fp==NULL) {
	   lr_error_message("Error opening file: %s", file_name);
    return -1;
	   }
   rc=fwrite(file_content,file_size, 1,fp);
   if(rc !=1)
   {
	   lr_error_message("error wirtting to file. Items written: %d",rc);
    return -1;
   }
   rc=fclose(fp);
	if (rc !=0) {
		lr_error_message("error closeing file %s",file_name);
        return -1;
          	}
  return  0;
}
