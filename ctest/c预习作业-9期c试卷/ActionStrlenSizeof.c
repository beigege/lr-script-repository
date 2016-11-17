ActionStrlenSizeof()
{
    char str[]="testroad";
	lr_output_message("strlen:%d",strlen(str));
	lr_output_message("sizeof:%d",sizeof(str));
	lr_output_message("getstrlen:%d",getstrlen(str));
	lr_output_message("getsizeof:%d",getsizeof(str));
	return 0;
}

int getstrlen(char * str){
	int count=0;
	while(*str++){
		count++;
	}
	return count;

}
int getsizeof(char * str){
	int count=1;
	while(*str++){
		count++;
	}
	return count;
}
