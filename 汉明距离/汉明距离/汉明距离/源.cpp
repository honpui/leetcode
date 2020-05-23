#include<iostream>
using namespace std;

int hammingDistance(int x, int y){
	int re = (x^y);
	int count = 0;
	while (re)
	{
		count += (re & 1);
		re= re >> 1;
	}

	return count;
}

int main()
{
	int re = hammingDistance(1,4);
	printf("%d\n",re);
	return 0;
}