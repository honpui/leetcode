#include<iostream>
using namespace std;


struct ListNode {
	int val;
	struct ListNode *next;
};

int* reversePrint(struct ListNode* head, int* returnSize){
	struct ListNode* first = head;
	int count = 0;
	while (first)
	{
		first = first->next;
		count++;
	}

	int* re = (int*)calloc(count, sizeof(int));
	int i = count - 1;

	first = head;
	while (first)
	{
		re[i--] = first->val;
		first = first->next;
	}

	*returnSize = count;
	return re;
}


int main()
{
}