#include <iostream>
using namespace std;



int** transpose(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes){

	int i = 0; int j = 0;
	*returnSize = AColSize[0] ;

	for (i = 0; i < AColSize[0];i++)
	{
		returnColumnSizes[0][i] = ASize;
	}
	

	int** re = (int**)calloc(AColSize[0] , sizeof(int*));

	

	for (i = 0; i < AColSize[0];i++)
	{
		re[i] = (int*)calloc(ASize, sizeof(int));
	}

	for (i = 0; i < ASize;i++)
	{
		for (j = 0; j < AColSize[0];j++)
		{
			re[j][i] = A[i][j];
		}
	}

	return re;

}

int main()
{
	int ASize=2;
	int AColSize[] = {3,3};
	int returnSize=0;
	int** returnColumnSizes = (int**)calloc(1, sizeof(int*));
	returnColumnSizes[0] = (int*)calloc(ASize,sizeof(int));

	int** A = (int**)calloc(AColSize[0], sizeof(int));
	int a[] = {1,2,3};
	A[0] = a;

	int b[] = { 4,5,6 };
	A[1] = b;
	//int c[] = { 7,8,9 };
	//A[2] = c;



	int** re = transpose(A, ASize, AColSize, &returnSize, returnColumnSizes);
	return 0;
}