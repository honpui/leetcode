#include<iostream>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){

	struct ListNode* merge = NULL,*head=NULL;

	if (!l1)
	{
		return l2;
	}
	if (!l2)
	{
		return l1;
	}

	if (l1->val < l2->val)
	{
		merge = l1;
		l1 = l1->next;
	}
	else
	{
		merge = l2;
		l2 = l2->next;
	}

	head = merge;

	while (l1 && l2)
	{
		if (l1->val < l2->val)
		{
			merge->next = l1;
			l1 = l1->next;
			merge = merge->next;
		}
		else
		{
			merge->next = l2;
			l2 = l2->next;
			merge = merge->next;
		}
	}

	if (l1)
	{
		merge->next = l1;
	}
	else
	{
		merge->next = l2;
	}
	return head;

}

int main()
{
	ListNode* l1=NULL, * l2=NULL;

	ListNode a;
	a.val = 1;
	ListNode b;
	b.val = 2;
	ListNode c;
	c.val = 4;
	a.next = &b;
	b.next = &c;

	ListNode x = { 1, NULL };
	ListNode y = { 3, NULL };
	ListNode m = { 4, NULL };

	x.next = &y;
	y.next = &m;

	

	ListNode* me = mergeTwoLists(&a, &x);
	return 0;
}