#include<iostream>
using namespace std;


//int exchangeBits(int num){
//
//	int * re = (int*)calloc(32, sizeof(int));
//
//
//	int i = 0;
//
//	for (i = 0; i < 32;i=i+2)
//	{
//		re[i + 1] = num & 0x1;
//		re[i] = (num >> 1) & 0x1;
//		num = num >> 2;
//	}
//
//	int cur = 0;
//	for (i = 31; i >=0;i--)
//	{
//		cur = (cur << 1) | (re[i]);
//	}
//
//	free(re);
//
//	return cur;
//}

int exchangeBits(int num){
	int i = 0;
	int a = 0;
	int b = 0;
	int cur = 0;

	for (i = 0; i < 32; i = i + 2)
	{
		a = (num>>i) & 0x1;
		b = (num >> (i+1)) & 0x1;
		

		cur = cur|(a << (i + 1));
		cur = cur | (b << (i ));
	}

	

	return cur;
}

int main()
{
	int re = exchangeBits(2);
	return 0;
}