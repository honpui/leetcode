#include<iostream>
using namespace std;

int find_index(int* sum_arr, int start, int finish, int k)
{
	int i = start;

	int num = 0;

	if (sum_arr[start] == k)
	{
		num++;
	}
	for (i = start+1; i < finish;i++)
	{
		if ((sum_arr[start] + k == sum_arr[i]))
		{
			num++;
		}
	}
	return num;
}

int subarraySum(int* nums, int numsSize, int k){
	int *sum_arr = (int*)calloc(numsSize, sizeof(int));
	int i = 0; int sum = 0;
	for (i = 0; i < numsSize; i++)
	{
		sum += nums[i];
		sum_arr[i] = sum;
	}

	int index = 0;
	for (i = 0; i < numsSize;i++)
	{
		index += find_index(sum_arr,i,numsSize,k);
	}
	return index;

}


int main()
{
	int nums[] = {1};
	int numsSize = sizeof(nums) / sizeof(int);
	int k = 0;
	int re = subarraySum(nums, numsSize, k);
	return 0;
}