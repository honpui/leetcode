#include <iostream>
using namespace std;

char * longestCommonPrefix(char ** strs, int strsSize){


	int i = 0;
	char* tmp = (char*) calloc(200,sizeof(char));
	int index = 0;
	int flag;
	if (strsSize == 0)
	{
		tmp[index] = '\0';
		return tmp;
	}

	while (strs[0][index] != '\0')
	{

		for (i = 1; i < strsSize; i++)
		{
			if (strs[i][index] != strs[0][index])
			{
				tmp[index] = '\0';
				return tmp;
			}
			
		}

		tmp[index] = strs[0][index];
		index++;

	}
	tmp[index] = '\0';
	return tmp;
}

int main()
{
	char* strs[10];
	int strSize=1;
	strs[0] = "";
	strs[1] = "ow";
	strs[2] = "ight";
	char* x = longestCommonPrefix(strs, strSize);
	return 0;
}