#include<iostream>
using namespace std;

int maximum69Number(int num){

	int index = -1;
	int i = 0;
	int tmp = num;

	while (tmp)
	{
		if (tmp%10==6)
		{
			index = i;
		}
		tmp=tmp / 10;
		i++;
	}

	if (index==-1)
	{
		return num;
	}

	return (num + (pow(10, index)) * 3);
}


int main()
{
	int num = 66;
	int re = maximum69Number(num);
	return re;
}