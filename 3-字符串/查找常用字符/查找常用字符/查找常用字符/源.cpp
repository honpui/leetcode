#include<iostream>
using namespace std;

char ** commonChars(char ** A, int ASize, int* returnSize){
	char** re = (char**)calloc(100,sizeof(char*));

	char** bucket = (char**)calloc(ASize,sizeof(char*));
	

	int i = 0; int len = 0; int j = 0; int t = 0; int num = 0;

	for (i = 0; i < ASize;i++)
	{
		bucket[i] = (char*)calloc(26, sizeof(char));
	}

	for (i = 0; i < ASize;i++)
	{
		len = strlen(A[i]);
		for (j = 0; j < len;j++)
		{
			bucket[i][A[i][j] - 'a']++;
		}
	}

	/* 根据几个桶中相同的数目输出，为0则不输出  */

	for (i = 0; i < 26;i++)
	{
		int count = bucket[0][i];
		for (j = 0; j< ASize; j++)
		{
			if (bucket[j][i]<count)
			{
				count = bucket[j][i];
			}
			
		}
		if (count==0)
		{
			continue;
		}

		for (t = 0; t < count;t++)
		{
			re[num] = (char*)calloc(2,sizeof(char));
			re[num][0] = 'a' + i;
			re[num][1] = '\0';
			num++;
		}

	}
	

	for (i = 0; i < ASize; i++)
	{
		free(bucket[i]);
	}
	free(bucket);


	*returnSize = num;
	return re;

}


int main()
{
	int ASize = 3;
	int returnSize = 0;
	char** A = (char**)calloc(ASize, sizeof(char*));
	int i = 0;

	A[0] = "bella";
	A[1] = "label";
	A[2] = "roller";

	char ** re = commonChars(A, ASize, &returnSize);
}