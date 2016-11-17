ActionIfElse()
{
	int a=3,b=9,c=4;
	int max;
	if(a<b){
		if(b<c){
			max=c;
		}else{
			max=b;
		}
	}else{
		if(a<c){
			max=c;
		}else{
			max=a;
		}
	}
	
	lr_output_message("max is :%d",max);
	return 0;
}
