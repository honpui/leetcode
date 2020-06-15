#include <iostream>
using namespace std;


typedef struct{
	int ori;
	int num_1;
}sp;

int compare(const  void * a, const  void *b)
{
	if (((sp*)a)->num_1 < (((sp*)b)->num_1))
	{
		return -1;
	}

	else if (((sp*)a)->num_1 == (((sp*)b)->num_1))
	{
		if (((sp*)a)->ori < (((sp*)b)->ori))
		{
			return -1;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	
}

int count_1(int x)
{
	int count = 0;

	while (x)
	{
		count += (x&0x1);
		x = x >> 1;
	}
	return count;
}

int* sortByBits(int* arr, int arrSize, int* returnSize){


	sp* re = (sp*)calloc(arrSize,sizeof(sp));

	int i = 0;
	for (i = 0; i < arrSize;i++)
	{
		re[i].ori = arr[i];
		re[i].num_1 = count_1(arr[i]);
	}
	qsort(re, arrSize, sizeof(sp), compare);


	int* total = (int*)calloc(arrSize, sizeof(int));

	for (i = 0; i < arrSize;i++)
	{
		total[i] = re[i].ori;
	}

	returnSize[0] = arrSize;
	free(re);

	return total;
}



int main()
{

}