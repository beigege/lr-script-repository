Actionif()
{
	int a=1,b=13,c=3;
	int max=a;
	if(a<b){
		max=b;
	}
	if(max<c){
		max=c;
	}
	lr_output_message("max is :%d",max);
	return 0;
}
