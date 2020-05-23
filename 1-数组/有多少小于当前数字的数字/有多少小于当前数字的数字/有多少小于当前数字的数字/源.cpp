#include<iostream>
using namespace std;



int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){


	*returnSize = numsSize;
	int i = 0, j = 0;

	int* array = (int*)calloc(numsSize, sizeof(int));

	for (i = 0; i < numsSize; i++)
	{
		for (j = 0; j < numsSize; j++)
		{
			if (nums[i] > nums[j])
			{
				array[i]++;
			}
		}
	}

	return array;

}

int main()
{
	int nums[] = {7,7,7,7};
	int i = 0;
	int numsSize = 4;

	int returnSize=0;
	int* array=smallerNumbersThanCurrent(nums, numsSize,&returnSize);
	for (i = 0; i < numsSize; i++)
	{
		printf("%d ",array[i]);
	}

	printf("\n");
	return 0;
}