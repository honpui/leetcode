#include<iostream>
using namespace std;

int* replaceElements(int* arr, int arrSize, int* returnSize){

	int* re = (int*)calloc(arrSize,sizeof(int));
	*returnSize = arrSize;

	int i = 0;

	int maxone = -1;

	for (i = arrSize - 1; i >= 0; i--)
	{
		re[i] = maxone;
		if (maxone < arr[i])
		{
			maxone = arr[i];
		}
	}
	return re;
}


int main()
{

	int arr[] = {17,18,5,4,6,1};
	int returnSize = 0; int arrSize = sizeof(arr) / sizeof(int);

	int* re = replaceElements(arr, arrSize, &returnSize);

	int i = 0;
	for (i = 0; i < returnSize; i++)
	{
		printf("%d\n",re[i]);
	}

	return 0;
}