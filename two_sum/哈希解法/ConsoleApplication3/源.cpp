#include <iostream>
using namespace std;

typedef struct Pair
{
	int value;
	int index1;
	int index2;
}Pair;

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	int i = 0;
	int j = 0;
	int found = 0;
	int* index = (int*)malloc(sizeof(int)* 2);
	if (index == NULL)
	{
		printf("malloc failed\n");
	}

	/* 照顾负数的问题，记录最大以及最小值，同时保证最大值大于等于0，最小值小于等于0，负数的话，通过求余得到正数 */
	int maxi = nums[0];
	int mini = nums[0];
	for (i = 0; i < numsSize; i++)
	{
		if (maxi < nums[i])
		{
			maxi = nums[i];
		}
		if (mini > nums[i])
		{
			mini = nums[i];
		}
			
	}

	if (mini > 0)
	{
		mini = 0;
	}
	if (maxi < 0)
	{
		maxi = 0;
	}

	int total_num = maxi - mini + 1;/* 数据从0开始编排  */

	Pair* dict = (Pair*)calloc(total_num  , sizeof(Pair));
	if (dict == NULL)
	{
		printf("malloc failed\n");
	}

	for (i = 0; i<numsSize; i++)
	{
		
		if (dict[(nums[i]+total_num)%total_num].value)
		{
			dict[(nums[i] + total_num) % total_num].index2 = i;/* 用于备份重复出现的数字 */
		}
		else
		{
			dict[(nums[i] + total_num) % total_num].index1 = i;
		}
		dict[((nums[i] + total_num) % total_num)].value++;
		
	}

	for (i = 0; i<numsSize; i++)
	{
		if ((target - nums[i]) > maxi || (target - nums[i]) < mini)
		{
			continue;
		}

		if (dict[(target - nums[i] + total_num) % total_num].value)
		{
			if ((dict[(target - nums[i] + total_num) % total_num].index1 != i))
			{
				index[0] = i;
				index[1] = dict[(target - nums[i] + total_num) % total_num].index1;
				found = 1;
				break;

			}
			else if (dict[((nums[i] + total_num) % total_num)].value != 1)
			{
				index[0] = i;
				index[1] = dict[(target - nums[i] + total_num) % total_num].index2;
				found = 1;
				break;
			}
			
		}
	}

	//printf("%d,%d\n",index[0],index[1]);

	if (dict)
	{
		free(dict);
		dict = NULL;
	}

	if (found)
		*returnSize = 2;
	else
		*returnSize = 0;
	return index;
}


int main()
{
	int nums[10] = { -1,-2,-3,-4,-5};
	int * aaa = (int *)malloc(10 * sizeof(int));

	printf("%d\n",sizeof(aaa) / sizeof(int));
	int returnsize = 0;
		
	int numsSize = 5;
	int target = -8;
	int* a;
	a = twoSum(nums,  numsSize, target, &returnsize);
	printf("a[0]=%d,a[1]=%d\n",a[0],a[1]);
	return 0;
}
