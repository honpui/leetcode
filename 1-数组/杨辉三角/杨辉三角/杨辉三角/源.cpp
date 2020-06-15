#include <iostream>
using namespace std;


int** generate(int numRows, int* returnSize, int** returnColumnSizes){

	if (numRows==0)
	{
		returnSize[0] = 0;
		return NULL;
	}

	int** re = (int**)calloc(numRows, sizeof(int**));
	int i = 0;
	returnColumnSizes[0] = (int*)calloc(numRows, sizeof(int));
	for (i = 0; i < numRows;i++)
	{
		re[i] = (int*)calloc(i + 1, sizeof(int));
		returnColumnSizes[0][i] = i + 1;

		re[i][0] = 1;
		re[i][i] = 1;
		int j = 0;
		for (j = 1; j < i; j++)
		{
			re[i][j] = re[i - 1][j - 1] + re[i - 1][j];
		}

	}
	returnSize[0] = numRows;


	return re;

}

int main()
{
	int numRows = 5;
	int returnSize = 0;
	int** returnColumnSizes=(int**)calloc(1,sizeof(int*));
	int** re = generate(numRows, &returnSize, returnColumnSizes);
	return 0;
}