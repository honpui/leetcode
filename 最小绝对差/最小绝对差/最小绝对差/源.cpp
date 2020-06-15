#include <iostream>
using namespace std;


int compare(const void* a, const void*b)
{
	return *(int*)a - *(int*)b;
}

int** minimumAbsDifference(int* arr, int arrSize, int* returnSize, int** returnColumnSizes){

	int** re = (int**)calloc(arrSize,sizeof(int*));
	int i = 0;

	for (i = 0; i < arrSize;i++)
	{
		re[i] = (int*)calloc(2,sizeof(int));
	}

	qsort(arr, arrSize, sizeof(int), compare);

	int min_diff = arr[1] - arr[0]; int count = 0;

	for (i = 0; i < arrSize-1;i++)
	{
		if (arr[i + 1] - arr[i] <min_diff)
		{
			count = 0;
			re[count][0] = arr[i];
			re[count][1] = arr[i+1];
			min_diff = arr[i + 1] - arr[i];
			count++;

		}
		else if (arr[i + 1] - arr[i] == min_diff)
		{
			re[count][0] = arr[i];
			re[count][1] = arr[i + 1];
			count++;
		}
	}

	*returnSize = count;

	returnColumnSizes[0] = (int*)calloc(count, sizeof(int));

	for (i = 0; i < count;i++)
	{
		
		returnColumnSizes[0][i] = 2;
	}
	
	return re;


}

int main()
{

	int arr[] = {4,2,1,3};
	int arrSize = sizeof(arr) / sizeof(int);
	int returnSize = 0;
	int** returnColumnSizes=(int**)calloc(arrSize,sizeof(int*));
	int** re = minimumAbsDifference(arr,  arrSize, &returnSize, returnColumnSizes);
	return 0;
}