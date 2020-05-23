#include<iostream>
using namespace std;


int compInc(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}



int twodive(int *array, int start, int finish, int num_min, int num_max)
{
	if ((num_max<array[start]) || (num_min>array[finish]))
	{
		return 0;
	}

	int index = (start + finish) / 2;
	if (array[index] >= num_min && array[index] <= num_max)
	{
		return 1;
	}

	if (array[index] < num_min)
	{
		return twodive(array, index + 1, finish, num_min, num_max);
	}
	else
	{
		return twodive(array, start, index - 1, num_min, num_max);
	}
}



int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d){
	int count = 0;
	int i = 0;

	/* ¶Ôarr2ÅÅÐò */
	qsort(arr2, arr2Size, sizeof(int), compInc);
	for (i = 0; i < arr1Size; i++)
	{
		if (!twodive(arr2, 0, arr2Size - 1, arr1[i] - d, arr1[i] +d))
		{
			count++;
		}
	}
	return count;
}


int main()
{
	int arr1[] = {4,5,8};
	int arr2[] = {10,9,1,8};
	int re =findTheDistanceValue(arr1, sizeof(arr1)/sizeof(int),  arr2, sizeof(arr2)/sizeof(int),2);
	return 0;
}