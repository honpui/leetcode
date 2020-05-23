#include <iostream>
using namespace std;

void swap(int* nums, int i, int index)
{
	int tmp = nums[i];
	nums[i] = nums[index];
	nums[index] = tmp;
}

int removeElement(int* nums, int numsSize, int val){
	int i = 0;
	int index_head = 0;
	int index_tail = numsSize - 1;


	while (index_head <= index_tail)
	{
		while ((nums[index_head] != val))
		{
			index_head++;
			if (index_head > index_tail)
				return index_head;
		}

		while ((nums[index_tail] == val))
		{
			index_tail--;
			if (index_head > index_tail)
				return index_head;

		}

		swap(nums, index_head, index_tail);
	}
	return numsSize;

}


int main()
{
	//int nums[10] = { 1, 1, 2, 3, 4, 3 };
	//int numsSize = 6;
	//int size = removeElement(nums, numsSize, 3);

	//int nums[10] = {  3, 3 };
	//int numsSize = 2;
	//int size = removeElement(nums, numsSize, 3);


	//int nums[10] = { 3};
	//int numsSize = 1;
	//int size = removeElement(nums, numsSize, 3);


	int nums[10] = {  };
	int numsSize = 0;
	int size = removeElement(nums, numsSize, 0);



	return 0;
}