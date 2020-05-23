#include<iostream>
using namespace std;

int compare(const void* a, const void*b)
{
	return *(int*)a - *(int*)b ;
}
int arrayPairSum(int* nums, int numsSize){

	qsort(nums,numsSize, sizeof(int), compare);
	int i = 0; int count = 0;
	for (i = 0; i < numsSize; i=i+2)
	{
		count += nums[i];
	}
	return count;
}

int main()
{

	int nums[] = {1,4,3,2};
	int numsSize = sizeof(nums) / sizeof(int);
	int re = arrayPairSum(nums, numsSize);
	return 0;
}