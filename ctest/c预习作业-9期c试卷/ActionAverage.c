ActionAverage()
{
	int a[]={1,2,3,4,5,6,7};
	lr_output_message("avg:%d",sizeof(a)/sizeof(int));
	lr_output_message("avg:%d",getavg(a,sizeof(a)/sizeof(int)));
	return 0;
}

int getavg(int * a,int len){
	int sum=0;
	int i;
	
	for(i=0;i<len;i++){
		sum+=*(a+i);
	}
	return (sum*1.0)/i;
}
