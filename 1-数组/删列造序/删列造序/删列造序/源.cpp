#include <iostream>
using namespace std;

int minDeletionSize(char ** A, int ASize){

	int i = 0, j = 0; int num = 0;
	
	int len = strlen(A[0]);
	for (i = 0; i < len;i++)
	{
		for (j = 0; j < ASize-1;j++)
		{
			if (A[j][i]>A[j+1][i])
			{
				num++;
				break;
			}
		}

	}
	return num;

}

int main()
{

}