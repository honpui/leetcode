#include<iostream>
using namespace  std;


int compare(const void* a,const void* b)
{
	return *(int*)a < *(int*)b;
}
int* minSubsequence(int* nums, int numsSize, int* returnSize){

	qsort(nums, numsSize, sizeof(int), compare);

	int sum = 0; int left_sum = 0;
	int* re = (int*)calloc(numsSize,sizeof(int));

	int index = 0;
	int i = 0;

	for (i = 0; i < numsSize;i++)
	{
		sum += nums[i];
	}
	i = 0;
	while (left_sum<=sum)
	{
		left_sum += nums[i];
		sum -= nums[i];
		re[i] = nums[i];
		i++;
	}

	*returnSize = i;
	return re;

}


int main()
{
}