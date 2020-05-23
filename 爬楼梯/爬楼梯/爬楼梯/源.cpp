#include<iostream>
using namespace std;



int climbStairs1(int n){
	if (n == 1)
	{
		return 1;
	}

	if (n == 2)
	{
		return 2;
	}

	return climbStairs1(n - 1) + climbStairs1(n-2);
}



int climbStairs(int n){
	int i = 0;

	if (n==1)
	{
		return 1;
	}
	if (n==2)
	{
		return 2;
	}

	int before = 1;
	int after = 2;
	int tmp = 0;
	for (i = 3; i <= n;i++)
	{
		tmp = before + after;
		before = after;
		after = tmp;
	}

	return after;

}


int main()
{
	int a = climbStairs(45);
	return 0;
}

