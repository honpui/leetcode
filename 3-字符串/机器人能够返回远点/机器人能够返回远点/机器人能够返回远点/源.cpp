#include<iostream>
using namespace std;


typedef enum DIRECT
{
	L=0,
	R,
	U,
	D
}DIRECT;


bool judgeCircle(char * moves){

	int len = strlen(moves);

	int nums[4] = {0};

	int i = 0;

	for (i = 0; i < len;i++)
	{
		if (moves[i]=='L')
		{
			nums[L]++;
		}
		else if (moves[i]=='R')
		{
			nums[R]++;
		}
		else if (moves[i]=='U')
		{
			nums[U]++;
		}
		else if (moves[i] == 'D')
		{
			nums[D]++;
		}
		else
			break;

	}

	if ((nums[L]==nums[R]) && (nums[U]==nums[D]))
	{
		return true;
	}
	else
	{
		return false;
	}

}



int main()
{
}