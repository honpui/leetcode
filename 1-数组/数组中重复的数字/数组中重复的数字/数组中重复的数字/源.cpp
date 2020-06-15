#include <iostream>
using namespace std;

int findRepeatNumber(int* nums, int numsSize){

	int *arr = (int*)calloc(100000, sizeof(int));

	int i = 0;

	for (i = 0; i < numsSize;i++)
	{
		if (!arr[nums[i]])
		{
			arr[nums[i]] = 1;
		}
		else
		{
			return nums[i];
		}
	}

	return 0;

}



int main()
{

}