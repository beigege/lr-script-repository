ActionGetPrimeSum()
{
	int x=9;
	lr_output_message("������%d�������������ǣ�%d",x,getPrimeSum(x));
	return 0;
}
int getPrimeSum(int a){

	int i,sum=0;
	if(a<=1){
		lr_output_message("����Ƿ�������Ӧ����1");
		return 0;
	}
	for(i=3;i<a;i++){
		if(isPrime(i)==1){
			lr_output_message("������%d",i);
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
