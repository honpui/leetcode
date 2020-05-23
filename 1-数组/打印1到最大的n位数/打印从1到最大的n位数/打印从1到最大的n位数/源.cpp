#include<iostream>
using namespace std;

int* printNumbers(int n, int* returnSize)
{
	int* re = (int*)calloc(pow(10, n) - 1, sizeof(int));
	int i = 0;
	for (i = 0; i < pow(10, n) - 1; i++)
	{
		re[i] = i+1;
	}
	*returnSize = pow(10, n) - 1;
	return re;
}

int main()
{
	int n = 5;
	int returnSize=0;
	int* re = printNumbers(n, &returnSize);

	int i = 0;
	for (i = 0; i < pow(10, n) - 1; i++)
	{
		printf("%d ", re[i]);
	}
	return 0;
}