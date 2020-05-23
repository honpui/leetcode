

int* diStringMatch(char * S, int* returnSize){

	int len = strlen(S);
	int* re = (int*)calloc(len+1,sizeof(int));

	int front = 0;
	int back = len;

	int i = 0;

	*returnSize = len + 1;

	for (i = 0; i < len;i++)
	{
		if (S[i]=='I')
		{
			re[i]=front++;
		}
		else
		{
			re[i]=back--;
		}
	}
	re[i] = back;
	return re;
}