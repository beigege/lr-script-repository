//统计出非法字符的个数（字母，数字以外的字符都为非法字符）
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
