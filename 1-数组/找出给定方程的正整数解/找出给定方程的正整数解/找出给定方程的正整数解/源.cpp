#include<iostream>
using namespace std;


int add(int a,int b)
{
	return a+b;
}


int sub(int a, int b)
{
	return 2;
}


int twodivide(int(*customFunction)(int, int), int z, int start, int finish,int x)
{
	if (start>finish)
	{
		return 0;
	}

	

	int num = 0;

	int middle = (start + finish) / 2;

	num = customFunction( x,middle);


	if ((start == finish) && (num!=z))
	{
		return 0;
	}


	if (num==z)
	{
		return middle;
	}

	if (num<z)
	{
		return twodivide(customFunction, z, middle + 1, finish, x);
	}

	if (num>z)
	{
		return twodivide(customFunction, z, start, middle-1, x);
	}
	return 0;
}


int** findSolution(int(*customFunction)(int, int), int z, int* returnSize, int** returnColumnSizes) {

	int** re = (int**)calloc(1000,sizeof(int*));
	int* cols = (int*)calloc(1000,sizeof(int));
	int i = 0; int j = 0;
	for (i = 0; i < 1000;i++)
	{
		re[i] = (int*)calloc(2,sizeof(int));
	}

	int index = 0; int tmp = 0;


	for (i = 1; i < 1001;i++)
	{
		/*for (j = 1; j < 1001;j++)
		{
		if (customFunction(i, j) ==z)
		{
		re[index][0] = i;
		re[index++][1] = j;
		}

		}*/


		tmp = twodivide(customFunction, z, 1, 1000, i);

		if (tmp)
		{
			re[index][0] = i;
			re[index++][1] = tmp;
		}

	}

	*returnSize = index;

	for (i = 0; i < index;i++)
	{
		cols[i] = 2;
	}
	
	*returnColumnSizes = cols;

	return re;
}


int main()
{
	int z = 5;
	int returnSize = 0;
	int * returnColumSizes=NULL;


	findSolution(add, z, &returnSize, &returnColumSizes);

	return 0;

}