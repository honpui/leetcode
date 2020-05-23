#include<iostream>
using namespace std;

int minStartValue(int* nums, int numsSize){

	int min_value = 0; int sum = 0;
	int i = 0;
	for (i = 0; i < numsSize;i++)
	{
		sum += nums[i];
		if (sum<min_value)
		{
			min_value = sum;
		}
	}
	return 1 - min_value;
}

