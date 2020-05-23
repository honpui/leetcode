#include <iostream>

using namespace std;

#define uint32_t unsigned int

int hammingWeight(uint32_t n) {

	int count = 0;

	while (n)
	{
		if ((n & 1) == 1)
		{
			count++;
		}
		n = n >> 1;
	}
	return count;

}

int main()
{
	int count=hammingWeight(254);

	return 0;
}