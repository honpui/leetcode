#include<iostream>
using namespace std;

struct ListNode {
   int val;    
   struct ListNode *next;
};



struct ListNode* reverseList1(struct ListNode* head){

	struct ListNode* first = head;
	struct ListNode* n = NULL, *tmp = NULL;

	if (head == NULL)
	{
		return NULL;
	}

	n = first->next;

	if (n==NULL)
	{
		return head;
	}

	while (n)
	{
		tmp = n->next;

		n->next = first;

		/* 更新两个位置 */
		first = n;
		n = tmp;
	}

	head->next = NULL;

	return first;


}

struct ListNode* finish=NULL;

struct ListNode* rcur(struct ListNode* head)
{
	struct ListNode* first = head;

	if (head->next == NULL)
	{
		finish = head;
		return head;
	}


	struct ListNode*  last = rcur(head->next);
	last->next = head;

	return head;
}

struct ListNode* reverseList(struct ListNode* head){

	if (head==NULL)
	{
		return NULL;
	}


	rcur(head);
	head->next = NULL;

	return finish;

}



int main()
{

	struct ListNode a = { 1, NULL };

	struct ListNode b = { 2, NULL };

	struct ListNode c = { 3, NULL };

	struct ListNode d = { 4, NULL };


	struct ListNode e = { 5, NULL };


	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;


	struct ListNode* re = reverseList(&a);

	return 0;
}