#include<iostream>
using namespace std;


bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){

	bool* result=(bool *)calloc(candiesSize,sizeof(bool));

	int maximum = 0;
	int i = 0;
	for (i = 0; i < candiesSize; i++)
	{
		if (candies[i]>maximum)
		{
			maximum = candies[i];
		}
	}

	for (i = 0; i < candiesSize; i++)
	{
		if (candies[i]+ extraCandies >= maximum)
		{
			result[i] = true;
		}
		else
		{
			result[i] = false;
		}
	}
	*returnSize = candiesSize;
	return result;

}

int main()
{
	int candies[] = {4,2,1,1,2};
	int candiesSize = sizeof(candies) / sizeof(int);
	int returnSize = 0;
	int extraCandies = 1;
	int i = 0;

	bool*  result = kidsWithCandies(candies, candiesSize, extraCandies, &returnSize);

	for (i = 0; i < candiesSize; i++)
	{
		printf("%d ", result[i]);
	}
	printf("\n");

	return 0;
}