ActionGetPrimeSum()
{
	int x=9;
	lr_output_message("不大于%d的所有素数和是：%d",x,getPrimeSum(x));
	return 0;
}
int getPrimeSum(int a){

	int i,sum=0;
	if(a<=1){
		lr_output_message("输入非法，素数应大于1");
		return 0;
	}
	for(i=3;i<a;i++){
		if(isPrime(i)==1){
			lr_output_message("素数：%d",i);
			sum+=i;
		}
	}
	return sum;
}

int isPrime(int a){
	int i;
	int r=1;
	for(i=2;i<a;i++){
		if(a%i==0){
			r=0;
			break;
		}
	}
	return r;
	
}
