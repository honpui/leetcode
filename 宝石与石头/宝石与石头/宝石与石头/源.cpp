#include<iostream>
using namespace std;

int numJewelsInStones(char * J, char * S){

	int len_s = strlen(J);
	int len_d = strlen(S);
	int count = 0;
	int i = 0;

	char * middle = (char*)calloc('z' - 'A'+1, sizeof(char));

	for (i = 0; i < len_s; i++)
	{
		middle[J[i] - 'A'] = 1;
	}

	for (i = 0; i < len_d; i++)
	{
		if (middle[S[i] - 'A'])
		{
			count++;
		}
	}
	

	return count;

}

int main()
{
	char source[] = "z";
	char dst[] = "ZZ";
	int re = numJewelsInStones(source, dst);
	return 0;
}