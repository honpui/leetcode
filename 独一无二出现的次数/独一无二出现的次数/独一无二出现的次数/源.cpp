#include<iostream>
using namespace std;


bool uniqueOccurrences(int* arr, int arrSize){

	int *re = (int*)calloc(2001, sizeof(int));
	int*count = (int*)calloc(1000, sizeof(int));

	int i = 0;
	for (i = 0; i < arrSize; i++)
	{
		re[(arr[i] + 2001) % 2001]++;
	}

	for (i = 0; i < 2001;i++)
	{
		if (re[i]==0)
		{
			continue;
		}

		if (count[re[i]])
		{
			free(count);
			free(re);
			return false;
		}

		count[re[i]]=1;
	}
	free(count);
	free(re);
	return true;

}

int main()
{

}