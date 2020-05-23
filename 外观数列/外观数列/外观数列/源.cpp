#include<iostream>
using namespace std;


char* core(char* input, int n, int i, char* output)
{
	if (i > n)
	{
		free(output);
		output = NULL;
		return input;
	}
	int m = 0;
	char tem = input[0];
	int out = 0;
	int count = 0;
	 
	while (input[m] != '\0')
	{
		if (input[m] != tem)
		{
			output[out++] = (char)(count + '0');
			output[out++] = tem;
			tem = input[m];
			count = 0;
		}
		count++;
		m++;
	}
	output[out++] = (char)(count + '0');
	output[out++] = tem;
	output[out] = '\0';
	i++;
	return core(output, n, i, input);
}


char* countAndSay(int  n)
{
	char* input = (char*)calloc(5000, sizeof(char));
	char* output = (char*)calloc(5000, sizeof(char));
	input[0] = '1';
	return core(input, n, 2, output);
}

int main()
{
	int i = 0;

	for (i = 1; i <= 30; i++)
	{
		char* input = countAndSay(i);
		printf("%s\n",input);
		free(input);
		input = NULL;
	}
	

	return 0;

}