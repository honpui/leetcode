#include<iostream>
using namespace std;


int majorityElement(int* nums, int numsSize){

	int i = 0;

	int cur = nums[0];
	int count = 0;

	while ( i < numsSize)
	{
		if (nums[i]==cur)
		{
			count++;
		}
		else
		{
			count--;
		}

		if (count==0)
		{
			cur = nums[i + 1];
		}
		i++;
	}

	return cur;
}

int main()
{

}