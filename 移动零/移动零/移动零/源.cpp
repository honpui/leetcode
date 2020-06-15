#include <iostream>
using namespace std;

void exchange(int* nums, int i, int j)
{
	int tmp = nums[i];
	nums[i] = nums[j];
	nums[j] = tmp;
}

void moveZeroes(int* nums, int numsSize){

	int i = 0, j = 0;

	while ((i<numsSize) && (j<numsSize))
	{
		while (i < numsSize)
		{
			if (nums[i] == 0)
			{
				break;
			}
			i++;
		}

		j = i + 1;
		while (j < numsSize)
		{
			if (nums[j] != 0)
			{
				break;
			}
			j++;
		}

		if (j<numsSize)
		{
			exchange(nums, i, j);
		}
	}

}

int main()
{

}