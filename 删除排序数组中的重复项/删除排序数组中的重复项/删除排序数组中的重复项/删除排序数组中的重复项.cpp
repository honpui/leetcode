#include<iostream>
using namespace std;


int removeDuplicates(int* nums, int numsSize){

	int tmp_size = 0;
	int i = 0,j=0;

	if (numsSize <= 1)
	{
		return numsSize;
	}

	for (i = 1; i<numsSize;i++)
	{
		
		if (nums[i]> nums[tmp_size])
		{
			if ((i - tmp_size) > 1)
				nums[++tmp_size] = nums[i];
			else
				tmp_size++;
		}

	}
	return (tmp_size+1);

}


int main()
{

	int nums[10] = { 0, 1, 2, 3 };
	int numsSize = 6;
	int len=removeDuplicates(nums,numsSize);
	return 0;
}