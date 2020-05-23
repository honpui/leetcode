#include<iostream>
using namespace std;

/* µÝ¹é½â·¨ */

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){

	struct ListNode* merge = NULL, *head = NULL;

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
		l1->next = mergeTwoLists(l1->next, l2);
		return l1;
	}
	else
	{
		l2->next = mergeTwoLists(l1,l2->next);
		return l2;
	}


}

int main()
{
	ListNode* l1 = NULL, *l2 = NULL;

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