#include <iostream>
using namespace std;

char * generateTheString(int n){

	char* re = (char*)calloc(n+1, sizeof(char));
	int i = 0;
	
	if (n&0x1)
	{
		i = 0;
		while (i<n)
		{
			re[i++] = 'c';
		}
		re[i] = '\0';
		return re;
	}
	else
	{
		i = 0;
		re[i++] = 'a';
		while (i < n)
		{
			re[i++] = 'c';
		}
		re[i] = '\0';
		return re;
	}

}


int main()
{
	char * re= generateTheString(4);
	return 0;
}