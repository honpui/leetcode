#include<iostream>
using namespace std;


int balancedStringSplit(char * s){

	int numl=0;
	int numr=0;
	int count=0;

	int len = strlen(s);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if (s[i] == 'L')
		{
			numl++;
		}
		else
		{
			numr++;
		}

		if (numl == numr)
		{
			numl = 0;
			numr = 0;
			count++;
		}
	}
	return count;
}

int main()
{

}