#include<iostream>
using namespace std;

void core(char*s, char* re, char* array, int len, int* index)
{
	int i = 0, flag = 0;
	if (*index==len)
	{
		return;
	}

	for (i = 0; i < 26;i++)
	{
		int j = 0;
		while ((s[j]!='\0'))
		{
			
			if ((s[j] == 'a' + i) && (array[j] == 0))
			{
				break;
			}
			 
			j++;
		}
		if (j==len)
		{
			continue;
		}
		re[(*index)++] = s[j];
		array[j] = 1;
	}

	for (i = 25; i >= 0;i--)
	{
		int j = 0;
		while ((s[j] != '\0') )
		{
			if ((s[j] == 'a' + i) && (array[j] == 0))
			{
				break;
			}

			j++;
		}
		if (j == len)
		{
			continue;
		}
		re[(*index)++] = s[j];
		array[j] = 1;
	}

	core(s,re,array,len,index);

}

char * sortString(char * s){

	int len = strlen(s);
	char* re = (char*)calloc(len + 1, sizeof(char));
	char* array = (char*)calloc(len + 1, sizeof(char));
	array[len] = '\0';
	int index = 0;
	core(s, re, array,  len, &index);
	return re;
}



int main()
{
	char* s = "leetcode";
	char * re = sortString(s);
	return 0;
}