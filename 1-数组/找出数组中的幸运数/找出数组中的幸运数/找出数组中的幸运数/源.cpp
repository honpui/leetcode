#include <iostream>
using namespace std;

int findLucky(int* arr, int arrSize){

	int * re = (int*)calloc(501, sizeof(int));

	int i = 0; int count = -1;
	for (i = 0; i < arrSize;i++)
	{
		re[arr[i]]++;
	}

	for (i = 1; i <= 500;i++)
	{
		if (re[i]==i && i > count)
		{
			count = i;
		}
	}

	return count;

}