#include<iostream>
using namespace std;

void swap(int*A, int i, int j)
{
	int tmp = 0;
	tmp = A[i];
	A[i] = A[j];
	A[j] = tmp;
}
void quitsort(int*A, int start, int finish)
{
	if (start==finish)
	{
		return;
	}

	int tmp = A[start];
	int i = start;
	int j = finish;

	while (i<j)
	{

		while (A[i]<=tmp && i<j)
		{
			i++;
		}
		while (A[j]>tmp && j>i)
		{
			j--;
		}

		if (i==j && A[i]<=tmp)
		{
			swap(A, i, start);
		}
		else
		{
			swap(A, i, j);
		}

	}

	/* ´ËÊ±i == j */
	if (A[i]<tmp)
	{
		swap(A,start,i);
	}
	
	quitsort(A,  start,  i-1);
	quitsort(A,  i,finish);

}

int* sortedSquares(int* A, int ASize, int* returnSize){

	int i = 0;
	*returnSize = ASize;

	for (i = 0; i < ASize;i++)
	{
		A[i] = A[i] * A[i];
	}
	quitsort(A, 0, ASize-1);
	return A;
}


int main()
{
	int A[] = {1,4,3,6};

	quitsort(A, 0, 3);

	A;
	return 0;
}