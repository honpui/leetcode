#include<iostream>
using namespace std;


int judge(int input,int target)
{
	int re = (sqrt(8*target-8*input+pow(2*input+1,2))-(2*input+1))/2;

	if ((2 * input + re)*(re+1) == 2*target)
	{
		return re;
	}
	return 0;
}

int** findContinuousSequence(int target, int* returnSize, int** returnColumnSizes){

	int** re = (int**)calloc(target,sizeof(int*));
	int i = 0; int n = 0; int j = 0; int index = 0;
	

	for (i = 1; i < target/2;i++)
	{
		n = judge(i, target);
		if (!n)
		{
			continue;
		}

		re[index] = (int*)calloc(n+1, sizeof(int));
		returnColumnSizes[0][index] = n+1;

		for (j = 0; j <= n;j++)
		{
			re[index][j] = i + j;
		}
		index++;
	}

	*returnSize = index;
	return re;

}


int main()
{
	int returnSize = 0;
	int** returnColumnSizes = (int**)calloc(1,sizeof(int*));
	returnColumnSizes[0] = (int*)calloc(9,sizeof(int));

	int** re = findContinuousSequence(9, &returnSize, returnColumnSizes);

	return 0;


}