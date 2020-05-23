#include<iostream>
using namespace std;

char* reverseLeftWords(char* s, int n){

	int len = strlen(s);
	n = n%len;
	char* re = (char*)calloc(len+1, sizeof(char));

	strncpy(re, s+n, len - n);
	strncpy(re+len-n,s,n);
	re[len] = '\0';
	return re;

}



int main()
{
	char* ss = reverseLeftWords("abcdefg",2);
	printf("%s\n",ss);
	return 0;
}