#include <iostream>
using namespace std;

int numRookCaptures(char** board, int boardSize, int* boardColSize){

	int width = boardColSize[0];
	int height = boardSize;
	int i = 0;
	int j = 0;
	int index_x=0;
	int index_y = 0;

	int num = 0;

	int flag = 0;
	for (i = 0; i < height;i++)
	{
		for (j = 0; j < width;j++)
		{
			if (board[i][j]=='R')
			{
				index_x = j;
				index_y = i;
				flag = 1;
				break;
			}
		}
		if (flag)
		{
			break;
		}
	}


	/* ×ó±ß */
	i = index_y;
	j = index_x;

	while (j<7 )
	{
		if (board[i][j+1]=='p')
		{
			num++;
			break;
		}
		else if (board[i][j + 1] == 'B')
		{
			break;
		}
		else
		{
			j++;
		}
		
	}

	/* ÓÒ±ß */
	i = index_y;
	j = index_x;
	while (j >=1)
	{
		if (board[i][j - 1] == 'p')
		{
			num++;
			break;
		}
		else if (board[i][j - 1] == 'B')
		{
			break;
		}
		else
		{
			j--;
		}
		
	}

	/* ÉÏ±ß */
	i = index_y;
	j = index_x;
	while (i >= 1 )
	{
		if (board[i-1][j] == 'p')
		{
			num++;
			break;
		}
		else if (board[i-1][j ] == 'B')
		{
			break;
		}
		else
		{
			i--;
		}
		
	}

	/* ÏÂ±ß */
	i = index_y;
	j = index_x;

	while (i <7 )
	{
		if (board[i + 1][j] == 'p')
		{
			num++;
			break;
		}
		else if (board[i + 1][j] == 'B')
		{
			break;
		}
		else
		{
			i++;
		}
		
	}

	return num;
}


int main()
{
	int boardColSize = 8;
	char** board = (char**)calloc(8, sizeof(char*));

	board[0] = "........";
	board[1] = "...p....";
	board[2] = "...R...p";
	board[3] = "........";
	board[4] = "........";
	board[5] = "...p....";
	board[6] = "........";
	board[7] = "........";



	int re = numRookCaptures(board, 8, &boardColSize);
	return 0;
}