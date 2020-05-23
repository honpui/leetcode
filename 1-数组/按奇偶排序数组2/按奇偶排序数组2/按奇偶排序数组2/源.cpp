#include<iostream>
using namespace std;

int* sortArrayByParityII(int* A, int ASize, int* returnSize){
	int i = 1;
	int j = ASize-2;
	int tmp = 0;

	while (1)
	{
		while (i <= ASize - 1 && (!((!(A[i] & 0x1))&&(i & 0x1))))
		{
			i+=2;
		}

		while (0 <=j && !(((A[j] & 0x1) && (!(j & 0x1)))))
		{
			j-=2;
		}

		if (j ==-2)
		{
			/*if (A[0] & 0x1)
			{
				tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;
			}*/
			break;
		}

		tmp = A[i];
		A[i] = A[j];
		A[j] = tmp;

	}

	*returnSize = ASize;
	return A;

}


int main()
{
	int A[] = { 2, 3, 1, 1, 4, 0, 0, 4, 3, 3 };
	int Asize = sizeof(A)/sizeof(int);
	int returnSize = 0;
	int* re = sortArrayByParityII(A, Asize, &returnSize);
	return 0;

}