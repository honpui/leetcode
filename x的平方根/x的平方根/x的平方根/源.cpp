#include<iostream>
using namespace std;

int coremysqrt(int x, int start, int finish)
{

	if (pow(start, 2)>x)
	{
		return start - 1;
	}

	if (pow(finish, 2)<=x)
	{
		return finish;
	}

	if (pow((start+finish) / 2, 2) > x)
	{
		return coremysqrt(x, start + 1, (start + finish) / 2);
	}
	else
	{
		return coremysqrt(x, (start + finish) / 2, finish - 1);
	}
}

int mySqrt(int x){

	if (x==0)
	{
		return 0;
	}
	if (x < 4)
	{
		return 1;
	}

	return coremysqrt(x, 1, x/2);

}



int main()
{
	int a = mySqrt(8192);
	printf("%d\n",a);
	return 0;
}