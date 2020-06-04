#include <iostream>
using namespace std;


int maxProduct(int* nums, int numsSize){
	int largest = 0;
	int more = 0;
	int i = 0;

	for (i = 0; i < numsSize;i++)
	{
		if (nums[i]>largest)
		{
			more = largest;
			largest = nums[i];
		}
		else if (nums[i]>more)
		{
			more = nums[i];
		}
		
	}
	return (more - 1)*(largest - 1);
}

int main()
{
	int nums[] = {7,6,2,3};
	int re = maxProduct(nums, 4);
	return 0;
}
