int getMid(int *, int);
ActionGetMid()
{
    int a1[]={10,20,60,80,70};
    int a2[]={10,20,60,80,70,50};
    lr_output_message("len是：%d,中位数是：%d",sizeof(a1)/sizeof(int),getMid(a1,sizeof(a1)/sizeof(int)));
	lr_output_message("len是：%d,中位数是：%d",sizeof(a2)/sizeof(int),getMid(a2,sizeof(a2)/sizeof(int)));
	return 0;
}
int getMid(int *a, int len){
    int mid;
	sort(a,len);
	if(len%2==0){
		mid=(*(a+len/2-1)+*(a+len/2))/2;
	}else{
		mid=*(a+(len-1)/2);
	}

    return mid;
}
int *  sort(int *a, int len){
    int i,j;
	int t;
    for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(*(a+i)>*(a+j)){
				t=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=t;
			}
		}

    }
    return a;
}
