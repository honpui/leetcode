#include<iostream>
using namespace std;

int distributeCandies(int* candies, int candiesSize){

	int* re = (int*)calloc(200000,sizeof(int));
	int i = 0; int count = 0;

	for (i = 0; i < candiesSize;i++)
	{
		if (!re[(candies[i]+200000)%200000])
		{
			count++;
		}
		re[(candies[i] + 200000) % 200000]++;

	}

	if (candiesSize/2 > count)
	{
		free(NULL);
		re = NULL;
		return count;
	}
	else
	{
		free(re);
		re = NULL;
		return candiesSize / 2;
	}

}


int main()
{

}