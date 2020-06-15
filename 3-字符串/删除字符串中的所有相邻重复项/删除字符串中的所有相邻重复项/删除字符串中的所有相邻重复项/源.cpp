#include<iostream>
using namespace std;


void mem(char*S,int len,int i)
{
	int j = 0;
	for (j = 0; j < len;j++)
	{
		S[i + j] = S[i+2+j];
	}
}


//char * removeDuplicates(char * S){
//
//	int len = strlen(S);
//
//	int i = 1;
//
//	while (i<len)
//	{
//		if (S[i]==S[i-1])
//		{
//			//memcpy(S+(i - 1), S+(i + 1), len - i);
//
//			mem(S,  len-i, i-1);
//
//			i = 1;
//			len = len - 2;
//			continue;
//		}
//
//		i++;
//	}
//	return S;
//
//}



char * removeDuplicates(char * S){

	int len = strlen(S);
	char* re = (char*)calloc(len + 1, sizeof(char));

	int i = 0;

	int index = -1;
	while (i<len)
	{

		if (index==-1)
		{
			re[++index] = S[i];
			i++;
			continue;
		}
		if (re[index]==S[i])
		{
			index--;
		}
		else
		{
			re[++index] = S[i];
		}
		i++;

	}
	re[++index] = '\0';
	return re;

}



int main()
{
	char S[] = "abbaca";
	char * re = removeDuplicates(S);
	return 0;
}