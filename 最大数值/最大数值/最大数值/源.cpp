#include<iostream>
using namespace std;

int maximum(int a, int b){

	int a_sign = (a >> 31) & 0x1;  /* 1Ϊ����0Ϊ�� */
	int b_sign = (b >> 31) & 0x1;/* 1Ϊ����0Ϊ�� */
	int diff = !(a_sign ^ b_sign);/* 1Ϊ��ͬ��0Ϊ��ͬ */
	long long xx = (long long)b - a;
	int  k = (xx >> 63)&0x1; /* 1Ϊa��0Ϊb�� */

	return (!diff)*a_sign*b +(!diff)*b_sign*a + diff* (k)*a +diff*(!k)*b;

}

int main()
{
	long long a =  - 2147483647-1;
	long long b = 2147483647;
	printf("%d   %d   %d\n",sizeof(int),sizeof(long),sizeof(long long));
	long long  x = a - b;

			int re = maximum(2147483647, a);
	return 0;
}