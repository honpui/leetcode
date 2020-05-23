#include<iostream>
using namespace std;



char* replaceSpace(char* s){
	int len = strlen(s);

	int i = 0;
	int count = 0;
	for (i = 0; i < len; i++)
	{
		if (s[i] == ' ')
		{
			count++;
		}
	}

	char* re = (char*)calloc(len + count * 2 + 1, sizeof(char));

	count = 0;

	for (i = 0; i < len; i++)
	{
		if (s[i] != ' ')
		{
			re[count++] = s[i];
		}
		else
		{
			re[count++] = '%';
			re[count++] = '2';
			re[count++] = '0';
		}
	}
	re[count] = '\0';

	return re;

}

int  main()
{
	char* s = "aa dd ee";
	char* re = replaceSpace(s);
	printf("%s\n",re);
	return 0;
}