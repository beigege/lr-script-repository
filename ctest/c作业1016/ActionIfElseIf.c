ActionIfElseIf()
{
	int a=6,b=13,c=6;
	int max;
	if(a<=c&&b<=c){
		max=c;
	}else if(a>=b&&a>=c){
		max=a;
	}else{
		max=b;
	}

	
	lr_output_message("max is :%d",max);

	return 0;
}
