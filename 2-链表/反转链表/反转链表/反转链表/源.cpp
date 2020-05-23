#include<iostream>
using namespace std;


 struct ListNode {
    int val;
    struct ListNode *next;
};



struct ListNode* reverseList(struct ListNode* head){

	if (head==NULL)
	{
		return NULL;
	}

	struct ListNode* first = head->next;
	head->next = NULL;
	struct ListNode* tmp;
	while (first)
	{
		tmp = first->next;
		first->next = head;
		head = first;
		first = tmp;
	}
	return head;

}

int main()
{

}