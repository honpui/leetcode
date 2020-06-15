#include<iostream>
using namespace std;

int repeatedNTimes(int* A, int ASize){

	int *re = (int*)calloc(10000, sizeof(int));
	int i = 0;
	for (i = 0; i < ASize;i++)
	{
		re[A[i]]++;
	}

	for (i = 0; i < 10000;i++)
	{
		if (re[i]==ASize/2)
		{
			return i;
		}
	}
	return 0;
}


int main()
{

}