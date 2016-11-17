char *get_string_1(){
	char p[] = "hello world!";
	return p;
}

char *get_string_2(){
	char *p = "hello world!";
	return p;
}

Action()
{
	char *p;
	p = get_string_1();
	lr_output_message("get_string_1:%s",p);
	p = get_string_2();
	lr_output_message("get_string_2:%s",p);
	return 0;
}
