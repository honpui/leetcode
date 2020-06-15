#include <iostream>
using namespace std;


//char findTheDifference(char * s, char * t){
//
//	short* re1 = (short*)calloc(128, sizeof(short));
//	short* re2 = (short*)calloc(128, sizeof(short));
//
//	int i = 0;
//	for (i = 0; i < strlen(s);i++)
//	{
//		re1[s[i]]++;
//	}
//	for (i = 0; i < strlen(t); i++)
//	{
//		re2[t[i]]++;
//	}
//
//
//	for (i = 0; i < 128;i++)
//	{
//		if (re1[i]!=re2[i])
//		{
//			return i;
//		}
//	}
//
//	return 0;
//}


char findTheDifference(char * s, char * t){

	int len_s = strlen(s);

	int i = 0;

	char count = 0;
	for (i = 0; i < len_s;i++)
	{
		count = count^s[i] ^ t[i];
	}
	return count^t[i];
}


int main()
{

}