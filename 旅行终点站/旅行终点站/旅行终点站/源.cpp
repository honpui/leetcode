#include<iostream>
using namespace std;


char * destCity(char *** paths, int pathsSize, int* pathsColSize){

	char* before = NULL;

	printf("%s\n", paths[1][1]);
	
	before = paths[0][1];
	int i = 0;
	int flag = 1;
	while (flag)
	{
		flag = 0;
		for (i = 0; i < pathsSize; i++)
		{
			if (strcmp(before, paths[i][0])==0)
			{
				before = paths[i][1];
				flag = 1;
			}
		}
		if (!flag)
		{
			*pathsColSize = strlen(before);
			return before;
		}
	}
	return NULL;
}

int main()
{
	char paths[][2][100] = { {"london","new york"}, {"new york","lima"}, {"lima","san"} };


	//printf("%s\n", paths[1][1]);
	/* 此处传递参数出错，后面的函数可以正常运行 */
	int pathsSize = 3;
	int pathsColSize = 0;
	char * x= destCity( (char***)paths,  pathsSize, &pathsColSize);
	printf("%s\n",x);
	return 0;
}