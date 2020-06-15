#include <iostream>
using namespace std;


int arr[] = {0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1};


int bits(unsigned int i)
{
	int count = 0;

	while (i)
	{
		count += (i & 0x1);
		i=i >> 1;
	}
	return count;
}
int countPrimeSetBits(int L, int R){

	int i = 0; int count = 0;
	for (i = L; i <= R;i++)
	{
		if (arr[bits(i)])
		{
			count++;
		}
		
	}
	return count;
}


int main()
{
	int r =countPrimeSetBits(842, 888);
	return 0;
}