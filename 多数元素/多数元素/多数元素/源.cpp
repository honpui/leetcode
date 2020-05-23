
#include <iostream>
using namespace std;

void swap(int *ori,int start,int finish)
{
	int tmp = ori[start];
	ori[start] = ori[finish];
	ori[finish] = tmp;
}

void sort_array(int *ori, int start, int finish)
{
	int i = 0;
	if (start>=finish)
	{
		return;
	}

	if (finish - start == 1)
	{
		if (ori[finish] < ori[start])
		{
			swap(ori,start,finish);
		}
		return;
	}

	int before = start; int after = finish;
	int base_data = ori[start];

	while (before<after)
	{
		while ((before<after) && (ori[before] <= base_data))
		{
			before++;
		}
		while ((before<after) && (ori[after]>base_data))
		{
			after--;
		}

		if (before < after)
		{
			swap(ori, before, after);
		}
		
	}

	/* 交换基准的位置 */

	if (ori[before] < base_data)
	{
		swap(ori,start,before);

	}

	sort_array(ori,start,before-1);
	sort_array(ori, after, finish);
}

int majorityElement(int* nums, int numsSize)
{
	//sort_array(nums, 0, numsSize-1);
	//return nums[numsSize / 2];
	int i = 0;
	int count = 0;
	int res=0;
	for (i = 0; i < numsSize;i++)
	{
		if (count == 0)
		{
			res = nums[i];
			count=1;
		}
		else
		{
			(res == nums[i]) ? count++ : count--;
		}
	}
	return res;
}

int main()
{
	int nums[] = { 3,3,4};
	int a=majorityElement(nums, sizeof(nums) / sizeof(int));
	int i = 0;
	for (i = 0; i < sizeof(nums)/sizeof(int);i++)
	{
		printf("%d ",nums[i]);
	}
	printf("\n");
	return 0;
}