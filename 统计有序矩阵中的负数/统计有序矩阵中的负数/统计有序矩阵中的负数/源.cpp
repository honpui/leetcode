#include<iostream>
using namespace std;

/* 暴力破解版本 */
int countNegatives1(int** grid, int gridSize, int* gridColSize){

	int count = 0;
	int i = 0, j = 0;
	for (i = 0; i < gridSize;i++)
	{
		for (j = 0; j < *gridColSize;j++)
		{
			if (grid[i][j]<0)
			{
				count++;
			}
		}
	}
	return count;

}

/* 二分法 */

int indexofneg(int** grid, int gridSize, int i,int start, int finish)
{
	if (finish==(start+1))
	{
		if (grid[i][start]<0)
		{
			return start;
		}
		else
		{
			return finish;
		}
		
	}

	int middle = (finish - start) / 2 + start;
	if (grid[i][middle]>=0)
	{
		start = middle;
	}
	else
	{
		finish = middle;
	}
	return indexofneg( grid,  gridSize,  i,  start, finish);
}

int countNegatives(int** grid, int gridSize, int* gridColSize){

	int i = 0; int index = 0; int count = 0;
	for (i = 0; i < gridSize;i++)
	{
		index = indexofneg(grid, gridSize, i, 0, *gridColSize);
		count += (*gridColSize - index );
	}
	return count;

}

int main()
{
}