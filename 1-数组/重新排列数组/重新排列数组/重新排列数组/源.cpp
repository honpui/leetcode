#include <iostream>
using namespace std;


int* shuffle(int* nums, int numsSize, int n, int* returnSize){

	int* re = (int*)calloc(numsSize, sizeof(int));

	int i = 0;
	int index = 0;
	for (i = 0; i < n;i++)
	{
		re[index++] = nums[i];
		re[index++] = nums[i + n];
	}

	returnSize[0] = numsSize;
	return re;

}

int main()
{

}