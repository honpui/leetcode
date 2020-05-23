#include <iostream>
using namespace std;

int lengthOfLastWord(char * s)
{
	int len = strlen(s);

	if ((len==0))
	{
		return 0;
	}

	int i = len - 1;
	int count = 0;
	while ( (i >= 0) && (s[i] == ' '))
	{
		i--;
	}

	if (i==-1)
	{
		return 0;
	}

	while ((i >= 0) && (s[i] != ' '))
	{
		count++;
		i--;
	}
	return count;
}


int main()
{
	char input[] = "a";
	int len = lengthOfLastWord(input);
	return 0;
}