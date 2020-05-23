#include <iostream>
using namespace std;

void swap(int* nums, int i, int index)
{
	int tmp = nums[i];
	nums[i] = nums[index];
	nums[index] = tmp;
}



int recursive(int* nums,int start,int finish,int val)
{

	if (start > finish)
		return start;
	if ((start == finish) && nums[start]!=val)
	{
		return start+1;
	}

	if ((start == finish) && nums[start] == val)
	{
		return start;
	}

	if ((nums[start] == val) && (nums[finish] != val))
	{
		swap(nums, start, finish);
		return recursive(nums, start+1, finish-1,val);
	}

	if (nums[start] != val)
	{
		return recursive(nums, start + 1, finish, val);
	}

	if (nums[finish] == val)
	{
		return recursive(nums, start, finish-1, val);
	}

	return 0;

}
int removeElement(int* nums, int numsSize, int val){
	int i = 0;
	int index_head = 0;
	int index_tail = numsSize - 1;


	return recursive(nums, 0, numsSize - 1, val);


	return numsSize;

}


int main()
{
	//int nums[10] = { 1, 1, 2, 3, 4, 3 };
	//int numsSize = 6;
	//int size = removeElement(nums, numsSize, 3);

	//printf("size=%d\n",size);

	/*int nums[10] = {  3, 3 };
	int numsSize = 2;
	int size = removeElement(nums, numsSize, 3);
	printf("size=%d\n", size);
*/

	//int nums[10] = { 3};
	//int numsSize = 1;
	//int size = removeElement(nums, numsSize, 3);
	//printf("size=%d\n", size);

	int nums[10] = {};
	int numsSize = 0;
	int size = removeElement(nums, numsSize, 0);
	printf("size=%d\n",size);


	return 0;
}