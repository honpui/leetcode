#include<iostream>
using namespace std;

int maximum(int a, int b){

	int a_sign = (a >> 31) & 0x1;  /* 1为负，0为正 */
	int b_sign = (b >> 31) & 0x1;/* 1为负，0为正 */
	int diff = !(a_sign ^ b_sign);/* 1为相同，0为不同 */
	long long xx = (long long)b - a;
	int  k = (xx >> 63)&0x1; /* 1为a大，0为b大 */

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