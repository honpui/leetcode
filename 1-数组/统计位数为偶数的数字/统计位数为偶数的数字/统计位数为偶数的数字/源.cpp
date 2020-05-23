#include<iostream>
using namespace std;

int count_num(int input)
{
	int count = 0;
	while (input)
	{
		input /= 10;
		count++;
	}
	return count;
}

int findNumbers(int* nums, int numsSize){

	int i = 0;
	int count = 0;
	for (i = 0; i < numsSize; i++)
	{
		if(!(count_num(nums[i])&1))
		{
			count++;
		}
	}

	return count;

}


int main()
{
	int a = log10(100);

	int nums[] = {555,901,482,1771};
	int re = findNumbers(nums,sizeof(nums)/sizeof(int) );
	printf("%d\n", re);
	return 0;
}