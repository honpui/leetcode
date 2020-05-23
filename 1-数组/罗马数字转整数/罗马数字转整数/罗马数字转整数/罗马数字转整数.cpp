#include <iostream>
using namespace std;

int romanReletiveToInt(char s)
{
	int re = 0;
	switch (s)
	{
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
		default:
			return 0;
	}

}

int makejude(char *s,int i)
{
	if ((s[i] == 'I') && (s[i+1] == 'V'))
	{
		return -2;
	}
	else if ((s[i] == 'I') && (s[i + 1] == 'X'))
	{
		return -2;
	}
	else if ((s[i] == 'X') && (s[i + 1] == 'L'))
	{
		return -20;
	}
	else if ((s[i] == 'X') && (s[i + 1] == 'C'))
	{
		return -20;
	}
	else if ((s[i] == 'C') && (s[i + 1] == 'D'))
	{
		return -200;
	}
	else if ((s[i] == 'C') && (s[i + 1] == 'M'))
	{
		return -200;
	}
	else
	{
		return 0;
	}

}
int romanToInt(char * s){

	int i = 0;
	int re = 0;
	while (s[i] != '\0')
	{
		re += romanReletiveToInt(s[i]);
		re += makejude(s, i);
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