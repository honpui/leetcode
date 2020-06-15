#include<iostream>
using namespace std;


int* twoSum(int* nums, int numsSize, int target, int* returnSize){

	int before = 0;
	int after = numsSize - 1;

	int * re = (int*)calloc(2, sizeof(int));
	returnSize[0] = 0;
	int i = 0;
	int sum = 0;
	while (before<after)
	{
		sum = nums[before] + nums[after];
		if (sum==target)
		{
			re[0] = nums[before];
			re[1] = nums[after];
			returnSize[0] = 2;
			return re;
		}
		else if (sum>target)
		{
			after--;
		}
		else
		{
			before++;
		}
	}
	return re;
}


int main()
{

}