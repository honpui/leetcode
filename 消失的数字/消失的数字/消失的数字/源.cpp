#include<iostream>
using namespace std;



int missingNumber(int* nums, int numsSize){

	int *re = (int*)calloc(numsSize+1, sizeof(int));
	int i = 0;

	for (i = 0; i < numsSize;i++)
	{
		re[nums[i]] = 1;
	}

	for (i = 0; i <=numsSize; i++)
	{
		if (!re[i])
		{
			return i;
		}
	}
	free(re);
	return 0;
}


int main()
{

}