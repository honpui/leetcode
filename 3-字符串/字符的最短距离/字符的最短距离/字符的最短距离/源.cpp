#include <iostream>
using namespace std;


int* shortestToChar(char * S, char C, int* returnSize){

	int len = strlen(S);

	int* re = (int*)calloc(len, sizeof(int));

	int i = 0;

	returnSize[0] = len;

	int first = -1;
	int second = 0;

	while ( i < len)
	{
		while ((S[second]!=C) && (second<len))
		{
			second++;
		}

		while (i<second)
		{

			if (first==-1)
			{
				re[i] = second - i;
				i++;
			}
			else if (second == len)
			{
				re[i] = i - first;
				i++;
			}
			else 
			{
				re[i] = abs(first - i) < abs(second - i) ? abs(first - i) : abs(second - i);
				i++;
			}
			
		}

		first = second;
		second++;
	}
	return re;
}

int main()
{
	char * S = "aaab";
	int returnSize = 0;
	int* re = shortestToChar(S, 'b', &returnSize);
	return 0;
}