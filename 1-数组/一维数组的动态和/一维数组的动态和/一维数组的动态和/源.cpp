#include<iostream>
using namespace std;


int* runningSum(int* nums, int numsSize, int* returnSize){

	int i = 0;
	if (numsSize==0)
	{
		returnSize[0] = 0;
		return NULL;
	}
	int* re = (int*)calloc(numsSize, sizeof(int));

	re[0] = nums[0];
	for (i = 1; i < numsSize;i++)
	{
		re[i] = re[i - 1] + nums[i];
	}
	returnSize[0] = numsSize;
	return re;
}


int main()
{

}