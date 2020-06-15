#include<iostream>
using namespace std;


int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize){


	int *re = (int*)calloc(10001,sizeof(int));

	int* so = (int*)calloc(1001,sizeof(int));
	int index = 0;

	int i = 0;

	for (i = 0; i < arr1Size;i++)
	{
		re[arr1[i]]++;
	}

	int num = 0;
	for (i = 0; i < arr2Size;i++)
	{
		num = re[arr2[i]];
		while (num)
		{
			so[index++] = arr2[i];
			num--;
		}
		re[arr2[i]] = 0;
	}

	for (i = 0; i < 1001;i++)
	{
		num = re[i];
		while (num)
		{
			so[index++] = i;
			num--;
		}
	}

	returnSize[0] = arr1Size;

	free(re);
	return so;
}

int main()
{

}