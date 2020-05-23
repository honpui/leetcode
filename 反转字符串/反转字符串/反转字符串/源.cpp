#include <iostream>
using namespace std;

void reverseString(char* s, int sSize){

	char tmp;

	int i = 0;
	for (i = 0; i < sSize / 2;i++)
	{
		tmp = s[i];
		s[i] = s[sSize - 1 - i];
		s[sSize - 1 - i]=tmp;
	}

}

int main()
{
}