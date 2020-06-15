#include <iostream>
using namespace std;

int majorityElement(int* nums, int numsSize){

	int i = 0;
	int count = 0;

	if (numsSize==1)
	{
		return nums[0];
	}

	int num = 0;
	for (i = 0; i < numsSize;i++)
	{
		if (count==0)
		{
			num = nums[i];
			count++;
			continue;
		}

		if (nums[i]==num)
		{
			count++;
		}
		else
		{
			count--;
		}
	}
	if (count>1)
	{
		return num;
	}
	count = 0;
	for (i = 0; i < numsSize;i++)
	{
		if (nums[i]==num)
		{
			count++;
		}
	}

	if (count>1)
	{
		return num;
	}
	else
	{
		return -1;
	}

}

int main()
{
	int nums[] = {3,2,3};
	int numsSize = sizeof(nums)/sizeof(int);
	int re = majorityElement(nums, numsSize);
	return 0;
}