Action7or11()
{
	int i,j=0;
	int * result= (int *)malloc(1000 *sizeof(int));
	for(i=7;i<=100;i++){
		if((i%77!=0)&&(i%7==0  || i%11==0)){
			result[j]=i;
			j++;
		}
	}

	while(*result){
			lr_output_message("%d",*result);
			result++;
	}
	return 0;
}


