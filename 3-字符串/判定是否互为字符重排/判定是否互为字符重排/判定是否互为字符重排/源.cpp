#include <iostream>
using namespace std;


bool CheckPermutation(char* s1, char* s2){

	char* re1 = (char*)calloc(255,sizeof(char));
	char* re2 = (char*)calloc(255, sizeof(char));

	int i = 0;

	for (i = 0; i < strlen(s1);i++)
	{
		re1[s1[i]]++;
	}

	for (i = 0; i < strlen(s2);i++)
	{
		re2[s2[i]]++;
	}


	for (i = 0; i < 255;i++)
	{
		if (re1[i]!=re2[i])
		{
			return false;
		}
	}
	return true;

}

int main()
{

	char* s1 = "abc";
	char* s2="bca";
	bool re = CheckPermutation(s1,s2);
	return 0;
}