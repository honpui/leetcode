#include <iostream>
using namespace std;



 struct ListNode {
    int val;
     struct ListNode *next;
};



//struct ListNode* middleNode(struct ListNode* head){
//	int num = 0; int i = 0;
//	struct ListNode* first = head;
//	while (first)
//	{
//		num++;
//		first = first->next;
//	}
//
//	first = head;
//	while (++i < (num+1)/2)
//	{
//		first = first->next;
//	}
//
//	return first;
//}

 struct ListNode* middleNode(struct ListNode* head){
	 int num = 0; int i = 0;
	 struct ListNode* first = head;
	 struct ListNode* second = head;
	 while (first)
	 {

		 if (first->next)
		 {
			 if (first->next->next!=NULL)
			 {
				 first = first->next->next;
				 second = second->next;
			 }
			 else
			 {
				 second = second->next;
				 return second;
			 }
		 }
		 else
		 {
			 return second;
		 }

	 }

	
	 return first;
 }







int main()
{
}