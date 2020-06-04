
#include <iostream>
using namespace std;
/**
* Note: The returned array must be malloced, assume caller calls free().
*/
char ** findWords(char ** words, int wordsSize, int* returnSize){

	int i = 0;
	char** re = (char**)calloc(wordsSize, sizeof(int*));

	char* array = (char*)calloc('z'+1, sizeof(char));

	array['a'] = 1;
	array['b'] = 2;
	array['c'] = 2;
	array['d'] = 1;
	array['e'] = 0;
	array['f'] = 1;
	array['g'] = 1;
	array['h'] = 1;
	array['i'] = 0;
	array['j'] = 1;
	array['k'] = 1;
	array['l'] = 1;
	array['m'] = 2;
	array['n'] = 2;
	array['o'] = 0;
	array['p'] = 0;
	array['q'] = 0;
	array['r'] = 0;
	array['s'] = 1;
	array['t'] = 0;
	array['u'] = 0;
	array['v'] = 2;
	array['w'] = 0;
	array['x'] = 2;
	array['y'] = 0;
	array['z'] = 2;


	array['A'] = 1;
	array['B'] = 2;
	array['C'] = 2;
	array['D'] = 1;
	array['E'] = 0;
	array['F'] = 1;
	array['G'] = 1;
	array['H'] = 1;
	array['I'] = 0;
	array['J'] = 1;
	array['K'] = 1;
	array['L'] = 1;
	array['M'] = 2;
	array['N'] = 2;
	array['O'] = 0;
	array['P'] = 0;
	array['Q'] = 0;
	array['R'] = 0;
	array['S'] = 1;
	array['T'] = 0;
	array['U'] = 0;
	array['V'] = 2;
	array['W'] = 0;
	array['X'] = 2;
	array['Y'] = 0;
	array['Z'] = 2;

	int len = 0, j = 0, flag = 0, index = 0;

	for (i = 0; i < wordsSize;i++)
	{
		len = strlen(words[i]);
		flag = 0;
		for (j = 1; j < len;j++)
		{
			if (array[words[i][j]] != array[words[i][0]])
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			re[index] = (char*)calloc(len+1, sizeof(char));
			strcpy(re[index],words[i]);
			index++;
		}
		
	}
	*returnSize = index;

	free(array);
	return re;

}
