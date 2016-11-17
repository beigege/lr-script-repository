ActionABC()
{
	int a,b,c;
	int flag=0;

	for(c=0;c<=10;c++){
		for(b=0;b<=10;b++){
			if((b*c*c*(c-1))==20){
				//lr_output_message("c:%d",c);
				//lr_output_message("b:%d",b);
				flag=1;
				break;
			}
		}
		if(flag==1){
			break;
		}

	}
	lr_output_message("c:%d",c);
	lr_output_message("b:%d",b);
	a=30-b*c*c;
	lr_output_message("a:%d",a);
	return 0;
}
