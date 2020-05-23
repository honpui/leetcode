#include <iostream>
using namespace std;

int minCount(int* coins, int coinsSize){
	int i = 0;
	int count = 0;
	for (i = 0; i < coinsSize; i++)
	{
		count += ((coins[i] >> 1) + (coins[i] & 1));
	}
	return count;
}

int main()
{
	int coins[] = {2,3,10};
	int coinsSize = sizeof(coins)/sizeof(int);
	int re = minCount( coins, coinsSize);
	printf("%d\n",re);
	return 0;
}