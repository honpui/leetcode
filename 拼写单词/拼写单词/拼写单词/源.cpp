#include <iostream>
using namespace std;

struct  DATA{
	short total;
	short used;
};

int countCharacters(char ** words, int wordsSize, char * chars){

	int i = 0;
	int j = 0; int k = 0;
	int chars_len = strlen(chars);
	int len = 0;
	int count = 0;
	char c;
	struct DATA* data = (struct DATA*)calloc(128,sizeof(struct DATA));



	for (i = 0; i < chars_len;i++)
	{
		data[chars[i]].total++;
		data[chars[i]].used = data[chars[i]].total;
	}

	for (j = 0; j < wordsSize;j++)
	{
		len = strlen(words[j]);
		for (k = 0; k < len;k++)
		{
			c = words[j][k];
			if (data[c].used)
			{
				data[c].used--;
			}
			else
			{
				break;
			}
		}

		if (k==len)
		{
			count += len;
		}

		for (i = 0; i < chars_len;i++)
		{
			data[chars[i]].used = data[chars[i]].total;
		}
	}
	return count;

}

int main()
{

}