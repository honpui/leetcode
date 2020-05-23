#include<iostream>
using namespace std;

int numberOfSteps(int num){

	int step = 0;
	while (num)
	{
		if (num & 1)
		{
			num = num -1;
			step++;

		}
		else
		{
			num = num>>1;
			step++;
		}

	}
	return step;

}

int main()
{
	int step = numberOfSteps(123);
	printf("step=%d\n",step);
	return 0;
}