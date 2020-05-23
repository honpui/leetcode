#include <iostream>
using namespace std;

int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){

	int i = 0; int j = 0; int flag = 0; int x = 0; int index = 0;

	int* re = (int*)calloc(matrixSize, sizeof(int));

	for (i = 0; i < matrixSize;i++)
	{

		int min_row = matrix[i][0];
		index = 0;
		for (j = 1; j < matrixColSize[0];j++)
		{
			if (min_row>matrix[i][j])
			{
				min_row = matrix[i][j];
				index = j;
			}
		}

		flag = 0;
		for (j = 0; j < matrixSize;j++)
		{
			if (min_row<matrix[j][index])
			{
				flag = 1;
				break;
			}
		}

		if (!flag)
		{
			re[x++] = min_row;
		}

	}

	*returnSize = x;
	return re;

}


int main()
{

	int returnSize = 0;
	int matrixColSize = 3;
	int** matrix = (int**)calloc(3,sizeof(int*));
	int matrix_1[3] = {3,7,8};
	int matrix_2[3] = { 9,11,13};
	int matrix_3[3] = { 15,16,17 };

	matrix[0] = matrix_1;
	matrix[1] = matrix_2;
	matrix[2] = matrix_3;

	int matrixSize = 3;
	int* re = luckyNumbers(matrix,matrixSize, &matrixColSize, &returnSize);

	return 0;


}