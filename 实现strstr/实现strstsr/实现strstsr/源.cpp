#include <iostream>
using namespace std;

int compare(char* haystack,int head,char* needle)
{
	int i = 0;
	while (needle[i] != '\0')
	{
		if (haystack[head++] != needle[i++])
		{
			return -1;
		}

	}
	return 0;
}

int strStr(char * haystack, char * needle){

	if ((needle == NULL) ||(haystack == NULL ) || (needle[0] == '\0'))
	{
		return 0;
	}
	
	int index=0;

	while (haystack[index] != '\0')
	{
		if (0 == compare(haystack, index, needle))
		{
			return index;
		}
		index++;
	}

	return -1;

}


int main()
{
/*
	char haystack[] = "aaabbb";
	char needle[] = "aa";
*/

	char haystack[10] = "";
	char needle[] = "ccc";

	printf("%d\n", strlen(haystack));
	




	int res= strStr(haystack,needle);
	return 0;
}