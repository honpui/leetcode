#include <iostream>
using namespace std;


void countnum(char* x,char* re)
{
	int i = 0;

	int num = strlen(x);

	for (i = 0; i < num;i=i+2)
	{

		re[x[i] - 'a']++;
	}

	for (i = 1; i < num; i=i+2)
	{
		re[x[i] - 'a'+26]++;
	}


}

int compare_two_char(char* a,char* b)
{
	int i = 0;

	for (i = 0; i < 52;i++)
	{
		if (a[i]!=b[i])
		{
			return false;
		}
	}

	return true;
}

int numSpecialEquivGroups(char ** A, int ASize){

	char** re = (char**)calloc(ASize,sizeof(char*));

	int i = 0;

	for (i = 0; i < ASize;i++)
	{
		re[i] = (char*)calloc(26*2,sizeof(char));
		countnum(A[i], re[i]);
	}

	/* 开始判断重复项 */
	short* index = (short*)calloc(ASize, sizeof(short));
	index[0] = 0;
	int count = 1;

	for (i = 1; i < ASize;i++)
	{
		int x = 0;
		int flag = 0;
		while (x<count)
		{
			if (compare_two_char(re[index[x]], re[i]))
			{
				flag = 1;
				break;
			}
			x++;
		}

		if (!flag)
		{
			index[count++] = i;
		}
		
	}

	free(index);



	for (i = 0; i < ASize; i++)
	{
		free(re[i]);
	}


	free(re);
	return count;


}


int main()
{

	char ** A = (char**)calloc(6, sizeof(char*));

	char x[] = "a";
	char x1[] = "b";
	char x2[] = "c";
	char x3[] = "a";
	char x4[] = "c";
	char x5[] = "c";


	A[0] = x;
	A[1] = x1;
	A[2] = x2;
	A[3] = x3;
	A[4] = x4;
	A[5] = x5;
	int re = numSpecialEquivGroups(A, 6);
	return 0;
}