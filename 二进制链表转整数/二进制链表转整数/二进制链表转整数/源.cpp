#include<iostream>
using namespace std;

struct ListNode {
int val;
struct ListNode *next;
};

int getDecimalValue(struct ListNode* head){

	int count = 0;
	struct ListNode* node = head;
	while (node)
	{
		count = (count << 1) + node->val;
		node = node->next;
	}
	return count;
}

int main()
{
	struct ListNode node1 = { 1, NULL }, node2 = { 0, NULL }, node3 = {1,NULL};
	node1.next = &node2;
	node2.next = &node3;

	int count=getDecimalValue(&node1);
	
	return 1;
}