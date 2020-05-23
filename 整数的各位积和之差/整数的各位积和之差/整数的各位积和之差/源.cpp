#include<iostream>
using namespace std;


int subtractProductAndSum(int n){

	int sum = 0;
	int product = 1;
	int left = 0;

	while (n)
	{
		left = n % 10;
		sum += left;
		product *= left;
		n = n / 10;
	}

	return product - sum;
}


int main()
{
	int re = subtractProductAndSum(4421);
	printf("%d\n",re);
	return 0;
}