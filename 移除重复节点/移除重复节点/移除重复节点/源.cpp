#include <iostream>
using namespace std;



struct ListNode {
    int val;
   struct ListNode *next;
};



//struct ListNode* removeDuplicateNodes(struct ListNode* head){
//
//	int *array = (int*)calloc(20000, sizeof(int));
//
//
//	if (head==NULL)
//	{
//		return NULL;
//	}
//
//	struct ListNode* pointer=head;
//	struct ListNode* after = head->next;
//
//	array[pointer->val] = 1;
//
//	while (after)
//	{
//		if (array[after->val])
//		{
//			pointer->next = after->next;
//			after = pointer->next;
//		}
//		else
//		{
//			array[after->val] = 1;
//			pointer = after;
//			after = pointer->next;
//		}
//	}
//
//	return head;
//}




/* 不使用临时缓冲区 */
struct ListNode* removeDuplicateNodes(struct ListNode* head){

	if (head == NULL)
	{
		return NULL;
	}

	struct ListNode* cur = head;
	struct ListNode* pre = cur->next;

	struct ListNode* second = head;
	int flag = 0;

	while (cur)
	{
		second = head;
		flag = 0;
		while (second!=cur)
		{
			if (second->val==cur->val)
			{
				flag = 1;
				break;
			}
			second = second->next;
		}

		if (flag)
		{
			/* 改节点需要删除 */

			pre->next = cur->next;
			cur = cur->next;
		}
		else
		{
			pre = cur;
			cur = cur->next;
		}
	}
	return head;
}

int main()
{

}