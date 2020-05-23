#include <iostream>
using namespace std;

bool isUnique(char* astr){

	int len = strlen(astr);
	int i = 0;
	unsigned char re[128] = { 0 };

	for (i = 0; i < len;i++)
	{
		if (re[astr[i]-'\0']==1)
		{
			return false;
		}
		else
		{
			re[astr[i] - '\0'] = 1;
		}
	}
	return true;
}


int main()
{
	char* astr = "lecod";
	bool re = isUnique(astr);
	printf("%d\n",re);
	return 0;
}