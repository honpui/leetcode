#include<iostream>
using namespace std;

int* sortArrayByParity(int* A, int ASize, int* returnSize){
	
	int i = 0;
	int before = 0;
	int after = ASize - 1;
	int tmp = 0;
	*returnSize = ASize;
	
	while (before<after)
	{
		while (before < after && !(A[before] & 0x1))
		{
			before++;
		}

		while (before < after && (A[after] & 0x1))
		{
			after--;
		}

		tmp = A[before];
		A[before] = A[after];
		A[after] = tmp;

	}

	return A;

}

int main()
{
	int A[] = { 1, 2, 3, 4, 5, 6 };
	int returnSize = 0;
	int* re = sortArrayByParity(A, sizeof(A) / sizeof(int), &returnSize);
	return 0;
}