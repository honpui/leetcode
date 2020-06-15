#include<iostream>
using namespace std;


int islandPerimeter(int** grid, int gridSize, int* gridColSize){

	int i = 0;
	int j = 0;
	int num = 0;
	int total = 0;

	for (i = 0; i < gridSize;i++)
	{
		for (j = 0; j < gridColSize[0];j++)
		{
			if (!grid[i][j])
			{
				continue;
			}

			total++;
			if ((i-1>=0) && grid[i-1][j])
			{
				num++;
			}

			if ((i + 1) < gridSize && grid[i+1][j])
			{
				num++;
			}

			if ((j-1>=0) && grid[i][j-1])
			{
				num++;
			}

			if ((j+1<gridColSize[0]) && grid[i][j+1])
			{
				num++;
			}
		}
	}

	return 4 * total - num;
}


int main()
{

}