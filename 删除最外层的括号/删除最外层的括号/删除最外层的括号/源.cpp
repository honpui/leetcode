#include<iostream>
using namespace std;

char * removeOuterParentheses(char * S){

	/* ��ջ����ʽ�����������ţ��������ŵ��������ʣ��һ�����ǣ�������� */
	int len = strlen(S);
	char* re = (char*)calloc(len, 1);
	int i = 0;
	int left = 0,right=0;
	int start = 0;
	int index=0;

	for (i = 0; i < len; i++)
	{
		if (S[i] == '(')
		{
			left++;
		}
		else
		{
			right++;
		}

		if (left == right)
		{
			strncpy(re+index,S+start+1,i-start-1);
			index = index + i - start - 1;
			start = i+1;
			
		}
	}
	
	return re;
}

int main()
{
	char * S="(()())(())";
	char * re= removeOuterParentheses( S);

	int len = strlen(re);

	printf("%s\n", re);
	return 0;
}