#include <iostream>
using namespace std;

//int fib(int N){
//
//	if (N==0)
//	{
//		return 0;
//	}
//
//	if (N==1)
//	{
//		return 1;
//	}
//
//	return fib(N - 1) + fib(N - 2);
//
//}


int fib(int N){

	if (N == 0)
	{
		return 0;
	}

	if (N == 1)
	{
		return 1;
	}

	int i = 2;

	int r_N_1 = 1;
	int r_N_2 = 0;
	int tmp = 0;

	while (i<=N)
	{
		tmp = r_N_1 + r_N_2;
		r_N_2 = r_N_1;
		r_N_1 = tmp;
		i++;
	}
	return r_N_1;
}

int main()
{

}