
#include<iostream>
using namespace std;

bool canThreePartsEqualSum(int* A, int ASize){

	int i = 0; int sum = 0;
	for (i = 0; i < ASize;i++)
	{
		sum += A[i];
	}

	if (sum%3!=0)
	{
		return false;
	}


	int sum1 = 0; int num = 0;
	for (i = 0; i < ASize;i++)
	{
		sum1 += A[i];

		if (sum1==sum/3)
		{
			sum1 = 0;
			num++;
		}
	}

	if (num>=3)
	{
		return true;
	}
	return false;

}


int main()
{
	int A[] = { 3, 3, 6, 5, -2, 2, 5, 1, -9, 4 };
	int ASize = sizeof(A) / sizeof(int);
	bool re = canThreePartsEqualSum(A, ASize);
	return 0;
}