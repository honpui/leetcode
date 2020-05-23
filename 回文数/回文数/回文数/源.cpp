#include <iostream>
using namespace std;


bool isPalindrome(int x){

	if (x < 0)
	{
		return false;
	}

	char tmp[10];/* 因为int类型最大也就只有10位数字 */
	int i = 0;
	int divide = -1;
	int index = 0;
	unsigned long long reverse = 0;
	int input = x;
	while (divide != 0)
	{
		divide = x / 10;
		tmp[index++] = x - divide * 10;
		x = divide;
	}

	for (i = 0; i < index; i++)
	{
		reverse = reverse * 10 + tmp[i];
	}

	if (reverse == input)
	{
		return true;
	}
	else
	{
		return false;
	}


}



int main()
{
	int input = 0;
	int a = input % 10;
	int b = input / 10;
	int mod = (input - b * 10);


	int result = isPalindrome(input);
	printf("result=%d\n", result);
	return 0;
}