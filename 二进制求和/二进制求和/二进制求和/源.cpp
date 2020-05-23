#include<iostream>
using namespace std;

#pragma warning(disable : 4996)

char * addBinary(char * a, char * b)
{
	int a_len = strlen(a);
	int b_len = strlen(b);

	int i = a_len;
	int j = b_len;
	int total_len;
	int index = 0;
	char* tmp;
	int flag = 0;

	if (a_len > b_len)
	{
		total_len = a_len + 1;
	}
	else
	{
		
		total_len = b_len + 1;
	}

	index = total_len;
	tmp = (char*)calloc(total_len+1, sizeof(char));
	
	tmp[total_len] = '\0';

	while ((i != 0) && (j != 0))
	{
		if ((a[i-1] - '0' + b[j-1] - '0'+flag) == 2)
		{
			i--;
			j--;
			tmp[--index] = '0';
			flag = 1;
		}
		else if((a[i-1] - '0' + b[j-1] - '0' + flag) == 3)
		{
			i--;
			j--;
			tmp[--index] = '1';
			flag = 1;
		}
		else
		{
			tmp[--index] = (a[--i] - '0' + b[--j] + flag );
			flag = 0;
		}
		if ((flag == 1) && (i == 0) &&(j==0))
		{
			tmp[--index] = '1';
		}
	}

	while (i)
	{

		if ((a[i-1] - '0'+ flag) == 2)
		{
			i--;
			tmp[--index] = '0';
			flag = 1;
		}
		else
		{
			tmp[--index] = (a[--i]  + flag);
			flag = 0;
		}
		if ((flag == 1) && (i==0))
		{
			tmp[--index] = '1';
		}
	}

	while (j)
	{

		if ((b[j-1] - '0' + flag) == 2)
		{
			j--;
			tmp[--index] = '0';
			flag = 1;
		}
		else
		{
			tmp[--index] = (b[--j]  + flag);
			flag = 0;
		}
		if ((flag == 1) && (j == 0))
		{
			tmp[--index] = '1';
		}
	}


	if (index==0)
	{
		return tmp;
	}
	else
	{
		for (i = 0; i < total_len - 1;i++)
		{
			tmp[i] = tmp[i + 1];
		}
		//strncpy(tmp,tmp+1,total_len-1);
		tmp[total_len-1] = '\0';
		return tmp;
	}
}

int main()
{
	char a[] = "100";
	char b [] = "110010";
	char *c =addBinary(a,b);
	printf("%s\n",c);
	return 0;
}