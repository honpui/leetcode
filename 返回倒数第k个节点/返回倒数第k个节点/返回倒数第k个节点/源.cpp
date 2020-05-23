#include<iostream>
using namespace std;



struct ListNode {
    int val;
    struct ListNode *next;
};


int kthToLast1(struct ListNode* head, int k){

	/*  创造一个k的循环数组 */
	int * re = (int*)calloc(k, sizeof(int));
	int i = 0;
	while (head)
	{
		re[i%k]=head->val;
		i++;
		head = head->next;
	}
	return re[i%k];
}

/* 双指针版本 */
int kthToLast(struct ListNode* head, int k){

	struct ListNode* slow=head;
	//ListNode* fast=head;
	int i = 0;
	while (head)
	{
		i++;
		head = head->next;
		if (i > k)
		{
			slow=slow->next;
		}
	}
	return slow->val;
}


int main()
{

}