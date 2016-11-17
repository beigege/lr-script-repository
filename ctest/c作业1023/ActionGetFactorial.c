ActionGetFactorial()
{
	int x=5;
	lr_output_message("xÊÇ£º%d,½×³ËÊÇ£º%d",x,getFactorial(x));
	return 0;
}

int getFactorial(int x){
	int i,result=1;
	for(i=1;i<=x;i++){
		result*=i;
	}
	return result;
}
