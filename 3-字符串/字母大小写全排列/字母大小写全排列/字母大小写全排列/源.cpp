#include<iostream>
using namespace std;



void loop(char* S, int len,int *loc,int i,char**re,int* cur)
{
	if (i==len)
	{
		re[(*cur)] = (char*)calloc(strlen(S)+1, sizeof(char));
		memcpy(re[(*cur)++], S, strlen(S)+1);
		return;
	}

	
	loop(S, len, loc, i+1, re, cur);
	S[loc[i]] = toupper(S[loc[i]]);
	loop(S, len, loc, i+1, re, cur);
	S[loc[i]] = tolower(S[loc[i]]);

}



char ** letterCasePermutation(char * S, int* returnSize){

	int len = strlen(S);

	int *loc = (int*)calloc(len, sizeof(int));

	int i = 0; int x = 0;
	for (i = 0; i < len;i++)
	{
		if ((S[i]>= '0') && (S[i]<='9'))
		{
			continue;
		}
		S[i] = tolower(S[i]);
		loc[x++] = i;

	}
	

	int num = pow(2, x);

	char** re = (char**)calloc(num, sizeof(char*));

	int cur = 0;


	loop(S, x, loc, 0,re, &cur);

	returnSize[0] = pow(2, x);

	free(loc);
	return re;
}


int main()
{
	char S[] = "a1b1";

	int returnSize = 0;
	char ** re = letterCasePermutation(S, &returnSize);
	return 0;
}