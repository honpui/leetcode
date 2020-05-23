#include <iostream>
using namespace std;


int reverse(int x){

	char tmp[10];

	int left = 0;
	int divide = -1;
	int index = 0;
	int flag = 0;
	unsigned long long int re = 0;
	int i = 0;

	if (x < 0)
	{
		flag = 1;
	}

	divide = x;
	while (divide  !=0)
	{
		divide = x / 10;
		tmp[index] = abs(x - divide * 10);
		index++;
		x = divide;
	}


	for (i = 0; i < index; i++)
	{
		re = re * 10 + tmp[i];
	}

	if (re > 2147483648)
	{
		return 0;
	}
	
	if (flag)
	{
		return (-1*re);
	}
	else
	{
		return (1*re);
	}
	
	
}


int main()
{
	int input = 1534236469;
	int a = input % 10;
	int b = input / 10;
	int mod = (input - b * 10);
	

	int result = reverse(input);
	printf("result=%d\n",result);
}