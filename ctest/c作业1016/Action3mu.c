Action3mu()
{
	int a=16,b=13,c=6;
	int max=a;
	max =(a<b)?((b<c)?c:b):((a<c)?c:a);

	
	lr_output_message("max is :%d",max);
	return 0;
}
