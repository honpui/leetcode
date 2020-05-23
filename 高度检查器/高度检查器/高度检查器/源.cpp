#include <iostream>
using namespace std;

void swap(int* array, int index1, int index2)
{
	int tmp = array[index1];
	array[index1] = array[index2];
	array[index2] = tmp;
}


void sort(int* array, int start, int finish)
{
	if (start>=finish)
	{
		return;
	}
	int index1 = start;
	int index2 = finish;
	while (index1<index2)
	{
		while ((index1<index2) && (array[index1]<=array[start]))
		{
			index1++;
		}
		while ((index1 < index2) && (array[index2] > array[start]))
		{
			index2--;
		}

		swap(array, index1, index2);
	}

	if (array[index1]< array[start])
	{
		swap(array,index1,start);
	}

	sort(array, start, index1 - 1);
	sort(array, index1+1 , finish);
}


int heightChecker(int* heights, int heightsSize){

	int* tmp = (int*)calloc(heightsSize, sizeof(int));
	memcpy(tmp, heights, heightsSize*sizeof(int));
	sort(tmp, 0, heightsSize - 1);
	int i = 0;
	int count = 0;
	for (i = 0; i < heightsSize;i++)
	{
		if (tmp[i]!=heights[i])
		{
			count++;
		}
	}
	free(tmp);
	return count;
}


int main()
{
	int heights[] = {9, 2, 8, 3, 8, 4, 6, 6, 8, 3, 3, 1, 2, 8, 9, 6, 6, 5, 3, 2};
	int re  = heightChecker(heights, sizeof(heights)/sizeof(int));
	return 0;
}