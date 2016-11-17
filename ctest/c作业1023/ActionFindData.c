ActionFindData()
{
	int i,a,b,c;
	for(i=100;i<=999;i++){
		a=i/100;
		b=i%100/10;
		c=i%100%10;
		
		if(i==(getFactorial(a)+getFactorial(b)+getFactorial(c))){
			lr_output_message("三位数是：%d,百位是：%d,十位是：%d,个位是：%d",i,a,b,c);
			break;
		}
		
		//lr_output_message("百位是：%d,十位是：%d,个位是：%d",a,b,c);
		
	}
	return 0;
}


