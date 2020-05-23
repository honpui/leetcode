#include <iostream>
using namespace std;

int maxSubArray(int* nums, int numsSize)
{
	int i = 0;
	int sum = 0;
	int max_sum = nums[0];
	for (i = 0; i < numsSize; i++)
	{
		if ((nums[i] + sum)>nums[i])
		{
			sum += nums[i];
		}
		else
		{
			sum = nums[i];
		}

		if (sum > max_sum)
		{
			max_sum = sum;
		}
	}
	return max_sum;
}

int main()
{
	int nums[] = {-2};
	int len = maxSubArray(nums,sizeof(nums)/sizeof(int));
	
	return 0;
}