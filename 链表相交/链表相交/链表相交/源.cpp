#include<iostream>
using namespace std;



struct ListNode {
    int val;
   struct ListNode *next;
};

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
	struct ListNode * first=headA;
	struct ListNode* second = headB;

	if (headA==NULL || headB ==NULL)
	{
		return NULL;
	}
	while ((first != second))
	{
		
		if (first==NULL)
		{
			first = headA;
		}
		else
		{
			first = first->next;
		}
		
		if (second == NULL)
		{
			second = headB;
		}
		else
		{
			second = second->next;
		}

		/*if ((first == headA && second == headB) )
		{
			return NULL;
		}
*/
	}
	return first;

}


int main()
{

}