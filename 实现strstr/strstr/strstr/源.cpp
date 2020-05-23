#include <iostream>
using namespace std;

void getnext(char* str, int* next)
{
	next[0] = -1;
	int i = 0;
	int j = -1;
	while (i < strlen(str))
	{
		if ((j == -1) || (str[i] == str[j]))
		{
			j++;
			i++;

			if (i<strlen(str))
				next[i] = j;
		}
		else
		{
			j = next[j];
		}
	}
}

int search(char* str,char* tem,int next[])
{
	int i = 0, j = 0;
	int m = strlen(str);
	int n = strlen(tem);

	while (i < m && j < n)
	{
		if ((j==-1) || (str[i] == tem[j]))
		{
			i++;
			j++;
			if (j == n)
			{
				return i - n;
			}
		}
		else
		{
			j = next[j];
		}
	}
	return -1;
}

int strStr(char * haystack, char * needle){

	if (strlen(needle) == 0)
	{
		return 0;
	}


	int * next = (int*)calloc(strlen(needle),sizeof(int));

	getnext(needle, next);

	int re = search(haystack, needle, next);

	return re;
}

int main()
{
	char a[] = "ll";
	/*int * next = (int*)malloc(strlen(a)*sizeof(int));
	getnext(a, next);
	
	int i = 0;
	for (i = 0; i < strlen(a); i++)
	{
		printf("%d ", next[i]);
	}
	printf("\n");*/

	char ori[] = "hello";
	//int re = search(ori, a, next);
	//printf("the result is %d\n",re);


	int ddd = strStr(ori, a);
	printf("the ddd is %d\n", ddd);

	return 0;

}