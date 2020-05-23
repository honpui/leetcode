#include <iostream>
using namespace std;

int romanReletiveToInt(char* s,int i)
{
	int re = 0;
	switch (s[i])
	{
	case 'I':
		if ((s[i + 1] == 'V') || (s[i + 1] == 'X'))
		{
			return -1;
		}
		else
		{
			return 1;
		}

	case 'V':
		return 5;
	case 'X':
		if ((s[i + 1] == 'L') || (s[i + 1] == 'C'))
		{
			return -10;
		}
		else
		{
			return 10;
		}

	case 'L':
		return 50;
	case 'C':
		if ((s[i + 1] == 'D') || (s[i + 1] == 'M'))
		{
			return -100;
		}
		else
		{
			return 100;
		}
		
	case 'D':
		return 500;
	case 'M':
		return 1000;
	default:
		return 0;
	}

}

int romanToInt(char * s){

	int i = 0;
	int re = 0;
	while (s[i] != '\0')
	{
		re += romanReletiveToInt(s,i);
		i++;
	}

	return re;

}

int main()
{
	char s[8] = "MCMXCIV";
	int i = 0;
	int index = 0;
	while (s[i] != '\0')
	{
		index++;
		i++;
	}

	int ret = romanToInt(s);
	return 0;
}