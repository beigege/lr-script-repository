ActionFindData()
{
	int i,a,b,c;
	for(i=100;i<=999;i++){
		a=i/100;
		b=i%100/10;
		c=i%100%10;
		
		if(i==(getFactorial(a)+getFactorial(b)+getFactorial(c))){
			lr_output_message("��λ���ǣ�%d,��λ�ǣ�%d,ʮλ�ǣ�%d,��λ�ǣ�%d",i,a,b,c);
			break;
		}
		
		//lr_output_message("��λ�ǣ�%d,ʮλ�ǣ�%d,��λ�ǣ�%d",a,b,c);
		
	}
	return 0;
}


