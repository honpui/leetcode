#include<iostream>
using namespace std;


int* selfDividingNumbers(int left, int right, int* returnSize){

	int*re = (int*)calloc(right-left+1,sizeof(int));

	int i = 0;
	int index = 0;
	int tmp = 0;
	int odd = 0;
	int flag = 0;

	for (i = left; i <= right;i++)
	{
		tmp = i;
		flag = 1;
		while (tmp)
		{
			odd = tmp % 10;
			if (!odd)
			{
				flag = 0;
				break;
			}
			if (i%odd !=0)
			{
				flag = 0;
				break;
			}
			tmp /= 10;
		}

		if (flag)
		{
			re[index++] = i;
		}

	}

	*returnSize = index;
	return re;

}

int main()
{
}