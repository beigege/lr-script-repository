//ͳ�Ƴ��Ƿ��ַ��ĸ�������ĸ������������ַ���Ϊ�Ƿ��ַ���
ActionIllegal()
{
	char str[]="jieofAoo)))eEe**7dfUe^^fds^%dfs%";
	lr_output_message("%d:",countIllegal(str));
	return 0;
}



int countIllegal(char * p){
	int sum=0;
	while(*p){
		if(isalnum(*p)){
			sum++;
		}
		p++;
	}
	return sum;
}
