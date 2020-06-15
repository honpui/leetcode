#include<iostream>
using namespace std;


/* 内存中都是补码的形式  */

int getSum(int a, int b){

	unsigned int i = 0;
	unsigned int tmp = 0;
	unsigned int flag = 0;
	for (i = 0; i < 32;i++)
	{
		unsigned int x = (((unsigned int)1 << i)&(unsigned int)a) ^ (((unsigned int)1 << i)&(unsigned int)b);

		if (x)
		{
			if (flag==1)
			{
				tmp = (tmp << 1);
			}
			else
			{
				tmp = (tmp << 1) | 1;
			}
			
		}
		else
		{
			if (((unsigned int)1 << i)&a)
			{
				if (flag)
				{
					tmp = (tmp << 1) | 1;
				}
				else
				{
					tmp = (tmp << 1);
					flag = 1;
				}
			}
			else
			{
				if (flag)
				{
					tmp = (tmp << 1) | 1;
					flag = 0;
				}
				else
				{
					tmp = (tmp << 1);
					flag = 0;
				}
			}

		}
	}
	unsigned re = 0;
	
	for (i = 0; i < 32;i++)
	{
		flag = 0;
		if ((((unsigned int)1 << i) & tmp))
		{
			flag = 1;
		}
		re = (re << 1) | flag;
	}
	return re;

}



int main()
{
	int re = getSum(-2, -1);
	return 0;
}