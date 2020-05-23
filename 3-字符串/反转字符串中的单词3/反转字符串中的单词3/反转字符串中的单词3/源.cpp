#include <iostream>
using namespace std;


char * reverseWords(char * s){
	int len = strlen(s);
	int i = 0;

	char* re = (char*)calloc(len + 1, sizeof(char));
	re[len] = '\0';

	int before = 0; int last = 0; int tmp = 0; int y = 0;


	while (last<=len)
	{
		while ((s[last] != ' ') && (last<len) )
		{
			last++;
		}

		tmp = last;

		while (last>before)
		{
			re[y++] = s[--last];
		}

		if (tmp==len)
		{
			break;
		}
		re[y++] = ' ';
		before = tmp+1;
		last = tmp+1;
	}
	/*while (last > before)
	{
		re[y++] = s[--last];
	}*/
	return re;
	
}



int main()
{
	char* s = "Let's take LeetCode contest";
	char * re = reverseWords(s);
	return 0;
}