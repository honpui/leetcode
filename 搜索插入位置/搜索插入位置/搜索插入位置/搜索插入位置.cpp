#include<iostream>
using namespace std;

int loop(int * nums,int start,int stop,int target)
{
	if (nums[start] >= target)
	{
		return start;
	}
	if (start>=stop)
	{
		return start+1;
	}
	if (nums[(stop-start+1) / 2+start] < target)
	{
		return loop(nums, (stop - start+1) / 2 + start, stop, target);
	}
	else
	{
		return loop(nums, start + 1, (stop - start+1) / 2 + start, target);
	}
}

int searchInsert(int* nums, int numsSize, int target){

	return loop(nums, 0,  numsSize-1,  target);

}

int main()
{
	int array[] = {1,3,5,6};

	int label = searchInsert(array,4,5);
	printf("label =%d\n",label);
	return 0;
}