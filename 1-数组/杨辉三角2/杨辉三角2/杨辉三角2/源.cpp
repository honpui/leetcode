#include<iostream>
using namespace std;

int* getRow(int rowIndex, int* returnSize){

	int* array = (int*)calloc(rowIndex + 1, sizeof(int));
	int first = 0, second = 0;
	if (rowIndex==0)
	{
		array[0] = 1;
		*returnSize = 1;
		return array;
	}

	int i = 0, j = 0, index = 0;
	array[0] = 1;
	for (i = 1; i <= rowIndex; i++)
	{
		first = 0;
		second = array[0];
		index = 0;
		j = i;
		while (j--)
		{
			first = second;
			second = array[++index];
			array[index] = first + second;

		}
		array[i] = 1;

	}

	*returnSize = rowIndex+1;
	return array;
}