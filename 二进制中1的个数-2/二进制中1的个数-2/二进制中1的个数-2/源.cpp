#include <iostream>
using namespace std;

#define uint32_t unsigned int
int hammingWeight(uint32_t n) {
	int count = 0;

	while (n)
	{
		if (n & 0x1)
		{
			count = count + 1;
		}
		n = n >> 1;
	}
	return count;

}


int main()
{
	int re = hammingWeight(11);
	return 0;
}