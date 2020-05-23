#include <iostream>
using namespace std;

int findComplement(int num){
	int count = 0;
	int i = 0;
	int re = 0;
	while (num)
	{
		re += pow(2, i)*(!(num & 0x1));
		num >>= 1;
		i++;
	}
	return re;

}

int main()
{
	int re = findComplement(1);
	return 0;
}