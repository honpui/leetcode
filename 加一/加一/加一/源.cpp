#include<iostream>
using namespace std;


int* plusOne(int* digits, int digitsSize, int* returnSize)
{
	int i = 0, j = 0;
	*returnSize = digitsSize;
	while (i < digitsSize)
	{
		if (digits[i]!=9)
		{
			(*returnSize)--;
			break;
		}
		i++;
	}
	(*returnSize)++;

	int* return_array = (int*)calloc(*returnSize,sizeof(int));

	i = digitsSize - 1;
	j = *returnSize - 1;

	while (i >= 0)
	{
		if ((digits[i] + 1) == 10)
		{
			return_array[j] = 0;
		}
		else
		{
			return_array[j] = digits[i] + 1;
			break;
		}
		j--; i--;
	}

	while (i > 0)
	{
		return_array[--j] = digits[--i];
	}

	if (*returnSize != digitsSize)
	{
		return_array[0] = 1;
	}
	return return_array;
}


int main()
{

	int digits[] = { 1,2,3 };
	int returnSize=0;
	int* returnarray = plusOne(digits, 3, &returnSize);

	int i = 0;
	for (i = 0; i < returnSize; i++)
	{
		printf("%d ",returnarray[i]);
	}
	printf("\n");
	return 0;
}