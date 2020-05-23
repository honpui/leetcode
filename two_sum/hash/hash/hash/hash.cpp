#include <iostream>
using namespace std;

#define MAX_SIZE 2048

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
	
	int i = 0;
	
	int * res = (int *)calloc(2, sizeof(int));

	int mini = nums[0], maxi = nums[0];
	for (i = 0; i < numsSize; i++)
	{
		if (mini >nums[i])
		{
			mini = nums[i];
		}
		if (maxi < nums[i])
		{
			maxi = nums[i];
		}
	}

	if (mini >0)
	{
		mini = 0;
	}
	if (maxi < 0)
	{
		maxi = 0;
	}
	int max_size = maxi - mini+1;

	int* hash = (int*)calloc(max_size, sizeof(int));
	memset(hash, -1, max_size*sizeof(int));


	for (i = 0; i < numsSize; i++)
	{
		if ((target - nums[i])>maxi || (target - nums[i]) < mini)
			continue;

		if ( (hash[(target - nums[i] + max_size) % max_size] != -1))
		{
			res[0] = hash[(target - nums[i] + max_size) % max_size];
			res[1] = i;
			*returnSize = 2;
			free(hash);
			return res;
		}
		else
		{
			hash[(nums[i] + max_size) % max_size] = i;
		}
		
	}
	*returnSize = 0;
	free(hash);
	return res;

}

int main()
{
	int nums[100] = {-1,-2,-3,-4,-5};
	int numsSize = 5;
	int target = -8;
	int returnSize=0;
	int* returndata = (int*)calloc(2,sizeof(int));
	returndata = twoSum(nums,numsSize,target,&returnSize);
	printf("returnsize=%d,index1=%d,index2=%d\n",returnSize,returndata[0],returndata[1]);
	return 0;

}