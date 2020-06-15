#include <iostream>
using namespace std;



typedef struct list{
	int val;
	struct list* next;
}list;

struct list head = { 0, NULL };

int change_to_add(int n)
{
	int sum = 0;
	while (n)
	{
		sum += (n % 10)*(n % 10);
		n /= 10;
	}
	return sum;
}

bool test(int n, struct list* tmp)
{
	if (n == 1)
	{
		return true;
	}

	struct list* x = &head;
	while (x)
	{
		if (x->val==n)
		{
			return false;
		}
		x = x->next;
	}

	struct list* re = (struct list*)calloc(1, sizeof(struct list));
	re->val = n;
	re->next = NULL;

	tmp->next = re;

	return test(change_to_add(n), re);

}

bool isHappy(int n){

	return test(n, &head);
}

int main()
{
	bool re = isHappy(19);
	return 0;
}